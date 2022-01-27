/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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




#line 549 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 549 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 549 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 549 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45);

#line 1025 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1025 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1025 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1025 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1025 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 1005 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1005 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1005 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1005 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1005 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10);

#line 952 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 952 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 952 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 952 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 952 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 863 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 863 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 863 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 863 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 863 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16);

#line 838 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 838 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 838 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 838 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9);

#line 814 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
#line 814 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__Prefix_5,
#line 814 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_6,
#line 814 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
#line 814 "distance_granularity.m"
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11);

#line 790 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 790 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 790 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 768 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 768 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 768 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14);

#line 655 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 655 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 655 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 655 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 655 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 655 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71);

#line 643 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 643 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 643 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 643 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);

#line 493 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 493 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 493 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 493 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 493 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19);

#line 458 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 458 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 458 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17);

#line 403 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 403 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24);

#line 298 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 298 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 298 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);

#line 254 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 254 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11);

#line 185 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
#line 185 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 185 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
#line 185 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
#line 185 "distance_granularity.m"
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



#line 549 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40,
#line 549 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42,
#line 549 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43,
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 549 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 549 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44,
#line 549 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45)
#line 549 "distance_granularity.m"
{
#line 613 "distance_granularity.m"
  while (MR_TRUE)
#line 613 "distance_granularity.m"
    {
#line 613 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 613 "distance_granularity.m"
      {
#line 613 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 613 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 555 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_46_46;

#line 555 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 555 "distance_granularity.m"
          {
#line 555 "distance_granularity.m"
            transform_hlds__distance_granularity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 1)));
#line 555 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40, (MR_Integer) 2)));
#line 555 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_46_46 == (MR_Integer) 1);
#line 555 "distance_granularity.m"
          }
#line 613 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 556 "distance_granularity.m"
          {
#line 556 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 556 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 556 "distance_granularity.m"
            {
#line 556 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 557 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 > transform_hlds__distance_granularity__Length_19);
#line 559 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 558 "distance_granularity.m"
              {
#line 558 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_45 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 558 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_43 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42;
#line 558 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_41 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 558 "distance_granularity.m"
              }
#line 559 "distance_granularity.m"
            else
#line 560 "distance_granularity.m"
              {
#line 560 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 560 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 560 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 560 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;
#line 560 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 560 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 560 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 607 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 607 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 607 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 607 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 607 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 563 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 560 "distance_granularity.m"
                {
#line 560 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 560 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 561 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 561 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 563 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 563 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 563 "distance_granularity.m"
                  {
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 563 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 566 "distance_granularity.m"
                    {
#line 566 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 566 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 566 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 602 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 571 "distance_granularity.m"
                      {
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_31;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MerInst_34;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_36;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_37;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__PlainConj_38;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_39;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_47_47;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_50_50;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_54_54;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_55_55;
#line 571 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_56_56;

#line 570 "distance_granularity.m"
                        {
#line 570 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_47_47 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 570 "distance_granularity.m"
                        {
#line 570 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49);
                        }
#line 572 "distance_granularity.m"
                        {
#line 572 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 575 "distance_granularity.m"
                        {
#line 575 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 575 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "distance_granularity.m"
                        }
#line 575 "distance_granularity.m"
                        {
#line 575 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_50_50, &transform_hlds__distance_granularity__CallArgs_31);
                        }
#line 582 "distance_granularity.m"
                        {
#line 582 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_31));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 582 "distance_granularity.m"
                        }
#line 586 "distance_granularity.m"
                        {
#line 586 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 588 "distance_granularity.m"
                        {
#line 588 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_56_56, 1) = ((MR_Box) (transform_hlds__distance_granularity__Distance_16));
#line 588 "distance_granularity.m"
                        }
#line 588 "distance_granularity.m"
                        {
#line 588 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_56_56));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "distance_granularity.m"
                        }
#line 588 "distance_granularity.m"
                        {
#line 588 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_55_55));
#line 588 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "distance_granularity.m"
                        }
#line 587 "distance_granularity.m"
                        {
#line 587 "distance_granularity.m"
                          transform_hlds__distance_granularity__MerInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 587 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 587 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 1) = ((MR_Box) ((MR_Integer) 0));
#line 587 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 587 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__MerInst_34, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_54_54));
#line 587 "distance_granularity.m"
                        }
#line 589 "distance_granularity.m"
                        {
#line 589 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__MerInst_34, transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
                        }
#line 591 "distance_granularity.m"
                        {
#line 591 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_36);
                        }
#line 594 "distance_granularity.m"
                        {
#line 594 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 594 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_36));
#line 594 "distance_granularity.m"
                        }
#line 596 "distance_granularity.m"
                        {
#line 596 "distance_granularity.m"
                          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_30, transform_hlds__distance_granularity__Goal_37, (MR_Integer) 0, &transform_hlds__distance_granularity__PlainConj_38);
                        }
#line 599 "distance_granularity.m"
                        {
#line 599 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_72_72, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42, ((MR_Box) (transform_hlds__distance_granularity__PlainConj_38)), &transform_hlds__distance_granularity__Goals_39);
                        }
#line 601 "distance_granularity.m"
                        {
#line 601 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 601 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 601 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 1) = ((MR_Box) ((MR_Integer) 1));
#line 601 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_39));
#line 601 "distance_granularity.m"
                        }
#line 571 "distance_granularity.m"
                      }
#line 602 "distance_granularity.m"
                    else
#line 604 "distance_granularity.m"
                      {
#line 604 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 604 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 604 "distance_granularity.m"
                      }
#line 606 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 563 "distance_granularity.m"
                  }
#line 563 "distance_granularity.m"
                else
#line 608 "distance_granularity.m"
                  {
#line 608 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 + (MR_Integer) 1);
#line 608 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44;
#line 608 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40;
#line 608 "distance_granularity.m"
                  }
#line 610 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 610 "distance_granularity.m"
                {
#line 610 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_60_60;
#line 610 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_62_62;
#line 610 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_49_49;

#line 610 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_44 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_44;
#line 610 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_42 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_42;
#line 610 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_40 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_40;
#line 610 "distance_granularity.m"
                }
#line 610 "distance_granularity.m"
                continue;
#line 560 "distance_granularity.m"
              }
#line 556 "distance_granularity.m"
          }
#line 613 "distance_granularity.m"
        else
#line 615 "distance_granularity.m"
          {
#line 615 "distance_granularity.m"
            {
#line 615 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_then2\'/10", (MR_String) "unexpected goal type");
#line 615 "distance_granularity.m"
              return;
            }
#line 615 "distance_granularity.m"
          }
#line 613 "distance_granularity.m"
      }
#line 613 "distance_granularity.m"
      break;
#line 613 "distance_granularity.m"
    }
#line 549 "distance_granularity.m"
}

#line 1025 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 1025 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1025 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1025 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1025 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1025 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1025 "distance_granularity.m"
{
#line 1030 "distance_granularity.m"
  while (MR_TRUE)
#line 1030 "distance_granularity.m"
    {
#line 1030 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1030 "distance_granularity.m"
      {
#line 1030 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1030 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "distance_granularity.m"
          {
#line 1031 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1030 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 1030 "distance_granularity.m"
          }
#line 1030 "distance_granularity.m"
        else
#line 1034 "distance_granularity.m"
          {
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 0)));
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 1)));
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_22, (MR_Integer) 2)));
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_34;
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1034 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_41_41;

#line 1036 "distance_granularity.m"
            {
#line 1036 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_33, &transform_hlds__distance_granularity__Goal_34, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1038 "distance_granularity.m"
            {
#line 1038 "distance_granularity.m"
              transform_hlds__distance_granularity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_31));
#line 1038 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_32));
#line 1038 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_41_41, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_34));
#line 1038 "distance_granularity.m"
            }
#line 1038 "distance_granularity.m"
            {
#line 1038 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 1038 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 1038 "distance_granularity.m"
            }
#line 1039 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1039 "distance_granularity.m"
            {
#line 1039 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_23;
#line 1039 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_40_40;
#line 1039 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_39_39;

#line 1039 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1039 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 1039 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1039 "distance_granularity.m"
            }
#line 1039 "distance_granularity.m"
            continue;
#line 1034 "distance_granularity.m"
          }
#line 1030 "distance_granularity.m"
      }
#line 1030 "distance_granularity.m"
      break;
#line 1030 "distance_granularity.m"
    }
#line 1025 "distance_granularity.m"
}

#line 1005 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 1005 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 1005 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 1005 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 1005 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 1005 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__10_10)
#line 1005 "distance_granularity.m"
{
#line 1009 "distance_granularity.m"
  while (MR_TRUE)
#line 1009 "distance_granularity.m"
    {
#line 1009 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 1009 "distance_granularity.m"
      {
#line 1009 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 1009 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "distance_granularity.m"
          {
#line 1010 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 1009 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 1009 "distance_granularity.m"
          }
#line 1009 "distance_granularity.m"
        else
#line 1014 "distance_granularity.m"
          {
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_31;
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_37_37;
#line 1014 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;

#line 1015 "distance_granularity.m"
            {
#line 1015 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Goal0_22, &transform_hlds__distance_granularity__Goal_31, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, transform_hlds__distance_granularity__HeadVar__10_10);
            }
#line 1017 "distance_granularity.m"
            {
#line 1017 "distance_granularity.m"
              transform_hlds__distance_granularity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_31));
#line 1017 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "distance_granularity.m"
            }
#line 1017 "distance_granularity.m"
            {
#line 1017 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_37_37, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38);
            }
#line 1018 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 1018 "distance_granularity.m"
            {
#line 1018 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_23;
#line 1018 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_38_38;
#line 1018 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 1018 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 1018 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 1018 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 1018 "distance_granularity.m"
            }
#line 1018 "distance_granularity.m"
            continue;
#line 1014 "distance_granularity.m"
          }
#line 1009 "distance_granularity.m"
      }
#line 1009 "distance_granularity.m"
      break;
#line 1009 "distance_granularity.m"
    }
#line 1005 "distance_granularity.m"
}

#line 952 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38,
#line 952 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 952 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 952 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40,
#line 952 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41,
#line 952 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 952 "distance_granularity.m"
{
#line 958 "distance_granularity.m"
  {
#line 958 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 958 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 0)));
#line 958 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38, (MR_Integer) 1)));
#line 958 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 0)));
#line 958 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 1)));
#line 958 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 2)));
#line 958 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 3)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 4)));
#line 960 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr0_17, (MR_Integer) 5)));

#line 963 "distance_granularity.m"
    {
#line 963 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_19, transform_hlds__distance_granularity__CallerPredId_11);
    }
#line 963 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 964 "distance_granularity.m"
      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_20 == transform_hlds__distance_granularity__CallerProcId_12);
#line 998 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 970 "distance_granularity.m"
      {
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Var_25;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__UnifyGoal_26;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallArgs_27;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallExpr_29;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_30;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_31;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo1_32;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta0_33;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__InstMapDelta_35;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__CallInfo_36;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Call_37;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_42_42;
#line 970 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_45_45;

#line 970 "distance_granularity.m"
        {
#line 970 "distance_granularity.m"
          transform_hlds__distance_granularity__V_42_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 970 "distance_granularity.m"
        {
#line 970 "distance_granularity.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_42_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41);
        }
#line 971 "distance_granularity.m"
        {
#line 971 "distance_granularity.m"
          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__Distance_16, &transform_hlds__distance_granularity__UnifyGoal_26);
        }
#line 972 "distance_granularity.m"
        {
#line 972 "distance_granularity.m"
          transform_hlds__distance_granularity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_25));
#line 972 "distance_granularity.m"
          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "distance_granularity.m"
        }
#line 972 "distance_granularity.m"
        {
#line 972 "distance_granularity.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_21, transform_hlds__distance_granularity__V_45_45, &transform_hlds__distance_granularity__CallArgs_27);
        }
#line 980 "distance_granularity.m"
        {
#line 980 "distance_granularity.m"
          transform_hlds__distance_granularity__CallExpr_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_13));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_20));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_22));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__CallExpr_29, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_14));
#line 980 "distance_granularity.m"
        }
#line 985 "distance_granularity.m"
        {
#line 985 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__CallInfo0_18);
        }
