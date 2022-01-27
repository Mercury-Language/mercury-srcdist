/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 550 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 550 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 550 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 550 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45);

#line 1026 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1026 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1026 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1026 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1026 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 1006 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1006 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1006 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1006 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1006 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 953 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 953 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 953 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 953 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 953 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 864 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 864 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 864 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 864 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 864 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 839 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 839 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 839 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 839 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9);

#line 815 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
#line 815 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__Prefix_5,
#line 815 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_6,
#line 815 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
#line 815 "distance_granularity.m"
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11);

#line 791 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 791 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 791 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 769 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 769 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 769 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 656 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 656 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 656 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 656 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 656 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 656 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71);

#line 644 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 644 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 644 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 644 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);

#line 494 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 494 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 494 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 494 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 494 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19);

#line 459 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 459 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 459 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17);

#line 404 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 404 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24);

#line 299 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 299 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 299 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);

#line 255 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 255 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 255 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 255 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 255 "distance_granularity.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 550 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 550 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 550 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 550 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 550 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 550 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45)
#line 550 "distance_granularity.m"
{
#line 614 "distance_granularity.m"
  while (MR_TRUE)
#line 614 "distance_granularity.m"
    {
#line 614 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 614 "distance_granularity.m"
      {
#line 614 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 614 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 556 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_46_46;

#line 556 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 556 "distance_granularity.m"
          {
#line 556 "distance_granularity.m"
            transform_hlds__distance_granularity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 1)));
#line 556 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 2)));
#line 556 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_46_46 == (MR_Integer) 1);
#line 556 "distance_granularity.m"
          }
#line 614 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 557 "distance_granularity.m"
          {
#line 557 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 557 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 557 "distance_granularity.m"
            {
#line 557 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 558 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 > transform_hlds__distance_granularity__Length_19);
#line 560 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 559 "distance_granularity.m"
              {
#line 559 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 559 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42;
#line 559 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 559 "distance_granularity.m"
              }
#line 560 "distance_granularity.m"
            else
#line 561 "distance_granularity.m"
              {
#line 561 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 561 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 561 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 561 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;
#line 561 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 561 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 561 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 608 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 608 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 608 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 608 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 608 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 564 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 561 "distance_granularity.m"
                {
#line 561 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 561 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 562 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 562 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 564 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 564 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 564 "distance_granularity.m"
                  {
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 564 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 567 "distance_granularity.m"
                    {
#line 567 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 567 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 567 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 603 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 572 "distance_granularity.m"
                      {
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_31;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MerInst_34;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_36;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_37;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__PlainConj_38;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_39;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_47_47;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_50_50;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_54_54;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_55_55;
#line 572 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_56_56;

#line 571 "distance_granularity.m"
                        {
#line 571 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_47_47 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 571 "distance_granularity.m"
                        {
#line 571 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49);
                        }
#line 573 "distance_granularity.m"
                        {
#line 573 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 576 "distance_granularity.m"
                        {
#line 576 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 576 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "distance_granularity.m"
                        }
#line 576 "distance_granularity.m"
                        {
#line 576 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_50_50, &transform_hlds__distance_granularity__CallArgs_31);
                        }
#line 583 "distance_granularity.m"
                        {
#line 583 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_31));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 583 "distance_granularity.m"
                        }
#line 587 "distance_granularity.m"
                        {
#line 587 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 589 "distance_granularity.m"
                        {
#line 589 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 1) = ((MR_Box) (transform_hlds__distance_granularity__Distance_16));
#line 589 "distance_granularity.m"
                        }
#line 589 "distance_granularity.m"
                        {
#line 589 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_56_56));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "distance_granularity.m"
                        }
#line 589 "distance_granularity.m"
                        {
#line 589 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_55_55));
#line 589 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "distance_granularity.m"
                        }
#line 588 "distance_granularity.m"
                        {
#line 588 "distance_granularity.m"
                          transform_hlds__distance_granularity__MerInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 1) = ((MR_Box) ((MR_Integer) 0));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_54_54));
#line 588 "distance_granularity.m"
                        }
#line 590 "distance_granularity.m"
                        {
#line 590 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__MerInst_34, transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
                        }
#line 592 "distance_granularity.m"
                        {
#line 592 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_36);
                        }
#line 595 "distance_granularity.m"
                        {
#line 595 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 595 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_36));
#line 595 "distance_granularity.m"
                        }
#line 597 "distance_granularity.m"
                        {
#line 597 "distance_granularity.m"
                          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_30, transform_hlds__distance_granularity__Goal_37, (MR_Integer) 0, &transform_hlds__distance_granularity__PlainConj_38);
                        }
#line 600 "distance_granularity.m"
                        {
#line 600 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, ((MR_Box) (transform_hlds__distance_granularity__PlainConj_38)), &transform_hlds__distance_granularity__Goals_39);
                        }
#line 602 "distance_granularity.m"
                        {
#line 602 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 602 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 1) = ((MR_Box) ((MR_Integer) 1));
#line 602 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_39));
#line 602 "distance_granularity.m"
                        }
#line 572 "distance_granularity.m"
                      }
#line 603 "distance_granularity.m"
                    else
#line 605 "distance_granularity.m"
                      {
#line 605 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 605 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 605 "distance_granularity.m"
                      }
#line 607 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 564 "distance_granularity.m"
                  }
#line 564 "distance_granularity.m"
                else
#line 609 "distance_granularity.m"
                  {
#line 609 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 609 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 609 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 609 "distance_granularity.m"
                  }
#line 611 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 611 "distance_granularity.m"
                {
#line 611 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 611 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 611 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;

#line 611 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44;
#line 611 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42;
#line 611 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40;
#line 611 "distance_granularity.m"
                }
#line 611 "distance_granularity.m"
                continue;
#line 561 "distance_granularity.m"
              }
#line 557 "distance_granularity.m"
          }
#line 614 "distance_granularity.m"
        else
#line 616 "distance_granularity.m"
          {
#line 616 "distance_granularity.m"
            {
#line 616 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_then2\'/10", (MR_String) "unexpected goal type");
#line 616 "distance_granularity.m"
              return;
            }
#line 616 "distance_granularity.m"
          }
#line 614 "distance_granularity.m"
      }
#line 614 "distance_granularity.m"
      break;
#line 614 "distance_granularity.m"
    }
#line 550 "distance_granularity.m"
}

#line 1026 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1026 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1026 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1026 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1026 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1026 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1026 "distance_granularity.m"
{
#line 1031 "distance_granularity.m"
  while (MR_TRUE)
#line 1031 "distance_granularity.m"
    {
#line 1031 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1031 "distance_granularity.m"
      {
#line 1031 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1031 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "distance_granularity.m"
          {
#line 1032 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1031 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 1031 "distance_granularity.m"
          }
#line 1031 "distance_granularity.m"
        else
#line 1035 "distance_granularity.m"
          {
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 0)));
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 1)));
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 2)));
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_34;
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1035 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_41_41;

#line 1037 "distance_granularity.m"
            {
#line 1037 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_33, &transform_hlds__distance_granularity__Goal_34, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1039 "distance_granularity.m"
            {
#line 1039 "distance_granularity.m"
              transform_hlds__distance_granularity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_31));
#line 1039 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_32));
#line 1039 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_34));
#line 1039 "distance_granularity.m"
            }
#line 1039 "distance_granularity.m"
            {
#line 1039 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 1039 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 1039 "distance_granularity.m"
            }
#line 1040 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1040 "distance_granularity.m"
            {
#line 1040 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_23;
#line 1040 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1040 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;

#line 1040 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1040 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 1040 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1040 "distance_granularity.m"
            }
#line 1040 "distance_granularity.m"
            continue;
#line 1035 "distance_granularity.m"
          }
#line 1031 "distance_granularity.m"
      }
#line 1031 "distance_granularity.m"
      break;
#line 1031 "distance_granularity.m"
    }
#line 1026 "distance_granularity.m"
}

#line 1006 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1006 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1006 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1006 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1006 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1006 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1006 "distance_granularity.m"
{
#line 1010 "distance_granularity.m"
  while (MR_TRUE)
#line 1010 "distance_granularity.m"
    {
#line 1010 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1010 "distance_granularity.m"
      {
#line 1010 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1010 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "distance_granularity.m"
          {
#line 1011 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1010 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 1010 "distance_granularity.m"
          }
#line 1010 "distance_granularity.m"
        else
#line 1015 "distance_granularity.m"
          {
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_31;
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_37_37;
#line 1015 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;

#line 1016 "distance_granularity.m"
            {
#line 1016 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_22, &transform_hlds__distance_granularity__Goal_31, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1018 "distance_granularity.m"
            {
#line 1018 "distance_granularity.m"
              transform_hlds__distance_granularity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_31));
#line 1018 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "distance_granularity.m"
            }
#line 1018 "distance_granularity.m"
            {
#line 1018 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_37_37, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38);
            }
#line 1019 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1019 "distance_granularity.m"
            {
#line 1019 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_23;
#line 1019 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;
#line 1019 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 1019 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1019 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 1019 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1019 "distance_granularity.m"
            }
#line 1019 "distance_granularity.m"
            continue;
#line 1015 "distance_granularity.m"
          }
#line 1010 "distance_granularity.m"
      }
#line 1010 "distance_granularity.m"
      break;
#line 1010 "distance_granularity.m"
    }
