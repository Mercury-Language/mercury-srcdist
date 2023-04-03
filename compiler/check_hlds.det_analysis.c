/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2023-04-03
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


// :- module check_hlds.det_analysis.
// :- implementation.

/*
INIT mercury__check_hlds__det_analysis__init
ENDINIT
*/

#include "check_hlds.det_analysis.mih"


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
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
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
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_58;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_61;
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_69;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1];

static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1];

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0;

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_ordinal_ordered_soln_context_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2];

static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2];

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1533__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_31);

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * STATE_VARIABLE_NoInferProcs_8,
  MR_Word STATE_VARIABLE_ImportedProcs_0_9,
  MR_Word * STATE_VARIABLE_ImportedProcs_10);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * STATE_VARIABLE_NoInferProcs_9,
  MR_Word STATE_VARIABLE_ImportedProcs_0_10,
  MR_Word * STATE_VARIABLE_ImportedProcs_11);

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_to_fixpoint_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word PredProcIds_7,
  MR_Word Debug_8,
  MR_Word * Specs_9);

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_one_pass_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Debug_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word PredProcId_9,
  MR_Word Debug_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_Changed_0_53,
  MR_Word * STATE_VARIABLE_Changed_54);

static void MR_CALL 
check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Debug_9,
  MR_Word PredProcId_10,
  MR_Word OldDetism_11,
  MR_Word NewDetism_12,
  MR_Word STATE_VARIABLE_Changed_0_19,
  MR_Word * STATE_VARIABLE_Changed_20);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
  MR_Word Reason_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word GoalInfo_16,
  MR_Word InstMap0_17,
  MR_Word SolnContext_18,
  MR_Word RightFailingContexts_19,
  MR_Word MaybePromiseEqvSolutionSets0_20,
  MR_Word * Detism_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word STATE_VARIABLE_DetInfo_0_109,
  MR_Word * STATE_VARIABLE_DetInfo_110);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CanFail_0_7,
  MR_Word * STATE_VARIABLE_CanFail_8,
  MR_Word STATE_VARIABLE_MaxSolns_0_9,
  MR_Word * STATE_VARIABLE_MaxSolns_10,
  MR_Word STATE_VARIABLE_DetInfo_0_11,
  MR_Word * STATE_VARIABLE_DetInfo_12);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
  MR_Word MainGoal0_12,
  MR_Word * MainGoal_13,
  MR_Word OrElseGoals0_14,
  MR_Word * OrElseGoals_15,
  MR_Word InstMap0_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word MaybePromiseEqvSolutionSets0_19,
  MR_Word * Detism_20,
  MR_Word STATE_VARIABLE_DetInfo_0_30,
  MR_Word * STATE_VARIABLE_DetInfo_31);

static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word * Detism_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_24,
  MR_Word * STATE_VARIABLE_DetInfo_25);

static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
  MR_Word Cond0_15,
  MR_Word * Cond_16,
  MR_Word Then0_17,
  MR_Word * Then_18,
  MR_Word Else0_19,
  MR_Word * Else_20,
  MR_Word InstMap0_21,
  MR_Word SolnContext_22,
  MR_Word RightFailingContexts_23,
  MR_Word MaybePromiseEqvSolutionSets_24,
  MR_Word * Detism_25,
  MR_Word * GoalFailingContexts_26,
  MR_Word STATE_VARIABLE_DetInfo_0_49,
  MR_Word * STATE_VARIABLE_DetInfo_50);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
  MR_Word LHS_14,
  MR_Word RHS0_15,
  MR_Word Unify_16,
  MR_Word UnifyContext_17,
  MR_Word * RHS_18,
  MR_Word GoalInfo_19,
  MR_Word InstMap0_20,
  MR_Word SolnContext_21,
  MR_Word RightFailingContexts_22,
  MR_Word * Detism_23,
  MR_Word * GoalFailingContexts_24,
  MR_Word STATE_VARIABLE_DetInfo_0_84,
  MR_Word * STATE_VARIABLE_DetInfo_85);

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * Detism_10,
  MR_Word STATE_VARIABLE_SwitchFailingContexts_0_11,
  MR_Word * STATE_VARIABLE_SwitchFailingContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_13,
  MR_Word * STATE_VARIABLE_DetInfo_14);

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
  MR_Word Var_14,
  MR_Word SwitchCanFail_15,
  MR_Word Cases0_16,
  MR_Word * Cases_17,
  MR_Word GoalInfo_18,
  MR_Word InstMap0_19,
  MR_Word SolnContext_20,
  MR_Word RightFailingContexts_21,
  MR_Word MaybePromiseEqvSolutionSets_22,
  MR_Word * Detism_23,
  MR_Word * GoalFailingContexts_24,
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38);

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * Detism_9,
  MR_Word STATE_VARIABLE_DisjFailingContexts_0_10,
  MR_Word * STATE_VARIABLE_DisjFailingContexts_11,
  MR_Word STATE_VARIABLE_DetInfo_0_12,
  MR_Word * STATE_VARIABLE_DetInfo_13);

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
  MR_Word Goals0_12,
  MR_Word * Goals_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28);

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
  MR_Word Goals0_12,
  MR_Word * Goals_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_32,
  MR_Word * STATE_VARIABLE_DetInfo_33);

static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
  MR_Word GoalExpr0_12,
  MR_Word * GoalExpr_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_78,
  MR_Word * STATE_VARIABLE_DetInfo_79);

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
  MR_Word Goal0_12,
  MR_Word * Goal_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_SolnContext_0_52,
  MR_Word RightFailingContexts_16,
  MR_Word MaybePromiseEqvSolutionSets_17,
  MR_Word AddPruning_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_53,
  MR_Word * STATE_VARIABLE_DetInfo_54);

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_44,
  MR_Word * STATE_VARIABLE_DetInfo_45);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
  MR_Word GenericCall_10,
  MR_Word CallDetism_11,
  MR_Word GoalInfo_12,
  MR_Word SolnContext_13,
  MR_Word RightFailingContexts_14,
  MR_Word * Detism_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28);

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId0_13,
  MR_Integer * ProcId_14,
  MR_Word ArgVars_15,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__3_3,
  MR_Integer CcProcId_11,
  MR_Integer * NonCcProcId_12);

static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
  MR_Word Var_12,
  MR_Word ExaminesRepresentation_13,
  MR_Word CanFail_14,
  MR_Word SolnContext_15,
  MR_Word FailingContextsA_16,
  MR_Word FailingContextsB_17,
  MR_Word GoalInfo_18,
  MR_Word GoalContext_19,
  MR_Word * NumSolns_20,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4);

static MR_Word MR_CALL 
check_hlds__det_analysis__noncanon_unify_verbose_would_require_0_f_0(void);

static MR_Word MR_CALL 
check_hlds__det_analysis__noncanon_unify_verbose_preamble_0_f_0(void);

static MR_bool MR_CALL 
check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[100][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[2][6];


struct check_hlds__det_analysis__vector_common_type_4_0_s {
  const MR_Word check_hlds__det_analysis__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct check_hlds__det_analysis__vector_common_type_4_0_s check_hlds__det_analysis_vector_common_4[4];



static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[100][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occurs in a context which requires all solutions."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for a procedure without a determinism declaration."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "foreign_proc(...)"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "will_not_throw_exception"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has determinism erroneous but also has"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope is nested inside another."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope is not nested inside a"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[48])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope and the"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope it is nested inside overlap on"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "goal lists"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not guaranteed to succeed."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to this unification"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Figuring out whether there is a solution"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the choice of concrete representation."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The success of this unification might depend on"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which requires all solutions."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occurs in a context"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Finding all possible solutions"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[72])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The results of this unification might depend on"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "representation for each abstract value of this type."))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "I must presume that there is more than one possible concrete"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined equality predicate,"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(If that is really what you want, you must do it explicitly.)"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but I am not going to do that implicitly."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "would require backtracking over all possible representations,"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[97])))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[3][3] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 27U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[1])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[1])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct check_hlds__det_analysis__vector_common_type_4_0_s check_hlds__det_analysis_vector_common_4[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0 = {
  (MR_String) "pess_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_pess_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_analysis____Unify____pess_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____pess_info_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "pess_info",
  { check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0 },
  { check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0,

};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_ordinal_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_soln_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_analysis____Unify____soln_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____soln_context_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "soln_context",
  { check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0 },
  { check_hlds__det_analysis__check_hlds__det_analysis__enum_ordinal_ordered_soln_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0,

};

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1533__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[1]), ((MR_Box) (GoalFailingContexts_18)), ((MR_Box) (HeadVar__2_31)));
  return succeeded;
}

void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0(
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
check_hlds__det_analysis____Unify____soln_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  MR_Word PredId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer ProcId_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word PredInfo0_7;
  MR_Word Procs0_8;
  MR_Word ProcInfo0_9;
  MR_Word MaybeDet_10;
  MR_Box conv0_ProcInfo0_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_15, PredId_4, &PredInfo0_7);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_7, &Procs0_8);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_8, ((MR_Box) (ProcId_5)), &conv0_ProcInfo0_9);
  ProcInfo0_9 = ((MR_Word) (conv0_ProcInfo0_9));
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_9, &MaybeDet_10);
  if ((MaybeDet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_0_15;
  else
  {
    MR_Word Det_11 = ((MR_Word) ((MR_hl_field(1, MaybeDet_10, (MR_Integer) 0))));
    MR_Word ProcInfo_12;
    MR_Word Procs_13;
    MR_Word PredInfo_14;

    hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Det_11, ProcInfo0_9, &ProcInfo_12);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_5)), ((MR_Box) (ProcInfo_12)), Procs0_8, &Procs_13);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, PredInfo0_7, &PredInfo_14);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

void MR_CALL 
check_hlds__det_analysis__det_get_soln_context_2_p_0(
  MR_Word DeclaredDetism_3,
  MR_Word * SolnContext_4)
{
  MR_bool succeeded;
  MR_Word Var_7;
  MR_Word Var_5;

  parse_tree__prog_data__determinism_components_3_p_0(DeclaredDetism_3, &Var_5, &Var_7);
  succeeded = ((MR_Integer) 2 == Var_7);
  if (succeeded)
    *SolnContext_4 = (MR_Integer) 1;
  else
    *SolnContext_4 = (MR_Integer) 0;
}

void MR_CALL 
check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word Var_12;
  MR_Word _Specs_8;
  MR_Word Var_9;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (ProcId_6));
  }
  check_hlds__det_analysis__det_infer_proc_8_p_0(Var_12, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11, (MR_Word) ((MR_Unsigned) 0U), &_Specs_8, (MR_Integer) 1, &Var_9);
}

void MR_CALL 
check_hlds__det_analysis__determinism_check_proc_5_p_0(
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word PredProcId_10;
  MR_Word Globals_11;
  MR_Word Debug_12;
  MR_Word STATE_VARIABLE_ModuleInfo_19_19;
  MR_Word STATE_VARIABLE_Specs_21_21;
  MR_Word Var_13;

  {
    PredProcId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_10, 0) = ((MR_Box) (PredId_6));
    MR_hl_field(0, PredProcId_10, 1) = ((MR_Box) (ProcId_7));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 94, &Debug_12);
  check_hlds__det_analysis__det_infer_proc_8_p_0(PredProcId_10, Debug_12, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_19_19, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_21_21, (MR_Integer) 1, &Var_13);
  check_hlds__det_report__check_determinism_of_proc_5_p_0(PredProcId_10, STATE_VARIABLE_ModuleInfo_19_19, STATE_VARIABLE_ModuleInfo_15, STATE_VARIABLE_Specs_21_21, STATE_VARIABLE_Specs_16);
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_16;

  check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_16));
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_16;

  check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_16));
}