#line 986 "distance_granularity.m"
        {
#line 986 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__Var_25, transform_hlds__distance_granularity__NonLocals0_30, &transform_hlds__distance_granularity__NonLocals_31);
        }
#line 987 "distance_granularity.m"
        {
#line 987 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_31, transform_hlds__distance_granularity__CallInfo0_18, &transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 988 "distance_granularity.m"
        {
#line 988 "distance_granularity.m"
          transform_hlds__distance_granularity__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__CallInfo1_32);
        }
#line 990 "distance_granularity.m"
        {
#line 990 "distance_granularity.m"
          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_25, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_33, &transform_hlds__distance_granularity__InstMapDelta_35);
        }
#line 991 "distance_granularity.m"
        {
#line 991 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_35, transform_hlds__distance_granularity__CallInfo1_32, &transform_hlds__distance_granularity__CallInfo_36);
        }
#line 992 "distance_granularity.m"
        {
#line 992 "distance_granularity.m"
          transform_hlds__distance_granularity__Call_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 0) = ((MR_Box) (transform_hlds__distance_granularity__CallExpr_29));
#line 992 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Call_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallInfo_36));
#line 992 "distance_granularity.m"
        }
#line 997 "distance_granularity.m"
        {
#line 997 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_26, transform_hlds__distance_granularity__Call_37, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39);
#line 997 "distance_granularity.m"
          return;
        }
#line 970 "distance_granularity.m"
      }
#line 998 "distance_granularity.m"
    else
#line 999 "distance_granularity.m"
      {
#line 999 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_41 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_40;
#line 999 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_39 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_38;
#line 999 "distance_granularity.m"
      }
#line 958 "distance_granularity.m"
  }
#line 952 "distance_granularity.m"
}

#line 863 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63,
#line 863 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 863 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_13,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_14,
#line 863 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65,
#line 863 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66,
#line 863 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16)
#line 863 "distance_granularity.m"
{
#line 868 "distance_granularity.m"
  {
#line 868 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 868 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 0)));
#line 868 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, (MR_Integer) 1)));

#line 872 "distance_granularity.m"
#line 872 "distance_granularity.m"
    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17)) {
#line 872 "distance_granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 872 "distance_granularity.m"
      case (MR_Integer) 0:
#line 915 "distance_granularity.m"
        {
#line 915 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_17), (MR_Integer) 0);
#line 915 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal_52;
#line 915 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_95;

#line 916 "distance_granularity.m"
          {
#line 916 "distance_granularity.m"
            transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_51, &transform_hlds__distance_granularity__SubGoal_52, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
          }
#line 919 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_52);
#line 920 "distance_granularity.m"
          {
#line 920 "distance_granularity.m"
            MR_Word base;
#line 920 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 920 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_95));
#line 920 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 920 "distance_granularity.m"
          }
#line 915 "distance_granularity.m"
        }
#line 872 "distance_granularity.m"
        break;
#line 872 "distance_granularity.m"
      case (MR_Integer) 1:
#line 871 "distance_granularity.m"
        {
#line 871 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 871 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 871 "distance_granularity.m"
        }
#line 872 "distance_granularity.m"
        break;
#line 872 "distance_granularity.m"
      case (MR_Integer) 2:
#line 877 "distance_granularity.m"
        {
#line 877 "distance_granularity.m"
          transform_hlds__distance_granularity__update_original_predicate_plain_call_9_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
#line 877 "distance_granularity.m"
          return;
        }
#line 872 "distance_granularity.m"
        break;
#line 872 "distance_granularity.m"
      case (MR_Integer) 3:
#line 872 "distance_granularity.m"
#line 872 "distance_granularity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 0)))) {
#line 872 "distance_granularity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 872 "distance_granularity.m"
          case (MR_Integer) 0:
#line 882 "distance_granularity.m"
            {
#line 882 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 882 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 882 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 1:
#line 880 "distance_granularity.m"
            {
#line 880 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 880 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 880 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 2:
#line 884 "distance_granularity.m"
            {
#line 884 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 884 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 884 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals1_44;
#line 884 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_45;
#line 884 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_46;

#line 885 "distance_granularity.m"
              {
#line 885 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals1_44, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 891 "distance_granularity.m"
#line 891 "distance_granularity.m"
              switch (transform_hlds__distance_granularity__Type_42) {
#line 891 "distance_granularity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 891 "distance_granularity.m"
                case (MR_Integer) 1:
#line 896 "distance_granularity.m"
                  transform_hlds__distance_granularity__Goals_45 = transform_hlds__distance_granularity__Goals1_44;
#line 891 "distance_granularity.m"
                  break;
#line 891 "distance_granularity.m"
                case (MR_Integer) 0:
#line 890 "distance_granularity.m"
                  {
#line 890 "distance_granularity.m"
                    hlds__goal_util__flatten_conj_2_p_0(transform_hlds__distance_granularity__Goals1_44, &transform_hlds__distance_granularity__Goals_45);
                  }
#line 891 "distance_granularity.m"
                  break;
#line 891 "distance_granularity.m"
              }
#line 898 "distance_granularity.m"
              {
#line 898 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 898 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 898 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 1) = ((MR_Box) (transform_hlds__distance_granularity__Type_42));
#line 898 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_46, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_45));
#line 898 "distance_granularity.m"
              }
#line 899 "distance_granularity.m"
              {
#line 899 "distance_granularity.m"
                MR_Word base;
#line 899 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 899 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_46));
#line 899 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 899 "distance_granularity.m"
              }
#line 884 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 3:
#line 901 "distance_granularity.m"
            {
#line 901 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 901 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_92;
#line 901 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_93;

#line 902 "distance_granularity.m"
              {
#line 902 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goals_10_p_0(transform_hlds__distance_granularity__Goals0_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_92, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 905 "distance_granularity.m"
              {
#line 905 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 905 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_93, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_92));
#line 905 "distance_granularity.m"
              }
#line 906 "distance_granularity.m"
              {
#line 906 "distance_granularity.m"
                MR_Word base;
#line 906 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 906 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_93));
#line 906 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 906 "distance_granularity.m"
              }
#line 901 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 4:
#line 908 "distance_granularity.m"
            {
#line 908 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 908 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__CanFail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 908 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 908 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases_50;
#line 908 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_94;

#line 909 "distance_granularity.m"
              {
#line 909 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_switch_10_p_0(transform_hlds__distance_granularity__Cases0_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_50, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 912 "distance_granularity.m"
              {
#line 912 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 912 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 912 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_47));
#line 912 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_48));
#line 912 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_94, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_50));
#line 912 "distance_granularity.m"
              }
#line 913 "distance_granularity.m"
              {
#line 913 "distance_granularity.m"
                MR_Word base;
#line 913 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_94));
#line 913 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 913 "distance_granularity.m"
              }
#line 908 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 5:
#line 922 "distance_granularity.m"
            {
#line 922 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 922 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 923 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_74_74;
#line 923 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_54_54;

#line 923 "distance_granularity.m"
              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 923 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 923 "distance_granularity.m"
                {
#line 923 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 1)));
#line 923 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_53, (MR_Integer) 2)));
#line 923 "distance_granularity.m"
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_74_74 == (MR_Integer) 1);
#line 923 "distance_granularity.m"
                }
#line 926 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 925 "distance_granularity.m"
                {
#line 925 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65;
#line 925 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_63;
#line 925 "distance_granularity.m"
                }
#line 926 "distance_granularity.m"
              else
#line 929 "distance_granularity.m"
                {
#line 929 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_96;
#line 929 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__SubGoal_97;

#line 927 "distance_granularity.m"
                  {
#line 927 "distance_granularity.m"
                    transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__SubGoal0_101, &transform_hlds__distance_granularity__SubGoal_97, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
                  }
#line 930 "distance_granularity.m"
                  {
#line 930 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 930 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 930 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_53));
#line 930 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_96, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_97));
#line 930 "distance_granularity.m"
                  }
#line 931 "distance_granularity.m"
                  {
#line 931 "distance_granularity.m"
                    MR_Word base;
#line 931 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 931 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_96));
#line 931 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 931 "distance_granularity.m"
                  }
#line 929 "distance_granularity.m"
                }
#line 922 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 6:
#line 934 "distance_granularity.m"
            {
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 1)));
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 2)));
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 3)));
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_17, (MR_Integer) 4)));
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond_59;
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then_60;
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else_61;
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70;
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71;
#line 934 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_103;

#line 935 "distance_granularity.m"
              {
#line 935 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Cond0_56, &transform_hlds__distance_granularity__Cond_59, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_65, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__distance_granularity__Distance_16);
              }
#line 937 "distance_granularity.m"
              {
#line 937 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Then0_57, &transform_hlds__distance_granularity__Then_60, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__Distance_16);
              }
#line 939 "distance_granularity.m"
              {
#line 939 "distance_granularity.m"
                transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Else0_58, &transform_hlds__distance_granularity__Else_61, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__PredIdSpecialized_13, transform_hlds__distance_granularity__SymNameSpecialized_14, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71_71, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_66, transform_hlds__distance_granularity__Distance_16);
              }
#line 941 "distance_granularity.m"
              {
#line 941 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 941 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 941 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_55));
#line 941 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_59));
#line 941 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_60));
#line 941 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_103, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_61));
#line 941 "distance_granularity.m"
              }
#line 942 "distance_granularity.m"
              {
#line 942 "distance_granularity.m"
                MR_Word base;
#line 942 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_64 = base;
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_103));
#line 942 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_18));
#line 942 "distance_granularity.m"
              }
#line 934 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
          case (MR_Integer) 7:
#line 944 "distance_granularity.m"
            {
#line 946 "distance_granularity.m"
              {
#line 946 "distance_granularity.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.update_original_predicate_goal\'/9", (MR_String) "shorthand");
#line 946 "distance_granularity.m"
                return;
              }
#line 944 "distance_granularity.m"
            }
#line 872 "distance_granularity.m"
            break;
#line 872 "distance_granularity.m"
        }
#line 872 "distance_granularity.m"
        break;
#line 872 "distance_granularity.m"
    }
#line 868 "distance_granularity.m"
  }
#line 863 "distance_granularity.m"
}

#line 838 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 838 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 838 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 838 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8,
#line 838 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9)
#line 838 "distance_granularity.m"
{
#line 842 "distance_granularity.m"
  while (MR_TRUE)
#line 842 "distance_granularity.m"
    {
#line 842 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 842 "distance_granularity.m"
      {
#line 842 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 842 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "distance_granularity.m"
          {
#line 843 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8;
#line 843 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 842 "distance_granularity.m"
          }
#line 842 "distance_granularity.m"
        else
#line 846 "distance_granularity.m"
          {
#line 846 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_28;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body0_29;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Body_30;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo1_31;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo2_32;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo3_33;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo_34;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_39_39;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;
#line 846 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;

#line 847 "distance_granularity.m"
            {
#line 847 "distance_granularity.m"
              transform_hlds__distance_granularity__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 847 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_39_39, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_21));
#line 847 "distance_granularity.m"
            }
#line 847 "distance_granularity.m"
            {
#line 847 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__distance_granularity__V_39_39, &transform_hlds__distance_granularity__ProcInfo0_28);
            }
#line 848 "distance_granularity.m"
            {
#line 848 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__Body0_29);
            }
#line 849 "distance_granularity.m"
            {
#line 849 "distance_granularity.m"
              transform_hlds__distance_granularity__update_original_predicate_goal_9_p_0(transform_hlds__distance_granularity__Body0_29, &transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_28, &transform_hlds__distance_granularity__ProcInfo1_31, transform_hlds__distance_granularity__HeadVar__3_3);
            }
#line 851 "distance_granularity.m"
            {
#line 851 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__Body_30, transform_hlds__distance_granularity__ProcInfo1_31, &transform_hlds__distance_granularity__ProcInfo2_32);
            }
#line 852 "distance_granularity.m"
            {
#line 852 "distance_granularity.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_32, &transform_hlds__distance_granularity__ProcInfo3_33);
            }
#line 854 "distance_granularity.m"
            {
#line 854 "distance_granularity.m"
              check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_33, &transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 856 "distance_granularity.m"
            {
#line 856 "distance_granularity.m"
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_21, transform_hlds__distance_granularity__ProcInfo_34, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43);
            }
#line 857 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 857 "distance_granularity.m"
            {
#line 857 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_22;
#line 857 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_43_43;
#line 857 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42_42;

#line 857 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 857 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 857 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 857 "distance_granularity.m"
            }
#line 857 "distance_granularity.m"
            continue;
#line 846 "distance_granularity.m"
          }
#line 842 "distance_granularity.m"
      }