#line 1006 "distance_granularity.m"
}

#line 953 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 953 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 953 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 953 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 953 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 953 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 953 "distance_granularity.m"
{
#line 959 "distance_granularity.m"
  {
#line 959 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 959 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 0)));
#line 959 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 1)));
#line 959 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 0)));
#line 959 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 1)));
#line 959 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 2)));
#line 959 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 3)));
#line 961 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 4)));
#line 961 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 5)));

#line 964 "distance_granularity.m"
    {
#line 964 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_19, transform_hlds__distance_granularity__CallerPredId_11);
    }
#line 964 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 965 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_20 == transform_hlds__distance_granularity__CallerProcId_12);
#line 999 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 971 "distance_granularity.m"
      {
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Var_25;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__UnifyGoal_26;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallArgs_27;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallExpr_29;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_30;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_31;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo1_32;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo_36;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Call_37;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_42_42;
#line 971 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_45_45;

#line 971 "distance_granularity.m"
        {
#line 971 "distance_granularity.m"
          transform_hlds__distance_granularity__V_42_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 971 "distance_granularity.m"
        {
#line 971 "distance_granularity.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_42_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41);
        }
#line 972 "distance_granularity.m"
        {
#line 972 "distance_granularity.m"
          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_26);
        }
#line 973 "distance_granularity.m"
        {
#line 973 "distance_granularity.m"
          transform_hlds__distance_granularity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_25));
#line 973 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "distance_granularity.m"
        }
#line 973 "distance_granularity.m"
        {
#line 973 "distance_granularity.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_21, transform_hlds__distance_granularity__V_45_45, &transform_hlds__distance_granularity__CallArgs_27);
        }
#line 981 "distance_granularity.m"
        {
#line 981 "distance_granularity.m"
          transform_hlds__distance_granularity__CallExpr_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_13));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_20));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_22));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_14));
#line 981 "distance_granularity.m"
        }
#line 986 "distance_granularity.m"
        {
#line 986 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__CallInfo0_18);
        }
#line 987 "distance_granularity.m"
        {
#line 987 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__NonLocals0_30, &transform_hlds__distance_granularity__NonLocals_31);
        }
#line 988 "distance_granularity.m"
        {
#line 988 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_31, transform_hlds__distance_granularity__CallInfo0_18, &transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 989 "distance_granularity.m"
        {
#line 989 "distance_granularity.m"
          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 991 "distance_granularity.m"
        {
#line 991 "distance_granularity.m"
          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_25, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
        }
#line 992 "distance_granularity.m"
        {
#line 992 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__CallInfo1_32, &transform_hlds__distance_granularity__CallInfo_36);
        }
#line 993 "distance_granularity.m"
        {
#line 993 "distance_granularity.m"
          transform_hlds__distance_granularity__Call_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 993 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__CallExpr_29));
#line 993 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallInfo_36));
#line 993 "distance_granularity.m"
        }
#line 998 "distance_granularity.m"
        {
#line 998 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_26, transform_hlds__distance_granularity__Call_37, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39);
#line 998 "distance_granularity.m"
          return;
        }
#line 971 "distance_granularity.m"
      }
#line 999 "distance_granularity.m"
    else
#line 1000 "distance_granularity.m"
      {
#line 1000 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40;
#line 1000 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38;
#line 1000 "distance_granularity.m"
      }
#line 959 "distance_granularity.m"
  }
#line 953 "distance_granularity.m"
}