void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word * Specs_5)
{
  MR_Word PredIdTable0_6;
  MR_Word ValidPredIds0_7;
  MR_Word DeclaredProcs_8;
  MR_Word UndeclaredProcs_9;
  MR_Word NoInferProcs_10;
  MR_Word ImportedProcs_11;
  MR_Word Globals_12;
  MR_Word Verbose_13;
  MR_Word Debug_14;
  MR_Word InferenceSpecs_15;
  MR_Word FinalSpecs_20;
  MR_Word STATE_VARIABLE_ModuleInfo_24_24;
  MR_Word STATE_VARIABLE_ModuleInfo_26_26;
  MR_Word STATE_VARIABLE_ModuleInfo_33_33;
  MR_Word STATE_VARIABLE_ModuleInfo_18_65;
  MR_Word STATE_VARIABLE_Specs_20_67;
  MR_Word STATE_VARIABLE_ModuleInfo_22_69;
  MR_Word STATE_VARIABLE_Specs_23_70;
  MR_Word STATE_VARIABLE_Specs_25_71;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_24_24;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_26_26;
  MR_Word ProgressStream_49;
  MR_Word Var_64;
  MR_Word ProgressStream_50;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &PredIdTable0_6);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &ValidPredIds0_7);
  check_hlds__det_analysis__determinism_declarations_preds_10_p_0(PredIdTable0_6, ValidPredIds0_7, (MR_Word) ((MR_Unsigned) 0U), &DeclaredProcs_8, (MR_Word) ((MR_Unsigned) 0U), &UndeclaredProcs_9, (MR_Word) ((MR_Unsigned) 0U), &NoInferProcs_10, (MR_Word) ((MR_Unsigned) 0U), &ImportedProcs_11);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_2[1]), NoInferProcs_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_21)), &conv1_STATE_VARIABLE_ModuleInfo_24_24);
  STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_24_24));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_2[2]), ImportedProcs_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_24_24)), &conv3_STATE_VARIABLE_ModuleInfo_26_26);
  STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_26_26));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_26_26, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 72, &Verbose_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 94, &Debug_14);
  if ((UndeclaredProcs_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InferenceSpecs_15 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModuleInfo_33_33 = STATE_VARIABLE_ModuleInfo_26_26;
  }
  else
  {
    MR_Word ProgressStream_47;
    MR_Word ProgressStream_48;

    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_26_26, &ProgressStream_47);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_47, Verbose_13, (MR_String) "% Doing determinism inference...\n");
    check_hlds__det_analysis__determinism_inference_to_fixpoint_5_p_0(STATE_VARIABLE_ModuleInfo_26_26, &STATE_VARIABLE_ModuleInfo_33_33, UndeclaredProcs_9, Debug_14, &InferenceSpecs_15);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_33_33, &ProgressStream_48);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_48, Verbose_13, (MR_String) "% done.\n");
  }
  hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_33_33, &ProgressStream_49);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_49, Verbose_13, (MR_String) "% Doing determinism checking...\n");
  check_hlds__det_analysis__determinism_inference_one_pass_8_p_0(DeclaredProcs_8, Debug_14, STATE_VARIABLE_ModuleInfo_33_33, &STATE_VARIABLE_ModuleInfo_18_65, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_20_67, (MR_Integer) 1, &Var_64);
  check_hlds__det_report__check_determinism_of_procs_5_p_0(DeclaredProcs_8, STATE_VARIABLE_ModuleInfo_18_65, &STATE_VARIABLE_ModuleInfo_22_69, STATE_VARIABLE_Specs_20_67, &STATE_VARIABLE_Specs_23_70);
  check_hlds__det_report__check_determinism_of_procs_5_p_0(UndeclaredProcs_9, STATE_VARIABLE_ModuleInfo_22_69, STATE_VARIABLE_ModuleInfo_22, STATE_VARIABLE_Specs_23_70, &STATE_VARIABLE_Specs_25_71);
  check_hlds__det_report__check_determinism_of_imported_procs_4_p_0(*STATE_VARIABLE_ModuleInfo_22, ImportedProcs_11, STATE_VARIABLE_Specs_25_71, &FinalSpecs_20);
  *Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InferenceSpecs_15, FinalSpecs_20);
  hlds__passes_aux__get_progress_output_stream_4_p_0(*STATE_VARIABLE_ModuleInfo_22, &ProgressStream_50);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_50, Verbose_13, (MR_String) "% done.\n");
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * STATE_VARIABLE_NoInferProcs_8,
  MR_Word STATE_VARIABLE_ImportedProcs_0_9,
  MR_Word * STATE_VARIABLE_ImportedProcs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImportedProcs_10 = STATE_VARIABLE_ImportedProcs_0_9;
      *STATE_VARIABLE_NoInferProcs_8 = STATE_VARIABLE_NoInferProcs_0_7;
      *STATE_VARIABLE_UndeclaredProcs_6 = STATE_VARIABLE_UndeclaredProcs_0_5;
      *STATE_VARIABLE_DeclaredProcs_4 = STATE_VARIABLE_DeclaredProcs_0_3;
    }
    else
    {
      MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_31;
      MR_Word ProcIds_32;
      MR_Word STATE_VARIABLE_DeclaredProcs_41_41;
      MR_Word STATE_VARIABLE_UndeclaredProcs_42_42;
      MR_Word STATE_VARIABLE_NoInferProcs_43_43;
      MR_Word STATE_VARIABLE_ImportedProcs_44_44;
      MR_Box conv0_PredInfo_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NoInferProcs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ImportedProcs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_25)), &conv0_PredInfo_31);
      PredInfo_31 = ((MR_Word) (conv0_PredInfo_31));
      ProcIds_32 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_31);
      check_hlds__det_analysis__determinism_declarations_procs_11_p_0(PredId_25, PredInfo_31, ProcIds_32, STATE_VARIABLE_DeclaredProcs_0_3, &STATE_VARIABLE_DeclaredProcs_41_41, STATE_VARIABLE_UndeclaredProcs_0_5, &STATE_VARIABLE_UndeclaredProcs_42_42, STATE_VARIABLE_NoInferProcs_0_7, &STATE_VARIABLE_NoInferProcs_43_43, STATE_VARIABLE_ImportedProcs_0_9, &STATE_VARIABLE_ImportedProcs_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_26;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_3 = STATE_VARIABLE_DeclaredProcs_41_41;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5 = STATE_VARIABLE_UndeclaredProcs_42_42;
      next_value_of_STATE_VARIABLE_NoInferProcs_0_7 = STATE_VARIABLE_NoInferProcs_43_43;
      next_value_of_STATE_VARIABLE_ImportedProcs_0_9 = STATE_VARIABLE_ImportedProcs_44_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeclaredProcs_0_3 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      STATE_VARIABLE_UndeclaredProcs_0_5 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      STATE_VARIABLE_NoInferProcs_0_7 = next_value_of_STATE_VARIABLE_NoInferProcs_0_7;
      STATE_VARIABLE_ImportedProcs_0_9 = next_value_of_STATE_VARIABLE_ImportedProcs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * STATE_VARIABLE_NoInferProcs_9,
  MR_Word STATE_VARIABLE_ImportedProcs_0_10,
  MR_Word * STATE_VARIABLE_ImportedProcs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImportedProcs_11 = STATE_VARIABLE_ImportedProcs_0_10;
      *STATE_VARIABLE_NoInferProcs_9 = STATE_VARIABLE_NoInferProcs_0_8;
      *STATE_VARIABLE_UndeclaredProcs_7 = STATE_VARIABLE_UndeclaredProcs_0_6;
      *STATE_VARIABLE_DeclaredProcs_5 = STATE_VARIABLE_DeclaredProcs_0_4;
    }
    else
    {
      MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredProcId_34;
      MR_Word STATE_VARIABLE_ImportedProcs_48_48;
      MR_Word STATE_VARIABLE_NoInferProcs_50_50;
      MR_Word STATE_VARIABLE_UndeclaredProcs_51_51;
      MR_Word STATE_VARIABLE_DeclaredProcs_52_52;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NoInferProcs_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImportedProcs_0_10;

      {
        PredProcId_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_34, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, PredProcId_34, 1) = ((MR_Box) (ProcId_28));
      }
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(HeadVar__2_2);
      if (succeeded)
      {
        {
          STATE_VARIABLE_ImportedProcs_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ImportedProcs_48_48, 0) = ((MR_Box) (PredProcId_34));
          MR_hl_field(1, STATE_VARIABLE_ImportedProcs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_ImportedProcs_0_10));
        }
        STATE_VARIABLE_NoInferProcs_50_50 = STATE_VARIABLE_NoInferProcs_0_8;
        STATE_VARIABLE_UndeclaredProcs_51_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
        STATE_VARIABLE_DeclaredProcs_52_52 = STATE_VARIABLE_DeclaredProcs_0_4;
      }
      else
      {
        {
          MR_Integer Var_55;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(HeadVar__2_2);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_55);
            succeeded = (ProcId_28 == Var_55);
          }
        }
        if (!(succeeded))
        {
          MR_Word Markers_35;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(HeadVar__2_2, &Markers_35);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_35, (MR_Integer) 11);
        }
        if (succeeded)
        {
          {
            STATE_VARIABLE_NoInferProcs_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_NoInferProcs_50_50, 0) = ((MR_Box) (PredProcId_34));
            MR_hl_field(1, STATE_VARIABLE_NoInferProcs_50_50, 1) = ((MR_Box) (STATE_VARIABLE_NoInferProcs_0_8));
          }
          STATE_VARIABLE_UndeclaredProcs_51_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
          STATE_VARIABLE_DeclaredProcs_52_52 = STATE_VARIABLE_DeclaredProcs_0_4;
        }
        else
        {
          MR_Word ProcTable_36;
          MR_Word ProcInfo_37;
          MR_Word MaybeDetism_38;
          MR_Box conv0_ProcInfo_37;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(HeadVar__2_2, &ProcTable_36);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_36, ((MR_Box) (ProcId_28)), &conv0_ProcInfo_37);
          ProcInfo_37 = ((MR_Word) (conv0_ProcInfo_37));
          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_37, &MaybeDetism_38);
          if ((MaybeDetism_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              STATE_VARIABLE_UndeclaredProcs_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UndeclaredProcs_51_51, 0) = ((MR_Box) (PredProcId_34));
              MR_hl_field(1, STATE_VARIABLE_UndeclaredProcs_51_51, 1) = ((MR_Box) (STATE_VARIABLE_UndeclaredProcs_0_6));
            }
            STATE_VARIABLE_DeclaredProcs_52_52 = STATE_VARIABLE_DeclaredProcs_0_4;
          }
          else
          {
            {
              STATE_VARIABLE_DeclaredProcs_52_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_DeclaredProcs_52_52, 0) = ((MR_Box) (PredProcId_34));
              MR_hl_field(1, STATE_VARIABLE_DeclaredProcs_52_52, 1) = ((MR_Box) (STATE_VARIABLE_DeclaredProcs_0_4));
            }
            STATE_VARIABLE_UndeclaredProcs_51_51 = STATE_VARIABLE_UndeclaredProcs_0_6;
          }
          STATE_VARIABLE_NoInferProcs_50_50 = STATE_VARIABLE_NoInferProcs_0_8;
        }
        STATE_VARIABLE_ImportedProcs_48_48 = STATE_VARIABLE_ImportedProcs_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_29;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_4 = STATE_VARIABLE_DeclaredProcs_52_52;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6 = STATE_VARIABLE_UndeclaredProcs_51_51;
      next_value_of_STATE_VARIABLE_NoInferProcs_0_8 = STATE_VARIABLE_NoInferProcs_50_50;
      next_value_of_STATE_VARIABLE_ImportedProcs_0_10 = STATE_VARIABLE_ImportedProcs_48_48;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclaredProcs_0_4 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      STATE_VARIABLE_UndeclaredProcs_0_6 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      STATE_VARIABLE_NoInferProcs_0_8 = next_value_of_STATE_VARIABLE_NoInferProcs_0_8;
      STATE_VARIABLE_ImportedProcs_0_10 = next_value_of_STATE_VARIABLE_ImportedProcs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_to_fixpoint_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word PredProcIds_7,
  MR_Word Debug_8,
  MR_Word * Specs_9)
{
  while (MR_TRUE)
  {
    MR_Word Specs1_10;
    MR_Word Changed_11;
    MR_Word STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word DebugStream_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__det_analysis__determinism_inference_one_pass_8_p_0(PredProcIds_7, Debug_8, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_16_16, (MR_Word) ((MR_Unsigned) 0U), &Specs1_10, (MR_Integer) 1, &Changed_11);
    hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_16_16, &DebugStream_13);
    libs__file_util__maybe_write_string_5_p_0(DebugStream_13, Debug_8, (MR_String) "% Inference pass complete\n");
    switch (Changed_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_14 = STATE_VARIABLE_ModuleInfo_16_16;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_ModuleInfo_0_14 = next_value_of_STATE_VARIABLE_ModuleInfo_0_14;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          *Specs_9 = Specs1_10;
          *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_16_16;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_inference_one_pass_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Debug_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word PredProcId_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredProcIds_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_31_31;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word STATE_VARIABLE_Changed_33_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      check_hlds__det_analysis__det_infer_proc_8_p_0(PredProcId_19, Debug_2, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Changed_0_7, &STATE_VARIABLE_Changed_33_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_20;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_31_31;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_32_32;
      next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      STATE_VARIABLE_Changed_0_7 = next_value_of_STATE_VARIABLE_Changed_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word PredProcId_9,
  MR_Word Debug_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52,
  MR_Word STATE_VARIABLE_Changed_0_53,
  MR_Word * STATE_VARIABLE_Changed_54)
{
  MR_bool succeeded;
  MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
  MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 1))));
  MR_Word PredInfo0_16;
  MR_Word ProcInfo0_17;
  MR_Word OldDetism_18;
  MR_Word OldInferredSolnContext_19;
  MR_Word MaybeDeclaredDetism_20;
  MR_Word DeclaredSolnContext_22;
  MR_Word SolnContext_23;
  MR_Word Goal0_28;
  MR_Word InstMap0_29;
  MR_Word VarTable_30;
  MR_Word DetInfo0_31;
  MR_Word Goal_32;
  MR_Word InferDetism_33;
  MR_Word DetInfo_35;
  MR_Word OldCanFail_36;
  MR_Word OldMaxSoln_37;
  MR_Word InferCanFail_38;
  MR_Word InferMaxSoln_39;
  MR_Word CanFail_40;
  MR_Word MaxSoln_41;
  MR_Word TentativeDetism_42;
  MR_Word EvalMethod_43;
  MR_Word NewDetism_44;
  MR_Word ProcInfo1_45;
  MR_Word ProcInfo_46;
  MR_Word PredInfo1_47;
  MR_Word PredInfo_48;
  MR_Word STATE_VARIABLE_ModuleInfo_67_67;
  MR_Word HasFormatCalls_95;
  MR_Word HasRequireScope_96;
  MR_Word HasIncompleteSwitch_97;
  MR_Word STATE_VARIABLE_Markers_12_98;
  MR_Word STATE_VARIABLE_Markers_14_100;
  MR_Word STATE_VARIABLE_Markers_16_102;
  MR_Word STATE_VARIABLE_Markers_18_104;
  MR_Word Var_91;
  MR_Word Var_89;
  MR_Word Var_34;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_49, PredId_14, &PredInfo0_16);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_16, ProcId_15, &ProcInfo0_17);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_17, &OldDetism_18);
  parse_tree__prog_data__determinism_components_3_p_0(OldDetism_18, &Var_89, &Var_91);
  succeeded = ((MR_Integer) 2 == Var_91);
  if (succeeded)
    OldInferredSolnContext_19 = (MR_Integer) 1;
  else
    OldInferredSolnContext_19 = (MR_Integer) 0;
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_17, &MaybeDeclaredDetism_20);
  if ((MaybeDeclaredDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
    DeclaredSolnContext_22 = (MR_Integer) 0;
  else
  {
    MR_Word DeclaredDetism_21 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_20, (MR_Integer) 0))));
    MR_Word Var_94;
    MR_Word Var_92;

    parse_tree__prog_data__determinism_components_3_p_0(DeclaredDetism_21, &Var_92, &Var_94);
    succeeded = ((MR_Integer) 2 == Var_94);
    if (succeeded)
      DeclaredSolnContext_22 = (MR_Integer) 1;
    else
      DeclaredSolnContext_22 = (MR_Integer) 0;
  }
  succeeded = (DeclaredSolnContext_22 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (OldInferredSolnContext_19 == (MR_Integer) 1);
  if (succeeded)
    SolnContext_23 = (MR_Integer) 1;
  else
    SolnContext_23 = (MR_Integer) 0;
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_17, &Goal0_28);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_49, ProcInfo0_17, &InstMap0_29);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_17, &VarTable_30);
  check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_49, PredProcId_9, VarTable_30, (MR_Integer) 0, STATE_VARIABLE_Specs_0_51, &DetInfo0_31);
  check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_28, &Goal_32, InstMap0_29, SolnContext_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &InferDetism_33, &Var_34, DetInfo0_31, &DetInfo_35);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_35, &STATE_VARIABLE_ModuleInfo_67_67);
  check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_35, STATE_VARIABLE_Specs_52);
  parse_tree__prog_data__determinism_components_3_p_0(OldDetism_18, &OldCanFail_36, &OldMaxSoln_37);
  parse_tree__prog_data__determinism_components_3_p_0(InferDetism_33, &InferCanFail_38, &InferMaxSoln_39);
  parse_tree__prog_detism__det_switch_canfail_3_p_0(OldCanFail_36, InferCanFail_38, &CanFail_40);
  parse_tree__prog_detism__det_switch_maxsoln_3_p_0(OldMaxSoln_37, InferMaxSoln_39, &MaxSoln_41);
  parse_tree__prog_data__determinism_components_3_p_1(&TentativeDetism_42, CanFail_40, MaxSoln_41);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_17, &EvalMethod_43);
  NewDetism_44 = hlds__hlds_pred__eval_method_change_determinism_2_f_0(EvalMethod_43, TentativeDetism_42);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, ProcInfo0_17, &ProcInfo1_45);
  hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(NewDetism_44, ProcInfo1_45, &ProcInfo_46);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_15, ProcInfo_46, PredInfo0_16, &PredInfo1_47);
  check_hlds__det_util__det_info_get_has_format_call_2_p_0(DetInfo_35, &HasFormatCalls_95);
  check_hlds__det_util__det_info_get_has_req_scope_2_p_0(DetInfo_35, &HasRequireScope_96);
  check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(DetInfo_35, &HasIncompleteSwitch_97);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_47, &STATE_VARIABLE_Markers_12_98);
  switch (HasFormatCalls_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 27, STATE_VARIABLE_Markers_12_98, &STATE_VARIABLE_Markers_14_100);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_14_100 = STATE_VARIABLE_Markers_12_98;
      break;
  }
  switch (HasRequireScope_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 25, STATE_VARIABLE_Markers_14_100, &STATE_VARIABLE_Markers_16_102);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_16_102 = STATE_VARIABLE_Markers_14_100;
      break;
  }
  switch (HasIncompleteSwitch_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 26, STATE_VARIABLE_Markers_16_102, &STATE_VARIABLE_Markers_18_104);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_Markers_18_104 = STATE_VARIABLE_Markers_16_102;
      break;
  }
  hlds__hlds_pred__pred_info_set_markers_3_p_0(STATE_VARIABLE_Markers_18_104, PredInfo1_47, &PredInfo_48);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_14, PredInfo_48, STATE_VARIABLE_ModuleInfo_67_67, STATE_VARIABLE_ModuleInfo_50);
  check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(*STATE_VARIABLE_ModuleInfo_50, Debug_10, PredProcId_9, OldDetism_18, NewDetism_44, STATE_VARIABLE_Changed_0_53, STATE_VARIABLE_Changed_54);
}