#line 842 "distance_granularity.m"
      break;
#line 842 "distance_granularity.m"
    }
#line 838 "distance_granularity.m"
}

#line 814 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0(
#line 814 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__Prefix_5,
#line 814 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_6,
#line 814 "distance_granularity.m"
  MR_String transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10,
#line 814 "distance_granularity.m"
  MR_String * transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11)
#line 814 "distance_granularity.m"
{
#line 817 "distance_granularity.m"
  {
#line 817 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__PredIdStr_9;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_23_23;
#line 817 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_29_29;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_31_31;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_32_32;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_39_39;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_41_41;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_42_42;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_49_49;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_51_51;
#line 817 "distance_granularity.m"
    MR_String transform_hlds__distance_granularity__V_52_52;

#line 819 "distance_granularity.m"
    {
#line 819 "distance_granularity.m"
      mercury__string__int_to_string_2_p_0(transform_hlds__distance_granularity__Distance_6, &transform_hlds__distance_granularity__PredIdStr_9);
    }
#line 2178 "transform_hlds.distance_granularity.c"
    transform_hlds__distance_granularity__V_29_29 = (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[3];
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__PredIdStr_9, &transform_hlds__distance_granularity__V_23_23);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      transform_hlds__distance_granularity__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_23_23);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__STATE_VARIABLE_PredName_0_10, &transform_hlds__distance_granularity__V_32_32);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      transform_hlds__distance_granularity__V_39_39 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_32_32, transform_hlds__distance_granularity__V_31_31);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      transform_hlds__distance_granularity__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_39_39);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, (MR_String) "pred", &transform_hlds__distance_granularity__V_42_42);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      transform_hlds__distance_granularity__V_49_49 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_42_42, transform_hlds__distance_granularity__V_41_41);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      transform_hlds__distance_granularity__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "__", transform_hlds__distance_granularity__V_49_49);
    }
#line 821 "distance_granularity.m"
    {
#line 821 "distance_granularity.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__distance_granularity__V_29_29, transform_hlds__distance_granularity__Prefix_5, &transform_hlds__distance_granularity__V_52_52);
    }
#line 820 "distance_granularity.m"
    {
#line 820 "distance_granularity.m"
      *transform_hlds__distance_granularity__STATE_VARIABLE_PredName_11 = mercury__string__f_43_43_2_f_0(transform_hlds__distance_granularity__V_52_52, transform_hlds__distance_granularity__V_51_51);
    }
#line 817 "distance_granularity.m"
  }
#line 814 "distance_granularity.m"
}

#line 790 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 790 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 790 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 790 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 790 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 790 "distance_granularity.m"
{
#line 796 "distance_granularity.m"
  while (MR_TRUE)
#line 796 "distance_granularity.m"
    {
#line 796 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 796 "distance_granularity.m"
      {
#line 796 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 796 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "distance_granularity.m"
          {
#line 798 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 797 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 797 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 796 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2;
#line 796 "distance_granularity.m"
          }
#line 796 "distance_granularity.m"
        else
#line 801 "distance_granularity.m"
          {
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 0)));
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 1)));
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Case_32, (MR_Integer) 2)));
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_46;
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 801 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_61_61;
#line 803 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_47_47;

#line 803 "distance_granularity.m"
            {
#line 803 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_45, &transform_hlds__distance_granularity__Goal_46, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59, &transform_hlds__distance_granularity__V_47_47);
            }
#line 806 "distance_granularity.m"
            {
#line 806 "distance_granularity.m"
              transform_hlds__distance_granularity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 806 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 0) = ((MR_Box) (transform_hlds__distance_granularity__MainConsId_43));
#line 806 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 1) = ((MR_Box) (transform_hlds__distance_granularity__OtherConsIds_44));
#line 806 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_61_61, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goal_46));
#line 806 "distance_granularity.m"
            }
#line 806 "distance_granularity.m"
            {
#line 806 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_61_61));
#line 806 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60, 1) = ((MR_Box) (transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2));
#line 806 "distance_granularity.m"
            }
#line 807 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 807 "distance_granularity.m"
            {
#line 807 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Cases_33;
#line 807 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_60_60;
#line 807 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_56_56;
#line 807 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_57_57;
#line 807 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_59_59;

#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_CasesAcc_0__tmp_copy_2;
#line 807 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 807 "distance_granularity.m"
            }
#line 807 "distance_granularity.m"
            continue;
#line 801 "distance_granularity.m"
          }
#line 796 "distance_granularity.m"
      }
#line 796 "distance_granularity.m"
      break;
#line 796 "distance_granularity.m"
    }
#line 790 "distance_granularity.m"
}

#line 768 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 768 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 768 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 768 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13,
#line 768 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14)
#line 768 "distance_granularity.m"
{
#line 774 "distance_granularity.m"
  while (MR_TRUE)
#line 774 "distance_granularity.m"
    {
#line 774 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 774 "distance_granularity.m"
      {
#line 774 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 774 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "distance_granularity.m"
          {
#line 776 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13;
#line 775 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 775 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 774 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 774 "distance_granularity.m"
          }
#line 774 "distance_granularity.m"
        else
#line 779 "distance_granularity.m"
          {
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_43;
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_57_57;
#line 779 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 780 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_44_44;

#line 780 "distance_granularity.m"
            {
#line 780 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_32, &transform_hlds__distance_granularity__Goal_43, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54, transform_hlds__distance_granularity__HeadVar__12_12, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56, &transform_hlds__distance_granularity__V_44_44);
            }
#line 783 "distance_granularity.m"
            {
#line 783 "distance_granularity.m"
              transform_hlds__distance_granularity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_43));
#line 783 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "distance_granularity.m"
            }
#line 783 "distance_granularity.m"
            {
#line 783 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_57_57, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58);
            }
#line 784 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 784 "distance_granularity.m"
            {
#line 784 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_33;
#line 784 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_58_58;
#line 784 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_53_53;
#line 784 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_54_54;
#line 784 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_56_56;

#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_13 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_13;
#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 784 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 784 "distance_granularity.m"
            }
#line 784 "distance_granularity.m"
            continue;
#line 779 "distance_granularity.m"
          }
#line 774 "distance_granularity.m"
      }
#line 774 "distance_granularity.m"
      break;
#line 774 "distance_granularity.m"
    }
#line 768 "distance_granularity.m"
}

#line 655 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66,
#line 655 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67,
#line 655 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68,
#line 655 "distance_granularity.m"
  MR_Integer * transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_13,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_14,
#line 655 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_16,
#line 655 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70,
#line 655 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71)
#line 655 "distance_granularity.m"
{
#line 762 "distance_granularity.m"
  while (MR_TRUE)
#line 762 "distance_granularity.m"
    {
#line 762 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 762 "distance_granularity.m"
      {
#line 762 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 762 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals0_18;
#line 661 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_72_72;

#line 661 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 661 "distance_granularity.m"
          {
#line 661 "distance_granularity.m"
            transform_hlds__distance_granularity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
#line 661 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));
#line 661 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_72_72 == (MR_Integer) 0);
#line 661 "distance_granularity.m"
          }
#line 762 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 662 "distance_granularity.m"
          {
#line 662 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 662 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__Length_19;

#line 662 "distance_granularity.m"
            {
#line 662 "distance_granularity.m"
              mercury__list__length_2_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, &transform_hlds__distance_granularity__Length_19);
            }
#line 663 "distance_granularity.m"
            transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 > transform_hlds__distance_granularity__Length_19);
#line 665 "distance_granularity.m"
            if (transform_hlds__distance_granularity__succeeded)
#line 664 "distance_granularity.m"
              {
#line 664 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_71 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 664 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_69 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68;
#line 664 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_67 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 664 "distance_granularity.m"
              }
#line 665 "distance_granularity.m"
            else
#line 666 "distance_granularity.m"
              {
#line 666 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__Goal0_20;
#line 666 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalExpr0_21;
#line 666 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__GoalInfo0_22;
#line 666 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;
#line 666 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 666 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 666 "distance_granularity.m"
                MR_Box transform_hlds__distance_granularity__conv0_Goal0_20;
#line 756 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CalleePredId_23;
#line 756 "distance_granularity.m"
                MR_Integer transform_hlds__distance_granularity__CalleeProcId_24;
#line 756 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallArgs0_25;
#line 756 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallBuiltin_26;
#line 756 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__CallSymName_28;
#line 669 "distance_granularity.m"
                MR_Word transform_hlds__distance_granularity__V_27_27;

#line 666 "distance_granularity.m"
                {
#line 666 "distance_granularity.m"
                  mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, &transform_hlds__distance_granularity__conv0_Goal0_20);
                }
#line 666 "distance_granularity.m"
                transform_hlds__distance_granularity__Goal0_20 = ((MR_Word) transform_hlds__distance_granularity__conv0_Goal0_20);
#line 667 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 0)));
#line 667 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_20, (MR_Integer) 1)));
#line 669 "distance_granularity.m"
                transform_hlds__distance_granularity__succeeded = ((MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
#line 669 "distance_granularity.m"
                if (transform_hlds__distance_granularity__succeeded)
#line 669 "distance_granularity.m"
                  {
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleePredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 0)));
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__CalleeProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 1)));
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallArgs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 2)));
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallBuiltin_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 3)));
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 4)));
#line 669 "distance_granularity.m"
                    transform_hlds__distance_granularity__CallSymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr0_21, (MR_Integer) 5)));
#line 673 "distance_granularity.m"
                    {
#line 673 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_23, transform_hlds__distance_granularity__CallerPredId_14);
                    }
#line 673 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 674 "distance_granularity.m"
                      transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_24 == transform_hlds__distance_granularity__CallerProcId_15);
#line 751 "distance_granularity.m"
                    if (transform_hlds__distance_granularity__succeeded)
#line 680 "distance_granularity.m"
                      {
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalExpr_11;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Var_29;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__UnifyGoal_30;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResult_31;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusPredId_32;
#line 680 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__MinusProcId_33;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallArgs_34;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallSymName_36;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__ConsId_37;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Rhs_38;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__MinusCallUnifyContext_39;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalExpr_40;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__NonLocals_41;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarResultDelta_42;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__VarDelta_43;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDeltaDecrement_44;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoal_47;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__FirstGoalInfo_49;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Context_50;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoalInfo_51;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__DecrementGoal_52;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__CallArgs_53;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta0_55;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__InstMapDelta_57;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalInfo_58;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goal_59;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals1_60;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__StartGoals_61;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__EndGoals_62;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend0_63;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__GoalsAppend1_64;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__Goals_65;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_73_73;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_77_77;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_87_87;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_93_93;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_95_95;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_96_96;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_98_98;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_119_119;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_120_120;
#line 680 "distance_granularity.m"
                        MR_Integer transform_hlds__distance_granularity__V_127_127;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_129_129;
#line 680 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_131_131;
#line 715 "distance_granularity.m"
                        MR_Box transform_hlds__distance_granularity__conv1_FirstGoal_47;
#line 716 "distance_granularity.m"
                        MR_Word transform_hlds__distance_granularity__V_48_48;

#line 679 "distance_granularity.m"
                        {
#line 679 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_73_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 679 "distance_granularity.m"
                        {
#line 679 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_73_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_29, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75);
                        }
#line 681 "distance_granularity.m"
                        {
#line 681 "distance_granularity.m"
                          hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_29, (MR_Integer) 1, &transform_hlds__distance_granularity__UnifyGoal_30);
                        }
#line 685 "distance_granularity.m"
                        {
#line 685 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_77_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        }
#line 685 "distance_granularity.m"
                        {
#line 685 "distance_granularity.m"
                          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__VarResult_31, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_75_75, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79);
                        }
#line 689 "distance_granularity.m"
                        {
#line 689 "distance_granularity.m"
                          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(transform_hlds__distance_granularity__ModuleInfo_16, (MR_Word) &transform_hlds__distance_granularity_scalar_common_3[2], (MR_String) "minus", (MR_Integer) 1, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MinusPredId_32, &transform_hlds__distance_granularity__MinusProcId_33);
                        }
#line 692 "distance_granularity.m"
                        {
#line 692 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "distance_granularity.m"
                        }
#line 692 "distance_granularity.m"
                        {
#line 692 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_86_86, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_87_87));
#line 692 "distance_granularity.m"
                        }
#line 692 "distance_granularity.m"
                        {
#line 692 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 692 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallArgs_34, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 692 "distance_granularity.m"
                        }
#line 694 "distance_granularity.m"
                        transform_hlds__distance_granularity__MinusCallSymName_36 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_1[4]);