#line 864 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 864 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 864 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 864 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 864 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 864 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 864 "distance_granularity.m"
{
#line 869 "distance_granularity.m"
  {
#line 869 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 869 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 0)));
#line 869 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 1)));

#line 873 "distance_granularity.m"
#line 873 "distance_granularity.m"
    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) {
#line 873 "distance_granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 873 "distance_granularity.m"
      case (MR_Integer) 0:
#line 916 "distance_granularity.m"
        {
#line 916 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17), (MR_Integer) 0);
#line 916 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal_52;
#line 916 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_95;

#line 917 "distance_granularity.m"
          {
#line 917 "distance_granularity.m"
            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_51, &transform_hlds__distance_granularity__SubGoal_52, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
          }
#line 920 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_52);
#line 921 "distance_granularity.m"
          {
#line 921 "distance_granularity.m"
            MR_Word base;
#line 921 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 921 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 921 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_95));
#line 921 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 921 "distance_granularity.m"
          }
#line 916 "distance_granularity.m"
        }
#line 873 "distance_granularity.m"
        break;
#line 873 "distance_granularity.m"
      case (MR_Integer) 1:
#line 872 "distance_granularity.m"
        {
#line 872 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 872 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 872 "distance_granularity.m"
        }
#line 873 "distance_granularity.m"
        break;
#line 873 "distance_granularity.m"
      case (MR_Integer) 2:
#line 878 "distance_granularity.m"
        {
#line 878 "distance_granularity.m"
          transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
#line 878 "distance_granularity.m"
          return;
        }
#line 873 "distance_granularity.m"
        break;
#line 873 "distance_granularity.m"
      case (MR_Integer) 3:
#line 873 "distance_granularity.m"
#line 873 "distance_granularity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) {
#line 873 "distance_granularity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 873 "distance_granularity.m"
          case (MR_Integer) 0:
#line 883 "distance_granularity.m"
            {
#line 883 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 883 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 883 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 1:
#line 881 "distance_granularity.m"
            {
#line 881 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 881 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 881 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 2:
#line 885 "distance_granularity.m"
            {
#line 885 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 885 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 885 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals1_44;
#line 885 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_45;
#line 885 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_46;

#line 886 "distance_granularity.m"
              {
#line 886 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals1_44, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 892 "distance_granularity.m"
#line 892 "distance_granularity.m"
              switch (transform_hlds__distance_granularity__Type_42) {
#line 892 "distance_granularity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 892 "distance_granularity.m"
                case (MR_Integer) 1:
#line 897 "distance_granularity.m"
                  transform_hlds__distance_granularity__Goals_45 = transform_hlds__distance_granularity__Goals1_44;
#line 892 "distance_granularity.m"
                  break;
#line 892 "distance_granularity.m"
                case (MR_Integer) 0:
#line 891 "distance_granularity.m"
                  {
#line 891 "distance_granularity.m"
                    hlds__goal_util__flatten_conj_2_p_0(transform_hlds__distance_granularity__Goals1_44, &transform_hlds__distance_granularity__Goals_45);
                  }
#line 892 "distance_granularity.m"
                  break;
#line 892 "distance_granularity.m"
              }
#line 899 "distance_granularity.m"
              {
#line 899 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 899 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 899 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 1) = ((MR_Box) (transform_hlds__distance_granularity__Type_42));
#line 899 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_45));
#line 899 "distance_granularity.m"
              }
#line 900 "distance_granularity.m"
              {
#line 900 "distance_granularity.m"
                MR_Word base;
#line 900 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 900 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_46));
#line 900 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 900 "distance_granularity.m"
              }
#line 885 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 3:
#line 902 "distance_granularity.m"
            {
#line 902 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 902 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_92;
#line 902 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_93;

#line 903 "distance_granularity.m"
              {
#line 903 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_92, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 906 "distance_granularity.m"
              {
#line 906 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 906 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_92));
#line 906 "distance_granularity.m"
              }
#line 907 "distance_granularity.m"
              {
#line 907 "distance_granularity.m"
                MR_Word base;
#line 907 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 907 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_93));
#line 907 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 907 "distance_granularity.m"
              }
#line 902 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 4:
#line 909 "distance_granularity.m"
            {
#line 909 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 909 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__CanFail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 909 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 909 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases_50;
#line 909 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_94;

#line 910 "distance_granularity.m"
              {
#line 910 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(transform_hlds__distance_granularity__Cases0_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_50, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 913 "distance_granularity.m"
              {
#line 913 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_47));
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_48));
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_50));
#line 913 "distance_granularity.m"
              }
#line 914 "distance_granularity.m"
              {
#line 914 "distance_granularity.m"
                MR_Word base;
#line 914 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 914 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 914 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_94));
#line 914 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 914 "distance_granularity.m"
              }
#line 909 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 5:
#line 923 "distance_granularity.m"
            {
#line 923 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 923 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 924 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_74_74;
#line 924 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_54_54;

#line 924 "distance_granularity.m"
              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 924 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 924 "distance_granularity.m"
                {
#line 924 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 1)));
#line 924 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 2)));
#line 924 "distance_granularity.m"
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_74_74 == (MR_Integer) 1);
#line 924 "distance_granularity.m"
                }
#line 927 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 926 "distance_granularity.m"
                {
#line 926 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 926 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 926 "distance_granularity.m"
                }
#line 927 "distance_granularity.m"
              else
#line 930 "distance_granularity.m"
                {
#line 930 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_96;
#line 930 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__SubGoal_97;

#line 928 "distance_granularity.m"
                  {
#line 928 "distance_granularity.m"
                    transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_101, &transform_hlds__distance_granularity__SubGoal_97, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                  }
#line 931 "distance_granularity.m"
                  {
#line 931 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 931 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 931 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_53));
#line 931 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_97));
#line 931 "distance_granularity.m"
                  }
#line 932 "distance_granularity.m"
                  {
#line 932 "distance_granularity.m"
                    MR_Word base;
#line 932 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 932 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_96));
#line 932 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 932 "distance_granularity.m"
                  }
#line 930 "distance_granularity.m"
                }
#line 923 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 6:
#line 935 "distance_granularity.m"
            {
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 4)));
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond_59;
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then_60;
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else_61;
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70;
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71;
#line 935 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_103;

#line 936 "distance_granularity.m"
              {
#line 936 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Cond0_56, &transform_hlds__distance_granularity__Cond_59, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__distance_granularity__Distance_16);
              }
#line 938 "distance_granularity.m"
              {
#line 938 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Then0_57, &transform_hlds__distance_granularity__Then_60, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__Distance_16);
              }
#line 940 "distance_granularity.m"
              {
#line 940 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Else0_58, &transform_hlds__distance_granularity__Else_61, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 942 "distance_granularity.m"
              {
#line 942 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_55));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_59));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_60));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_61));
#line 942 "distance_granularity.m"
              }
#line 943 "distance_granularity.m"
              {
#line 943 "distance_granularity.m"
                MR_Word base;
#line 943 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 943 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_103));
#line 943 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 943 "distance_granularity.m"
              }
#line 935 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
          case (MR_Integer) 7:
#line 945 "distance_granularity.m"
            {
#line 947 "distance_granularity.m"
              {
#line 947 "distance_granularity.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.update_original_predicate_goal\'/9", (MR_String) "shorthand");
#line 947 "distance_granularity.m"
                return;
              }
#line 945 "distance_granularity.m"
            }
#line 873 "distance_granularity.m"
            break;
#line 873 "distance_granularity.m"
        }
#line 873 "distance_granularity.m"
        break;
#line 873 "distance_granularity.m"
    }
#line 869 "distance_granularity.m"
  }
#line 864 "distance_granularity.m"
}

#line 839 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 839 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 839 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 839 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 839 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9)
#line 839 "distance_granularity.m"
{
#line 843 "distance_granularity.m"
  while (MR_TRUE)
#line 843 "distance_granularity.m"
    {
#line 843 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 843 "distance_granularity.m"
      {
#line 843 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 843 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "distance_granularity.m"
          {
#line 844 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8;
#line 844 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 843 "distance_granularity.m"
          }
#line 843 "distance_granularity.m"
        else
#line 847 "distance_granularity.m"
          {
#line 847 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_28;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body0_29;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body_30;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo1_31;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo2_32;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo3_33;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo_34;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_39_39;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;
#line 847 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;

#line 848 "distance_granularity.m"
            {
#line 848 "distance_granularity.m"
              transform_hlds__distance_granularity__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 848 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_21));
#line 848 "distance_granularity.m"
            }
#line 848 "distance_granularity.m"
            {
#line 848 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__distance_granularity__V_39_39, &transform_hlds__distance_granularity__ProcInfo0_28);
            }
#line 849 "distance_granularity.m"
            {
#line 849 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__Body0_29);
            }
#line 850 "distance_granularity.m"
            {
#line 850 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Body0_29, &transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__ProcInfo1_31, transform_hlds__distance_granularity__HeadVar__3_3);
            }
#line 852 "distance_granularity.m"
            {
#line 852 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__ProcInfo1_31, &transform_hlds__distance_granularity__ProcInfo2_32);
            }
#line 853 "distance_granularity.m"
            {
#line 853 "distance_granularity.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_32, &transform_hlds__distance_granularity__ProcInfo3_33);
            }
#line 855 "distance_granularity.m"
            {
#line 855 "distance_granularity.m"
              check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_33, &transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 857 "distance_granularity.m"
            {
#line 857 "distance_granularity.m"
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43);
            }
#line 858 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 858 "distance_granularity.m"
            {
#line 858 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_22;
#line 858 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;
#line 858 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;

#line 858 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 858 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 858 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 858 "distance_granularity.m"
            }
#line 858 "distance_granularity.m"
            continue;
#line 847 "distance_granularity.m"
          }
#line 843 "distance_granularity.m"
      }
#line 843 "distance_granularity.m"
      break;
#line 843 "distance_granularity.m"
    }
#line 839 "distance_granularity.m"
}

#line 815 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
#line 815 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__Prefix_5,
#line 815 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_6,
#line 815 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
#line 815 "distance_granularity.m"
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11)
#line 815 "distance_granularity.m"
{
#line 818 "distance_granularity.m"
  {
#line 818 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__PredIdStr_9;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_23_23;
#line 818 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_29_29;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_31_31;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_32_32;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_39_39;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_41_41;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_42_42;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_49_49;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_51_51;
#line 818 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_52_52;

#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      mercury__string__int_to_string_2_p_0(transform_hlds__distance_granularity__Distance_6, &transform_hlds__distance_granularity__PredIdStr_9);
    }
#line 2177 "transform_hlds.distance_granularity.c"
    transform_hlds__distance_granularity__V_29_29 = (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[3];
#line 822 "distance_granularity.m"
    {
#line 822 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__PredIdStr_9, &transform_hlds__distance_granularity__V_23_23);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      transform_hlds__distance_granularity__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_23_23);
    }
#line 822 "distance_granularity.m"
    {
#line 822 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10, &transform_hlds__distance_granularity__V_32_32);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      transform_hlds__distance_granularity__V_39_39 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_32_32, transform_hlds__distance_granularity__V_31_31);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      transform_hlds__distance_granularity__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_39_39);
    }
#line 822 "distance_granularity.m"
    {
#line 822 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, (MR_String) "pred", &transform_hlds__distance_granularity__V_42_42);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      transform_hlds__distance_granularity__V_49_49 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_42_42, transform_hlds__distance_granularity__V_41_41);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      transform_hlds__distance_granularity__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_49_49);
    }
#line 822 "distance_granularity.m"
    {
#line 822 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__Prefix_5, &transform_hlds__distance_granularity__V_52_52);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      *transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_52_52, transform_hlds__distance_granularity__V_51_51);
    }
#line 818 "distance_granularity.m"
  }
#line 815 "distance_granularity.m"
}

#line 791 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 791 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 791 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 791 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 791 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 791 "distance_granularity.m"
{
#line 797 "distance_granularity.m"
  while (MR_TRUE)
#line 797 "distance_granularity.m"
    {
#line 797 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 797 "distance_granularity.m"
      {
#line 797 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 797 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "distance_granularity.m"
          {
#line 799 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 798 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 798 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 797 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 797 "distance_granularity.m"
          }
#line 797 "distance_granularity.m"
        else
#line 802 "distance_granularity.m"
          {
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 0)));
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 1)));
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 2)));
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_46;
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 802 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_61_61;
#line 804 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_47_47;

#line 804 "distance_granularity.m"
            {
#line 804 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_45, &transform_hlds__distance_granularity__Goal_46, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59, &transform_hlds__distance_granularity__V_47_47);
            }
#line 807 "distance_granularity.m"
            {
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 807 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_43));
#line 807 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_44));
#line 807 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_46));
#line 807 "distance_granularity.m"
            }
#line 807 "distance_granularity.m"
            {
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_61_61));
#line 807 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 807 "distance_granularity.m"
            }
#line 808 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 808 "distance_granularity.m"
            {
#line 808 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_33;
#line 808 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 808 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 808 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 808 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;

#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 808 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 808 "distance_granularity.m"
            }