static void MR_CALL 
check_hlds__det_analysis__maybe_record_change_print_inferred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Debug_9,
  MR_Word PredProcId_10,
  MR_Word OldDetism_11,
  MR_Word NewDetism_12,
  MR_Word STATE_VARIABLE_Changed_0_19,
  MR_Word * STATE_VARIABLE_Changed_20)
{
  MR_bool succeeded = (NewDetism_12 == OldDetism_11);
  MR_String ChangeStr_14;

  if (succeeded)
  {
    ChangeStr_14 = (MR_String) "old";
    *STATE_VARIABLE_Changed_20 = STATE_VARIABLE_Changed_0_19;
  }
  else
  {
    ChangeStr_14 = (MR_String) "new";
    *STATE_VARIABLE_Changed_20 = (MR_Integer) 0;
  }
  switch (Debug_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_16;
        MR_String NewDetismStr_17;
        MR_String ProcStr_18;

        hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_8, &DebugStream_16);
        NewDetismStr_17 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(NewDetism_12);
        ProcStr_18 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(ModuleInfo_8, PredProcId_10);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) "% Inferred ");
        mercury__io__write_string_4_p_0(DebugStream_16, ChangeStr_14);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) " detism ");
        mercury__io__write_string_4_p_0(DebugStream_16, NewDetismStr_17);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) " for ");
        mercury__io__write_string_4_p_0(DebugStream_16, ProcStr_18);
        mercury__io__write_string_4_p_0(DebugStream_16, (MR_String) "\n");
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__4_4;

  conv2_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_58, (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_69);
  if ((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
    check_hlds__det_analysis__det_infer_scope_12_p_0_5(env_ptr);
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
    {
      parse_tree__set_of_var__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_61, &(env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_69, check_hlds__det_analysis__det_infer_scope_12_p_0_6, env_ptr);
      (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
  MR_Word Reason_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word GoalInfo_16,
  MR_Word InstMap0_17,
  MR_Word SolnContext_18,
  MR_Word RightFailingContexts_19,
  MR_Word MaybePromiseEqvSolutionSets0_20,
  MR_Word * Detism_21,
  MR_Word * GoalFailingContexts_22,
  MR_Word STATE_VARIABLE_DetInfo_0_109,
  MR_Word * STATE_VARIABLE_DetInfo_110)
{
  struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s env;

  switch (MR_tag((MR_Word) Reason_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_109, STATE_VARIABLE_DetInfo_110);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(2, Reason_13, (MR_Integer) 0))));
        MR_Word Kind_25 = ((MR_Unsigned) ((MR_hl_field(2, Reason_13, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word VarTable_26;
        MR_Word Context_27;
        MR_Word SolnContextToUse_28;
        MR_Word MaybePromiseEqvSolutionSets_29;
        MR_Word InstmapDelta_52;
        MR_Word ChangedVars_53;
        MR_Word ModuleInfo_54;
        MR_Word GroundBoundVars_56;
        MR_Word NonLocalVars_57;
        MR_Word BoundVars0_59;
        MR_Word BoundVars_60;
        MR_Word ExtraVars_73;
        MR_Word IgnoreExtraVars_74;
        MR_Word STATE_VARIABLE_DetInfo_145_145;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word STATE_VARIABLE_DetInfo_260_260;
        MR_Word Var_261;
        MR_Word STATE_VARIABLE_DetInfo_291_291;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, Reason_13, (MR_Integer) 1)));
        MR_Word _GroundAtStartVars_55;

        check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_109, &VarTable_26);
        Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        switch (Kind_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              SolnContextToUse_28 = SolnContext_18;
              if ((MaybePromiseEqvSolutionSets0_20 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_111;

                {
                  Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_111, 0) = ((MR_Box) (Vars_24));
                  MR_hl_field(0, Var_111, 1) = ((MR_Box) (Context_27));
                }
                {
                  MaybePromiseEqvSolutionSets_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePromiseEqvSolutionSets_29, 0) = ((MR_Box) (Var_111));
                }
                STATE_VARIABLE_DetInfo_145_145 = STATE_VARIABLE_DetInfo_0_109;
              }
              else
              {
                MR_Word PESSInfo_30 = ((MR_Word) ((MR_hl_field(1, MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0))));
                MR_Word OuterVars_31 = ((MR_Word) ((MR_hl_field(0, PESSInfo_30, (MR_Integer) 0))));
                MR_Word OuterContext_32 = ((MR_Word) ((MR_hl_field(0, PESSInfo_30, (MR_Integer) 1))));
                MR_Word NestedSpec_36;
                MR_Word AllVars_37;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Word Var_143;
                MR_Word Var_146;
                MR_Word Var_147;
                MR_Word Var_148;

                {
                  Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_141, 0) = ((MR_Box) (Context_27));
                  MR_hl_field(0, Var_141, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[45])));
                }
                {
                  Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_143, 0) = ((MR_Box) (OuterContext_32));
                  MR_hl_field(0, Var_143, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[50])));
                }
                {
                  Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
                  MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
                  MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
                }
                {
                  NestedSpec_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, NestedSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
                  MR_hl_field(3, NestedSpec_36, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, NestedSpec_36, 2) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_2[0])));
                  MR_hl_field(3, NestedSpec_36, 3) = ((MR_Box) ((MR_Unsigned) 64U));
                  MR_hl_field(3, NestedSpec_36, 4) = ((MR_Box) (Var_140));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(NestedSpec_36, STATE_VARIABLE_DetInfo_0_109, &STATE_VARIABLE_DetInfo_145_145);
                Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), OuterVars_31, Vars_24);
                AllVars_37 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_146);
                Var_148 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_37);
                {
                  Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_147, 0) = ((MR_Box) (Var_148));
                  MR_hl_field(0, Var_147, 1) = ((MR_Box) (OuterContext_32));
                }
                {
                  MaybePromiseEqvSolutionSets_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePromiseEqvSolutionSets_29, 0) = ((MR_Box) (Var_147));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              if ((MaybePromiseEqvSolutionSets0_20 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArbitrarySpec_39;

                {
                  ArbitrarySpec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ArbitrarySpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
                  MR_hl_field(1, ArbitrarySpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, ArbitrarySpec_39, 2) = ((MR_Box) ((MR_Unsigned) 64U));
                  MR_hl_field(1, ArbitrarySpec_39, 3) = ((MR_Box) (Context_27));
                  MR_hl_field(1, ArbitrarySpec_39, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[57])));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(ArbitrarySpec_39, STATE_VARIABLE_DetInfo_0_109, &STATE_VARIABLE_DetInfo_145_145);
              }
              else
              {
                MR_Word OldVars_40;
                MR_Word PromiseContext_41;
                MR_Word OverlapVars_42;
                MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0))));
                MR_Word Var_174;
                MR_Word Var_175;

                OldVars_40 = ((MR_Word) ((MR_hl_field(0, Var_173, (MR_Integer) 0))));
                PromiseContext_41 = ((MR_Word) ((MR_hl_field(0, Var_173, (MR_Integer) 1))));
                Var_174 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVars_40);
                Var_175 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
                OverlapVars_42 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_174, Var_175);
                (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_42);
                if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
                  STATE_VARIABLE_DetInfo_145_145 = STATE_VARIABLE_DetInfo_0_109;
                else
                {
                  MR_Word OverlapVarNames_43;
                  MR_String OverlapVarStr_45;
                  MR_Word OverlapPieces_49;
                  MR_Word OverlapSpec_51;
                  MR_Word Var_176;
                  MR_Word Var_178;
                  MR_Word Var_183;
                  MR_Word Var_186;
                  MR_Word Var_189;
                  MR_Word Var_192;
                  MR_Word Var_195;
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Var_201;
                  MR_Word Var_202;
                  MR_Word Var_223;
                  MR_Word Var_224;
                  MR_Word Var_225;
                  MR_Word Var_226;

                  {
                    Var_176 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_176, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[0]));
                    MR_hl_field(0, Var_176, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
                    MR_hl_field(0, Var_176, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_176, 3) = ((MR_Box) (VarTable_26));
                    MR_hl_field(0, Var_176, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Var_178 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_42);
                  OverlapVarNames_43 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_176, Var_178);
                  if ((OverlapVarNames_43 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
                      return;
                    }
                  else
                  {
                    MR_Word Var_342 = ((MR_Word) ((MR_hl_field(1, OverlapVarNames_43, (MR_Integer) 1))));
                    MR_String Var_343 = ((MR_String) ((MR_hl_field(1, OverlapVarNames_43, (MR_Integer) 0))));

                    if ((Var_342 == (MR_Word) ((MR_Unsigned) 0U)))
                      OverlapVarStr_45 = (MR_String) "the variable";
                    else
                      OverlapVarStr_45 = (MR_String) "the following variables:";
                  }
                  {
                    Var_199 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_199, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_199, 1) = ((MR_Box) (OverlapVarStr_45));
                  }
                  {
                    Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_198, 0) = ((MR_Box) (Var_199));
                    MR_hl_field(1, Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_195, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[60])));
                    MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_198));
                  }
                  {
                    Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_192, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[42])));
                    MR_hl_field(1, Var_192, 1) = ((MR_Box) (Var_195));
                  }
                  {
                    Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_189, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[59])));
                    MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_192));
                  }
                  {
                    Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_186, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[53])));
                    MR_hl_field(1, Var_186, 1) = ((MR_Box) (Var_189));
                  }
                  {
                    Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_183, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[58])));
                    MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_186));
                  }
                  Var_202 = parse_tree__error_spec__list_to_pieces_1_f_0(OverlapVarNames_43);
                  Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[62])));
                  OverlapPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_183, Var_201);
                  {
                    Var_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_224, 0) = ((MR_Box) (Context_27));
                    MR_hl_field(0, Var_224, 1) = ((MR_Box) (OverlapPieces_49));
                  }
                  {
                    Var_226 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_226, 0) = ((MR_Box) (PromiseContext_41));
                    MR_hl_field(0, Var_226, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[50])));
                  }
                  {
                    Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_225, 0) = ((MR_Box) (Var_226));
                    MR_hl_field(1, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_223, 0) = ((MR_Box) (Var_224));
                    MR_hl_field(1, Var_223, 1) = ((MR_Box) (Var_225));
                  }
                  {
                    OverlapSpec_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, OverlapSpec_51, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
                    MR_hl_field(0, OverlapSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, OverlapSpec_51, 2) = ((MR_Box) ((MR_Unsigned) 64U));
                    MR_hl_field(0, OverlapSpec_51, 3) = ((MR_Box) (Var_223));
                  }
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(OverlapSpec_51, STATE_VARIABLE_DetInfo_0_109, &STATE_VARIABLE_DetInfo_145_145);
                }
              }
              MaybePromiseEqvSolutionSets_29 = (MR_Word) ((MR_Unsigned) 0U);
              SolnContextToUse_28 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 0:
            {
              SolnContextToUse_28 = (MR_Integer) 1;
              MaybePromiseEqvSolutionSets_29 = MaybePromiseEqvSolutionSets0_20;
              STATE_VARIABLE_DetInfo_145_145 = STATE_VARIABLE_DetInfo_0_109;
            }
            break;
        }
        InstmapDelta_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_16);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_52, &ChangedVars_53);
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_145_145, &ModuleInfo_54);
        {
          Var_229 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_229, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
          MR_hl_field(0, Var_229, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
          MR_hl_field(0, Var_229, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_229, 3) = ((MR_Box) (ModuleInfo_54));
          MR_hl_field(0, Var_229, 4) = ((MR_Box) (InstMap0_17));
        }
        parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_229, ChangedVars_53, &_GroundAtStartVars_55, &GroundBoundVars_56);
        NonLocalVars_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
        {
          Var_230 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_230, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
          MR_hl_field(0, Var_230, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
          MR_hl_field(0, Var_230, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_230, 3) = ((MR_Box) (ModuleInfo_54));
          MR_hl_field(0, Var_230, 4) = ((MR_Box) (InstMap0_17));
        }
        (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_58 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_230, NonLocalVars_57);
        BoundVars0_59 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GroundBoundVars_56, (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_58);
        BoundVars_60 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_26, BoundVars0_59);
        Var_231 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundVars_60, Var_231, &(env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_61);
        (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_61);
        if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
          STATE_VARIABLE_DetInfo_260_260 = STATE_VARIABLE_DetInfo_145_145;
        else
        {
          MR_Word MissingVarNames_62;
          MR_String MissingKindStr_63;
          MR_String MissingListStr_65;
          MR_String BindsWords_70;
          MR_Word MissingPieces_71;
          MR_Word MissingSpec_72;
          MR_Word Var_232;
          MR_Word Var_234;
          MR_Word Var_239;
          MR_Word Var_242;
          MR_Word Var_243;
          MR_Word Var_244;
          MR_Word Var_245;
          MR_Word Var_246;
          MR_Word Var_247;
          MR_Word Var_249;
          MR_Word Var_250;

          {
            Var_232 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_232, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[0]));
            MR_hl_field(0, Var_232, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
            MR_hl_field(0, Var_232, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_232, 3) = ((MR_Box) (VarTable_26));
            MR_hl_field(0, Var_232, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_234 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_61);
          MissingVarNames_62 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_232, Var_234);
          MissingKindStr_63 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(Kind_25);
          if ((MissingVarNames_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
              return;
            }
          else
          {
            MR_Word Var_344 = ((MR_Word) ((MR_hl_field(1, MissingVarNames_62, (MR_Integer) 1))));
            MR_String Var_345 = ((MR_String) ((MR_hl_field(1, MissingVarNames_62, (MR_Integer) 0))));

            if ((Var_344 == (MR_Word) ((MR_Unsigned) 0U)))
              MissingListStr_65 = (MR_String) "a variable that is not listed:";
            else
              MissingListStr_65 = (MR_String) "some variables that are not listed:";
          }
          check_hlds__det_analysis__det_infer_scope_12_p_0_7(&env);
          if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            BindsWords_70 = (MR_String) "goal may constrain";
          else
            BindsWords_70 = (MR_String) "goal binds";
          {
            Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_243, 1) = ((MR_Box) (MissingKindStr_63));
          }
          {
            Var_245 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_245, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_245, 1) = ((MR_Box) (BindsWords_70));
          }
          {
            Var_247 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_247, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_247, 1) = ((MR_Box) (MissingListStr_65));
          }
          {
            Var_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_246, 0) = ((MR_Box) (Var_247));
            MR_hl_field(1, Var_246, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_244, 0) = ((MR_Box) (Var_245));
            MR_hl_field(1, Var_244, 1) = ((MR_Box) (Var_246));
          }
          {
            Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_242, 0) = ((MR_Box) (Var_243));
            MR_hl_field(1, Var_242, 1) = ((MR_Box) (Var_244));
          }
          {
            Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_239, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[63])));
            MR_hl_field(1, Var_239, 1) = ((MR_Box) (Var_242));
          }
          Var_250 = parse_tree__error_spec__list_to_pieces_1_f_0(MissingVarNames_62);
          Var_249 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_250, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[62])));
          MissingPieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_239, Var_249);
          {
            MissingSpec_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MissingSpec_72, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
            MR_hl_field(1, MissingSpec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, MissingSpec_72, 2) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(1, MissingSpec_72, 3) = ((MR_Box) (Context_27));
            MR_hl_field(1, MissingSpec_72, 4) = ((MR_Box) (MissingPieces_71));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(MissingSpec_72, STATE_VARIABLE_DetInfo_145_145, &STATE_VARIABLE_DetInfo_260_260);
        }
        Var_261 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_261, BoundVars_60, &ExtraVars_73);
        check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(STATE_VARIABLE_DetInfo_260_260, &IgnoreExtraVars_74);
        (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_73);
        if (!((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
          (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (IgnoreExtraVars_74 == (MR_Integer) 1);
        if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
          STATE_VARIABLE_DetInfo_291_291 = STATE_VARIABLE_DetInfo_260_260;
        else
        {
          MR_Word ExtraVarNames_75;
          MR_String ExtraKindStr_76;
          MR_String ExtraListStr_78;
          MR_Word ExtraPieces_82;
          MR_Word ExtraSpec_83;
          MR_Word Var_262;
          MR_Word Var_264;
          MR_Word Var_269;
          MR_Word Var_272;
          MR_Word Var_273;
          MR_Word Var_274;
          MR_Word Var_277;
          MR_Word Var_278;
          MR_Word Var_280;
          MR_Word Var_281;

          {
            Var_262 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_262, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[0]));
            MR_hl_field(0, Var_262, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
            MR_hl_field(0, Var_262, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_262, 3) = ((MR_Box) (VarTable_26));
            MR_hl_field(0, Var_262, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_264 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_73);
          ExtraVarNames_75 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_262, Var_264);
          ExtraKindStr_76 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(Kind_25);
          if ((ExtraVarNames_75 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
              return;
            }
          else
          {
            MR_Word Var_346 = ((MR_Word) ((MR_hl_field(1, ExtraVarNames_75, (MR_Integer) 1))));
            MR_String Var_347 = ((MR_String) ((MR_hl_field(1, ExtraVarNames_75, (MR_Integer) 0))));

            if ((Var_346 == (MR_Word) ((MR_Unsigned) 0U)))
              ExtraListStr_78 = (MR_String) "an extra variable:";
            else
              ExtraListStr_78 = (MR_String) "some extra variables:";
          }
          {
            Var_273 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_273, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_273, 1) = ((MR_Box) (ExtraKindStr_76));
          }
          {
            Var_278 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_278, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_278, 1) = ((MR_Box) (ExtraListStr_78));
          }
          {
            Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_277, 0) = ((MR_Box) (Var_278));
            MR_hl_field(1, Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_274 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_274, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[64])));
            MR_hl_field(1, Var_274, 1) = ((MR_Box) (Var_277));
          }
          {
            Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_272, 0) = ((MR_Box) (Var_273));
            MR_hl_field(1, Var_272, 1) = ((MR_Box) (Var_274));
          }
          {
            Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_269, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[63])));
            MR_hl_field(1, Var_269, 1) = ((MR_Box) (Var_272));
          }
          Var_281 = parse_tree__error_spec__list_to_pieces_1_f_0(ExtraVarNames_75);
          Var_280 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_281, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[62])));
          ExtraPieces_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_269, Var_280);
          {
            ExtraSpec_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ExtraSpec_83, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
            MR_hl_field(1, ExtraSpec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, ExtraSpec_83, 2) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(1, ExtraSpec_83, 3) = ((MR_Box) (Context_27));
            MR_hl_field(1, ExtraSpec_83, 4) = ((MR_Box) (ExtraPieces_82));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(ExtraSpec_83, STATE_VARIABLE_DetInfo_260_260, &STATE_VARIABLE_DetInfo_291_291);
        }
        check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContextToUse_28, RightFailingContexts_19, MaybePromiseEqvSolutionSets_29, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_291_291, STATE_VARIABLE_DetInfo_110);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_109, STATE_VARIABLE_DetInfo_110);
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_DetInfo_312_312;

            check_hlds__det_util__det_info_set_has_req_scope_2_p_0(STATE_VARIABLE_DetInfo_0_109, &STATE_VARIABLE_DetInfo_312_312);
            check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_312_312, STATE_VARIABLE_DetInfo_110);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word FromGroundTermKind_108 = ((MR_Unsigned) ((MR_hl_field(3, Reason_13, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_107 = ((MR_Word) ((MR_hl_field(3, Reason_13, (MR_Integer) 1))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Reason_13, (MR_Integer) 2)));

            switch (FromGroundTermKind_108) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_15 = Goal0_14;
                  *Detism_21 = (MR_Integer) 0;
                  *GoalFailingContexts_22 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_DetInfo_110 = STATE_VARIABLE_DetInfo_0_109;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_109, STATE_VARIABLE_DetInfo_110);
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Detism0_89;
            MR_Word STATE_VARIABLE_DetInfo_293_293;
            MR_Word Detism1_90;

            check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, &Detism0_89, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_109, &STATE_VARIABLE_DetInfo_293_293);
            switch (Detism0_89) {
              default:
                (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                {
                  Detism1_90 = (MR_Integer) 4;
                  (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  Detism1_90 = (MR_Integer) 0;
                  (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  Detism1_90 = (MR_Integer) 0;
                  (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                }
                break;
            }
            if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            {
              *Detism_21 = Detism1_90;
              *STATE_VARIABLE_DetInfo_110 = STATE_VARIABLE_DetInfo_293_293;
            }
            else
            {
              MR_String DetismStr_91;
              MR_Word Pieces_92;
              MR_Word Spec_93;
              MR_Word Var_296;
              MR_Word Var_297;
              MR_Word Context_320;

              *Detism_21 = Detism0_89;
              Context_320 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
              DetismStr_91 = parse_tree__prog_out__determinism_to_string_1_f_0(*Detism_21);
              {
                Var_297 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_297, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_297, 1) = ((MR_Box) (DetismStr_91));
              }
              {
                Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[39])));
              }
              {
                Pieces_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_92, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[65])));
                MR_hl_field(1, Pieces_92, 1) = ((MR_Box) (Var_296));
              }
              {
                Spec_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12"));
                MR_hl_field(1, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 64U));
                MR_hl_field(1, Spec_93, 3) = ((MR_Box) (Context_320));
                MR_hl_field(1, Spec_93, 4) = ((MR_Box) (Pieces_92));
              }
              check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_93, STATE_VARIABLE_DetInfo_293_293, STATE_VARIABLE_DetInfo_110);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_109, STATE_VARIABLE_DetInfo_110);
            switch (*Detism_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
                {
                }
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
                  return;
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__det_analysis__det_infer_goal_10_p_0(
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word InstMap0_13,
  MR_Word STATE_VARIABLE_SolnContext_0_26,
  MR_Word RightFailingContexts_15,
  MR_Word MaybePromiseEqvSolutionSets_16,
  MR_Word * Detism_17,
  MR_Word * GoalFailingContexts_18,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  MR_Word NonLocalVars_22;
  MR_Word InstmapDelta_23;
  MR_Word AddPruning_25;
  MR_Word STATE_VARIABLE_SolnContext_30_30;
  MR_Word Purity_24;
  MR_Word Var_29;

  NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
  InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_21);
  succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(STATE_VARIABLE_DetInfo_0_27, InstMap0_13, InstmapDelta_23, NonLocalVars_22);
  if (succeeded)
  {
    Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_21);
    succeeded = (Purity_24 == (MR_Integer) 2);
    if (succeeded)
    {
      Var_29 = (MR_Integer) 2;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_21, Var_29);
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    AddPruning_25 = (MR_Integer) 1;
    STATE_VARIABLE_SolnContext_30_30 = (MR_Integer) 1;
  }
  else
  {
    AddPruning_25 = (MR_Integer) 0;
    STATE_VARIABLE_SolnContext_30_30 = STATE_VARIABLE_SolnContext_0_26;
  }
  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(Goal0_11, Goal_12, InstMap0_13, STATE_VARIABLE_SolnContext_30_30, RightFailingContexts_15, MaybePromiseEqvSolutionSets_16, AddPruning_25, Detism_17, GoalFailingContexts_18, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1533__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CanFail_0_7,
  MR_Word * STATE_VARIABLE_CanFail_8,
  MR_Word STATE_VARIABLE_MaxSolns_0_9,
  MR_Word * STATE_VARIABLE_MaxSolns_10,
  MR_Word STATE_VARIABLE_DetInfo_0_11,
  MR_Word * STATE_VARIABLE_DetInfo_12)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_12 = STATE_VARIABLE_DetInfo_0_11;
    *STATE_VARIABLE_MaxSolns_10 = STATE_VARIABLE_MaxSolns_0_9;
    *STATE_VARIABLE_CanFail_8 = STATE_VARIABLE_CanFail_0_7;
  }
  else
  {
    MR_Word Goal0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_28;
    MR_Word Goals_29;
    MR_Word FirstDetism_37;
    MR_Word FirstCanFail_38;
    MR_Word FirstMaxSolns_39;
    MR_Word STATE_VARIABLE_DetInfo_46_46;
    MR_Word STATE_VARIABLE_CanFail_47_47;
    MR_Word STATE_VARIABLE_MaxSolns_48_48;
    MR_Word GoalFailingContexts_49;
    MR_Word STATE_VARIABLE_DetInfo_27_56;

    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_26, &Goal_28, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &FirstDetism_37, &GoalFailingContexts_49, STATE_VARIABLE_DetInfo_0_11, &STATE_VARIABLE_DetInfo_27_56);
    switch (FirstDetism_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[0]));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_orelse_goals_12_p_0_1));
            MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_57, 3) = ((MR_Box) (GoalFailingContexts_49));
            MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
          STATE_VARIABLE_DetInfo_46_46 = STATE_VARIABLE_DetInfo_27_56;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo0_51 = ((MR_Word) ((MR_hl_field(0, Goal0_26, (MR_Integer) 1))));
          MR_Word Context_52;
          MR_String DetismStr_53;
          MR_Word Pieces_54;
          MR_Word Spec_55;
          MR_Word Var_63;
          MR_Word Var_64;

          Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_51);
          DetismStr_53 = parse_tree__prog_out__determinism_to_string_1_f_0(FirstDetism_37);
          {
            Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_64, 1) = ((MR_Box) (DetismStr_53));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[39])));
          }
          {
            Pieces_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[35])));
            MR_hl_field(1, Pieces_54, 1) = ((MR_Box) (Var_63));
          }
          {
            Spec_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9"));
            MR_hl_field(1, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(1, Spec_55, 3) = ((MR_Box) (Context_52));
            MR_hl_field(1, Spec_55, 4) = ((MR_Box) (Pieces_54));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_55, STATE_VARIABLE_DetInfo_27_56, &STATE_VARIABLE_DetInfo_46_46);
        }
        break;
    }
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_37, &FirstCanFail_38, &FirstMaxSolns_39);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(STATE_VARIABLE_CanFail_0_7, FirstCanFail_38, &STATE_VARIABLE_CanFail_47_47);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(STATE_VARIABLE_MaxSolns_0_9, FirstMaxSolns_39, &STATE_VARIABLE_MaxSolns_48_48);
    check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(Goals0_27, &Goals_29, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CanFail_47_47, STATE_VARIABLE_CanFail_8, STATE_VARIABLE_MaxSolns_48_48, STATE_VARIABLE_MaxSolns_10, STATE_VARIABLE_DetInfo_46_46, STATE_VARIABLE_DetInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_29));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1533__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
  MR_Word MainGoal0_12,
  MR_Word * MainGoal_13,
  MR_Word OrElseGoals0_14,
  MR_Word * OrElseGoals_15,
  MR_Word InstMap0_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word MaybePromiseEqvSolutionSets0_19,
  MR_Word * Detism_20,
  MR_Word STATE_VARIABLE_DetInfo_0_30,
  MR_Word * STATE_VARIABLE_DetInfo_31)
{
  MR_bool succeeded;
  MR_Word MainDetism_22;
  MR_Word STATE_VARIABLE_DetInfo_32_32;
  MR_Word GoalFailingContexts_33;
  MR_Word STATE_VARIABLE_DetInfo_27_40;

  check_hlds__det_analysis__det_infer_goal_10_p_0(MainGoal0_12, MainGoal_13, InstMap0_16, SolnContext_17, RightFailingContexts_18, MaybePromiseEqvSolutionSets0_19, &MainDetism_22, &GoalFailingContexts_33, STATE_VARIABLE_DetInfo_0_30, &STATE_VARIABLE_DetInfo_27_40);
  switch (MainDetism_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 0:
    case (MR_Integer) 6:
      {
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[0]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_11_p_0_1));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (GoalFailingContexts_33));
          MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
        STATE_VARIABLE_DetInfo_32_32 = STATE_VARIABLE_DetInfo_27_40;
      }
      break;
    case (MR_Integer) 5:
    case (MR_Integer) 7:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
      {
        MR_Word GoalInfo0_35 = ((MR_Word) ((MR_hl_field(0, MainGoal0_12, (MR_Integer) 1))));
        MR_Word Context_36;
        MR_String DetismStr_37;
        MR_Word Pieces_38;
        MR_Word Spec_39;
        MR_Word Var_47;
        MR_Word Var_48;

        Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_35);
        DetismStr_37 = parse_tree__prog_out__determinism_to_string_1_f_0(MainDetism_22);
        {
          Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_48, 1) = ((MR_Box) (DetismStr_37));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[39])));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[35])));
          MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_47));
        }
        {
          Spec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9"));
          MR_hl_field(1, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 64U));
          MR_hl_field(1, Spec_39, 3) = ((MR_Box) (Context_36));
          MR_hl_field(1, Spec_39, 4) = ((MR_Box) (Pieces_38));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_39, STATE_VARIABLE_DetInfo_27_40, &STATE_VARIABLE_DetInfo_32_32);
      }
      break;
  }
  if ((OrElseGoals0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OrElseGoals_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_20 = MainDetism_22;
    *STATE_VARIABLE_DetInfo_31 = STATE_VARIABLE_DetInfo_32_32;
  }
  else
  {
    MR_Word MainCanFail_25;
    MR_Word MainMaxSolns_26;
    MR_Word CanFail_27;
    MR_Word MaxSolns0_28;
    MR_Word MaxSolns_29;

    parse_tree__prog_data__determinism_components_3_p_0(MainDetism_22, &MainCanFail_25, &MainMaxSolns_26);
    check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(OrElseGoals0_14, OrElseGoals_15, InstMap0_16, SolnContext_17, RightFailingContexts_18, MaybePromiseEqvSolutionSets0_19, MainCanFail_25, &CanFail_27, MainMaxSolns_26, &MaxSolns0_28, STATE_VARIABLE_DetInfo_32_32, STATE_VARIABLE_DetInfo_31);
    MaxSolns_29 = ((&check_hlds__det_analysis_vector_common_4[0 + MaxSolns0_28]))->check_hlds__det_analysis__vector_common_type_4_0__vct_4_f_0;
    parse_tree__prog_data__determinism_components_3_p_1(Detism_20, CanFail_27, MaxSolns_29);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word MaybePromiseEqvSolutionSets_14,
  MR_Word * Detism_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_24,
  MR_Word * STATE_VARIABLE_DetInfo_25)
{
  MR_Word NegDetism_18;
  MR_Word MaybeDetism_20;
  MR_Word CanFail_21;
  MR_Word _NegatedGoalCanFail_19;
  MR_Word Var_22;

  check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_10, Goal_11, InstMap0_13, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), MaybePromiseEqvSolutionSets_14, &NegDetism_18, &_NegatedGoalCanFail_19, STATE_VARIABLE_DetInfo_0_24, STATE_VARIABLE_DetInfo_25);
  parse_tree__prog_detism__det_negation_det_2_p_0(NegDetism_18, &MaybeDetism_20);
  if ((MaybeDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_not\'/9", (MR_String) "inappropriate determinism inside a negation");
      return;
    }
  else
    *Detism_15 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_20, (MR_Integer) 0))));
  parse_tree__prog_data__determinism_components_3_p_0(*Detism_15, &CanFail_21, &Var_22);
  switch (CanFail_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_23;
        MR_Word Var_31;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Context_23));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
  MR_Word Cond0_15,
  MR_Word * Cond_16,
  MR_Word Then0_17,
  MR_Word * Then_18,
  MR_Word Else0_19,
  MR_Word * Else_20,
  MR_Word InstMap0_21,
  MR_Word SolnContext_22,
  MR_Word RightFailingContexts_23,
  MR_Word MaybePromiseEqvSolutionSets_24,
  MR_Word * Detism_25,
  MR_Word * GoalFailingContexts_26,
  MR_Word STATE_VARIABLE_DetInfo_0_49,
  MR_Word * STATE_VARIABLE_DetInfo_50)
{
  MR_bool succeeded;
  MR_Word InstMap1_30;
  MR_Word ThenDetism_31;
  MR_Word ThenFailingContexts_32;
  MR_Word ThenCanFail_33;
  MR_Word ThenMaxSoln_34;
  MR_Word CondSolnContext_35;
  MR_Word CondDetism_36;
  MR_Word CondCanFail_38;
  MR_Word CondMaxSoln_39;
  MR_Word ElseDetism_40;
  MR_Word ElseFailingContexts_41;
  MR_Word ElseCanFail_42;
  MR_Word ElseMaxSoln_43;
  MR_Word STATE_VARIABLE_DetInfo_55_55;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_DetInfo_61_61;
  MR_Word _CondFailingContexts_37;

  hlds__goal_util__update_instmap_3_p_0(Cond0_15, InstMap0_21, &InstMap1_30);
  check_hlds__det_analysis__det_infer_goal_10_p_0(Then0_17, Then_18, InstMap1_30, SolnContext_22, RightFailingContexts_23, MaybePromiseEqvSolutionSets_24, &ThenDetism_31, &ThenFailingContexts_32, STATE_VARIABLE_DetInfo_0_49, &STATE_VARIABLE_DetInfo_55_55);
  parse_tree__prog_data__determinism_components_3_p_0(ThenDetism_31, &ThenCanFail_33, &ThenMaxSoln_34);
  succeeded = (ThenCanFail_33 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (SolnContext_22 == (MR_Integer) 1);
  if (succeeded)
    CondSolnContext_35 = (MR_Integer) 1;
  else
    CondSolnContext_35 = (MR_Integer) 0;
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), ThenFailingContexts_32, RightFailingContexts_23);
  check_hlds__det_analysis__det_infer_goal_10_p_0(Cond0_15, Cond_16, InstMap0_21, CondSolnContext_35, Var_60, MaybePromiseEqvSolutionSets_24, &CondDetism_36, &_CondFailingContexts_37, STATE_VARIABLE_DetInfo_55_55, &STATE_VARIABLE_DetInfo_61_61);
  parse_tree__prog_data__determinism_components_3_p_0(CondDetism_36, &CondCanFail_38, &CondMaxSoln_39);
  check_hlds__det_analysis__det_infer_goal_10_p_0(Else0_19, Else_20, InstMap0_21, SolnContext_22, RightFailingContexts_23, MaybePromiseEqvSolutionSets_24, &ElseDetism_40, &ElseFailingContexts_41, STATE_VARIABLE_DetInfo_61_61, STATE_VARIABLE_DetInfo_50);
  parse_tree__prog_data__determinism_components_3_p_0(ElseDetism_40, &ElseCanFail_42, &ElseMaxSoln_43);
  switch (CondCanFail_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CondMaxSoln_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word CTMaxSoln_46;
            MR_Word MaxSoln_47;
            MR_Word CanFail_48;

            parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(CondMaxSoln_39, ThenMaxSoln_34, &CTMaxSoln_46);
            parse_tree__prog_detism__det_switch_maxsoln_3_p_0(CTMaxSoln_46, ElseMaxSoln_43, &MaxSoln_47);
            parse_tree__prog_detism__det_switch_canfail_3_p_0(ThenCanFail_33, ElseCanFail_42, &CanFail_48);
            parse_tree__prog_data__determinism_components_3_p_1(Detism_25, CanFail_48, MaxSoln_47);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word MaybeNegDetism_44;
            MR_Word NegDetism_45;

            parse_tree__prog_detism__det_negation_det_2_p_0(CondDetism_36, &MaybeNegDetism_44);
            if ((MaybeNegDetism_44 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
                return;
              }
            else
              NegDetism_45 = ((MR_Word) ((MR_hl_field(1, MaybeNegDetism_44, (MR_Integer) 0))));
            parse_tree__prog_detism__det_conjunction_detism_3_p_0(NegDetism_45, ElseDetism_40, Detism_25);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(CondDetism_36, ThenDetism_31, Detism_25);
      break;
  }
  *GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), ThenFailingContexts_32, ElseFailingContexts_41);
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
  MR_Word LHS_14,
  MR_Word RHS0_15,
  MR_Word Unify_16,
  MR_Word UnifyContext_17,
  MR_Word * RHS_18,
  MR_Word GoalInfo_19,
  MR_Word InstMap0_20,
  MR_Word SolnContext_21,
  MR_Word RightFailingContexts_22,
  MR_Word * Detism_23,
  MR_Word * GoalFailingContexts_24,
  MR_Word STATE_VARIABLE_DetInfo_0_84,
  MR_Word * STATE_VARIABLE_DetInfo_85)
{
  MR_bool succeeded;
  MR_Word UnifyCanFail_47;
  MR_Word ExaminesRepresentation_48;
  MR_Word UnifyNumSolns_49;
  MR_Word STATE_VARIABLE_DetInfo_99_99;
  MR_Word Var_101;

  switch (MR_tag((MR_Word) RHS0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *RHS_18 = RHS0_15;
        STATE_VARIABLE_DetInfo_99_99 = STATE_VARIABLE_DetInfo_0_84;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocalVars_32 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 2))));
        MR_Word ArgVarsModes_33 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 3))));
        MR_Word LambdaDeclaredDet_34 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_35 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 5))));
        MR_Word LambdaSolnContext_37;
        MR_Word ModuleInfo_38;
        MR_Word InstMap1_39;
        MR_Word Goal_40;
        MR_Word LambdaInferredDet_41;
        MR_Word STATE_VARIABLE_DetInfo_98_98;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0)));
        MR_Word Var_120;
        MR_Word Var_36;
        MR_Word _LambdaFailingContexts_42;

        parse_tree__prog_data__determinism_components_3_p_0(LambdaDeclaredDet_34, &Var_36, &Var_120);
        succeeded = ((MR_Integer) 2 == Var_120);
        if (succeeded)
          LambdaSolnContext_37 = (MR_Integer) 1;
        else
          LambdaSolnContext_37 = (MR_Integer) 0;
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_84, &ModuleInfo_38);
        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_38, ArgVarsModes_33, InstMap0_20, &InstMap1_39);
        check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_35, &Goal_40, InstMap1_39, LambdaSolnContext_37, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &LambdaInferredDet_41, &_LambdaFailingContexts_42, STATE_VARIABLE_DetInfo_0_84, &STATE_VARIABLE_DetInfo_98_98);
        check_hlds__det_report__det_check_lambda_7_p_0(LambdaDeclaredDet_34, LambdaInferredDet_41, Goal_40, GoalInfo_19, InstMap1_39, STATE_VARIABLE_DetInfo_98_98, &STATE_VARIABLE_DetInfo_99_99);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *RHS_18 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(2, base, 1) = NULL;
          MR_hl_field(2, base, 2) = ((MR_Box) (NonLocalVars_32));
          MR_hl_field(2, base, 3) = ((MR_Box) (ArgVarsModes_33));
          MR_hl_field(2, base, 4) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDet_34));
          MR_hl_field(2, base, 5) = ((MR_Box) (Goal_40));
        }
      }
      break;
  }
  check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(Unify_16, &UnifyCanFail_47);
  check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(Unify_16, &ExaminesRepresentation_48);
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (UnifyContext_17));
  }
  check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(LHS_14, ExaminesRepresentation_48, UnifyCanFail_47, SolnContext_21, RightFailingContexts_22, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_19, Var_101, &UnifyNumSolns_49, STATE_VARIABLE_DetInfo_99_99, STATE_VARIABLE_DetInfo_85);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_23, UnifyCanFail_47, UnifyNumSolns_49);
  switch (UnifyCanFail_47) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_50;

        Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
        switch (MR_tag((MR_Word) Unify_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail construct");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Unify_16, (MR_Integer) 0))));
              MR_Word FailingGoal_112;
              MR_Word ConsId_113 = ((MR_Word) ((MR_hl_field(1, Unify_16, (MR_Integer) 1))));
              MR_Word FailingContext_114;

              {
                FailingGoal_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, FailingGoal_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, FailingGoal_112, 1) = ((MR_Box) (Var_77));
                MR_hl_field(3, FailingGoal_112, 2) = ((MR_Box) (ConsId_113));
              }
              {
                FailingContext_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FailingContext_114, 0) = ((MR_Box) (Context_50));
                MR_hl_field(0, FailingContext_114, 1) = ((MR_Box) (FailingGoal_112));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalFailingContexts_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_114));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail assign");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unify_16, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var1_82 = ((MR_Word) ((MR_hl_field(3, Unify_16, (MR_Integer) 1))));
                  MR_Word Var2_83 = ((MR_Word) ((MR_hl_field(3, Unify_16, (MR_Integer) 2))));
                  MR_Word FailingGoal_115;
                  MR_Word FailingContext_116;

                  {
                    FailingGoal_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, FailingGoal_115, 0) = ((MR_Box) (Var1_82));
                    MR_hl_field(2, FailingGoal_115, 1) = ((MR_Box) (Var2_83));
                  }
                  {
                    FailingContext_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FailingContext_116, 0) = ((MR_Box) (Context_50));
                    MR_hl_field(0, FailingContext_116, 1) = ((MR_Box) (FailingGoal_115));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalFailingContexts_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_116));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word FailingGoal_64;
                  MR_Word FailingContext_76;

                  switch (MR_tag((MR_Word) *RHS_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word RHSVar_63 = ((MR_Word) ((MR_hl_field(0, *RHS_18, (MR_Integer) 0))));

                        {
                          FailingGoal_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, FailingGoal_64, 0) = ((MR_Box) (LHS_14));
                          MR_hl_field(2, FailingGoal_64, 1) = ((MR_Box) (RHSVar_63));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ConsId_65 = ((MR_Word) ((MR_hl_field(1, *RHS_18, (MR_Integer) 0))));

                        {
                          FailingGoal_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, FailingGoal_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, FailingGoal_64, 1) = ((MR_Box) (LHS_14));
                          MR_hl_field(3, FailingGoal_64, 2) = ((MR_Box) (ConsId_65));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
                        return;
                      }
                      break;
                  }
                  {
                    FailingContext_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FailingContext_76, 0) = ((MR_Box) (Context_50));
                    MR_hl_field(0, FailingContext_76, 1) = ((MR_Box) (FailingGoal_64));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalFailingContexts_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_76));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_24 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * Detism_10,
  MR_Word STATE_VARIABLE_SwitchFailingContexts_0_11,
  MR_Word * STATE_VARIABLE_SwitchFailingContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_13,
  MR_Word * STATE_VARIABLE_DetInfo_14)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_10, HeadVar__8_8, HeadVar__9_9);
    *STATE_VARIABLE_DetInfo_14 = STATE_VARIABLE_DetInfo_0_13;
    *STATE_VARIABLE_SwitchFailingContexts_12 = STATE_VARIABLE_SwitchFailingContexts_0_11;
  }
  else
  {
    MR_Word Case0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_31;
    MR_Word Cases_32;
    MR_Word MainConsId_43 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 0))));
    MR_Word OtherConsIds_44 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 1))));
    MR_Word Goal0_45 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 2))));
    MR_Word ModuleInfo0_46;
    MR_Word VarTable_47;
    MR_Word VarType_48;
    MR_Word InstMap1_49;
    MR_Word ModuleInfo_50;
    MR_Word Goal_53;
    MR_Word FirstDetism_54;
    MR_Word GoalFailingContexts_55;
    MR_Word FirstCanFail_56;
    MR_Word FirstMaxSolns_57;
    MR_Word STATE_VARIABLE_DetInfo_64_64;
    MR_Word STATE_VARIABLE_DetInfo_73_73;
    MR_Word STATE_VARIABLE_CanFail_74_74;
    MR_Word STATE_VARIABLE_MaxSolns_75_75;
    MR_Word STATE_VARIABLE_SwitchFailingContexts_76_76;

    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_13, &ModuleInfo0_46);
    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_13, &VarTable_47);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_47, HeadVar__3_3, &VarType_48);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__3_3, VarType_48, MainConsId_43, OtherConsIds_44, HeadVar__4_4, &InstMap1_49, ModuleInfo0_46, &ModuleInfo_50);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_50, STATE_VARIABLE_DetInfo_0_13, &STATE_VARIABLE_DetInfo_64_64);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_45, &Goal_53, InstMap1_49, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, &FirstDetism_54, &GoalFailingContexts_55, STATE_VARIABLE_DetInfo_64_64, &STATE_VARIABLE_DetInfo_73_73);
    {
      Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_31, 0) = ((MR_Box) (MainConsId_43));
      MR_hl_field(0, Case_31, 1) = ((MR_Box) (OtherConsIds_44));
      MR_hl_field(0, Case_31, 2) = ((MR_Box) (Goal_53));
    }
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_54, &FirstCanFail_56, &FirstMaxSolns_57);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(HeadVar__8_8, FirstCanFail_56, &STATE_VARIABLE_CanFail_74_74);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(HeadVar__9_9, FirstMaxSolns_57, &STATE_VARIABLE_MaxSolns_75_75);
    check_hlds__det_analysis__det_infer_switch_cases_14_p_0(Cases0_30, &Cases_32, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_CanFail_74_74, STATE_VARIABLE_MaxSolns_75_75, Detism_10, STATE_VARIABLE_SwitchFailingContexts_0_11, &STATE_VARIABLE_SwitchFailingContexts_76_76, STATE_VARIABLE_DetInfo_73_73, STATE_VARIABLE_DetInfo_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_32));
    }
    *STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_55, STATE_VARIABLE_SwitchFailingContexts_76_76);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
  MR_Word Var_14,
  MR_Word SwitchCanFail_15,
  MR_Word Cases0_16,
  MR_Word * Cases_17,
  MR_Word GoalInfo_18,
  MR_Word InstMap0_19,
  MR_Word SolnContext_20,
  MR_Word RightFailingContexts_21,
  MR_Word MaybePromiseEqvSolutionSets_22,
  MR_Word * Detism_23,
  MR_Word * GoalFailingContexts_24,
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38)
{
  MR_bool succeeded;
  MR_Word CasesDetism_26;
  MR_Word GoalFailingContexts0_27;
  MR_Word CasesCanFail_28;
  MR_Word CasesSolns_29;
  MR_Word SwitchSolnContext_30;
  MR_Word SwitchSolns_32;
  MR_Word CanFail_33;
  MR_Word NumSolns_34;
  MR_Word STATE_VARIABLE_DetInfo_42_42;

  check_hlds__det_analysis__det_infer_switch_cases_14_p_0(Cases0_16, Cases_17, Var_14, InstMap0_19, SolnContext_20, RightFailingContexts_21, MaybePromiseEqvSolutionSets_22, (MR_Integer) 1, (MR_Integer) 0, &CasesDetism_26, (MR_Word) ((MR_Unsigned) 0U), &GoalFailingContexts0_27, STATE_VARIABLE_DetInfo_0_37, &STATE_VARIABLE_DetInfo_42_42);
  parse_tree__prog_data__determinism_components_3_p_0(CasesDetism_26, &CasesCanFail_28, &CasesSolns_29);
  succeeded = (CasesCanFail_28 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (SolnContext_20 == (MR_Integer) 1);
  if (succeeded)
    SwitchSolnContext_30 = (MR_Integer) 1;
  else
    SwitchSolnContext_30 = (MR_Integer) 0;
  check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(Var_14, (MR_Integer) 1, SwitchCanFail_15, SwitchSolnContext_30, GoalFailingContexts0_27, RightFailingContexts_21, GoalInfo_18, (MR_Word) ((MR_Unsigned) 0U), &SwitchSolns_32, STATE_VARIABLE_DetInfo_42_42, STATE_VARIABLE_DetInfo_38);
  parse_tree__prog_detism__det_conjunction_canfail_3_p_0(SwitchCanFail_15, CasesCanFail_28, &CanFail_33);
  parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(SwitchSolns_32, CasesSolns_29, &NumSolns_34);
  parse_tree__prog_data__determinism_components_3_p_1(Detism_23, CanFail_33, NumSolns_34);
  switch (SwitchCanFail_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SwitchContext_35;
        MR_Word FailingContext_36;
        MR_Word Var_45;

        SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_14));
        }
        {
          FailingContext_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_36, 0) = ((MR_Box) (SwitchContext_35));
          MR_hl_field(0, FailingContext_36, 1) = ((MR_Box) (Var_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_24 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (GoalFailingContexts0_27));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_24 = GoalFailingContexts0_27;
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * Detism_9,
  MR_Word STATE_VARIABLE_DisjFailingContexts_0_10,
  MR_Word * STATE_VARIABLE_DisjFailingContexts_11,
  MR_Word STATE_VARIABLE_DetInfo_0_12,
  MR_Word * STATE_VARIABLE_DetInfo_13)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_9, HeadVar__7_7, HeadVar__8_8);
    *STATE_VARIABLE_DetInfo_13 = STATE_VARIABLE_DetInfo_0_12;
    *STATE_VARIABLE_DisjFailingContexts_11 = STATE_VARIABLE_DisjFailingContexts_0_10;
  }
  else
  {
    MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_29;
    MR_Word Goals_30;
    MR_Word FirstDetism_40;
    MR_Word GoalFailingContexts_41;
    MR_Word FirstCanFail_42;
    MR_Word FirstMaxSolns_43;
    MR_Word GoalInfo_45;
    MR_Word AdjFirstMaxSolns_46;
    MR_Word STATE_VARIABLE_DetInfo_53_53;
    MR_Word STATE_VARIABLE_CanFail_55_55;
    MR_Word STATE_VARIABLE_MaxSolns_56_56;
    MR_Word STATE_VARIABLE_MaxSolns_57_57;
    MR_Word STATE_VARIABLE_DisjFailingContexts_58_58;
    MR_Word Var_54;

    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_27, &Goal_29, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &FirstDetism_40, &GoalFailingContexts_41, STATE_VARIABLE_DetInfo_0_12, &STATE_VARIABLE_DetInfo_53_53);
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_40, &FirstCanFail_42, &FirstMaxSolns_43);
    GoalInfo_45 = ((MR_Word) ((MR_hl_field(0, Goal_29, (MR_Integer) 1))));
    succeeded = (HeadVar__8_8 != (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (FirstMaxSolns_43 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_54 = (MR_Integer) 6;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_45, Var_54);
      }
    }
    if (succeeded)
      AdjFirstMaxSolns_46 = (MR_Integer) 1;
    else
      AdjFirstMaxSolns_46 = FirstMaxSolns_43;
    parse_tree__prog_detism__det_disjunction_canfail_3_p_0(HeadVar__7_7, FirstCanFail_42, &STATE_VARIABLE_CanFail_55_55);
    parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(HeadVar__8_8, AdjFirstMaxSolns_46, &STATE_VARIABLE_MaxSolns_56_56);
    succeeded = (HeadVar__4_4 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (STATE_VARIABLE_MaxSolns_56_56 == (MR_Integer) 3);
    if (succeeded)
      STATE_VARIABLE_MaxSolns_57_57 = (MR_Integer) 2;
    else
      STATE_VARIABLE_MaxSolns_57_57 = STATE_VARIABLE_MaxSolns_56_56;
    check_hlds__det_analysis__det_infer_disj_goals_13_p_0(Goals0_28, &Goals_30, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CanFail_55_55, STATE_VARIABLE_MaxSolns_57_57, Detism_9, STATE_VARIABLE_DisjFailingContexts_0_10, &STATE_VARIABLE_DisjFailingContexts_58_58, STATE_VARIABLE_DetInfo_53_53, STATE_VARIABLE_DetInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_30));
    }
    *STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_41, STATE_VARIABLE_DisjFailingContexts_58_58);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
  MR_Word Goals0_12,
  MR_Word * Goals_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_Word GoalFailingContexts0_22;

  check_hlds__det_analysis__det_infer_disj_goals_13_p_0(Goals0_12, Goals_13, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, (MR_Integer) 0, Detism_19, (MR_Word) ((MR_Unsigned) 0U), &GoalFailingContexts0_22, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
  if ((*Goals_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_23;
    MR_Word FailingContext_24;

    Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    {
      FailingContext_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FailingContext_24, 0) = ((MR_Box) (Context_23));
      MR_hl_field(0, FailingContext_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalFailingContexts_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (GoalFailingContexts0_22));
    }
  }
  else
    *GoalFailingContexts_20 = GoalFailingContexts0_22;
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
    *STATE_VARIABLE_DetInfo_11 = STATE_VARIABLE_DetInfo_0_10;
    *STATE_VARIABLE_ConjFailingContexts_9 = STATE_VARIABLE_ConjFailingContexts_0_8;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_24;
    MR_Word Goals_25;
    MR_Word HeadDetism_33;
    MR_Word GoalFailingContexts_34;
    MR_Word HeadCanFail_35;
    MR_Word HeadMaxSolns_36;
    MR_Word TailDetism_37;
    MR_Word TailCanFail_38;
    MR_Word TailMaxSolns_39;
    MR_Word MaxSolns_40;
    MR_Word CanFail_41;
    MR_Word STATE_VARIABLE_DetInfo_46_46;
    MR_Word STATE_VARIABLE_ConjFailingContexts_47_47;

    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_22, &Goal_24, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &HeadDetism_33, &GoalFailingContexts_34, STATE_VARIABLE_DetInfo_0_10, &STATE_VARIABLE_DetInfo_46_46);
    parse_tree__prog_data__determinism_components_3_p_0(HeadDetism_33, &HeadCanFail_35, &HeadMaxSolns_36);
    check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(Goals0_23, &Goals_25, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &TailDetism_37, STATE_VARIABLE_ConjFailingContexts_0_8, &STATE_VARIABLE_ConjFailingContexts_47_47, STATE_VARIABLE_DetInfo_46_46, STATE_VARIABLE_DetInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_25));
    }
    parse_tree__prog_data__determinism_components_3_p_0(TailDetism_37, &TailCanFail_38, &TailMaxSolns_39);
    parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(HeadMaxSolns_36, TailMaxSolns_39, &MaxSolns_40);
    parse_tree__prog_detism__det_conjunction_canfail_3_p_0(HeadCanFail_35, TailCanFail_38, &CanFail_41);
    parse_tree__prog_data__determinism_components_3_p_1(HeadVar__7_7, CanFail_41, MaxSolns_40);
    *STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_34, STATE_VARIABLE_ConjFailingContexts_47_47);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
  MR_Word Goals0_12,
  MR_Word * Goals_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_32,
  MR_Word * STATE_VARIABLE_DetInfo_33)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_DetInfo_35_35;
  MR_Word CanFail_22;
  MR_Word Solns_23;

  check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(Goals0_12, Goals_13, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, (MR_Word) ((MR_Unsigned) 0U), GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_32, &STATE_VARIABLE_DetInfo_35_35);
  parse_tree__prog_data__determinism_components_3_p_0(*Detism_19, &CanFail_22, &Solns_23);
  succeeded = (CanFail_22 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Solns_23 != (MR_Integer) 3);
  if (succeeded)
    *STATE_VARIABLE_DetInfo_33 = STATE_VARIABLE_DetInfo_35_35;
  else
  {
    MR_Word Context_24;
    MR_Word MaxSoln_25;
    MR_String First_26;
    MR_String Rest_27;
    MR_Word Pieces_28;
    MR_Word GoalMsgs_29;
    MR_Word SortedGoalMsgs_30;
    MR_Word Spec_31;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_DetInfo_48_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word CanFail_57;

    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    parse_tree__prog_data__determinism_components_3_p_0(*Detism_19, &CanFail_57, &MaxSoln_25);
    switch (CanFail_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        First_26 = (MR_String) "Error: parallel conjunct may fail.";
        break;
      case (MR_Integer) 1:
        switch (MaxSoln_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            First_26 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
              return;
            }
            break;
        }
        break;
    }
    Rest_27 = mercury__string__f_43_43_2_f_0((MR_String) "The current implementation supports only ", (MR_String) "single-solution non-failing parallel conjunctions.");
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (First_26));
    }
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (Rest_27));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[4])));
    }
    {
      Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_41));
    }
    check_hlds__det_report__det_diagnose_conj_7_p_0(*Goals_13, InstMap0_15, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_35_35, &STATE_VARIABLE_DetInfo_48_48, &GoalMsgs_29);
    parse_tree__error_sort__sort_error_msgs_2_p_0(GoalMsgs_29, &SortedGoalMsgs_30);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Context_24));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (Pieces_28));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_53, SortedGoalMsgs_30);
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11"));
      MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 64U));
      MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Var_52));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_31, STATE_VARIABLE_DetInfo_48_48, STATE_VARIABLE_DetInfo_33);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word STATE_VARIABLE_DetInfo_0_10,
  MR_Word * STATE_VARIABLE_DetInfo_11)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
    *STATE_VARIABLE_DetInfo_11 = STATE_VARIABLE_DetInfo_0_10;
    *STATE_VARIABLE_ConjFailingContexts_9 = STATE_VARIABLE_ConjFailingContexts_0_8;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_24;
    MR_Word Goals_25;
    MR_Word InstMap1_33;
    MR_Word TailDetism_34;
    MR_Word TailCanFail_35;
    MR_Word HeadSolnContext_37;
    MR_Word HeadDetism_38;
    MR_Word GoalFailingContexts_39;
    MR_Word STATE_VARIABLE_ConjFailingContexts_44_44;
    MR_Word STATE_VARIABLE_DetInfo_45_45;
    MR_Word Var_46;
    MR_Word _TailMaxSolns_36;

    hlds__goal_util__update_instmap_3_p_0(Goal0_22, HeadVar__3_3, &InstMap1_33);
    check_hlds__det_analysis__det_infer_conj_11_p_0(Goals0_23, &Goals_25, InstMap1_33, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &TailDetism_34, STATE_VARIABLE_ConjFailingContexts_0_8, &STATE_VARIABLE_ConjFailingContexts_44_44, STATE_VARIABLE_DetInfo_0_10, &STATE_VARIABLE_DetInfo_45_45);
    parse_tree__prog_data__determinism_components_3_p_0(TailDetism_34, &TailCanFail_35, &_TailMaxSolns_36);
    succeeded = (TailCanFail_35 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (HeadVar__4_4 == (MR_Integer) 1);
    if (succeeded)
      HeadSolnContext_37 = (MR_Integer) 1;
    else
      HeadSolnContext_37 = (MR_Integer) 0;
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), STATE_VARIABLE_ConjFailingContexts_44_44, HeadVar__5_5);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_22, &Goal_24, HeadVar__3_3, HeadSolnContext_37, Var_46, HeadVar__6_6, &HeadDetism_38, &GoalFailingContexts_39, STATE_VARIABLE_DetInfo_45_45, STATE_VARIABLE_DetInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_25));
    }
    parse_tree__prog_detism__det_conjunction_detism_3_p_0(HeadDetism_38, TailDetism_34, HeadVar__7_7);
    *STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_39, STATE_VARIABLE_ConjFailingContexts_44_44);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
  MR_Word GoalExpr0_12,
  MR_Word * GoalExpr_13,
  MR_Word GoalInfo_14,
  MR_Word InstMap0_15,
  MR_Word SolnContext_16,
  MR_Word RightFailingContexts_17,
  MR_Word MaybePromiseEqvSolutionSets_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_78,
  MR_Word * STATE_VARIABLE_DetInfo_79)
{
  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_55 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word Goal_56;

        check_hlds__det_analysis__det_infer_not_9_p_0(Goal0_55, &Goal_56, GoalInfo_14, InstMap0_15, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        *GoalExpr_13 = (MR_Word) ((MR_Word) (Goal_56));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 0))));
        MR_Word RHS0_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 1))));
        MR_Word Mode_45 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Unify_46 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 3))));
        MR_Word RHS_47;
        MR_Word UnifyContext_112 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 4))));

        check_hlds__det_analysis__det_infer_unify_13_p_0(LHS_43, RHS0_44, Unify_46, UnifyContext_112, &RHS_47, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_43));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_47));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_45));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unify_46));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_112));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 0))));
        MR_Integer ProcId0_32 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 1))));
        MR_Word ArgVars_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Builtin_34 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 4))));
        MR_Word Name_36 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 5))));
        MR_Integer ProcId_37;

        check_hlds__det_analysis__det_infer_call_11_p_0(PredId_31, ProcId0_32, &ProcId_37, ArgVars_33, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_13 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_31));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_37));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_33));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_34));
          MR_hl_field(2, base, 4) = ((MR_Box) (UnifyContext_35));
          MR_hl_field(2, base, 5) = ((MR_Box) (Name_36));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CallDetism_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 5))) & (MR_Integer) 7);

            check_hlds__det_analysis__det_infer_generic_call_9_p_0(GenericCall_38, CallDetism_42, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_13 = GoalExpr0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word PredId_116 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Integer ProcId_117 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));

            check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(Attributes_58, PredId_116, ProcId_117, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_13 = GoalExpr0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_24;

            switch (ConjType_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__det_analysis__det_infer_par_conj_11_p_0(Goals0_23, &Goals_24, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                break;
              case (MR_Integer) 0:
                check_hlds__det_analysis__det_infer_conj_11_p_0(Goals0_23, &Goals_24, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, (MR_Word) ((MR_Unsigned) 0U), GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_22));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_24));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_109;

            check_hlds__det_analysis__det_infer_disj_11_p_0(Goals0_108, &Goals_109, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_109));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SwitchCanFail_26 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_30;
            MR_Word STATE_VARIABLE_DetInfo_84_84;

            switch (SwitchCanFail_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(STATE_VARIABLE_DetInfo_0_78, &STATE_VARIABLE_DetInfo_84_84);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_DetInfo_84_84 = STATE_VARIABLE_DetInfo_0_78;
                break;
            }
            check_hlds__det_analysis__det_infer_switch_13_p_0(Var_25, SwitchCanFail_26, Cases0_27, &Cases_30, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_84_84, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_25));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_26));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_30));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goal0_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goal_114;

            check_hlds__det_analysis__det_infer_scope_12_p_0(Reason_57, Goal0_113, &Goal_114, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_57));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goal_114));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_52;
            MR_Word Then_53;
            MR_Word Else_54;

            check_hlds__det_analysis__det_infer_if_then_else_14_p_0(Cond0_49, &Cond_52, Then0_50, &Then_53, Else0_51, &Else_54, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_48));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_52));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_53));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_54));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_62)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 1))));
                  MR_Word Outer_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 2))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;
                  MR_Word Vars_119 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 3))));

                  check_hlds__det_analysis__det_infer_atomic_11_p_0(MainGoal0_66, &MainGoal_69, OrElseGoals0_67, &OrElseGoals_70, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Outer_65));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (Vars_119));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 1))));
                  MR_Word TryGoal0_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 2))));
                  MR_Word TryGoal_75;

                  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(TryGoal0_74, &TryGoal_75, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (TryGoal_75));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
  MR_Word Goal0_12,
  MR_Word * Goal_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_SolnContext_0_52,
  MR_Word RightFailingContexts_16,
  MR_Word MaybePromiseEqvSolutionSets_17,
  MR_Word AddPruning_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_53,
  MR_Word * STATE_VARIABLE_DetInfo_54)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 0))));
  MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 1))));
  MR_Word InstmapDelta_24;
  MR_Word Prune_29;
  MR_Word GoalExpr1_30;
  MR_Word InternalDetism0_31;
  MR_Word InternalCanFail_32;
  MR_Word InternalSolns0_33;
  MR_Word InternalSolns_34;
  MR_Word Solns_35;
  MR_Word GoalInfo_36;
  MR_Word FinalInternalSolns_44;
  MR_Word FinalInternalDetism_46;
  MR_Word GoalExpr_51;
  MR_Word ScopeReason_25;
  MR_Word CondInfo_39;
  MR_Word CondDetism_42;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_64;
  MR_Word Var_43;

  InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_23);
  succeeded = ((((MR_tag((MR_Word) GoalExpr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    ScopeReason_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_22, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 2))
    {
      MR_Word PromiseEqvSolnsKind_28 = ((MR_Unsigned) ((MR_hl_field(2, ScopeReason_25, (MR_Integer) 1))) & (MR_Integer) 3);

      switch (PromiseEqvSolnsKind_28) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
    }
    else
    if (((((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 4))))
    {
      MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(3, ScopeReason_25, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = (Var_55 == (MR_Integer) 0);
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    Prune_29 = (MR_Integer) 1;
  else
    Prune_29 = AddPruning_18;
  check_hlds__det_analysis__det_infer_goal_expr_11_p_0(GoalExpr0_22, &GoalExpr1_30, GoalInfo0_23, InstMap0_14, STATE_VARIABLE_SolnContext_0_52, RightFailingContexts_16, MaybePromiseEqvSolutionSets_17, &InternalDetism0_31, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_53, STATE_VARIABLE_DetInfo_54);
  parse_tree__prog_data__determinism_components_3_p_0(InternalDetism0_31, &InternalCanFail_32, &InternalSolns0_33);
  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta_24);
  if (succeeded)
    InternalSolns_34 = (MR_Integer) 0;
  else
    InternalSolns_34 = InternalSolns0_33;
  switch (InternalSolns_34) {
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
  if (succeeded)
    succeeded = (Prune_29 == (MR_Integer) 1);
  if (succeeded)
    Solns_35 = (MR_Integer) 1;
  else
  {
    succeeded = (InternalSolns_34 == (MR_Integer) 3);
    if (succeeded)
      succeeded = (STATE_VARIABLE_SolnContext_0_52 == (MR_Integer) 1);
    if (succeeded)
      Solns_35 = (MR_Integer) 2;
    else
      Solns_35 = InternalSolns_34;
  }
  parse_tree__prog_data__determinism_components_3_p_1(Detism_19, InternalCanFail_32, Solns_35);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(*Detism_19, GoalInfo0_23, &GoalInfo_36);
  succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
    Var_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 2))));
    CondInfo_39 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
    CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_39);
    Var_59 = (MR_Integer) 3;
    parse_tree__prog_data__determinism_components_3_p_0(CondDetism_42, &Var_43, &Var_64);
    succeeded = (Var_59 == Var_64);
    if (succeeded)
      succeeded = (Solns_35 != (MR_Integer) 3);
  }
  if (succeeded)
    FinalInternalSolns_44 = (MR_Integer) 3;
  else
  {
    MR_Word ConjGoals_45;
    MR_Word Var_60;

    succeeded = (Solns_35 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 2))));
        succeeded = (Var_60 == (MR_Integer) 0);
        if (succeeded)
          succeeded = check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(ConjGoals_45);
      }
    }
    if (succeeded)
      FinalInternalSolns_44 = (MR_Integer) 3;
    else
      FinalInternalSolns_44 = InternalSolns_34;
  }
  parse_tree__prog_data__determinism_components_3_p_1(&FinalInternalDetism_46, InternalCanFail_32, FinalInternalSolns_44);
  succeeded = (*Detism_19 != FinalInternalDetism_46);
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word InnerInfo_50;
    MR_Word Var_63;

    hlds__hlds_goal__goal_info_set_determinism_3_p_0(FinalInternalDetism_46, GoalInfo0_23, &InnerInfo_50);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (GoalExpr1_30));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (InnerInfo_50));
    }
    {
      GoalExpr_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, GoalExpr_51, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[3])));
      MR_hl_field(3, GoalExpr_51, 2) = ((MR_Box) (Var_63));
    }
  }
  else
    GoalExpr_51 = GoalExpr1_30;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_51));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_36));
  }
}

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_44,
  MR_Word * STATE_VARIABLE_DetInfo_45)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word ProcInfo_24;
  MR_Word MaybeDetism_25;
  MR_Word Var_23;

  check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_44, &ModuleInfo_22);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_22, PredId_13, ProcId_14, &Var_23, &ProcInfo_24);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_24, &MaybeDetism_25);
  if ((MaybeDetism_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcPieces_42;
    MR_Word Pieces_43;
    MR_Word Var_103;
    MR_Word Var_108;
    MR_Word Spec_130;
    MR_Word Context_131;

    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_24, &Context_131);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_103, 0) = ((MR_Box) (PredId_13));
      MR_hl_field(0, Var_103, 1) = ((MR_Box) (ProcId_14));
    }
    ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Integer) 1, Var_103);
    Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_42, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[22])));
    Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[13])), Var_108);
    {
      Spec_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_foreign_proc\'/11"));
      MR_hl_field(1, Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 64U));
      MR_hl_field(1, Spec_130, 3) = ((MR_Box) (Context_131));
      MR_hl_field(1, Spec_130, 4) = ((MR_Box) (Pieces_43));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_130, STATE_VARIABLE_DetInfo_0_44, STATE_VARIABLE_DetInfo_45);
    *Detism_19 = (MR_Integer) 6;
    *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Detism0_26 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_25, (MR_Integer) 0))));
    MR_Word CanFail_27;
    MR_Word NumSolns0_28;
    MR_Word NumSolns_39;
    MR_Word STATE_VARIABLE_DetInfo_74_74;
    MR_Word Var_46;

    parse_tree__prog_data__determinism_components_3_p_0(Detism0_26, &CanFail_27, &NumSolns0_28);
    Var_46 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_12);
    succeeded = (Var_46 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Detism0_26 == (MR_Integer) 6);
    if (succeeded)
    {
      MR_Word ProcContext_29;
      MR_Word WillNotThrowProcPieces_30;
      MR_Word WillNotThrowPieces_31;
      MR_Word WillNotThrowSpec_32;
      MR_Word Var_49;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_24, &ProcContext_29);
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (ProcId_14));
      }
      WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Integer) 1, Var_49);
      WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WillNotThrowProcPieces_30, (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[34])));
      {
        WillNotThrowSpec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WillNotThrowSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_foreign_proc\'/11"));
        MR_hl_field(1, WillNotThrowSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, WillNotThrowSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 64U));
        MR_hl_field(1, WillNotThrowSpec_32, 3) = ((MR_Box) (ProcContext_29));
        MR_hl_field(1, WillNotThrowSpec_32, 4) = ((MR_Box) (WillNotThrowPieces_31));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(WillNotThrowSpec_32, STATE_VARIABLE_DetInfo_0_44, &STATE_VARIABLE_DetInfo_74_74);
    }
    else
      STATE_VARIABLE_DetInfo_74_74 = STATE_VARIABLE_DetInfo_0_44;
    succeeded = (NumSolns0_28 == (MR_Integer) 2);
    if (succeeded)
      succeeded = (SolnContext_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word GoalContext_33;
      MR_Word VarTable_34;
      MR_Word WrongContextPredPieces_35;
      MR_Word WrongContextFirstPieces_36;
      MR_Word ContextMsgs_37;
      MR_Word Spec_38;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_String Var_86;
      MR_Word Var_96;
      MR_Word Var_97;

      GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_74_74, &VarTable_34);
      WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_22, (MR_Integer) 0, PredId_13);
      Var_86 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism0_26);
      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[9])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[7])));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
      }
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WrongContextPredPieces_35, Var_81);
      WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[6])), Var_80);
      ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_22, VarTable_34, RightFailingContexts_18);
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_97, 0) = ((MR_Box) (GoalContext_33));
        MR_hl_field(0, Var_97, 1) = ((MR_Box) (WrongContextFirstPieces_36));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (ContextMsgs_37));
      }
      {
        Spec_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_foreign_proc\'/11"));
        MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 64U));
        MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Var_96));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_38, STATE_VARIABLE_DetInfo_74_74, STATE_VARIABLE_DetInfo_45);
      NumSolns_39 = (MR_Integer) 3;
    }
    else
    {
      NumSolns_39 = NumSolns0_28;
      *STATE_VARIABLE_DetInfo_45 = STATE_VARIABLE_DetInfo_74_74;
    }
    parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_27, NumSolns_39);
    switch (CanFail_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_40;
          MR_Word FailingContext_41;
          MR_Word Var_99;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
          {
            Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_99, 1) = ((MR_Box) (PredId_13));
            MR_hl_field(3, Var_99, 2) = ((MR_Box) (ProcId_14));
          }
          {
            FailingContext_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FailingContext_41, 0) = ((MR_Box) (Context_40));
            MR_hl_field(0, FailingContext_41, 1) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_20 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_41));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
  MR_Word GenericCall_10,
  MR_Word CallDetism_11,
  MR_Word GoalInfo_12,
  MR_Word SolnContext_13,
  MR_Word RightFailingContexts_14,
  MR_Word * Detism_15,
  MR_Word * GoalFailingContexts_16,
  MR_Word STATE_VARIABLE_DetInfo_0_27,
  MR_Word * STATE_VARIABLE_DetInfo_28)
{
  MR_bool succeeded;
  MR_Word CanFail_18;
  MR_Word NumSolns_19;
  MR_Word Context_20;

  parse_tree__prog_data__determinism_components_3_p_0(CallDetism_11, &CanFail_18, &NumSolns_19);
  Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
  succeeded = (NumSolns_19 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (SolnContext_13 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word VarTable_21;
    MR_Word FirstPieces_22;
    MR_Word ModuleInfo_23;
    MR_Word ContextMsgs_24;
    MR_Word Spec_25;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_36;
    MR_Word Var_46;
    MR_Word Var_47;

    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_27, &VarTable_21);
    Var_36 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(CallDetism_11);
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[9])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[11])));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      FirstPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FirstPieces_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[10])));
      MR_hl_field(1, FirstPieces_22, 1) = ((MR_Box) (Var_31));
    }
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_27, &ModuleInfo_23);
    ContextMsgs_24 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_23, VarTable_21, RightFailingContexts_14);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Context_20));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (FirstPieces_22));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (ContextMsgs_24));
    }
    {
      Spec_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_generic_call\'/9"));
      MR_hl_field(0, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 64U));
      MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Var_46));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_25, STATE_VARIABLE_DetInfo_0_27, STATE_VARIABLE_DetInfo_28);
    parse_tree__prog_data__determinism_components_3_p_1(Detism_15, CanFail_18, (MR_Integer) 3);
  }
  else
  {
    *Detism_15 = CallDetism_11;
    *STATE_VARIABLE_DetInfo_28 = STATE_VARIABLE_DetInfo_0_27;
  }
  switch (CanFail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailingContext_26;
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (GenericCall_10));
        }
        {
          FailingContext_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_26, 0) = ((MR_Box) (Context_20));
          MR_hl_field(0, FailingContext_26, 1) = ((MR_Box) (Var_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_26));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId0_13,
  MR_Integer * ProcId_14,
  MR_Word ArgVars_15,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37)
{
  MR_bool succeeded;
  MR_Word CalleePredInfo_22;
  MR_Word Detism0_23;
  MR_Word ModuleInfo_24;
  MR_Word CanFail_25;
  MR_Word NumSolns_26;
  MR_Word STATE_VARIABLE_DetInfo_38_38;

  check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(STATE_VARIABLE_DetInfo_0_36, PredId_12, ProcId0_13, &CalleePredInfo_22, &Detism0_23);
  check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_36, &ModuleInfo_24);
  succeeded = check_hlds__simplify__format_call__is_format_call_2_p_0(CalleePredInfo_22, ArgVars_15);
  if (succeeded)
    check_hlds__det_util__det_info_set_has_format_call_2_p_0(STATE_VARIABLE_DetInfo_0_36, &STATE_VARIABLE_DetInfo_38_38);
  else
    STATE_VARIABLE_DetInfo_38_38 = STATE_VARIABLE_DetInfo_0_36;
  parse_tree__prog_data__determinism_components_3_p_0(Detism0_23, &CanFail_25, &NumSolns_26);
  succeeded = (NumSolns_26 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (SolnContext_17 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer ProcIdPrime_27;
    MR_Word ModuleInfo_68;
    MR_Word PredInfo_69;
    MR_Word ProcTable_70;
    MR_Word ProcIdsInfos_71;

    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_38_38, &ModuleInfo_68);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_68, PredId_12, &PredInfo_69);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_69, &ProcTable_70);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_70, &ProcIdsInfos_71);
    succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(ModuleInfo_68, PredInfo_69, ProcIdsInfos_71, ProcId0_13, &ProcIdPrime_27);
    if (succeeded)
    {
      *ProcId_14 = ProcIdPrime_27;
      parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_25, (MR_Integer) 3);
      *STATE_VARIABLE_DetInfo_37 = STATE_VARIABLE_DetInfo_38_38;
    }
    else
    {
      MR_Word GoalContext_28;
      MR_Word VarTable_29;
      MR_Word PredPieces_30;
      MR_Word FirstPieces_31;
      MR_Word ContextMsgs_32;
      MR_Word Spec_33;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_String Var_51;
      MR_Word Var_61;
      MR_Word Var_62;

      GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
      check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_38_38, &VarTable_29);
      PredPieces_30 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_24, (MR_Integer) 0, PredId_12);
      Var_51 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism0_23);
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[9])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[7])));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
      }
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_30, Var_46);
      FirstPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[6])), Var_45);
      ContextMsgs_32 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_24, VarTable_29, RightFailingContexts_18);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (GoalContext_28));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (FirstPieces_31));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (ContextMsgs_32));
      }
      {
        Spec_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_infer_call\'/11"));
        MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 64U));
        MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Var_61));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_33, STATE_VARIABLE_DetInfo_38_38, STATE_VARIABLE_DetInfo_37);
      *ProcId_14 = ProcId0_13;
      parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_25, (MR_Integer) 3);
    }
  }
  else
  {
    *ProcId_14 = ProcId0_13;
    *Detism_19 = Detism0_23;
    *STATE_VARIABLE_DetInfo_37 = STATE_VARIABLE_DetInfo_38_38;
  }
  switch (CanFail_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_34;
        MR_Word FailingContext_35;
        MR_Word Var_65;

        Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        {
          Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_65, 1) = ((MR_Box) (PredId_12));
          MR_hl_field(3, Var_65, 2) = ((MR_Box) (*ProcId_14));
        }
        {
          FailingContext_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FailingContext_35, 0) = ((MR_Box) (Context_34));
          MR_hl_field(0, FailingContext_35, 1) = ((MR_Box) (Var_65));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalFailingContexts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FailingContext_35));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__3_3,
  MR_Integer CcProcId_11,
  MR_Integer * NonCcProcId_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer ProcId_8;
    MR_Word ProcInfo_9;
    MR_Word ProcIdsInfos_10;
    MR_Word Var_16;
    MR_Word Detism_13;
    MR_Word MaxSoln_15;
    MR_Word _CanFail_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      ProcIdsInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      ProcId_8 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      ProcInfo_9 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      succeeded = (ProcId_8 != CcProcId_11);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_9, &Detism_13);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_13, &_CanFail_14, &MaxSoln_15);
        succeeded = (MaxSoln_15 == (MR_Integer) 3);
        if (succeeded)
          succeeded = check_hlds__mode_comparison__modes_are_identical_bar_cc_4_p_0(ModuleInfo_6, PredInfo_7, CcProcId_11, ProcId_8);
      }
      if (succeeded)
      {
        *NonCcProcId_12 = ProcId_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = ProcIdsInfos_10;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
  MR_Word Var_12,
  MR_Word ExaminesRepresentation_13,
  MR_Word CanFail_14,
  MR_Word SolnContext_15,
  MR_Word FailingContextsA_16,
  MR_Word FailingContextsB_17,
  MR_Word GoalInfo_18,
  MR_Word GoalContext_19,
  MR_Word * NumSolns_20,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40)
{
  MR_bool succeeded = (ExaminesRepresentation_13 == (MR_Integer) 1);
  MR_Word VarTable_22;
  MR_Word Type_23;

  if (succeeded)
  {
    check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_39, &VarTable_22);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_12, &Type_23);
    succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(STATE_VARIABLE_DetInfo_0_39, Type_23);
  }
  if (succeeded)
  {
    switch (CanFail_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_24;
          MR_Word Pieces0_26;
          MR_String ErrorMsg_28;
          MR_Word Pieces1_31;
          MR_Word VerbosePieces_32;
          MR_Word Spec_33;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_80;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;

          Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
          if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String VarStr_25;
            MR_Word Var_44;
            MR_Word Var_45;

            VarStr_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_22, (MR_Integer) 0, Var_12);
            {
              Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_45, 1) = ((MR_Box) (VarStr_25));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[67])));
            }
            {
              Pieces0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces0_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[66])));
              MR_hl_field(1, Pieces0_26, 1) = ((MR_Box) (Var_44));
            }
            ErrorMsg_28 = (MR_String) "error:";
          }
          else
          {
            MR_Word UnifyContext_27 = ((MR_Word) ((MR_hl_field(1, GoalContext_19, (MR_Integer) 0))));

            hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_27, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_26);
            if ((Pieces0_26 == (MR_Word) ((MR_Unsigned) 0U)))
              ErrorMsg_28 = (MR_String) "Error:";
            else
              ErrorMsg_28 = (MR_String) "error:";
          }
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (ErrorMsg_28));
          }
          {
            Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 27U));
            MR_hl_field(3, Var_58, 1) = ((MR_Box) (Type_23));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[70])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[68])));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Pieces1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces1_31, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Pieces1_31, 1) = ((MR_Box) (Var_54));
          }
          Var_65 = check_hlds__det_analysis__noncanon_unify_verbose_preamble_0_f_0();
          Var_80 = check_hlds__det_analysis__noncanon_unify_verbose_would_require_0_f_0();
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[78])), Var_80);
          VerbosePieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_66);
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_26, Pieces1_31);
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_87, 0) = ((MR_Box) (Var_88));
          }
          {
            Var_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_90, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, Var_90, 1) = ((MR_Box) (VerbosePieces_32));
          }
          {
            Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
          }
          {
            Var_85 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_85, 0) = ((MR_Box) (Context_24));
            MR_hl_field(2, Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_check_for_noncanonical_type\'/11"));
            MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Var_84));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_33, STATE_VARIABLE_DetInfo_0_39, STATE_VARIABLE_DetInfo_40);
        }
        break;
      case (MR_Integer) 1:
        switch (SolnContext_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleInfo_37;
              MR_Word ContextMsgs_38;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_150;
              MR_Word Context_159;
              MR_Word Pieces0_161;
              MR_String ErrorMsg_163;
              MR_Word Pieces1_164;
              MR_Word VerbosePieces_165;
              MR_Word Spec_166;

              Context_159 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_98;
                MR_Word Var_99;
                MR_String VarStr_155;

                VarStr_155 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_22, (MR_Integer) 0, Var_12);
                {
                  Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_99, 1) = ((MR_Box) (VarStr_155));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[67])));
                }
                {
                  Pieces0_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces0_161, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[66])));
                  MR_hl_field(1, Pieces0_161, 1) = ((MR_Box) (Var_98));
                }
                ErrorMsg_163 = (MR_String) "error:";
              }
              else
              {
                MR_Word UnifyContext_156 = ((MR_Word) ((MR_hl_field(1, GoalContext_19, (MR_Integer) 0))));
                MR_Word Var_34;

                hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &Var_34, UnifyContext_156, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_161);
                if ((Pieces0_161 == (MR_Word) ((MR_Unsigned) 0U)))
                  ErrorMsg_163 = (MR_String) "Error:";
                else
                  ErrorMsg_163 = (MR_String) "error:";
              }
              {
                Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_108, 1) = ((MR_Box) (ErrorMsg_163));
              }
              {
                Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                MR_hl_field(3, Var_113, 1) = ((MR_Box) (Type_23));
              }
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[82])));
              }
              {
                Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_analysis_scalar_common_1[68])));
                MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
              }
              {
                Pieces1_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces1_164, 0) = ((MR_Box) (Var_108));
                MR_hl_field(1, Pieces1_164, 1) = ((MR_Box) (Var_109));
              }
              Var_123 = check_hlds__det_analysis__noncanon_unify_verbose_preamble_0_f_0();
              Var_138 = check_hlds__det_analysis__noncanon_unify_verbose_would_require_0_f_0();
              Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[87])), Var_138);
              VerbosePieces_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_124);
              check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_39, &ModuleInfo_37);
              Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), FailingContextsA_16, FailingContextsB_17);
              ContextMsgs_38 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_37, VarTable_22, Var_139);
              Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_161, Pieces1_164);
              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_147, 0) = ((MR_Box) (Var_148));
              }
              {
                Var_150 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_150, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(2, Var_150, 1) = ((MR_Box) (VerbosePieces_165));
              }
              {
                Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
                MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
                MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_149));
              }
              {
                Var_145 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_145, 0) = ((MR_Box) (Context_159));
                MR_hl_field(2, Var_145, 1) = ((MR_Box) (Var_146));
              }
              {
                Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
                MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_144, ContextMsgs_38);
              {
                Spec_166 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_166, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_analysis.det_check_for_noncanonical_type\'/11"));
                MR_hl_field(0, Spec_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_166, 2) = ((MR_Box) ((MR_Unsigned) 64U));
                MR_hl_field(0, Spec_166, 3) = ((MR_Box) (Var_143));
              }
              check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_166, STATE_VARIABLE_DetInfo_0_39, STATE_VARIABLE_DetInfo_40);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_0_39;
            break;
        }
        break;
    }
    switch (SolnContext_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *NumSolns_20 = (MR_Integer) 3;
        break;
      case (MR_Integer) 1:
        *NumSolns_20 = (MR_Integer) 2;
        break;
    }
  }
  else
  {
    *NumSolns_20 = (MR_Integer) 1;
    *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_0_39;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_5;
  MR_Word Var_6;

  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_3, &ModuleInfo_5);
  succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_4, &Var_6);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__det_analysis__noncanon_unify_verbose_would_require_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[99]));
}

static MR_Word MR_CALL 
check_hlds__det_analysis__noncanon_unify_verbose_preamble_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &check_hlds__det_analysis_scalar_common_1[93]));
}

static MR_bool MR_CALL 
check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ConjGoal_2;
    MR_Word ConjGoals_3;
    MR_Word ConjGoalInfo_5;
    MR_Word ConjGoalDetism_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ConjGoal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      ConjGoals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ConjGoalInfo_5 = ((MR_Word) ((MR_hl_field(0, ConjGoal_2, (MR_Integer) 1))));
      ConjGoalDetism_6 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ConjGoalInfo_5);
      Var_8 = (MR_Integer) 3;
      parse_tree__prog_data__determinism_components_3_p_0(ConjGoalDetism_6, &Var_7, &Var_9);
      succeeded = (Var_8 == Var_9);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ConjGoals_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_analysis____Compare____pess_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_analysis____Compare____soln_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_analysis__init(void)
{
}

void mercury__check_hlds__det_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_pess_info_0);
	MR_register_type_ctor_info(&check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_soln_context_0);
}

void mercury__check_hlds__det_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_analysis.