#line 696 "distance_granularity.m"
                        {
#line 696 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_93_93 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                        }
#line 696 "distance_granularity.m"
                        {
#line 696 "distance_granularity.m"
                          transform_hlds__distance_granularity__ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 696 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 696 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 696 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 2) = ((MR_Box) ((MR_Integer) 2));
#line 696 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__ConsId_37, 3) = ((MR_Box) (transform_hlds__distance_granularity__V_93_93));
#line 696 "distance_granularity.m"
                        }
#line 698 "distance_granularity.m"
                        {
#line 698 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "distance_granularity.m"
                        }
#line 698 "distance_granularity.m"
                        {
#line 698 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_13));
#line 698 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_95_95, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_96_96));
#line 698 "distance_granularity.m"
                        }
#line 697 "distance_granularity.m"
                        {
#line 697 "distance_granularity.m"
                          transform_hlds__distance_granularity__Rhs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 0) = ((MR_Box) (transform_hlds__distance_granularity__ConsId_37));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 697 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__Rhs_38, 2) = ((MR_Box) (transform_hlds__distance_granularity__V_95_95));
#line 697 "distance_granularity.m"
                        }
#line 699 "distance_granularity.m"
                        {
#line 699 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 1) = ((MR_Box) (transform_hlds__distance_granularity__Rhs_38));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_98_98, 2) = ((MR_Box) (&transform_hlds__distance_granularity_scalar_common_1[5]));
#line 699 "distance_granularity.m"
                        }
#line 699 "distance_granularity.m"
                        {
#line 699 "distance_granularity.m"
                          transform_hlds__distance_granularity__MinusCallUnifyContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MinusCallUnifyContext_39, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_98_98));
#line 699 "distance_granularity.m"
                        }
#line 702 "distance_granularity.m"
                        {
#line 702 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoalExpr_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 0) = ((MR_Box) (transform_hlds__distance_granularity__MinusPredId_32));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 1) = ((MR_Box) (transform_hlds__distance_granularity__MinusProcId_33));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 2) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallArgs_34));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 3) = ((MR_Box) ((MR_Integer) 0));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 4) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallUnifyContext_39));
#line 702 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__DecrementGoalExpr_40, 5) = ((MR_Box) (transform_hlds__distance_granularity__MinusCallSymName_36));
#line 702 "distance_granularity.m"
                        }
#line 705 "distance_granularity.m"
                        {
#line 705 "distance_granularity.m"
                          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__MinusCallArgs_34, &transform_hlds__distance_granularity__NonLocals_41);
                        }
#line 707 "distance_granularity.m"
                        {
#line 707 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarResultDelta_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResult_31));
#line 707 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarResultDelta_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[0])));
#line 707 "distance_granularity.m"
                        }
#line 708 "distance_granularity.m"
                        {
#line 708 "distance_granularity.m"
                          transform_hlds__distance_granularity__VarDelta_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 0) = ((MR_Box) (transform_hlds__distance_granularity__Var_29));
#line 708 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__VarDelta_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_2[0])));
#line 708 "distance_granularity.m"
                        }
#line 711 "distance_granularity.m"
                        {
#line 711 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarResultDelta_42));
#line 711 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "distance_granularity.m"
                        }
#line 711 "distance_granularity.m"
                        {
#line 711 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 0) = ((MR_Box) (transform_hlds__distance_granularity__VarDelta_43));
#line 711 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_119_119, 1) = ((MR_Box) (transform_hlds__distance_granularity__V_120_120));
#line 711 "distance_granularity.m"
                        }
#line 710 "distance_granularity.m"
                        {
#line 710 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDeltaDecrement_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__distance_granularity__V_119_119);
                        }
#line 715 "distance_granularity.m"
                        {
#line 715 "distance_granularity.m"
                          mercury__list__det_index1_3_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, (MR_Integer) 1, &transform_hlds__distance_granularity__conv1_FirstGoal_47);
                        }
#line 715 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoal_47 = ((MR_Word) transform_hlds__distance_granularity__conv1_FirstGoal_47);
#line 716 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 0)));
#line 716 "distance_granularity.m"
                        transform_hlds__distance_granularity__FirstGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__FirstGoal_47, (MR_Integer) 1)));
#line 717 "distance_granularity.m"
                        {
#line 717 "distance_granularity.m"
                          transform_hlds__distance_granularity__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__distance_granularity__FirstGoalInfo_49);
                        }
#line 718 "distance_granularity.m"
                        {
#line 718 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__distance_granularity__NonLocals_41, transform_hlds__distance_granularity__InstMapDeltaDecrement_44, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__distance_granularity__Context_50, &transform_hlds__distance_granularity__DecrementGoalInfo_51);
                        }
#line 720 "distance_granularity.m"
                        {
#line 720 "distance_granularity.m"
                          transform_hlds__distance_granularity__DecrementGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalExpr_40));
#line 720 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__DecrementGoal_52, 1) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoalInfo_51));
#line 720 "distance_granularity.m"
                        }
#line 725 "distance_granularity.m"
                        {
#line 725 "distance_granularity.m"
                          mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__CallArgs0_25, transform_hlds__distance_granularity__V_87_87, &transform_hlds__distance_granularity__CallArgs_53);
                        }
#line 732 "distance_granularity.m"
                        {
#line 732 "distance_granularity.m"
                          transform_hlds__distance_granularity__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 0) = ((MR_Box) (transform_hlds__distance_granularity__CalleePredId_23));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 1) = ((MR_Box) (transform_hlds__distance_granularity__CalleeProcId_24));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_53));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_26));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "distance_granularity.m"
                          MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__GoalExpr_11, 5) = ((MR_Box) (transform_hlds__distance_granularity__CallSymName_28));
#line 732 "distance_granularity.m"
                        }
#line 734 "distance_granularity.m"
                        {
#line 734 "distance_granularity.m"
                          transform_hlds__distance_granularity__InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__distance_granularity__GoalInfo0_22);
                        }
#line 736 "distance_granularity.m"
                        {
#line 736 "distance_granularity.m"
                          hlds__instmap__instmap_delta_insert_var_4_p_0(transform_hlds__distance_granularity__Var_29, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_4[1]), transform_hlds__distance_granularity__InstMapDelta0_55, &transform_hlds__distance_granularity__InstMapDelta_57);
                        }
#line 738 "distance_granularity.m"
                        {
#line 738 "distance_granularity.m"
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_57, transform_hlds__distance_granularity__GoalInfo0_22, &transform_hlds__distance_granularity__GoalInfo_58);
                        }
#line 740 "distance_granularity.m"
                        {
#line 740 "distance_granularity.m"
                          transform_hlds__distance_granularity__Goal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 740 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_11));
#line 740 "distance_granularity.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal_59, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_58));
#line 740 "distance_granularity.m"
                        }
#line 741 "distance_granularity.m"
                        {
#line 741 "distance_granularity.m"
                          mercury__list__det_replace_nth_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__Goals0_18, transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68, ((MR_Box) (transform_hlds__distance_granularity__Goal_59)), &transform_hlds__distance_granularity__Goals1_60);
                        }
#line 744 "distance_granularity.m"
                        transform_hlds__distance_granularity__V_127_127 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 - (MR_Integer) 1);
#line 744 "distance_granularity.m"
                        {
#line 744 "distance_granularity.m"
                          mercury__list__det_split_list_4_p_0(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__V_127_127, transform_hlds__distance_granularity__Goals1_60, &transform_hlds__distance_granularity__StartGoals_61, &transform_hlds__distance_granularity__EndGoals_62);
                        }
#line 746 "distance_granularity.m"
                        {
#line 746 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 0) = ((MR_Box) (transform_hlds__distance_granularity__UnifyGoal_30));
#line 746 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "distance_granularity.m"
                        }
#line 746 "distance_granularity.m"
                        {
#line 746 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__StartGoals_61, transform_hlds__distance_granularity__V_129_129, &transform_hlds__distance_granularity__GoalsAppend0_63);
                        }
#line 747 "distance_granularity.m"
                        {
#line 747 "distance_granularity.m"
                          transform_hlds__distance_granularity__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 0) = ((MR_Box) (transform_hlds__distance_granularity__DecrementGoal_52));
#line 747 "distance_granularity.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "distance_granularity.m"
                        }
#line 747 "distance_granularity.m"
                        {
#line 747 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend0_63, transform_hlds__distance_granularity__V_131_131, &transform_hlds__distance_granularity__GoalsAppend1_64);
                        }
#line 749 "distance_granularity.m"
                        {
#line 749 "distance_granularity.m"
                          mercury__list__append_3_p_1(transform_hlds__distance_granularity__TypeCtorInfo_145_145, transform_hlds__distance_granularity__GoalsAppend1_64, transform_hlds__distance_granularity__EndGoals_62, &transform_hlds__distance_granularity__Goals_65);
                        }
#line 750 "distance_granularity.m"
                        {
#line 750 "distance_granularity.m"
                          transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 750 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 750 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 750 "distance_granularity.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_65));
#line 750 "distance_granularity.m"
                        }
#line 680 "distance_granularity.m"
                      }
#line 751 "distance_granularity.m"
                    else
#line 753 "distance_granularity.m"
                      {
#line 753 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 753 "distance_granularity.m"
                        transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 753 "distance_granularity.m"
                      }
#line 755 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 3);
#line 669 "distance_granularity.m"
                  }
#line 669 "distance_granularity.m"
                else
#line 757 "distance_granularity.m"
                  {
#line 757 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135 = (transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 + (MR_Integer) 1);
#line 757 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70;
#line 757 "distance_granularity.m"
                    transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66;
#line 757 "distance_granularity.m"
                  }
#line 759 "distance_granularity.m"
                /* direct tailcall eliminated */
#line 759 "distance_granularity.m"
                {
#line 759 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_133_133;
#line 759 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_135_135;
#line 759 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79_79;

#line 759 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_70 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_70;
#line 759 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0_68 = transform_hlds__distance_granularity__STATE_VARIABLE_IndexInConj_0__tmp_copy_68;
#line 759 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_66 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0__tmp_copy_66;
#line 759 "distance_granularity.m"
                }
#line 759 "distance_granularity.m"
                continue;
#line 666 "distance_granularity.m"
              }
#line 662 "distance_granularity.m"
          }
#line 762 "distance_granularity.m"
        else
#line 763 "distance_granularity.m"
          {
#line 763 "distance_granularity.m"
            {
#line 763 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_else2\'/10", (MR_String) "unexpected goal type");
#line 763 "distance_granularity.m"
              return;
            }
#line 763 "distance_granularity.m"
          }
#line 762 "distance_granularity.m"
      }
#line 762 "distance_granularity.m"
      break;
#line 762 "distance_granularity.m"
    }
#line 655 "distance_granularity.m"
}

#line 643 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20,
#line 643 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GranularityVar_10,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_11,
#line 643 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_12,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_13,
#line 643 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22,
#line 643 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23)
#line 643 "distance_granularity.m"
{
#line 648 "distance_granularity.m"
  {
#line 648 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 648 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 0)));
#line 648 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_20, (MR_Integer) 1)));
#line 648 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr_17;
#line 648 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goal0_19;
#line 650 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__V_18_18;
#line 633 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Goals_31;
#line 633 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__ConjInfo0_32;
#line 633 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_41_41;
#line 623 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Type_30;

#line 650 "distance_granularity.m"
    {
#line 650 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_else2_10_p_0(transform_hlds__distance_granularity__GoalExpr0_15, &transform_hlds__distance_granularity__GoalExpr_17, (MR_Integer) 1, &transform_hlds__distance_granularity__V_18_18, transform_hlds__distance_granularity__GranularityVar_10, transform_hlds__distance_granularity__CallerPredId_11, transform_hlds__distance_granularity__CallerProcId_12, transform_hlds__distance_granularity__ModuleInfo_13, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_23);
    }
#line 652 "distance_granularity.m"
    {
#line 652 "distance_granularity.m"
      transform_hlds__distance_granularity__Goal0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_17));
#line 652 "distance_granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_16));
#line 652 "distance_granularity.m"
    }