#line 808 "distance_granularity.m"
            continue;
#line 802 "distance_granularity.m"
          }
#line 797 "distance_granularity.m"
      }
#line 797 "distance_granularity.m"
      break;
#line 797 "distance_granularity.m"
    }
#line 791 "distance_granularity.m"
}

#line 769 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 769 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 769 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 769 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 769 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 769 "distance_granularity.m"
{
#line 775 "distance_granularity.m"
  while (MR_TRUE)
#line 775 "distance_granularity.m"
    {
#line 775 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 775 "distance_granularity.m"
      {
#line 775 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 775 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "distance_granularity.m"
          {
#line 777 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 776 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 776 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 775 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 775 "distance_granularity.m"
          }
#line 775 "distance_granularity.m"
        else
#line 780 "distance_granularity.m"
          {
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_43;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_57_57;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 781 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_44_44;

#line 781 "distance_granularity.m"
            {
#line 781 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_32, &transform_hlds__distance_granularity__Goal_43, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56, &transform_hlds__distance_granularity__V_44_44);
            }
#line 784 "distance_granularity.m"
            {
#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_43));
#line 784 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "distance_granularity.m"
            }
#line 784 "distance_granularity.m"
            {
#line 784 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_57_57, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58);
            }
#line 785 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 785 "distance_granularity.m"
            {
#line 785 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_33;
#line 785 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 785 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 785 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 785 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;

#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 785 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 785 "distance_granularity.m"
            }
#line 785 "distance_granularity.m"
            continue;
#line 780 "distance_granularity.m"
          }
#line 775 "distance_granularity.m"
      }
#line 775 "distance_granularity.m"
      break;
#line 775 "distance_granularity.m"
    }
#line 769 "distance_granularity.m"
}

#line 656 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 656 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 656 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 656 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 656 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 656 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 656 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71)
#line 656 "distance_granularity.m"
{
#line 763 "distance_granularity.m"
  while (MR_TRUE)
#line 763 "distance_granularity.m"
    {
#line 763 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 763 "distance_granularity.m"
      {
#line 763 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 763 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 662 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_72_72;

#line 662 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 662 "distance_granularity.m"
          {
#line 662 "distance_granularity.m"
            transform_hlds__distance_granularity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
#line 662 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));
#line 662 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_72_72 == (MR_Integer) 0);
#line 662 "distance_granularity.m"
          }
#line 763 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 663 "distance_granularity.m"
          {
#line 663 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 663 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 663 "distance_granularity.m"
            {
#line 663 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 664 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 > transform_hlds__distance_granularity__Length_19);
#line 666 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 665 "distance_granularity.m"
              {
#line 665 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 665 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68;
#line 665 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 665 "distance_granularity.m"
              }
#line 666 "distance_granularity.m"
            else
#line 667 "distance_granularity.m"
              {
#line 667 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 667 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 667 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 667 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;
#line 667 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 667 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 667 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 757 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 757 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 757 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 757 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 757 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 670 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 667 "distance_granularity.m"
                {
#line 667 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 667 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 668 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 668 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 670 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 670 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 670 "distance_granularity.m"
                  {
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 670 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 674 "distance_granularity.m"
                    {
#line 674 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 674 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 675 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 752 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 681 "distance_granularity.m"
                      {
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResult_31;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusPredId_32;
#line 681 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__MinusProcId_33;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallArgs_34;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallSymName_36;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__ConsId_37;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Rhs_38;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallUnifyContext_39;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalExpr_40;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__NonLocals_41;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResultDelta_42;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarDelta_43;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDeltaDecrement_44;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoal_47;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoalInfo_49;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Context_50;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalInfo_51;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoal_52;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_53;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_55;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_57;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_58;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_59;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals1_60;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__StartGoals_61;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__EndGoals_62;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend0_63;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend1_64;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_65;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_73_73;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_77_77;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_87_87;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_93_93;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_95_95;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_96_96;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_98_98;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_119_119;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_120_120;
#line 681 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__V_127_127;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_129_129;
#line 681 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_131_131;
#line 716 "distance_granularity.m"
                        MR_Box transform_hlds__distance_granularity__conv1_FirstGoal_47;
#line 717 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_48_48;

#line 680 "distance_granularity.m"
                        {
#line 680 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_73_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 680 "distance_granularity.m"
                        {
#line 680 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_73_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75);
                        }
#line 682 "distance_granularity.m"
                        {
#line 682 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, (MR_Integer) 1, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 686 "distance_granularity.m"
                        {
#line 686 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_77_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 686 "distance_granularity.m"
                        {
#line 686 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__VarResult_31, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79);
                        }
#line 690 "distance_granularity.m"
                        {
#line 690 "distance_granularity.m"
                          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__distance_granularity__ModuleInfo_16, (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[2], (MR_String) "minus", (MR_Integer) 1, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MinusPredId_32, &transform_hlds__distance_granularity__MinusProcId_33);
                        }
#line 693 "distance_granularity.m"
                        {
#line 693 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "distance_granularity.m"
                        }
#line 693 "distance_granularity.m"
                        {
#line 693 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_87_87));
#line 693 "distance_granularity.m"
                        }
#line 693 "distance_granularity.m"
                        {
#line 693 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 693 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 693 "distance_granularity.m"
                        }
#line 695 "distance_granularity.m"
                        transform_hlds__distance_granularity__MinusCallSymName_36 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_1[4]);
#line 697 "distance_granularity.m"
                        {
#line 697 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_93_93 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                        }
#line 697 "distance_granularity.m"
                        {
#line 697 "distance_granularity.m"
                          transform_hlds__distance_granularity__ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 2) = ((MR_Box) ((MR_Integer) 2));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_93_93));
#line 697 "distance_granularity.m"
                        }
#line 699 "distance_granularity.m"
                        {
#line 699 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "distance_granularity.m"
                        }
#line 699 "distance_granularity.m"
                        {
#line 699 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_96_96));
#line 699 "distance_granularity.m"
                        }
#line 698 "distance_granularity.m"
                        {
#line 698 "distance_granularity.m"
                          transform_hlds__distance_granularity__Rhs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 0) = ((MR_Box) (transform_hlds__distance_granularity__ConsId_37));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 2) = ((MR_Box) (transform_hlds__distance_granularity__V_95_95));
#line 698 "distance_granularity.m"
                        }
#line 700 "distance_granularity.m"
                        {
#line 700 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 1) = ((MR_Box) (transform_hlds__distance_granularity__Rhs_38));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 2) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[5]));
#line 700 "distance_granularity.m"
                        }
#line 700 "distance_granularity.m"
                        {
#line 700 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallUnifyContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 700 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallUnifyContext_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_98_98));
#line 700 "distance_granularity.m"
                        }
#line 703 "distance_granularity.m"
                        {
#line 703 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoalExpr_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__MinusPredId_32));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusProcId_33));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 2) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallArgs_34));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 3) = ((MR_Box) ((MR_Integer) 0));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 4) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallUnifyContext_39));
#line 703 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 5) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 703 "distance_granularity.m"
                        }
#line 706 "distance_granularity.m"
                        {
#line 706 "distance_granularity.m"
                          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__MinusCallArgs_34, &transform_hlds__distance_granularity__NonLocals_41);
                        }
#line 708 "distance_granularity.m"
                        {
#line 708 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarResultDelta_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 708 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[0])));
#line 708 "distance_granularity.m"
                        }
#line 709 "distance_granularity.m"
                        {
#line 709 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarDelta_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 709 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_2[0])));
#line 709 "distance_granularity.m"
                        }
#line 712 "distance_granularity.m"
                        {
#line 712 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResultDelta_42));
#line 712 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "distance_granularity.m"
                        }
#line 712 "distance_granularity.m"
                        {
#line 712 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarDelta_43));
#line 712 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_120_120));
#line 712 "distance_granularity.m"
                        }
#line 711 "distance_granularity.m"
                        {
#line 711 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDeltaDecrement_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__distance_granularity__V_119_119);
                        }
#line 716 "distance_granularity.m"
                        {
#line 716 "distance_granularity.m"
                          mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, (MR_Integer) 1, &transform_hlds__distance_granularity__conv1_FirstGoal_47);
                        }
#line 716 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoal_47 = ((MR_Word) transform_hlds__distance_granularity__conv1_FirstGoal_47);
#line 717 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 0)));
#line 717 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 1)));
#line 718 "distance_granularity.m"
                        {
#line 718 "distance_granularity.m"
                          transform_hlds__distance_granularity__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__distance_granularity__FirstGoalInfo_49);
                        }
#line 719 "distance_granularity.m"
                        {
#line 719 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__distance_granularity__NonLocals_41, transform_hlds__distance_granularity__InstMapDeltaDecrement_44, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__distance_granularity__Context_50, &transform_hlds__distance_granularity__DecrementGoalInfo_51);
                        }
#line 721 "distance_granularity.m"
                        {
#line 721 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalExpr_40));
#line 721 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 1) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalInfo_51));
#line 721 "distance_granularity.m"
                        }
#line 726 "distance_granularity.m"
                        {
#line 726 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_87_87, &transform_hlds__distance_granularity__CallArgs_53);
                        }
#line 733 "distance_granularity.m"
                        {
#line 733 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_53));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 733 "distance_granularity.m"
                        }
#line 735 "distance_granularity.m"
                        {
#line 735 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 737 "distance_granularity.m"
                        {
#line 737 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_55, &transform_hlds__distance_granularity__InstMapDelta_57);
                        }
#line 739 "distance_granularity.m"
                        {
#line 739 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_57, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_58);
                        }
#line 741 "distance_granularity.m"
                        {
#line 741 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 741 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_58));
#line 741 "distance_granularity.m"
                        }
#line 742 "distance_granularity.m"
                        {
#line 742 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, ((MR_Box) (transform_hlds__distance_granularity__Goal_59)), &transform_hlds__distance_granularity__Goals1_60);
                        }
#line 745 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_127_127 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 - (MR_Integer) 1);
#line 745 "distance_granularity.m"
                        {
#line 745 "distance_granularity.m"
                          mercury__list__det_split_list_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__V_127_127, transform_hlds__distance_granularity__Goals1_60, &transform_hlds__distance_granularity__StartGoals_61, &transform_hlds__distance_granularity__EndGoals_62);
                        }
#line 747 "distance_granularity.m"
                        {
#line 747 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 0) = ((MR_Box) (transform_hlds__distance_granularity__UnifyGoal_30));
#line 747 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "distance_granularity.m"
                        }
#line 747 "distance_granularity.m"
                        {
#line 747 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__StartGoals_61, transform_hlds__distance_granularity__V_129_129, &transform_hlds__distance_granularity__GoalsAppend0_63);
                        }
#line 748 "distance_granularity.m"
                        {
#line 748 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoal_52));
#line 748 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "distance_granularity.m"
                        }
#line 748 "distance_granularity.m"
                        {
#line 748 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend0_63, transform_hlds__distance_granularity__V_131_131, &transform_hlds__distance_granularity__GoalsAppend1_64);
                        }
#line 750 "distance_granularity.m"
                        {
#line 750 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend1_64, transform_hlds__distance_granularity__EndGoals_62, &transform_hlds__distance_granularity__Goals_65);
                        }
#line 751 "distance_granularity.m"
                        {
#line 751 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 751 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 751 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 751 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_65));
#line 751 "distance_granularity.m"
                        }
#line 681 "distance_granularity.m"
                      }
#line 752 "distance_granularity.m"
                    else
#line 754 "distance_granularity.m"
                      {
#line 754 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 754 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 754 "distance_granularity.m"
                      }
#line 756 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 3);
#line 670 "distance_granularity.m"
                  }
#line 670 "distance_granularity.m"
                else
#line 758 "distance_granularity.m"
                  {
#line 758 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 1);
#line 758 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 758 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 758 "distance_granularity.m"
                  }
#line 760 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 760 "distance_granularity.m"
                {
#line 760 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 760 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 760 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;

#line 760 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70;
#line 760 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68;
#line 760 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66;
#line 760 "distance_granularity.m"
                }
#line 760 "distance_granularity.m"
                continue;
#line 667 "distance_granularity.m"
              }
#line 663 "distance_granularity.m"
          }
#line 763 "distance_granularity.m"
        else
#line 764 "distance_granularity.m"
          {
#line 764 "distance_granularity.m"
            {
#line 764 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_else2\'/10", (MR_String) "unexpected goal type");
#line 764 "distance_granularity.m"
              return;
            }
#line 764 "distance_granularity.m"
          }
#line 763 "distance_granularity.m"
      }