#line 623 "distance_granularity.m"
    transform_hlds__distance_granularity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 0)));
#line 623 "distance_granularity.m"
    transform_hlds__distance_granularity__ConjInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_19, (MR_Integer) 1)));
#line 623 "distance_granularity.m"
    transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 623 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 623 "distance_granularity.m"
      {
#line 623 "distance_granularity.m"
        transform_hlds__distance_granularity__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 1)));
#line 623 "distance_granularity.m"
        transform_hlds__distance_granularity__Goals_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_41_41, (MR_Integer) 2)));
#line 624 "distance_granularity.m"
        {
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__NonLocals_33;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__InstMapDelta_34;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Detism_35;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__Purity_36;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo1_37;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo2_38;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo3_39;
#line 624 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__ConjInfo_40;

#line 624 "distance_granularity.m"
          {
#line 624 "distance_granularity.m"
            hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__NonLocals_33);
          }
#line 625 "distance_granularity.m"
          {
#line 625 "distance_granularity.m"
            hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__InstMapDelta_34);
          }
#line 626 "distance_granularity.m"
          {
#line 626 "distance_granularity.m"
            hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Detism_35);
          }
#line 627 "distance_granularity.m"
          {
#line 627 "distance_granularity.m"
            hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_31, &transform_hlds__distance_granularity__Purity_36);
          }
#line 628 "distance_granularity.m"
          {
#line 628 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_33, transform_hlds__distance_granularity__ConjInfo0_32, &transform_hlds__distance_granularity__ConjInfo1_37);
          }
#line 629 "distance_granularity.m"
          {
#line 629 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_34, transform_hlds__distance_granularity__ConjInfo1_37, &transform_hlds__distance_granularity__ConjInfo2_38);
          }
#line 630 "distance_granularity.m"
          {
#line 630 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_35, transform_hlds__distance_granularity__ConjInfo2_38, &transform_hlds__distance_granularity__ConjInfo3_39);
          }
#line 631 "distance_granularity.m"
          {
#line 631 "distance_granularity.m"
            hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_36, transform_hlds__distance_granularity__ConjInfo3_39, &transform_hlds__distance_granularity__ConjInfo_40);
          }
#line 632 "distance_granularity.m"
          {
#line 632 "distance_granularity.m"
            MR_Word base;
#line 632 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_21 = base;
#line 632 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_41_41));
#line 632 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_40));
#line 632 "distance_granularity.m"
          }
#line 624 "distance_granularity.m"
        }
#line 623 "distance_granularity.m"
      }
#line 623 "distance_granularity.m"
    else
#line 635 "distance_granularity.m"
      {
#line 635 "distance_granularity.m"
        {
#line 635 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 635 "distance_granularity.m"
          return;
        }
#line 635 "distance_granularity.m"
      }
#line 648 "distance_granularity.m"
  }
#line 643 "distance_granularity.m"
}

#line 493 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__GoalsInConj_11,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ConjInfo_12,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_13,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_14,
#line 493 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_15,
#line 493 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_16,
#line 493 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IfThenElseGoal_17,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32,
#line 493 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33,
#line 493 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__ModuleInfo_19)
#line 493 "distance_granularity.m"
{
#line 499 "distance_granularity.m"
  {
#line 499 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 499 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__Var_20;
#line 499 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__UnifyGoal_21;
#line 499 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_34_34;
#line 499 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36;

#line 500 "distance_granularity.m"
    {
#line 500 "distance_granularity.m"
      transform_hlds__distance_granularity__V_34_34 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 500 "distance_granularity.m"
    {
#line 500 "distance_granularity.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Var_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_32, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 501 "distance_granularity.m"
    {
#line 501 "distance_granularity.m"
      hlds__make_goal__make_int_const_construction_3_p_0(transform_hlds__distance_granularity__Var_20, (MR_Integer) 0, &transform_hlds__distance_granularity__UnifyGoal_21);
    }
#line 526 "distance_granularity.m"
    if ((transform_hlds__distance_granularity__MaybeGranularityVar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "distance_granularity.m"
      {
#line 530 "distance_granularity.m"
        {
#line 530 "distance_granularity.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.create_if_then_else_goal\'/10", (MR_String) "MaybeGranularityVar = no");
#line 530 "distance_granularity.m"
          return;
        }
#line 527 "distance_granularity.m"
      }
#line 526 "distance_granularity.m"
    else
#line 503 "distance_granularity.m"
      {
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GranularityVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__MaybeGranularityVar_13, (MR_Integer) 0)));
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Test_23;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Cond_24;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Then_26;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else0_27;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Else_28;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals0_29;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__NonLocals_30;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__IfThenElseInfo_31;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_48_48;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_51_51;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr0_64;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__GoalExpr_66;
#line 503 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goal0_68;
#line 544 "distance_granularity.m"
        MR_Integer transform_hlds__distance_granularity__V_67_67;
#line 633 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Goals_76;
#line 633 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__ConjInfo0_77;
#line 633 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__V_86_86;
#line 623 "distance_granularity.m"
        MR_Word transform_hlds__distance_granularity__Type_75;

#line 505 "distance_granularity.m"
        {
#line 505 "distance_granularity.m"
          hlds__make_goal__make_simple_test_5_p_0(transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__Var_20, (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__distance_granularity_scalar_common_3[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Test_23);
        }
#line 507 "distance_granularity.m"
        {
#line 507 "distance_granularity.m"
          hlds__goal_util__create_conj_4_p_0(transform_hlds__distance_granularity__UnifyGoal_21, transform_hlds__distance_granularity__Test_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Cond_24);
        }
#line 510 "distance_granularity.m"
        {
#line 510 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr0_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 510 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 1) = ((MR_Box) ((MR_Integer) 1));
#line 510 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_64, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 510 "distance_granularity.m"
        }
#line 544 "distance_granularity.m"
        {
#line 544 "distance_granularity.m"
          transform_hlds__distance_granularity__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_p_0(transform_hlds__distance_granularity__GoalExpr0_64, &transform_hlds__distance_granularity__GoalExpr_66, (MR_Integer) 1, &transform_hlds__distance_granularity__V_67_67, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__Distance_16, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_36_36, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
        }
#line 546 "distance_granularity.m"
        {
#line 546 "distance_granularity.m"
          transform_hlds__distance_granularity__Goal0_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_66));
#line 546 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 546 "distance_granularity.m"
        }
#line 623 "distance_granularity.m"
        transform_hlds__distance_granularity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 0)));
#line 623 "distance_granularity.m"
        transform_hlds__distance_granularity__ConjInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Goal0_68, (MR_Integer) 1)));
#line 623 "distance_granularity.m"
        transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 623 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 623 "distance_granularity.m"
          {
#line 623 "distance_granularity.m"
            transform_hlds__distance_granularity__Type_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 1)));
#line 623 "distance_granularity.m"
            transform_hlds__distance_granularity__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_86_86, (MR_Integer) 2)));
#line 624 "distance_granularity.m"
            {
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__NonLocals_78;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__InstMapDelta_79;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Detism_80;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Purity_81;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo1_82;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo2_83;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo3_84;
#line 624 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ConjInfo_85;

#line 624 "distance_granularity.m"
              {
#line 624 "distance_granularity.m"
                hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__NonLocals_78);
              }
#line 625 "distance_granularity.m"
              {
#line 625 "distance_granularity.m"
                hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__InstMapDelta_79);
              }
#line 626 "distance_granularity.m"
              {
#line 626 "distance_granularity.m"
                hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Detism_80);
              }
#line 627 "distance_granularity.m"
              {
#line 627 "distance_granularity.m"
                hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__distance_granularity__Goals_76, &transform_hlds__distance_granularity__Purity_81);
              }
#line 628 "distance_granularity.m"
              {
#line 628 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_78, transform_hlds__distance_granularity__ConjInfo0_77, &transform_hlds__distance_granularity__ConjInfo1_82);
              }
#line 629 "distance_granularity.m"
              {
#line 629 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__distance_granularity__InstMapDelta_79, transform_hlds__distance_granularity__ConjInfo1_82, &transform_hlds__distance_granularity__ConjInfo2_83);
              }
#line 630 "distance_granularity.m"
              {
#line 630 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__distance_granularity__Detism_80, transform_hlds__distance_granularity__ConjInfo2_83, &transform_hlds__distance_granularity__ConjInfo3_84);
              }
#line 631 "distance_granularity.m"
              {
#line 631 "distance_granularity.m"
                hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__distance_granularity__Purity_81, transform_hlds__distance_granularity__ConjInfo3_84, &transform_hlds__distance_granularity__ConjInfo_85);
              }
#line 632 "distance_granularity.m"
              {
#line 632 "distance_granularity.m"
                transform_hlds__distance_granularity__Then_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_86_86));
#line 632 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Then_26, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_85));
#line 632 "distance_granularity.m"
              }
#line 624 "distance_granularity.m"
            }
#line 623 "distance_granularity.m"
          }
#line 623 "distance_granularity.m"
        else
#line 635 "distance_granularity.m"
          {
#line 635 "distance_granularity.m"
            {
#line 635 "distance_granularity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.recompute_conj_info\'/2", (MR_String) "unexpected goal type");
#line 635 "distance_granularity.m"
              return;
            }
#line 635 "distance_granularity.m"
          }
#line 515 "distance_granularity.m"
        {
#line 515 "distance_granularity.m"
          transform_hlds__distance_granularity__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 515 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 515 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_48_48, 2) = ((MR_Box) (transform_hlds__distance_granularity__GoalsInConj_11));
#line 515 "distance_granularity.m"
        }
#line 515 "distance_granularity.m"
        {
#line 515 "distance_granularity.m"
          transform_hlds__distance_granularity__Else0_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
#line 515 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__Else0_27, 1) = ((MR_Box) (transform_hlds__distance_granularity__ConjInfo_12));
#line 515 "distance_granularity.m"
        }
#line 516 "distance_granularity.m"
        {
#line 516 "distance_granularity.m"
          transform_hlds__distance_granularity__apply_dg_to_else_8_p_0(transform_hlds__distance_granularity__Else0_27, &transform_hlds__distance_granularity__Else_28, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__PredIdSpecialized_14, transform_hlds__distance_granularity__CallerProcId_15, transform_hlds__distance_granularity__ModuleInfo_19, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_33);
        }
#line 521 "distance_granularity.m"
        {
#line 521 "distance_granularity.m"
          transform_hlds__distance_granularity__NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__distance_granularity__ConjInfo_12);
        }
#line 522 "distance_granularity.m"
        {
#line 522 "distance_granularity.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__distance_granularity__GranularityVar_22, transform_hlds__distance_granularity__NonLocals0_29, &transform_hlds__distance_granularity__NonLocals_30);
        }
#line 523 "distance_granularity.m"
        {
#line 523 "distance_granularity.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__distance_granularity__NonLocals_30, transform_hlds__distance_granularity__ConjInfo_12, &transform_hlds__distance_granularity__IfThenElseInfo_31);
        }
#line 524 "distance_granularity.m"
        {
#line 524 "distance_granularity.m"
          transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_24));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_26));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__V_51_51, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_28));
#line 524 "distance_granularity.m"
        }
#line 524 "distance_granularity.m"
        {
#line 524 "distance_granularity.m"
          MR_Word base;
#line 524 "distance_granularity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "distance_granularity.m"
          *transform_hlds__distance_granularity__IfThenElseGoal_17 = base;
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_51_51));
#line 524 "distance_granularity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__IfThenElseInfo_31));
#line 524 "distance_granularity.m"
        }
#line 503 "distance_granularity.m"
      }
#line 499 "distance_granularity.m"
  }
#line 493 "distance_granularity.m"
}

#line 458 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 458 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__5_5,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__6_6,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__7_7,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11,
#line 458 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__12_12,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__13_13,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15,
#line 458 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16,
#line 458 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17)
#line 458 "distance_granularity.m"
{
#line 464 "distance_granularity.m"
  while (MR_TRUE)
#line 464 "distance_granularity.m"
    {
#line 464 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 464 "distance_granularity.m"
      {
#line 464 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 464 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "distance_granularity.m"
          {
#line 467 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_17 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 467 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_15 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14;
#line 465 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 465 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_9 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8;
#line 464 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_3 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2;
#line 464 "distance_granularity.m"
          }
#line 464 "distance_granularity.m"
        else
#line 471 "distance_granularity.m"
          {
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Goal_52;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__IsRecursiveCall_53;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_67_67;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 471 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 472 "distance_granularity.m"
            {
#line 472 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Goal0_39, &transform_hlds__distance_granularity__Goal_52, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__HeadVar__6_6, transform_hlds__distance_granularity__HeadVar__7_7, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__distance_granularity__HeadVar__12_12, transform_hlds__distance_granularity__HeadVar__13_13, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66, &transform_hlds__distance_granularity__IsRecursiveCall_53);
            }
#line 475 "distance_granularity.m"
            {
#line 475 "distance_granularity.m"
              transform_hlds__distance_granularity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 0) = ((MR_Box) (transform_hlds__distance_granularity__Goal_52));
#line 475 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "distance_granularity.m"
            }
#line 475 "distance_granularity.m"
            {
#line 475 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2, transform_hlds__distance_granularity__V_67_67, &transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68);
            }
#line 481 "distance_granularity.m"
#line 481 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__IsRecursiveCall_53) {
#line 481 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 481 "distance_granularity.m"
              case (MR_Integer) 0:
#line 483 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16;
#line 481 "distance_granularity.m"
                break;
#line 481 "distance_granularity.m"
              case (MR_Integer) 1:
#line 480 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71 = (MR_Integer) 1;
#line 481 "distance_granularity.m"
                break;
#line 481 "distance_granularity.m"
            }
#line 485 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 485 "distance_granularity.m"
            {
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__Goals_40;
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_68_68;
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_64_64;
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_65_65;
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_66_66;
#line 485 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_71_71;

#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0_16 = transform_hlds__distance_granularity__STATE_VARIABLE_HasRecursiveCallsInParallelConj_0__tmp_copy_16;
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_14 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0__tmp_copy_14;
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0__tmp_copy_8;
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0_2 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalsAcc_0__tmp_copy_2;
#line 485 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 485 "distance_granularity.m"
            }
#line 485 "distance_granularity.m"
            continue;
#line 471 "distance_granularity.m"
          }
#line 464 "distance_granularity.m"
      }
#line 464 "distance_granularity.m"
      break;
#line 464 "distance_granularity.m"
    }
#line 458 "distance_granularity.m"
}

#line 403 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_16,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_17,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_18,
#line 403 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_19,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_22,
#line 403 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44,
#line 403 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24)
#line 403 "distance_granularity.m"
{
#line 412 "distance_granularity.m"
  {
#line 412 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__IsInParallelConj_22 == (MR_Integer) 1);
#line 412 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CalleePredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 0)));
#line 412 "distance_granularity.m"
    MR_Integer transform_hlds__distance_granularity__CalleeProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 1)));
#line 412 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 2)));
#line 412 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallBuiltin_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 3)));
#line 412 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__CallUnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 4)));
#line 413 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37, (MR_Integer) 5)));

#line 416 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 416 "distance_granularity.m"
      {
#line 417 "distance_granularity.m"
        {
#line 417 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__distance_granularity__CalleePredId_25, transform_hlds__distance_granularity__CallerPredId_16);
        }
#line 416 "distance_granularity.m"
        if (transform_hlds__distance_granularity__succeeded)
#line 418 "distance_granularity.m"
          transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__CalleeProcId_26 == transform_hlds__distance_granularity__CallerProcId_19);
#line 416 "distance_granularity.m"
      }
#line 452 "distance_granularity.m"
    if (transform_hlds__distance_granularity__succeeded)
#line 443 "distance_granularity.m"
      {
#line 425 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "distance_granularity.m"
          {
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__GranularityVar_32;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes0_33;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars0_34;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ArgsModes_35;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HeadVars_36;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_45_45;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_49_49;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_50_50;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_52_52;
#line 426 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54;

#line 428 "distance_granularity.m"
            {
#line 428 "distance_granularity.m"
              transform_hlds__distance_granularity__V_45_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 428 "distance_granularity.m"
            {
#line 428 "distance_granularity.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__distance_granularity__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__GranularityVar_32, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47);
            }
#line 430 "distance_granularity.m"
            {
#line 430 "distance_granularity.m"
              MR_Word base;
#line 430 "distance_granularity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = base;
#line 430 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 430 "distance_granularity.m"
            }
#line 437 "distance_granularity.m"
            {
#line 437 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__ArgsModes0_33);
            }
#line 438 "distance_granularity.m"
            {
#line 438 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__HeadVars0_34);
            }
#line 439 "distance_granularity.m"
            {
#line 439 "distance_granularity.m"
              transform_hlds__distance_granularity__V_50_50 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 439 "distance_granularity.m"
            {
#line 439 "distance_granularity.m"
              transform_hlds__distance_granularity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_50_50));
#line 439 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "distance_granularity.m"
            }
#line 439 "distance_granularity.m"
            {
#line 439 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__distance_granularity__ArgsModes0_33, transform_hlds__distance_granularity__V_49_49, &transform_hlds__distance_granularity__ArgsModes_35);
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              transform_hlds__distance_granularity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 0) = ((MR_Box) (transform_hlds__distance_granularity__GranularityVar_32));
#line 440 "distance_granularity.m"
              MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "distance_granularity.m"
            }
#line 440 "distance_granularity.m"
            {
#line 440 "distance_granularity.m"
              mercury__list__append_3_p_1((MR_Word) &transform_hlds__distance_granularity_scalar_common_1[0], transform_hlds__distance_granularity__HeadVars0_34, transform_hlds__distance_granularity__V_52_52, &transform_hlds__distance_granularity__HeadVars_36);
            }
#line 441 "distance_granularity.m"
            {
#line 441 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__distance_granularity__ArgsModes_35, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54);
            }
#line 442 "distance_granularity.m"
            {
#line 442 "distance_granularity.m"
              hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__distance_granularity__HeadVars_36, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40);
            }
#line 426 "distance_granularity.m"
          }
#line 425 "distance_granularity.m"
        else
#line 422 "distance_granularity.m"
          {
#line 422 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 422 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 422 "distance_granularity.m"
          }
#line 449 "distance_granularity.m"
        {
#line 449 "distance_granularity.m"
          MR_Word base;
#line 449 "distance_granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 449 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = base;
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__PredIdSpecialized_17));
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__CallerProcId_19));
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__distance_granularity__CallArgs_27));
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__distance_granularity__CallBuiltin_28));
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__distance_granularity__CallUnifyContext_29));
#line 449 "distance_granularity.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__distance_granularity__SymNameSpecialized_18));
#line 449 "distance_granularity.m"
        }
#line 451 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 1;
#line 443 "distance_granularity.m"
      }
#line 452 "distance_granularity.m"
    else
#line 453 "distance_granularity.m"
      {
#line 453 "distance_granularity.m"
        *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_24 = (MR_Integer) 0;
#line 453 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_44 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_43;
#line 453 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_40 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_39;
#line 453 "distance_granularity.m"
        *transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_38 = transform_hlds__distance_granularity__STATE_VARIABLE_GoalExpr_0_37;
#line 453 "distance_granularity.m"
      }
#line 412 "distance_granularity.m"
    *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_41;
#line 412 "distance_granularity.m"
  }
#line 403 "distance_granularity.m"
}