#line 763 "distance_granularity.m"
      break;
#line 763 "distance_granularity.m"
    }
#line 656 "distance_granularity.m"
}

#line 644 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 644 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 644 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 644 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 644 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23)
#line 644 "distance_granularity.m"
{
#line 649 "distance_granularity.m"
  {
#line 649 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 649 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 0)));
#line 649 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 1)));
#line 649 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr_17;
#line 649 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goal0_19;
#line 651 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__V_18_18;
#line 634 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goals_31;
#line 634 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__ConjInfo0_32;
#line 634 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_41_41;
#line 624 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Type_30;

#line 651 "distance_granularity.m"
    {
#line 651 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(transform_hlds__distance_granularity__GoalExpr0_15, &transform_hlds__distance_granularity__GoalExpr_17, (MR_Integer) 1, &transform_hlds__distance_granularity__V_18_18, transform_hlds__distance_granularity__GranularityVar_10, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__ModuleInfo_13, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);
    }
#line 653 "distance_granularity.m"
    {
#line 653 "distance_granularity.m"
      transform_hlds__distance_granularity__Goal0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_17));
#line 653 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_16));
#line 653 "distance_granularity.m"
    }
#line 624 "distance_granularity.m"
    transform_hlds__distance_granularity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 0)));
#line 624 "distance_granularity.m"
    transform_hlds__distance_granularity__ConjInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 1)));
#line 624 "distance_granularity.m"
    transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 624 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 624 "distance_granularity.m"
      {
#line 624 "distance_granularity.m"
        transform_hlds__distance_granularity__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 1)));
#line 624 "distance_granularity.m"
        transform_hlds__distance_granularity__Goals_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 2)));
#line 625 "distance_granularity.m"
        {
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__NonLocals_33;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__InstMapDelta_34;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Detism_35;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Purity_36;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo1_37;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo2_38;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo3_39;
#line 625 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo_40;

#line 625 "distance_granularity.m"
          {
#line 625 "distance_granularity.m"
            hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__NonLocals_33);
          }
#line 626 "distance_granularity.m"
          {
#line 626 "distance_granularity.m"
            hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__InstMapDelta_34);
          }
#line 627 "distance_granularity.m"
          {
#line 627 "distance_granularity.m"
            hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Detism_35);
          }
#line 628 "distance_granularity.m"
          {
#line 628 "distance_granularity.m"
            hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Purity_36);
          }
#line 629 "distance_granularity.m"
          {
#line 629 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_33, transform_hlds__distance_granularity__ConjInfo0_32, &transform_hlds__distance_granularity__ConjInfo1_37);
          }
#line 630 "distance_granularity.m"
          {
#line 630 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_34, transform_hlds__distance_granularity__ConjInfo1_37, &transform_hlds__distance_granularity__ConjInfo2_38);
          }
#line 631 "distance_granularity.m"
          {
#line 631 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_35, transform_hlds__distance_granularity__ConjInfo2_38, &transform_hlds__distance_granularity__ConjInfo3_39);
          }
#line 632 "distance_granularity.m"
          {
#line 632 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_36, transform_hlds__distance_granularity__ConjInfo3_39, &transform_hlds__distance_granularity__ConjInfo_40);
          }
#line 633 "distance_granularity.m"
          {
#line 633 "distance_granularity.m"
            MR_Word base;
#line 633 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21 = base;
#line 633 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 633 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_40));
#line 633 "distance_granularity.m"
          }
#line 625 "distance_granularity.m"
        }
#line 624 "distance_granularity.m"
      }
#line 624 "distance_granularity.m"
    else
#line 636 "distance_granularity.m"
      {
#line 636 "distance_granularity.m"
        {
#line 636 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 636 "distance_granularity.m"
          return;
        }
#line 636 "distance_granularity.m"
      }
#line 649 "distance_granularity.m"
  }
#line 644 "distance_granularity.m"
}