#line 298 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__CallerPredId_17,
#line 298 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__CallerProcId_18,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__PredIdSpecialized_19,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__SymNameSpecialized_20,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81,
#line 298 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__Distance_23,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__IsInParallelConj_24,
#line 298 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83,
#line 298 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26)
#line 298 "distance_granularity.m"
{
#line 305 "distance_granularity.m"
  {
#line 305 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 305 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
#line 305 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

#line 310 "distance_granularity.m"
#line 310 "distance_granularity.m"
    switch (MR_tag((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27)) {
#line 310 "distance_granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 310 "distance_granularity.m"
      case (MR_Integer) 0:
#line 361 "distance_granularity.m"
        {
#line 361 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal0_61 = (MR_Word) MR_body(((MR_Word) transform_hlds__distance_granularity__GoalExpr0_27), (MR_Integer) 0);
#line 361 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__SubGoal_62;
#line 361 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_140;

#line 362 "distance_granularity.m"
          {
#line 362 "distance_granularity.m"
            transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_61, &transform_hlds__distance_granularity__SubGoal_62, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
#line 366 "distance_granularity.m"
          transform_hlds__distance_granularity__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__distance_granularity__SubGoal_62);
#line 367 "distance_granularity.m"
          {
#line 367 "distance_granularity.m"
            MR_Word base;
#line 367 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 367 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_140));
#line 367 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 367 "distance_granularity.m"
          }
#line 361 "distance_granularity.m"
        }
#line 310 "distance_granularity.m"
        break;
#line 310 "distance_granularity.m"
      case (MR_Integer) 1:
#line 308 "distance_granularity.m"
        {
#line 309 "distance_granularity.m"
          *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 308 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 308 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 308 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 308 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 308 "distance_granularity.m"
        }
#line 310 "distance_granularity.m"
        break;
#line 310 "distance_granularity.m"
      case (MR_Integer) 2:
#line 311 "distance_granularity.m"
        {
#line 311 "distance_granularity.m"
          MR_Word transform_hlds__distance_granularity__GoalExpr_40;

#line 312 "distance_granularity.m"
          {
#line 312 "distance_granularity.m"
            transform_hlds__distance_granularity__apply_dg_to_plain_call_14_p_0(transform_hlds__distance_granularity__GoalExpr0_27, &transform_hlds__distance_granularity__GoalExpr_40, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
          }
#line 316 "distance_granularity.m"
          {
#line 316 "distance_granularity.m"
            MR_Word base;
#line 316 "distance_granularity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 316 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_40));
#line 316 "distance_granularity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 316 "distance_granularity.m"
          }
#line 311 "distance_granularity.m"
        }
#line 310 "distance_granularity.m"
        break;
#line 310 "distance_granularity.m"
      case (MR_Integer) 3:
#line 310 "distance_granularity.m"
#line 310 "distance_granularity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 0)))) {
#line 310 "distance_granularity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 310 "distance_granularity.m"
          case (MR_Integer) 0:
#line 321 "distance_granularity.m"
            {
#line 322 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 321 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 321 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 1:
#line 318 "distance_granularity.m"
            {
#line 319 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 318 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 318 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 318 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 318 "distance_granularity.m"
              *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 318 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 2:
#line 324 "distance_granularity.m"
            {
#line 324 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Type_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 324 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 324 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_55;
#line 324 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__ContainRecursiveCalls_56;
#line 324 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;

#line 325 "distance_granularity.m"
              {
#line 325 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_conj_17_p_0(transform_hlds__distance_granularity__Goals0_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 1, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, (MR_Integer) 0, &transform_hlds__distance_granularity__ContainRecursiveCalls_56);
              }
#line 332 "distance_granularity.m"
#line 332 "distance_granularity.m"
              switch (transform_hlds__distance_granularity__Type_53) {
#line 332 "distance_granularity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 332 "distance_granularity.m"
                case (MR_Integer) 1:
#line 339 "distance_granularity.m"
#line 339 "distance_granularity.m"
                  switch (transform_hlds__distance_granularity__ContainRecursiveCalls_56) {
#line 339 "distance_granularity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 339 "distance_granularity.m"
                    case (MR_Integer) 0:
#line 340 "distance_granularity.m"
                      {
#line 340 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 340 "distance_granularity.m"
                        *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 340 "distance_granularity.m"
                      }
#line 339 "distance_granularity.m"
                      break;
#line 339 "distance_granularity.m"
                    case (MR_Integer) 1:
#line 336 "distance_granularity.m"
                      {
#line 336 "distance_granularity.m"
                        transform_hlds__distance_granularity__create_if_then_else_goal_10_p_0(transform_hlds__distance_granularity__Goals_55, transform_hlds__distance_granularity__GoalInfo_28, *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81);
                      }
#line 339 "distance_granularity.m"
                      break;
#line 339 "distance_granularity.m"
                  }
#line 332 "distance_granularity.m"
                  break;
#line 332 "distance_granularity.m"
                case (MR_Integer) 0:
#line 329 "distance_granularity.m"
                  {
#line 329 "distance_granularity.m"
                    MR_Word transform_hlds__distance_granularity__GoalExpr_133;

#line 330 "distance_granularity.m"
                    {
#line 330 "distance_granularity.m"
                      transform_hlds__distance_granularity__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 330 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 330 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 1) = ((MR_Box) ((MR_Integer) 0));
#line 330 "distance_granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__distance_granularity__Goals_55));
#line 330 "distance_granularity.m"
                    }
#line 331 "distance_granularity.m"
                    {
#line 331 "distance_granularity.m"
                      MR_Word base;
#line 331 "distance_granularity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "distance_granularity.m"
                      *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 331 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_133));
#line 331 "distance_granularity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 331 "distance_granularity.m"
                    }
#line 329 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_120_120;
#line 329 "distance_granularity.m"
                  }
#line 332 "distance_granularity.m"
                  break;
#line 332 "distance_granularity.m"
              }
#line 343 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 324 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 3:
#line 345 "distance_granularity.m"
            {
#line 345 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_136;
#line 345 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 345 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Goals_138;

#line 346 "distance_granularity.m"
              {
#line 346 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_disj_14_p_0(transform_hlds__distance_granularity__Goals0_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Goals_138, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
#line 349 "distance_granularity.m"
              {
#line 349 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 349 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__distance_granularity__Goals_138));
#line 349 "distance_granularity.m"
              }
#line 350 "distance_granularity.m"
              {
#line 350 "distance_granularity.m"
                MR_Word base;
#line 350 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 350 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_136));
#line 350 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 350 "distance_granularity.m"
              }
#line 351 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 345 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 4:
#line 353 "distance_granularity.m"
            {
#line 353 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 353 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 353 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 353 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cases_60;
#line 353 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_139;

#line 354 "distance_granularity.m"
              {
#line 354 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_switch_14_p_0(transform_hlds__distance_granularity__Cases0_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__Cases_60, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83);
              }
#line 357 "distance_granularity.m"
              {
#line 357 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 357 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 357 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 1) = ((MR_Box) (transform_hlds__distance_granularity__Var_57));
#line 357 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 2) = ((MR_Box) (transform_hlds__distance_granularity__CanFail_58));
#line 357 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_139, 3) = ((MR_Box) (transform_hlds__distance_granularity__Cases_60));
#line 357 "distance_granularity.m"
              }
#line 358 "distance_granularity.m"
              {
#line 358 "distance_granularity.m"
                MR_Word base;
#line 358 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_139));
#line 358 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 358 "distance_granularity.m"
              }
#line 359 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 353 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 5:
#line 369 "distance_granularity.m"
            {
#line 369 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 369 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 370 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_100_100;
#line 370 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_64_64;

#line 370 "distance_granularity.m"
              transform_hlds__distance_granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__distance_granularity__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 370 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 370 "distance_granularity.m"
                {
#line 370 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 1)));
#line 370 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__Reason_63, (MR_Integer) 2)));
#line 370 "distance_granularity.m"
                  transform_hlds__distance_granularity__succeeded = (transform_hlds__distance_granularity__V_100_100 == (MR_Integer) 1);
#line 370 "distance_granularity.m"
                }
#line 373 "distance_granularity.m"
              if (transform_hlds__distance_granularity__succeeded)
#line 372 "distance_granularity.m"
                {
#line 372 "distance_granularity.m"
                  *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 372 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83 = transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82;
#line 372 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80;
#line 372 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79 = transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78;
#line 372 "distance_granularity.m"
                  *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = transform_hlds__distance_granularity__STATE_VARIABLE_Goal_0_76;
#line 372 "distance_granularity.m"
                }
#line 373 "distance_granularity.m"
              else
#line 377 "distance_granularity.m"
                {
#line 377 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__GoalExpr_141;
#line 377 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__SubGoal_142;

#line 374 "distance_granularity.m"
                  {
#line 374 "distance_granularity.m"
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__SubGoal0_146, &transform_hlds__distance_granularity__SubGoal_142, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, transform_hlds__distance_granularity__IsInParallelConj_24, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26);
                  }
#line 378 "distance_granularity.m"
                  {
#line 378 "distance_granularity.m"
                    transform_hlds__distance_granularity__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 378 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 378 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 1) = ((MR_Box) (transform_hlds__distance_granularity__Reason_63));
#line 378 "distance_granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_141, 2) = ((MR_Box) (transform_hlds__distance_granularity__SubGoal_142));
#line 378 "distance_granularity.m"
                  }
#line 379 "distance_granularity.m"
                  {
#line 379 "distance_granularity.m"
                    MR_Word base;
#line 379 "distance_granularity.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "distance_granularity.m"
                    *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 379 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_141));
#line 379 "distance_granularity.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 379 "distance_granularity.m"
                  }
#line 377 "distance_granularity.m"
                }
#line 369 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 6:
#line 382 "distance_granularity.m"
            {
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 1)));
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 2)));
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 3)));
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr0_27, (MR_Integer) 4)));
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Cond_69;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Then_71;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__Else_73;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94;
#line 382 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__GoalExpr_148;
#line 383 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_70_70;
#line 386 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_72_72;
#line 389 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__V_74_74;

#line 383 "distance_granularity.m"
              {
#line 383 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Cond0_66, &transform_hlds__distance_granularity__Cond_69, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_80, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_0_82, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__V_70_70);
              }
#line 386 "distance_granularity.m"
              {
#line 386 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Then0_67, &transform_hlds__distance_granularity__Then_71, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_88_88, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_90_90, &transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, &transform_hlds__distance_granularity__V_72_72);
              }
#line 389 "distance_granularity.m"
              {
#line 389 "distance_granularity.m"
                transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Else0_68, &transform_hlds__distance_granularity__Else_73, transform_hlds__distance_granularity__CallerPredId_17, transform_hlds__distance_granularity__CallerProcId_18, transform_hlds__distance_granularity__PredIdSpecialized_19, transform_hlds__distance_granularity__SymNameSpecialized_20, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__distance_granularity__STATE_VARIABLE_ProcInfo_79, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_81, transform_hlds__distance_granularity__Distance_23, (MR_Integer) 0, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_94_94, transform_hlds__distance_granularity__STATE_VARIABLE_MaybeGranularityVar_83, &transform_hlds__distance_granularity__V_74_74);
              }
#line 392 "distance_granularity.m"
              {
#line 392 "distance_granularity.m"
                transform_hlds__distance_granularity__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 392 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 392 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__distance_granularity__Vars_65));
#line 392 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 2) = ((MR_Box) (transform_hlds__distance_granularity__Cond_69));
#line 392 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 3) = ((MR_Box) (transform_hlds__distance_granularity__Then_71));
#line 392 "distance_granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__GoalExpr_148, 4) = ((MR_Box) (transform_hlds__distance_granularity__Else_73));
#line 392 "distance_granularity.m"
              }
#line 393 "distance_granularity.m"
              {
#line 393 "distance_granularity.m"
                MR_Word base;
#line 393 "distance_granularity.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "distance_granularity.m"
                *transform_hlds__distance_granularity__STATE_VARIABLE_Goal_77 = base;
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__distance_granularity__GoalExpr_148));
#line 393 "distance_granularity.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__distance_granularity__GoalInfo_28));
#line 393 "distance_granularity.m"
              }
#line 394 "distance_granularity.m"
              *transform_hlds__distance_granularity__IsRecursiveCallInParallelConj_26 = (MR_Integer) 0;
#line 382 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
          case (MR_Integer) 7:
#line 396 "distance_granularity.m"
            {
#line 398 "distance_granularity.m"
              {
#line 398 "distance_granularity.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.distance_granularity", (MR_String) "predicate \140transform_hlds.distance_granularity.apply_dg_to_goal\'/15", (MR_String) "shorthand");
#line 398 "distance_granularity.m"
                return;
              }
#line 396 "distance_granularity.m"
            }
#line 310 "distance_granularity.m"
            break;
#line 310 "distance_granularity.m"
        }
#line 310 "distance_granularity.m"
        break;
#line 310 "distance_granularity.m"
    }
#line 305 "distance_granularity.m"
  }
#line 298 "distance_granularity.m"
}

#line 254 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__2_2,
#line 254 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__3_3,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__4_4,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__5_5,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9,
#line 254 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10,
#line 254 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11)
#line 254 "distance_granularity.m"
{
#line 258 "distance_granularity.m"
  while (MR_TRUE)
#line 258 "distance_granularity.m"
    {
#line 258 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 258 "distance_granularity.m"
      {
#line 258 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 258 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "distance_granularity.m"
          {
#line 259 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 259 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_9 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 259 "distance_granularity.m"
            *transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_7 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 258 "distance_granularity.m"
          }
#line 258 "distance_granularity.m"
        else
#line 261 "distance_granularity.m"
          {
#line 261 "distance_granularity.m"
            MR_Integer transform_hlds__distance_granularity__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcInfo0_34;
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__HasParallelConj_35;
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__V_51_51;
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;
#line 261 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;

#line 262 "distance_granularity.m"
            {
#line 262 "distance_granularity.m"
              transform_hlds__distance_granularity__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 0) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__1_1));
#line 262 "distance_granularity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__distance_granularity__V_51_51, 1) = ((MR_Box) (transform_hlds__distance_granularity__ProcId_26));
#line 262 "distance_granularity.m"
            }
#line 262 "distance_granularity.m"
            {
#line 262 "distance_granularity.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__distance_granularity__V_51_51, &transform_hlds__distance_granularity__ProcInfo0_34);
            }
#line 263 "distance_granularity.m"
            {
#line 263 "distance_granularity.m"
              hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__HasParallelConj_35);
            }
#line 287 "distance_granularity.m"
#line 287 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__HasParallelConj_35) {
#line 287 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 287 "distance_granularity.m"
              case (MR_Integer) 1:
#line 288 "distance_granularity.m"
                {
#line 288 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 288 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 288 "distance_granularity.m"
                  transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10;
#line 288 "distance_granularity.m"
                }
#line 287 "distance_granularity.m"
                break;
#line 287 "distance_granularity.m"
              case (MR_Integer) 0:
#line 265 "distance_granularity.m"
                {
#line 265 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Body_36;
#line 265 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__BodyClone_37;
#line 265 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__ProcInfo1_38;
#line 265 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__MaybeGranularityVar_39;
#line 265 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 269 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_40_40;

#line 268 "distance_granularity.m"
                  {
#line 268 "distance_granularity.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__Body_36);
                  }
#line 269 "distance_granularity.m"
                  {
#line 269 "distance_granularity.m"
                    transform_hlds__distance_granularity__apply_dg_to_goal_15_p_0(transform_hlds__distance_granularity__Body_36, &transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__HeadVar__1_1, transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__HeadVar__4_4, transform_hlds__distance_granularity__HeadVar__5_5, transform_hlds__distance_granularity__ProcInfo0_34, &transform_hlds__distance_granularity__ProcInfo1_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, transform_hlds__distance_granularity__HeadVar__3_3, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__distance_granularity__MaybeGranularityVar_39, &transform_hlds__distance_granularity__V_40_40);
                  }
#line 284 "distance_granularity.m"
                  if ((transform_hlds__distance_granularity__MaybeGranularityVar_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "distance_granularity.m"
                    {
#line 285 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6;
#line 285 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8;
#line 285 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;
#line 285 "distance_granularity.m"
                    }
#line 284 "distance_granularity.m"
                  else
#line 273 "distance_granularity.m"
                    {
#line 273 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo2_42;
#line 273 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo3_43;
#line 273 "distance_granularity.m"
                      MR_Word transform_hlds__distance_granularity__ProcInfo_44;

#line 276 "distance_granularity.m"
                      transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55 = (MR_Integer) 1;
#line 277 "distance_granularity.m"
                      {
#line 277 "distance_granularity.m"
                        hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__distance_granularity__BodyClone_37, transform_hlds__distance_granularity__ProcInfo1_38, &transform_hlds__distance_granularity__ProcInfo2_42);
                      }
#line 278 "distance_granularity.m"
                      {
#line 278 "distance_granularity.m"
                        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo2_42, &transform_hlds__distance_granularity__ProcInfo3_43);
                      }
#line 280 "distance_granularity.m"
                      {
#line 280 "distance_granularity.m"
                        check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__distance_granularity__ProcInfo3_43, &transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58);
                      }
#line 283 "distance_granularity.m"
                      {
#line 283 "distance_granularity.m"
                        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__distance_granularity__ProcId_26, transform_hlds__distance_granularity__ProcInfo_44, transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6, &transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59);
                      }