#line 494 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 494 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 494 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 494 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 494 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 494 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19)
#line 494 "distance_granularity.m"
{
#line 500 "distance_granularity.m"
  {
#line 500 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 500 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Var_20;
#line 500 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__UnifyGoal_21;
#line 500 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_34_34;
#line 500 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 501 "distance_granularity.m"
    {
#line 501 "distance_granularity.m"
      transform_hlds__distance_granularity__V_34_34 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 501 "distance_granularity.m"
    {
#line 501 "distance_granularity.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 502 "distance_granularity.m"
    {
#line 502 "distance_granularity.m"
      hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_20, (MR_Integer) 0, &transform_hlds__distance_granularity__UnifyGoal_21);
    }
#line 527 "distance_granularity.m"
    if ((transform_hlds__distance_granularity__MaybeGranularityVar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "distance_granularity.m"
      {
#line 531 "distance_granularity.m"
        {
#line 531 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.create_if_then_else_goal\'/10", (MR_String) "MaybeGranularityVar = no");
#line 531 "distance_granularity.m"
          return;
        }
#line 528 "distance_granularity.m"
      }
#line 527 "distance_granularity.m"
    else
#line 504 "distance_granularity.m"
      {
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GranularityVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MaybeGranularityVar_13, (MR_Integer) 0)));
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Test_23;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Cond_24;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Then_26;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else0_27;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else_28;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_29;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_30;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__IfThenElseInfo_31;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_48_48;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_51_51;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr0_64;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr_66;
#line 504 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goal0_68;
#line 545 "distance_granularity.m"
        MR_Integer transform_hlds__distance_granularity__V_67_67;
#line 634 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals_76;
#line 634 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__ConjInfo0_77;
#line 634 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 624 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Type_75;

#line 506 "distance_granularity.m"
        {
#line 506 "distance_granularity.m"
          hlds__make_goal__make_simple_test_5_p_0(transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__Var_20, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_3[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Test_23);
        }
#line 508 "distance_granularity.m"
        {
#line 508 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_21, transform_hlds__distance_granularity__Test_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Cond_24);
        }
#line 511 "distance_granularity.m"
        {
#line 511 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr0_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 511 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 511 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 1) = ((MR_Box) ((MR_Integer) 1));
#line 511 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 511 "distance_granularity.m"
        }
#line 545 "distance_granularity.m"
        {
#line 545 "distance_granularity.m"
          transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(transform_hlds__distance_granularity__GoalExpr0_64, &transform_hlds__distance_granularity__GoalExpr_66, (MR_Integer) 1, &transform_hlds__distance_granularity__V_67_67, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__Distance_16, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
        }
#line 547 "distance_granularity.m"
        {
#line 547 "distance_granularity.m"
          transform_hlds__distance_granularity__Goal0_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_66));
#line 547 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 547 "distance_granularity.m"
        }
#line 624 "distance_granularity.m"
        transform_hlds__distance_granularity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 0)));
#line 624 "distance_granularity.m"
        transform_hlds__distance_granularity__ConjInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 1)));
#line 624 "distance_granularity.m"
        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 624 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 624 "distance_granularity.m"
          {
#line 624 "distance_granularity.m"
            transform_hlds__distance_granularity__Type_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 1)));
#line 624 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 2)));
#line 625 "distance_granularity.m"
            {
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__NonLocals_78;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__InstMapDelta_79;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Detism_80;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Purity_81;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo1_82;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo2_83;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo3_84;
#line 625 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo_85;

#line 625 "distance_granularity.m"
              {
#line 625 "distance_granularity.m"
                hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__NonLocals_78);
              }
#line 626 "distance_granularity.m"
              {
#line 626 "distance_granularity.m"
                hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__InstMapDelta_79);
              }
#line 627 "distance_granularity.m"
              {
#line 627 "distance_granularity.m"
                hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Detism_80);
              }
#line 628 "distance_granularity.m"
              {
#line 628 "distance_granularity.m"
                hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Purity_81);
              }
#line 629 "distance_granularity.m"
              {
#line 629 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_78, transform_hlds__distance_granularity__ConjInfo0_77, &transform_hlds__distance_granularity__ConjInfo1_82);
              }
#line 630 "distance_granularity.m"
              {
#line 630 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_79, transform_hlds__distance_granularity__ConjInfo1_82, &transform_hlds__distance_granularity__ConjInfo2_83);
              }
#line 631 "distance_granularity.m"
              {
#line 631 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_80, transform_hlds__distance_granularity__ConjInfo2_83, &transform_hlds__distance_granularity__ConjInfo3_84);
              }
#line 632 "distance_granularity.m"
              {
#line 632 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_81, transform_hlds__distance_granularity__ConjInfo3_84, &transform_hlds__distance_granularity__ConjInfo_85);
              }
#line 633 "distance_granularity.m"
              {
#line 633 "distance_granularity.m"
                transform_hlds__distance_granularity__Then_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 633 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_85));
#line 633 "distance_granularity.m"
              }
#line 625 "distance_granularity.m"
            }
#line 624 "distance_granularity.m"
          }
#line 624 "distance_granularity.m"
        else
#line 636 "distance_granularity.m"
          {
#line 636 "distance_granularity.m"
            {
#line 636 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 636 "distance_granularity.m"
              return;
            }
#line 636 "distance_granularity.m"
          }
#line 516 "distance_granularity.m"
        {
#line 516 "distance_granularity.m"
          transform_hlds__distance_granularity__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 516 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 516 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 516 "distance_granularity.m"
        }
#line 516 "distance_granularity.m"
        {
#line 516 "distance_granularity.m"
          transform_hlds__distance_granularity__Else0_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
#line 516 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 516 "distance_granularity.m"
        }
#line 517 "distance_granularity.m"
        {
#line 517 "distance_granularity.m"
          transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(transform_hlds__distance_granularity__Else0_27, &transform_hlds__distance_granularity__Else_28, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__ModuleInfo_19, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33);
        }
#line 522 "distance_granularity.m"
        {
#line 522 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__ConjInfo_12);
        }
#line 523 "distance_granularity.m"
        {
#line 523 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__NonLocals0_29, &transform_hlds__distance_granularity__NonLocals_30);
        }
#line 524 "distance_granularity.m"
        {
#line 524 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_30, transform_hlds__distance_granularity__ConjInfo_12, &transform_hlds__distance_granularity__IfThenElseInfo_31);
        }
#line 525 "distance_granularity.m"
        {
#line 525 "distance_granularity.m"
          transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_24));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_26));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_28));
#line 525 "distance_granularity.m"
        }
#line 525 "distance_granularity.m"
        {
#line 525 "distance_granularity.m"
          MR_Word base;
#line 525 "distance_granularity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "distance_granularity.m"
          *transform_hlds__distance_granularity__IfThenElseGoal_17 = base;
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_51_51));
#line 525 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__IfThenElseInfo_31));
#line 525 "distance_granularity.m"
        }
#line 504 "distance_granularity.m"
      }
#line 500 "distance_granularity.m"
  }
#line 494 "distance_granularity.m"
}

#line 459 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 459 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 459 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 459 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 459 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17)
#line 459 "distance_granularity.m"
{
#line 465 "distance_granularity.m"
  while (MR_TRUE)
#line 465 "distance_granularity.m"
    {
#line 465 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 465 "distance_granularity.m"
      {
#line 465 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 465 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "distance_granularity.m"
          {
#line 468 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 468 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14;
#line 466 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 466 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 465 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 465 "distance_granularity.m"
          }
#line 465 "distance_granularity.m"
        else
#line 472 "distance_granularity.m"
          {
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_52;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__IsRecursiveCall_53;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_67_67;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 472 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 473 "distance_granularity.m"
            {
#line 473 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_39, &transform_hlds__distance_granularity__Goal_52, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__distance_granularity__HeadVar__12_12, transform_hlds__distance_granularity__HeadVar__13_13, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66, &transform_hlds__distance_granularity__IsRecursiveCall_53);
            }
#line 476 "distance_granularity.m"
            {
#line 476 "distance_granularity.m"
              transform_hlds__distance_granularity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_52));
#line 476 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "distance_granularity.m"
            }
#line 476 "distance_granularity.m"
            {
#line 476 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_67_67, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68);
            }
#line 482 "distance_granularity.m"
#line 482 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__IsRecursiveCall_53) {
#line 482 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 482 "distance_granularity.m"
              case (MR_Integer) 0:
#line 484 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 482 "distance_granularity.m"
                break;
#line 482 "distance_granularity.m"
              case (MR_Integer) 1:
#line 481 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = (MR_Integer) 1;
#line 482 "distance_granularity.m"
                break;
#line 482 "distance_granularity.m"
            }
#line 486 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 486 "distance_granularity.m"
            {
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_40;
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 486 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16;
#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14;
#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 486 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 486 "distance_granularity.m"
            }
#line 486 "distance_granularity.m"
            continue;
#line 472 "distance_granularity.m"
          }
#line 465 "distance_granularity.m"
      }
#line 465 "distance_granularity.m"
      break;
#line 465 "distance_granularity.m"
    }
#line 459 "distance_granularity.m"
}

#line 404 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 404 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 404 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 404 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24)
#line 404 "distance_granularity.m"
{
#line 413 "distance_granularity.m"
  {
#line 413 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__IsInParallelConj_22 == (MR_Integer) 1);
#line 413 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 0)));
#line 413 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 1)));
#line 413 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 2)));
#line 413 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 3)));
#line 413 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallUnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 4)));
#line 414 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 5)));

#line 417 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 417 "distance_granularity.m"
      {
#line 418 "distance_granularity.m"
        {
#line 418 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_25, transform_hlds__distance_granularity__CallerPredId_16);
        }
#line 417 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 419 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_26 == transform_hlds__distance_granularity__CallerProcId_19);
#line 417 "distance_granularity.m"
      }
#line 453 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 444 "distance_granularity.m"
      {
#line 426 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "distance_granularity.m"
          {
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__GranularityVar_32;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes0_33;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars0_34;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes_35;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars_36;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_45_45;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_49_49;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_50_50;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_52_52;
#line 427 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54;

#line 429 "distance_granularity.m"
            {
#line 429 "distance_granularity.m"
              transform_hlds__distance_granularity__V_45_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 429 "distance_granularity.m"
            {
#line 429 "distance_granularity.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__GranularityVar_32, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
            }
#line 431 "distance_granularity.m"
            {
#line 431 "distance_granularity.m"
              MR_Word base;
#line 431 "distance_granularity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 431 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = base;
#line 431 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 431 "distance_granularity.m"
            }
#line 438 "distance_granularity.m"
            {
#line 438 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__ArgsModes0_33);
            }
#line 439 "distance_granularity.m"
            {
#line 439 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__HeadVars0_34);
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              transform_hlds__distance_granularity__V_50_50 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              transform_hlds__distance_granularity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_50_50));
#line 440 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "distance_granularity.m"
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__distance_granularity__ArgsModes0_33, transform_hlds__distance_granularity__V_49_49, &transform_hlds__distance_granularity__ArgsModes_35);
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              transform_hlds__distance_granularity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 441 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "distance_granularity.m"
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__HeadVars0_34, transform_hlds__distance_granularity__V_52_52, &transform_hlds__distance_granularity__HeadVars_36);
            }
#line 442 "distance_granularity.m"
            {
#line 442 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__distance_granularity__ArgsModes_35, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54);
            }
#line 443 "distance_granularity.m"
            {
#line 443 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__distance_granularity__HeadVars_36, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40);
            }
#line 427 "distance_granularity.m"
          }
#line 426 "distance_granularity.m"
        else
#line 423 "distance_granularity.m"
          {
#line 423 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 423 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 423 "distance_granularity.m"
          }
#line 450 "distance_granularity.m"
        {
#line 450 "distance_granularity.m"
          MR_Word base;
#line 450 "distance_granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 450 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = base;
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_17));
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallerProcId_19));
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_28));
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__distance_granularity__CallUnifyContext_29));
#line 450 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_18));
#line 450 "distance_granularity.m"
        }
#line 452 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 1;
#line 444 "distance_granularity.m"
      }
#line 453 "distance_granularity.m"
    else
#line 454 "distance_granularity.m"
      {
#line 454 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 0;
#line 454 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 454 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 454 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37;
#line 454 "distance_granularity.m"
      }
#line 413 "distance_granularity.m"
    *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41;
#line 413 "distance_granularity.m"
  }
#line 404 "distance_granularity.m"
}

#line 299 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 299 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 299 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 299 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 299 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26)
#line 299 "distance_granularity.m"
{
#line 306 "distance_granularity.m"
  {
#line 306 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 306 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
#line 306 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

#line 311 "distance_granularity.m"
#line 311 "distance_granularity.m"
    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) {
#line 311 "distance_granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "distance_granularity.m"
      case (MR_Integer) 0:
#line 362 "distance_granularity.m"
        {
#line 362 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal0_61 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27), (MR_Integer) 0);
#line 362 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal_62;
#line 362 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_140;

#line 363 "distance_granularity.m"
          {
#line 363 "distance_granularity.m"
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_61, &transform_hlds__distance_granularity__SubGoal_62, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
#line 367 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_62);
#line 368 "distance_granularity.m"
          {
#line 368 "distance_granularity.m"
            MR_Word base;
#line 368 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 368 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_140));
#line 368 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 368 "distance_granularity.m"
          }
#line 362 "distance_granularity.m"
        }
#line 311 "distance_granularity.m"
        break;
#line 311 "distance_granularity.m"
      case (MR_Integer) 1:
#line 309 "distance_granularity.m"
        {
#line 310 "distance_granularity.m"
          *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 309 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 309 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 309 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 309 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 309 "distance_granularity.m"
        }
#line 311 "distance_granularity.m"
        break;
#line 311 "distance_granularity.m"
      case (MR_Integer) 2:
#line 312 "distance_granularity.m"
        {
#line 312 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_40;

#line 313 "distance_granularity.m"
          {
#line 313 "distance_granularity.m"
            transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(transform_hlds__distance_granularity__GoalExpr0_27, &transform_hlds__distance_granularity__GoalExpr_40, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
#line 317 "distance_granularity.m"
          {
#line 317 "distance_granularity.m"
            MR_Word base;
#line 317 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 317 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_40));
#line 317 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 317 "distance_granularity.m"
          }
#line 312 "distance_granularity.m"
        }
#line 311 "distance_granularity.m"
        break;
#line 311 "distance_granularity.m"
      case (MR_Integer) 3:
#line 311 "distance_granularity.m"
#line 311 "distance_granularity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) {
#line 311 "distance_granularity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 311 "distance_granularity.m"
          case (MR_Integer) 0:
#line 322 "distance_granularity.m"
            {
#line 323 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 322 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 322 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 322 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 322 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 322 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 1:
#line 319 "distance_granularity.m"
            {
#line 320 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 319 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 319 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 319 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 319 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 319 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 2:
#line 325 "distance_granularity.m"
            {
#line 325 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 325 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 325 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_55;
#line 325 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ContainRecursiveCalls_56;
#line 325 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;

#line 326 "distance_granularity.m"
              {
#line 326 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(transform_hlds__distance_granularity__Goals0_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 1, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, (MR_Integer) 0, &transform_hlds__distance_granularity__ContainRecursiveCalls_56);
              }
#line 333 "distance_granularity.m"
#line 333 "distance_granularity.m"
              switch (transform_hlds__distance_granularity__Type_53) {
#line 333 "distance_granularity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 333 "distance_granularity.m"
                case (MR_Integer) 1:
#line 340 "distance_granularity.m"
#line 340 "distance_granularity.m"
                  switch (transform_hlds__distance_granularity__ContainRecursiveCalls_56) {
#line 340 "distance_granularity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 340 "distance_granularity.m"
                    case (MR_Integer) 0:
#line 341 "distance_granularity.m"
                      {
#line 341 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 341 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 341 "distance_granularity.m"
                      }
#line 340 "distance_granularity.m"
                      break;
#line 340 "distance_granularity.m"
                    case (MR_Integer) 1:
#line 337 "distance_granularity.m"
                      {
#line 337 "distance_granularity.m"
                        transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__GoalInfo_28, *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81);
                      }
#line 340 "distance_granularity.m"
                      break;
#line 340 "distance_granularity.m"
                  }
#line 333 "distance_granularity.m"
                  break;
#line 333 "distance_granularity.m"
                case (MR_Integer) 0:
#line 330 "distance_granularity.m"
                  {
#line 330 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__GoalExpr_133;

#line 331 "distance_granularity.m"
                    {
#line 331 "distance_granularity.m"
                      transform_hlds__distance_granularity__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 331 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 331 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 331 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_55));
#line 331 "distance_granularity.m"
                    }
#line 332 "distance_granularity.m"
                    {
#line 332 "distance_granularity.m"
                      MR_Word base;
#line 332 "distance_granularity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "distance_granularity.m"
                      *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 332 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_133));
#line 332 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 332 "distance_granularity.m"
                    }
#line 330 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 330 "distance_granularity.m"
                  }
#line 333 "distance_granularity.m"
                  break;
#line 333 "distance_granularity.m"
              }
#line 344 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 325 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 3:
#line 346 "distance_granularity.m"
            {
#line 346 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_136;
#line 346 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 346 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_138;

#line 347 "distance_granularity.m"
              {
#line 347 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(transform_hlds__distance_granularity__Goals0_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_138, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
#line 350 "distance_granularity.m"
              {
#line 350 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 350 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_138));
#line 350 "distance_granularity.m"
              }
#line 351 "distance_granularity.m"
              {
#line 351 "distance_granularity.m"
                MR_Word base;
#line 351 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 351 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_136));
#line 351 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 351 "distance_granularity.m"
              }
#line 352 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 346 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 4:
#line 354 "distance_granularity.m"
            {
#line 354 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 354 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 354 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 354 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases_60;
#line 354 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_139;

#line 355 "distance_granularity.m"
              {
#line 355 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(transform_hlds__distance_granularity__Cases0_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_60, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
#line 358 "distance_granularity.m"
              {
#line 358 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_57));
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_58));
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_60));
#line 358 "distance_granularity.m"
              }
#line 359 "distance_granularity.m"
              {
#line 359 "distance_granularity.m"
                MR_Word base;
#line 359 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 359 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_139));
#line 359 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 359 "distance_granularity.m"
              }
#line 360 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 354 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 5:
#line 370 "distance_granularity.m"
            {
#line 370 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 370 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 371 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_100_100;
#line 371 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_64_64;

#line 371 "distance_granularity.m"
              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 371 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 371 "distance_granularity.m"
                {
#line 371 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 1)));
#line 371 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 2)));
#line 371 "distance_granularity.m"
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_100_100 == (MR_Integer) 1);
#line 371 "distance_granularity.m"
                }
#line 374 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 373 "distance_granularity.m"
                {
#line 373 "distance_granularity.m"
                  *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 373 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 373 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 373 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 373 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 373 "distance_granularity.m"
                }
#line 374 "distance_granularity.m"
              else
#line 378 "distance_granularity.m"
                {
#line 378 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_141;
#line 378 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__SubGoal_142;

#line 375 "distance_granularity.m"
                  {
#line 375 "distance_granularity.m"
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_146, &transform_hlds__distance_granularity__SubGoal_142, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
                  }
#line 379 "distance_granularity.m"
                  {
#line 379 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 379 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 379 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_63));
#line 379 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_142));
#line 379 "distance_granularity.m"
                  }
#line 380 "distance_granularity.m"
                  {
#line 380 "distance_granularity.m"
                    MR_Word base;
#line 380 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 380 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_141));
#line 380 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 380 "distance_granularity.m"
                  }
#line 378 "distance_granularity.m"
                }
#line 370 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 6:
#line 383 "distance_granularity.m"
            {
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 4)));
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond_69;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then_71;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else_73;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_148;
#line 384 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_70_70;
#line 387 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_72_72;
#line 390 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_74_74;

#line 384 "distance_granularity.m"
              {
#line 384 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Cond0_66, &transform_hlds__distance_granularity__Cond_69, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__V_70_70);
              }
#line 387 "distance_granularity.m"
              {
#line 387 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Then0_67, &transform_hlds__distance_granularity__Then_71, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, &transform_hlds__distance_granularity__V_72_72);
              }
#line 390 "distance_granularity.m"
              {
#line 390 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Else0_68, &transform_hlds__distance_granularity__Else_73, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, &transform_hlds__distance_granularity__V_74_74);
              }
#line 393 "distance_granularity.m"
              {
#line 393 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_65));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_69));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_71));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_73));
#line 393 "distance_granularity.m"
              }
#line 394 "distance_granularity.m"
              {
#line 394 "distance_granularity.m"
                MR_Word base;
#line 394 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 394 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_148));
#line 394 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 394 "distance_granularity.m"
              }
#line 395 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 383 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
          case (MR_Integer) 7:
#line 397 "distance_granularity.m"
            {
#line 399 "distance_granularity.m"
              {
#line 399 "distance_granularity.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_goal\'/15", (MR_String) "shorthand");
#line 399 "distance_granularity.m"
                return;
              }
#line 397 "distance_granularity.m"
            }
#line 311 "distance_granularity.m"
            break;
#line 311 "distance_granularity.m"
        }