#line 273 "distance_granularity.m"
                    }
#line 265 "distance_granularity.m"
                }
#line 287 "distance_granularity.m"
                break;
#line 287 "distance_granularity.m"
            }
#line 292 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 292 "distance_granularity.m"
            {
#line 292 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2 = transform_hlds__distance_granularity__ProcIds_27;
#line 292 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_59_59;
#line 292 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_55_55;
#line 292 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_58_58;

#line 292 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_10 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_10;
#line 292 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0_8 = transform_hlds__distance_granularity__STATE_VARIABLE_Specialized_0__tmp_copy_8;
#line 292 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0_6 = transform_hlds__distance_granularity__STATE_VARIABLE_PredInfo_0__tmp_copy_6;
#line 292 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__2_2 = transform_hlds__distance_granularity__HeadVar__2__tmp_copy_2;
#line 292 "distance_granularity.m"
            }
#line 292 "distance_granularity.m"
            continue;
#line 261 "distance_granularity.m"
          }
#line 258 "distance_granularity.m"
      }
#line 258 "distance_granularity.m"
      break;
#line 258 "distance_granularity.m"
    }
#line 254 "distance_granularity.m"
}

#line 185 "distance_granularity.m"
static void MR_CALL 
transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(
#line 185 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__HeadVar__1_1,
#line 185 "distance_granularity.m"
  MR_Integer transform_hlds__distance_granularity__HeadVar__2_2,
#line 185 "distance_granularity.m"
  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3,
#line 185 "distance_granularity.m"
  MR_Word * transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4)
#line 185 "distance_granularity.m"
{
#line 188 "distance_granularity.m"
  while (MR_TRUE)
#line 188 "distance_granularity.m"
    {
#line 188 "distance_granularity.m"
      /* tailcall optimized into a loop */
#line 188 "distance_granularity.m"
      {
#line 188 "distance_granularity.m"
        MR_bool transform_hlds__distance_granularity__succeeded;

#line 188 "distance_granularity.m"
        if ((transform_hlds__distance_granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "distance_granularity.m"
          *transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3;
#line 188 "distance_granularity.m"
        else
#line 189 "distance_granularity.m"
          {
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredIdList_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredInfo_13;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredicateTable_14;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewPredId_15;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ModuleName_16;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewPredIdGranularity_19;
#line 189 "distance_granularity.m"
            MR_String transform_hlds__distance_granularity__PredName0_20;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__NewCallSymName_21;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__ProcIds_22;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__PredInfoClone0_23;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__Specialized_24;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
#line 189 "distance_granularity.m"
            MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

#line 190 "distance_granularity.m"
            {
#line 190 "distance_granularity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, transform_hlds__distance_granularity__PredId_9, &transform_hlds__distance_granularity__PredInfo_13);
            }
#line 194 "distance_granularity.m"
            {
#line 194 "distance_granularity.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__PredicateTable_14);
            }
#line 195 "distance_granularity.m"
            {
#line 195 "distance_granularity.m"
              hlds__pred_table__get_next_pred_id_2_p_0(transform_hlds__distance_granularity__PredicateTable_14, &transform_hlds__distance_granularity__NewPredId_15);
            }
#line 198 "distance_granularity.m"
            {
#line 198 "distance_granularity.m"
              transform_hlds__distance_granularity__ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 201 "distance_granularity.m"
            {
#line 201 "distance_granularity.m"
              transform_hlds__distance_granularity__NewPredIdGranularity_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "distance_granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 201 "distance_granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__distance_granularity__NewPredIdGranularity_19, 1) = ((MR_Box) (transform_hlds__distance_granularity__HeadVar__2_2));
#line 201 "distance_granularity.m"
            }
#line 202 "distance_granularity.m"
            {
#line 202 "distance_granularity.m"
              transform_hlds__distance_granularity__PredName0_20 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 203 "distance_granularity.m"
            {
#line 203 "distance_granularity.m"
              parse_tree__prog_util__make_pred_name_6_p_0(transform_hlds__distance_granularity__ModuleName_16, (MR_String) "DistanceGranularityFor", (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__distance_granularity_scalar_common_3[0]), transform_hlds__distance_granularity__PredName0_20, transform_hlds__distance_granularity__NewPredIdGranularity_19, &transform_hlds__distance_granularity__NewCallSymName_21);
            }
#line 206 "distance_granularity.m"
            {
#line 206 "distance_granularity.m"
              transform_hlds__distance_granularity__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__distance_granularity__PredInfo_13);
            }
#line 207 "distance_granularity.m"
            {
#line 207 "distance_granularity.m"
              transform_hlds__distance_granularity__apply_dg_to_procs_11_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoClone0_23, (MR_Integer) 0, &transform_hlds__distance_granularity__Specialized_24, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43);
            }
#line 243 "distance_granularity.m"
#line 243 "distance_granularity.m"
            switch (transform_hlds__distance_granularity__Specialized_24) {
#line 243 "distance_granularity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 243 "distance_granularity.m"
              case (MR_Integer) 0:
#line 244 "distance_granularity.m"
                transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43;
#line 243 "distance_granularity.m"
                break;
#line 243 "distance_granularity.m"
              case (MR_Integer) 1:
#line 210 "distance_granularity.m"
                {
#line 210 "distance_granularity.m"
                  MR_String transform_hlds__distance_granularity__PredName_25;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredInfoClone1_26;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredInfoClone2_27;
#line 210 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__Arity_28;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredInfoClone3_29;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__ArgTypes0_30;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__ArgTypes_31;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__Tvarset_32;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__ExistqTvars_33;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredInfoClone_34;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredicateTable0_35;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredicateTable1_37;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__PredInfoUpdated_38;
#line 210 "distance_granularity.m"
                  MR_Integer transform_hlds__distance_granularity__V_45_45;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_47_47;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_48_48;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50;
#line 210 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51;
#line 236 "distance_granularity.m"
                  MR_Word transform_hlds__distance_granularity__V_36_36;

#line 215 "distance_granularity.m"
                  {
#line 215 "distance_granularity.m"
                    transform_hlds__distance_granularity__create_specialized_pred_name_4_p_0((MR_String) "DistanceGranularityFor", transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__PredName0_20, &transform_hlds__distance_granularity__PredName_25);
                  }
#line 216 "distance_granularity.m"
                  {
#line 216 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__distance_granularity__PredName_25, transform_hlds__distance_granularity__PredInfoClone0_23, &transform_hlds__distance_granularity__PredInfoClone1_26);
                  }
#line 220 "distance_granularity.m"
                  {
#line 220 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__distance_granularity__PredInfoClone1_26, &transform_hlds__distance_granularity__PredInfoClone2_27);
                  }
#line 225 "distance_granularity.m"
                  {
#line 225 "distance_granularity.m"
                    transform_hlds__distance_granularity__Arity_28 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__distance_granularity__PredInfoClone2_27);
                  }
#line 226 "distance_granularity.m"
                  transform_hlds__distance_granularity__V_45_45 = (transform_hlds__distance_granularity__Arity_28 + (MR_Integer) 1);
#line 226 "distance_granularity.m"
                  {
#line 226 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(transform_hlds__distance_granularity__V_45_45, transform_hlds__distance_granularity__PredInfoClone2_27, &transform_hlds__distance_granularity__PredInfoClone3_29);
                  }
#line 227 "distance_granularity.m"
                  {
#line 227 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ArgTypes0_30);
                  }
#line 228 "distance_granularity.m"
                  {
#line 228 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
#line 228 "distance_granularity.m"
                  {
#line 228 "distance_granularity.m"
                    transform_hlds__distance_granularity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "distance_granularity.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 0) = ((MR_Box) (transform_hlds__distance_granularity__V_48_48));
#line 228 "distance_granularity.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__distance_granularity__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "distance_granularity.m"
                  }
#line 228 "distance_granularity.m"
                  {
#line 228 "distance_granularity.m"
                    mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__distance_granularity__ArgTypes0_30, transform_hlds__distance_granularity__V_47_47, &transform_hlds__distance_granularity__ArgTypes_31);
                  }
#line 229 "distance_granularity.m"
                  {
#line 229 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__Tvarset_32);
                  }
#line 230 "distance_granularity.m"
                  {
#line 230 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__ExistqTvars_33);
                  }
#line 231 "distance_granularity.m"
                  {
#line 231 "distance_granularity.m"
                    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__distance_granularity__Tvarset_32, transform_hlds__distance_granularity__ExistqTvars_33, transform_hlds__distance_granularity__ArgTypes_31, transform_hlds__distance_granularity__PredInfoClone3_29, &transform_hlds__distance_granularity__PredInfoClone_34);
                  }
#line 235 "distance_granularity.m"
                  {
#line 235 "distance_granularity.m"
                    hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__PredicateTable0_35);
                  }
#line 236 "distance_granularity.m"
                  {
#line 236 "distance_granularity.m"
                    hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__distance_granularity__PredInfoClone_34, &transform_hlds__distance_granularity__V_36_36, transform_hlds__distance_granularity__PredicateTable0_35, &transform_hlds__distance_granularity__PredicateTable1_37);
                  }
#line 238 "distance_granularity.m"
                  {
#line 238 "distance_granularity.m"
                    hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__distance_granularity__PredicateTable1_37, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50);
                  }
#line 240 "distance_granularity.m"
                  {
#line 240 "distance_granularity.m"
                    transform_hlds__distance_granularity__update_original_predicate_procs_9_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__ProcIds_22, transform_hlds__distance_granularity__HeadVar__2_2, transform_hlds__distance_granularity__NewPredId_15, transform_hlds__distance_granularity__NewCallSymName_21, transform_hlds__distance_granularity__PredInfo_13, &transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_50_50, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51);
                  }
#line 242 "distance_granularity.m"
                  {
#line 242 "distance_granularity.m"
                    hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__distance_granularity__PredId_9, transform_hlds__distance_granularity__PredInfoUpdated_38, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52);
                  }
#line 210 "distance_granularity.m"
                }
#line 243 "distance_granularity.m"
                break;
#line 243 "distance_granularity.m"
            }
#line 247 "distance_granularity.m"
            /* direct tailcall eliminated */
#line 247 "distance_granularity.m"
            {
#line 247 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1 = transform_hlds__distance_granularity__PredIdList_10;
#line 247 "distance_granularity.m"
              MR_Word transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_52_52;

#line 247 "distance_granularity.m"
              transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 247 "distance_granularity.m"
              transform_hlds__distance_granularity__HeadVar__1_1 = transform_hlds__distance_granularity__HeadVar__1__tmp_copy_1;
#line 247 "distance_granularity.m"
            }
#line 247 "distance_granularity.m"
            continue;
#line 189 "distance_granularity.m"
          }
#line 188 "distance_granularity.m"
      }
#line 188 "distance_granularity.m"
      break;
#line 188 "distance_granularity.m"
    }
#line 185 "distance_granularity.m"
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
#line 178 "distance_granularity.m"
  {
#line 178 "distance_granularity.m"
    MR_bool transform_hlds__distance_granularity__succeeded;
#line 178 "distance_granularity.m"
    MR_Word transform_hlds__distance_granularity__PredIds_6;

#line 179 "distance_granularity.m"
    {
#line 179 "distance_granularity.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__distance_granularity__PredIds_6);
    }
#line 180 "distance_granularity.m"
    {
#line 180 "distance_granularity.m"
      transform_hlds__distance_granularity__apply_dg_to_preds_4_p_0(transform_hlds__distance_granularity__PredIds_6, transform_hlds__distance_granularity__Distance_5, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__distance_granularity__STATE_VARIABLE_ModuleInfo_8);
#line 180 "distance_granularity.m"
      return;
    }
#line 178 "distance_granularity.m"
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