#line 311 "distance_granularity.m"
        break;
#line 311 "distance_granularity.m"
    }
#line 306 "distance_granularity.m"
  }
#line 299 "distance_granularity.m"
}

#line 255 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 255 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 255 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 255 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 255 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 255 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11)
#line 255 "distance_granularity.m"
{
#line 259 "distance_granularity.m"
  while (MR_TRUE)
#line 259 "distance_granularity.m"
    {
#line 259 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 259 "distance_granularity.m"
      {
#line 259 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 259 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "distance_granularity.m"
          {
#line 260 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 260 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 260 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 259 "distance_granularity.m"
          }
#line 259 "distance_granularity.m"
        else
#line 262 "distance_granularity.m"
          {
#line 262 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_34;
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HasParallelConj_35;
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_51_51;
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;
#line 262 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;

#line 263 "distance_granularity.m"
            {
#line 263 "distance_granularity.m"
              transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 263 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_26));
#line 263 "distance_granularity.m"
            }
#line 263 "distance_granularity.m"
            {
#line 263 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__distance_granularity__V_51_51, &transform_hlds__distance_granularity__ProcInfo0_34);
            }
#line 264 "distance_granularity.m"
            {
#line 264 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__HasParallelConj_35);
            }
#line 288 "distance_granularity.m"
#line 288 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__HasParallelConj_35) {
#line 288 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 288 "distance_granularity.m"
              case (MR_Integer) 1:
#line 289 "distance_granularity.m"
                {
#line 289 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 289 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 289 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 289 "distance_granularity.m"
                }
#line 288 "distance_granularity.m"
                break;
#line 288 "distance_granularity.m"
              case (MR_Integer) 0:
#line 266 "distance_granularity.m"
                {
#line 266 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Body_36;
#line 266 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__BodyClone_37;
#line 266 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__ProcInfo1_38;
#line 266 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_39;
#line 266 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 270 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_40_40;

#line 269 "distance_granularity.m"
                  {
#line 269 "distance_granularity.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__Body_36);
                  }
#line 270 "distance_granularity.m"
                  {
#line 270 "distance_granularity.m"
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Body_36, &transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__ProcInfo1_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, transform_hlds__distance_granularity__HeadVar__3_3, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MaybeGranularityVar_39, &transform_hlds__distance_granularity__V_40_40);
                  }
#line 285 "distance_granularity.m"
                  if ((transform_hlds__distance_granularity__MaybeGranularityVar_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "distance_granularity.m"
                    {
#line 286 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 286 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 286 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 286 "distance_granularity.m"
                    }
#line 285 "distance_granularity.m"
                  else
#line 274 "distance_granularity.m"
                    {
#line 274 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo2_42;
#line 274 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo3_43;
#line 274 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo_44;

#line 277 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = (MR_Integer) 1;
#line 278 "distance_granularity.m"
                      {
#line 278 "distance_granularity.m"
                        hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__ProcInfo1_38, &transform_hlds__distance_granularity__ProcInfo2_42);
                      }
#line 279 "distance_granularity.m"
                      {
#line 279 "distance_granularity.m"
                        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_42, &transform_hlds__distance_granularity__ProcInfo3_43);
                      }
#line 281 "distance_granularity.m"
                      {
#line 281 "distance_granularity.m"
                        check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_43, &transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58);
                      }
#line 284 "distance_granularity.m"
                      {
#line 284 "distance_granularity.m"
                        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59);
                      }
#line 274 "distance_granularity.m"
                    }
#line 266 "distance_granularity.m"
                }
#line 288 "distance_granularity.m"
                break;
#line 288 "distance_granularity.m"
            }
#line 293 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 293 "distance_granularity.m"
            {
#line 293 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_27;
#line 293 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;
#line 293 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 293 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;

#line 293 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 293 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8;
#line 293 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 293 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 293 "distance_granularity.m"
            }
#line 293 "distance_granularity.m"
            continue;
#line 262 "distance_granularity.m"
          }
#line 259 "distance_granularity.m"
      }
#line 259 "distance_granularity.m"
      break;
#line 259 "distance_granularity.m"
    }
#line 255 "distance_granularity.m"
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
#line 244 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__Specialized_24) {
#line 244 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 244 "distance_granularity.m"
              case (MR_Integer) 0:
#line 245 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
#line 244 "distance_granularity.m"
                break;
#line 244 "distance_granularity.m"
              case (MR_Integer) 1:
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
#line 237 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_36_36;

#line 216 "distance_granularity.m"
                  {
#line 216 "distance_granularity.m"
                    transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0((MR_String) "DistanceGranularityFor", transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__PredName0_20, &transform_hlds__distance_granularity__PredName_25);
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
#line 244 "distance_granularity.m"
                break;
#line 244 "distance_granularity.m"
            }
#line 248 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 248 "distance_granularity.m"
            {
#line 248 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__PredIdList_10;
#line 248 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

#line 248 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 248 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 248 "distance_granularity.m"
            }
#line 248 "distance_granularity.m"
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

#line 180 "distance_granularity.m"
    {
#line 180 "distance_granularity.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__distance_granularity__PredIds_6);
    }
#line 181 "distance_granularity.m"
    {
#line 181 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(transform_hlds__distance_granularity__PredIds_6, transform_hlds__distance_granularity__Distance_5, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8);
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
