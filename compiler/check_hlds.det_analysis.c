/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2019-11-06
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s {
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9;
  MR_Integer check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10;
  MR_Word * check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13;
  MR_bool check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_55;
  jmp_buf check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_127;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_170;
  MR_Box check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_Var_170;
};

struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63;
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2];

static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2];

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1781__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_366);

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1741__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_360);

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1687__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_351);

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1568__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_51);

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * STATE_VARIABLE_NoInferProcs_8);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * STATE_VARIABLE_NoInferProcs_9);

static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word ProcList_7,
  MR_Word Debug_8,
  MR_Word * Specs_9);

static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Debug_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word * OldDetism_12,
  MR_Word * NewDetism_13,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9);

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
  MR_Word STATE_VARIABLE_DetInfo_0_111,
  MR_Word * STATE_VARIABLE_DetInfo_112);

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
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word RightFailingContexts_14,
  MR_Word MaybePromiseEqvSolutionSets0_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_DetInfo_0_25,
  MR_Word * STATE_VARIABLE_DetInfo_26);

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
  MR_Word STATE_VARIABLE_DetInfo_0_48,
  MR_Word * STATE_VARIABLE_DetInfo_49);

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
  MR_Word STATE_VARIABLE_DetInfo_0_85,
  MR_Word * STATE_VARIABLE_DetInfo_86);

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
  MR_Word STATE_VARIABLE_DetInfo_0_28,
  MR_Word * STATE_VARIABLE_DetInfo_29);

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId0_13,
  MR_Integer * ProcId_14,
  MR_Word Args_15,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Integer STATE_VARIABLE_ProcId_0_15,
  MR_Integer * STATE_VARIABLE_ProcId_16);

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
  MR_Word STATE_VARIABLE_DetInfo_0_41,
  MR_Word * STATE_VARIABLE_DetInfo_42);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4);

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


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[137][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[3][1];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[3][6];


/* sealed */ struct check_hlds__det_analysis__vector_common_type_4_0_s {
  const MR_Word check_hlds__det_analysis__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct check_hlds__det_analysis__vector_common_type_4_0_s check_hlds__det_analysis_vector_common_4[4];



static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[137][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with I/O state arguments."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid determinism for a predicate"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "det, cc_multi and erroneous."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Valid determinisms are "))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs in a context which requires all solutions."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a procedure without a determinism declaration."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pragma foreign_proc(...)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "will_not_throw_exception"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has determinism erroneous but also has"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope is nested inside another."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope is not nested inside a"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[49])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you must do it explicitly.)"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "implicitly. (If that\'s really what you want,"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representations, but I\'m not going to do that"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "backtracking over all possible"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a solution to this unification would require"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representation. Figuring out whether there is"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "might depend on the choice of concrete"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of this type. The success of this unification"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representation for each abstract value"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "there is more than one possible concrete"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "equality predicate, I must presume that"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "solutions to this unification would require"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representation. Finding all possible"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of this type. The results of this unification"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not guaranteed to succeed."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 99 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[83])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[94])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The current implementation supports only single-solution non-failing parallel conjunctions."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[111]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row 114 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    (MR_Box) (((((MR_Unsigned) 25U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    (MR_Box) (((((MR_Unsigned) 25U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_5[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope and the"))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope it is nested inside overlap on"))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal lists"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row 131 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[13])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a procedure that has a determinism of"))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[2][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 25U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[2])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[46])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[51])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[58])))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
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
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_analysis____Unify____pess_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____pess_info_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "pess_info",
  {     check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0 },
  {     check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0
};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_analysis____Unify____soln_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____soln_context_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "soln_context",
  {     check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0 },
  {     check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0
};

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1781__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_366)
{
  {
    MR_String HeadVar__3_367;

    HeadVar__3_367 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_27, HeadVar__2_366);
    return HeadVar__3_367;
  }
}

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1741__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_360)
{
  {
    MR_String HeadVar__3_361;

    HeadVar__3_361 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_27, HeadVar__2_360);
    return HeadVar__3_361;
  }
}

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1687__1_2_f_0(
  MR_Word VarSet_27,
  MR_Word HeadVar__2_351)
{
  {
    MR_String HeadVar__3_352;

    HeadVar__3_352 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_27, HeadVar__2_351);
    return HeadVar__3_352;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1568__1_2_p_0(
  MR_Word GoalFailingContexts_18,
  MR_Word HeadVar__2_51)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[1]), ((MR_Box) (GoalFailingContexts_18)), ((MR_Box) (HeadVar__2_51)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0(
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
check_hlds__det_analysis____Unify____soln_context_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_Word PredId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
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
      MR_Word Det_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_10, (MR_Integer) 0))));
      MR_Word ProcInfo_12;
      MR_Word Procs_13;
      MR_Word PredInfo_14;

      hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Det_11, ProcInfo0_9, &ProcInfo_12);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_5)), ((MR_Box) (ProcInfo_12)), Procs0_8, &Procs_13);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, PredInfo0_7, &PredInfo_14);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
    }
  }
}

void MR_CALL 
check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word _OldDetism_8;
    MR_Word _NewDetism_9;
    MR_Word _Specs_10;

    check_hlds__det_analysis__det_infer_proc_8_p_0(PredId_5, ProcId_6, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12, &_OldDetism_8, &_NewDetism_9, (MR_Word) ((MR_Unsigned) 0U), &_Specs_10);
  }
}

void MR_CALL 
check_hlds__det_analysis__determinism_check_proc_5_p_0(
  MR_Integer ProcId_6,
  MR_Word PredId_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * Specs_9)
{
  {
    MR_Word Globals_10;
    MR_Word Debug_11;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_ModuleInfo_16_29;
    MR_Word STATE_VARIABLE_Specs_18_31;
    MR_Word Var_33;
    MR_Word Var_28;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 84, &Debug_11);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ProcId_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__det_analysis__global_inference_single_pass_8_p_0(Var_17, Debug_11, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_16_29, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_18_31, (MR_Integer) 1, &Var_28);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) ((MR_Unsigned) 0U), Var_17);
    check_hlds__det_report__global_checking_pass_5_p_0(Var_33, STATE_VARIABLE_ModuleInfo_16_29, STATE_VARIABLE_ModuleInfo_13, STATE_VARIABLE_Specs_18_31, Specs_9);
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_16;

    check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_16));
  }
}

void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word * Specs_5)
{
  {
    MR_Word PredIds_6;
    MR_Word DeclaredProcs_7;
    MR_Word UndeclaredProcs_8;
    MR_Word NoInferProcs_9;
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word Debug_12;
    MR_Word InferenceSpecs_13;
    MR_Word FinalSpecs_17;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word PredTable_49;
    MR_Word STATE_VARIABLE_ModuleInfo_16_62;
    MR_Word STATE_VARIABLE_Specs_18_64;
    MR_Word Var_66;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word Var_61;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &PredIds_6);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &PredTable_49);
    check_hlds__det_analysis__determinism_declarations_preds_8_p_0(PredTable_49, PredIds_6, (MR_Word) ((MR_Unsigned) 0U), &DeclaredProcs_7, (MR_Word) ((MR_Unsigned) 0U), &UndeclaredProcs_8, (MR_Word) ((MR_Unsigned) 0U), &NoInferProcs_9);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__det_analysis_scalar_common_2[1]), NoInferProcs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_18)), &conv1_STATE_VARIABLE_ModuleInfo_21_21);
    STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_21_21));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 63, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 84, &Debug_12);
    if ((UndeclaredProcs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      InferenceSpecs_13 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ModuleInfo_27_27 = STATE_VARIABLE_ModuleInfo_21_21;
    }
    else
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Doing determinism inference...\n");
      check_hlds__det_analysis__global_inference_pass_5_p_0(STATE_VARIABLE_ModuleInfo_21_21, &STATE_VARIABLE_ModuleInfo_27_27, UndeclaredProcs_8, Debug_12, &InferenceSpecs_13);
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% done.\n");
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Doing determinism checking...\n");
    check_hlds__det_analysis__global_inference_single_pass_8_p_0(DeclaredProcs_7, Debug_12, STATE_VARIABLE_ModuleInfo_27_27, &STATE_VARIABLE_ModuleInfo_16_62, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_18_64, (MR_Integer) 1, &Var_61);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UndeclaredProcs_8, DeclaredProcs_7);
    check_hlds__det_report__global_checking_pass_5_p_0(Var_66, STATE_VARIABLE_ModuleInfo_16_62, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_Specs_18_64, &FinalSpecs_17);
    *Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), InferenceSpecs_13, FinalSpecs_17);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% done.\n");
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * STATE_VARIABLE_DeclaredProcs_4,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * STATE_VARIABLE_NoInferProcs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoInferProcs_8 = STATE_VARIABLE_NoInferProcs_0_7;
      *STATE_VARIABLE_UndeclaredProcs_6 = STATE_VARIABLE_UndeclaredProcs_0_5;
      *STATE_VARIABLE_DeclaredProcs_4 = STATE_VARIABLE_DeclaredProcs_0_3;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_25;
      MR_Word ProcIds_26;
      MR_Word STATE_VARIABLE_DeclaredProcs_33_33;
      MR_Word STATE_VARIABLE_UndeclaredProcs_34_34;
      MR_Word STATE_VARIABLE_NoInferProcs_35_35;
      MR_Box conv0_PredInfo_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NoInferProcs_0_7;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_20)), &conv0_PredInfo_25);
      PredInfo_25 = ((MR_Word) (conv0_PredInfo_25));
      ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_25);
      check_hlds__det_analysis__determinism_declarations_procs_9_p_0(PredId_20, PredInfo_25, ProcIds_26, STATE_VARIABLE_DeclaredProcs_0_3, &STATE_VARIABLE_DeclaredProcs_33_33, STATE_VARIABLE_UndeclaredProcs_0_5, &STATE_VARIABLE_UndeclaredProcs_34_34, STATE_VARIABLE_NoInferProcs_0_7, &STATE_VARIABLE_NoInferProcs_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_21;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_3 = STATE_VARIABLE_DeclaredProcs_33_33;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5 = STATE_VARIABLE_UndeclaredProcs_34_34;
      next_value_of_STATE_VARIABLE_NoInferProcs_0_7 = STATE_VARIABLE_NoInferProcs_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeclaredProcs_0_3 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_3;
      STATE_VARIABLE_UndeclaredProcs_0_5 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_5;
      STATE_VARIABLE_NoInferProcs_0_7 = next_value_of_STATE_VARIABLE_NoInferProcs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * STATE_VARIABLE_DeclaredProcs_5,
  MR_Word STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * STATE_VARIABLE_NoInferProcs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoInferProcs_9 = STATE_VARIABLE_NoInferProcs_0_8;
      *STATE_VARIABLE_UndeclaredProcs_7 = STATE_VARIABLE_UndeclaredProcs_0_6;
      *STATE_VARIABLE_DeclaredProcs_5 = STATE_VARIABLE_DeclaredProcs_0_4;
    }
    else
    {
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredProcId_28;
      MR_Word STATE_VARIABLE_NoInferProcs_41_41;
      MR_Word STATE_VARIABLE_DeclaredProcs_42_42;
      MR_Word STATE_VARIABLE_UndeclaredProcs_43_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NoInferProcs_0_8;

      {
        PredProcId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcId_28, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), PredProcId_28, 1) = ((MR_Box) (ProcId_23));
      }
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(HeadVar__2_2);
      if (!(succeeded))
      {
        {
          MR_Integer Var_49;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(HeadVar__2_2);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_49);
            succeeded = (ProcId_23 == Var_49);
          }
        }
        if (!(succeeded))
        {
          MR_Word Markers_29;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(HeadVar__2_2, &Markers_29);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_29, (MR_Integer) 10);
        }
      }
      if (succeeded)
      {
        {
          STATE_VARIABLE_NoInferProcs_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NoInferProcs_41_41, 0) = ((MR_Box) (PredProcId_28));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NoInferProcs_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NoInferProcs_0_8));
        }
        STATE_VARIABLE_UndeclaredProcs_43_43 = STATE_VARIABLE_UndeclaredProcs_0_6;
        STATE_VARIABLE_DeclaredProcs_42_42 = STATE_VARIABLE_DeclaredProcs_0_4;
      }
      else
      {
        MR_Word ProcTable_30;
        MR_Word ProcInfo_31;
        MR_Word MaybeDetism_32;
        MR_Box conv0_ProcInfo_31;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(HeadVar__2_2, &ProcTable_30);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_30, ((MR_Box) (ProcId_23)), &conv0_ProcInfo_31);
        ProcInfo_31 = ((MR_Word) (conv0_ProcInfo_31));
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_31, &MaybeDetism_32);
        if ((MaybeDetism_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            STATE_VARIABLE_UndeclaredProcs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_UndeclaredProcs_43_43, 0) = ((MR_Box) (PredProcId_28));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_UndeclaredProcs_43_43, 1) = ((MR_Box) (STATE_VARIABLE_UndeclaredProcs_0_6));
          }
          STATE_VARIABLE_DeclaredProcs_42_42 = STATE_VARIABLE_DeclaredProcs_0_4;
        }
        else
        {
          {
            STATE_VARIABLE_DeclaredProcs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclaredProcs_42_42, 0) = ((MR_Box) (PredProcId_28));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_DeclaredProcs_42_42, 1) = ((MR_Box) (STATE_VARIABLE_DeclaredProcs_0_4));
          }
          STATE_VARIABLE_UndeclaredProcs_43_43 = STATE_VARIABLE_UndeclaredProcs_0_6;
        }
        STATE_VARIABLE_NoInferProcs_41_41 = STATE_VARIABLE_NoInferProcs_0_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_24;
      next_value_of_STATE_VARIABLE_DeclaredProcs_0_4 = STATE_VARIABLE_DeclaredProcs_42_42;
      next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6 = STATE_VARIABLE_UndeclaredProcs_43_43;
      next_value_of_STATE_VARIABLE_NoInferProcs_0_8 = STATE_VARIABLE_NoInferProcs_41_41;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DeclaredProcs_0_4 = next_value_of_STATE_VARIABLE_DeclaredProcs_0_4;
      STATE_VARIABLE_UndeclaredProcs_0_6 = next_value_of_STATE_VARIABLE_UndeclaredProcs_0_6;
      STATE_VARIABLE_NoInferProcs_0_8 = next_value_of_STATE_VARIABLE_NoInferProcs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word ProcList_7,
  MR_Word Debug_8,
  MR_Word * Specs_9)
{
  while (MR_TRUE)
  {
    MR_Word Specs1_10;
    MR_Word Changed_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__det_analysis__global_inference_single_pass_8_p_0(ProcList_7, Debug_8, STATE_VARIABLE_ModuleInfo_0_13, &STATE_VARIABLE_ModuleInfo_15_15, (MR_Word) ((MR_Unsigned) 0U), &Specs1_10, (MR_Integer) 1, &Changed_11);
    libs__file_util__maybe_write_string_4_p_0(Debug_8, (MR_String) "% Inference pass complete\n");
    switch (Changed_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_13 = STATE_VARIABLE_ModuleInfo_15_15;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_ModuleInfo_0_13 = next_value_of_STATE_VARIABLE_ModuleInfo_0_13;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          *Specs_9 = Specs1_10;
          *STATE_VARIABLE_ModuleInfo_14 = STATE_VARIABLE_ModuleInfo_15_15;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
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
    MR_bool succeeded;

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
      MR_Word PredId_19;
      MR_Integer ProcId_20;
      MR_Word PredProcs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word OldDetism_26;
      MR_Word NewDetism_27;
      MR_String ChangeStr_28;
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ModuleInfo_37_37;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word STATE_VARIABLE_Changed_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
      check_hlds__det_analysis__det_infer_proc_8_p_0(PredId_19, ProcId_20, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_37_37, &OldDetism_26, &NewDetism_27, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_38_38);
      succeeded = (NewDetism_27 == OldDetism_26);
      if (succeeded)
      {
        ChangeStr_28 = (MR_String) "old";
        STATE_VARIABLE_Changed_39_39 = STATE_VARIABLE_Changed_0_7;
      }
      else
      {
        ChangeStr_28 = (MR_String) "new";
        STATE_VARIABLE_Changed_39_39 = (MR_Integer) 0;
      }
      switch (Debug_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_41;
            MR_String Var_44;

            Var_44 = mercury__string__f_43_43_2_f_0(ChangeStr_28, (MR_String) " detism ");
            Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "% Inferred ", Var_44);
            mercury__io__write_string_3_p_0(Var_41);
            parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(NewDetism_27);
            mercury__io__write_string_3_p_0((MR_String) " for ");
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(STATE_VARIABLE_ModuleInfo_37_37, PredId_19, ProcId_20);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcs_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_37_37;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_38_38;
      next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_39_39;
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
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_170 = ((MR_Word) ((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_Var_170));
    check_hlds__det_analysis__det_infer_proc_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_127, (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_170);
    if ((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
    {
      switch (*((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13)) {
        default:
          (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      if ((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        check_hlds__det_analysis__det_infer_proc_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_57;
          MR_String Var_58;
          MR_Word Var_59;

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__Var_127 = base;
            MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Integer) 0);
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
            MR_hl_field(MR_mktag(0), base, 3) = NULL;
            MR_hl_field(MR_mktag(0), base, 4) = NULL;
          }
          mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), &(env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_Var_170, (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_55, check_hlds__det_analysis__det_infer_proc_8_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word * OldDetism_12,
  MR_Word * NewDetism_13,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s env;

    (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9 = PredId_9;
    (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10 = ProcId_10;
    (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13 = NewDetism_13;
    {
      MR_Word PredTable0_15;
      MR_Word PredInfo0_16;
      MR_Word ProcTable0_17;
      MR_Word ProcInfo0_18;
      MR_Word OldInferredSolnContext_19;
      MR_Word MaybeDeclaredDetism_20;
      MR_Word DeclaredSolnContext_22;
      MR_Word SolnContext_23;
      MR_Word Goal0_25;
      MR_Word InstMap0_26;
      MR_Word VarSet_27;
      MR_Word VarTypes_28;
      MR_Word DetInfo0_29;
      MR_Word Goal_30;
      MR_Word InferDetism_31;
      MR_Word DetInfo_33;
      MR_Word HasFormatCalls_34;
      MR_Word HasRequireScope_35;
      MR_Word HasIncompleteSwitch_36;
      MR_Word OldCanFail_37;
      MR_Word OldMaxSoln_38;
      MR_Word InferCanFail_39;
      MR_Word InferMaxSoln_40;
      MR_Word CanFail_41;
      MR_Word MaxSoln_42;
      MR_Word TentativeDetism_43;
      MR_Word EvalMethod_44;
      MR_Word ExportedProcsCord0_54;
      MR_Word ExportedProcsCord_56;
      MR_Word ProcInfo1_63;
      MR_Word ProcInfo_64;
      MR_Word ProcTable_65;
      MR_Word PredInfo1_66;
      MR_Word PredInfo_68;
      MR_Word PredTable_69;
      MR_Word Var_82;
      MR_Word STATE_VARIABLE_ModuleInfo_86_86;
      MR_Word STATE_VARIABLE_Specs_87_87;
      MR_Word STATE_VARIABLE_Specs_125_125;
      MR_Word STATE_VARIABLE_ModuleInfo_126_126;
      MR_Word STATE_VARIABLE_Markers_156_156;
      MR_Word STATE_VARIABLE_Markers_158_158;
      MR_Word STATE_VARIABLE_Markers_160_160;
      MR_Word STATE_VARIABLE_Markers_162_162;
      MR_Box conv0_PredInfo0_16;
      MR_Box conv1_ProcInfo0_18;
      MR_Word Var_32;
      MR_Word ToBeCheckedDetism_47;
      MR_Word ToBeCheckedCodeModel_48;
      MR_Integer _InArg_45;
      MR_Integer _OutArg_46;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_70, &PredTable0_15);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_15, ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), &conv0_PredInfo0_16);
      PredInfo0_16 = ((MR_Word) (conv0_PredInfo0_16));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_16, &ProcTable0_17);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_17, ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), &conv1_ProcInfo0_18);
      ProcInfo0_18 = ((MR_Word) (conv1_ProcInfo0_18));
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_18, OldDetism_12);
      check_hlds__det_analysis__det_get_soln_context_2_p_0(*OldDetism_12, &OldInferredSolnContext_19);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_18, &MaybeDeclaredDetism_20);
      if ((MaybeDeclaredDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
        DeclaredSolnContext_22 = (MR_Integer) 0;
      else
      {
        MR_Word DeclaredDetism_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredDetism_20, (MR_Integer) 0))));

        check_hlds__det_analysis__det_get_soln_context_2_p_0(DeclaredDetism_21, &DeclaredSolnContext_22);
      }
      (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (DeclaredSolnContext_22 == (MR_Integer) 1);
      if (!((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded))
        (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (OldInferredSolnContext_19 == (MR_Integer) 1);
      if ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        SolnContext_23 = (MR_Integer) 1;
      else
        SolnContext_23 = (MR_Integer) 0;
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_18, &Goal0_25);
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo0_18, STATE_VARIABLE_ModuleInfo_0_70, &InstMap0_26);
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_18, &VarSet_27);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_18, &VarTypes_28);
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
      }
      check_hlds__det_util__det_info_init_7_p_0(STATE_VARIABLE_ModuleInfo_0_70, Var_82, VarSet_27, VarTypes_28, (MR_Integer) 0, STATE_VARIABLE_Specs_0_72, &DetInfo0_29);
      check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_25, &Goal_30, InstMap0_26, SolnContext_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &InferDetism_31, &Var_32, DetInfo0_29, &DetInfo_33);
      check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_33, &STATE_VARIABLE_ModuleInfo_86_86);
      check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_33, &STATE_VARIABLE_Specs_87_87);
      check_hlds__det_util__det_info_get_has_format_call_2_p_0(DetInfo_33, &HasFormatCalls_34);
      check_hlds__det_util__det_info_get_has_req_scope_2_p_0(DetInfo_33, &HasRequireScope_35);
      check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(DetInfo_33, &HasIncompleteSwitch_36);
      parse_tree__prog_data__determinism_components_3_p_0(*OldDetism_12, &OldCanFail_37, &OldMaxSoln_38);
      parse_tree__prog_data__determinism_components_3_p_0(InferDetism_31, &InferCanFail_39, &InferMaxSoln_40);
      parse_tree__prog_detism__det_switch_canfail_3_p_0(OldCanFail_37, InferCanFail_39, &CanFail_41);
      parse_tree__prog_detism__det_switch_maxsoln_3_p_0(OldMaxSoln_38, InferMaxSoln_40, &MaxSoln_42);
      parse_tree__prog_data__determinism_components_3_p_1(&TentativeDetism_43, CanFail_41, MaxSoln_42);
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_18, &EvalMethod_44);
      *((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) = hlds__hlds_pred__eval_method_change_determinism_2_f_0(EvalMethod_44, TentativeDetism_43);
      (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(STATE_VARIABLE_ModuleInfo_86_86, ProcInfo0_18, &_InArg_45, &_OutArg_46);
      if ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
      {
        if ((MaybeDeclaredDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
          ToBeCheckedDetism_47 = *((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13);
        else
          ToBeCheckedDetism_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredDetism_20, (MR_Integer) 0))));
        hlds__code_model__determinism_to_code_model_2_p_0(ToBeCheckedDetism_47, &ToBeCheckedCodeModel_48);
        (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (ToBeCheckedCodeModel_48 != (MR_Integer) 0);
      }
      if ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
      {
        MR_Word ProcContext_49;
        MR_Word IOStateProcPieces_50;
        MR_Word IOStatePieces_51;
        MR_Word IOStateSpec_53;
        MR_Word Var_95;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo0_18, &ProcContext_49);
        IOStateProcPieces_50 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(STATE_VARIABLE_ModuleInfo_86_86, (MR_Integer) 0, (MR_Integer) 1, Var_82);
        Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IOStateProcPieces_50, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[9])));
        IOStatePieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[109])), Var_95);
        {
          Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (IOStatePieces_51));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[132])));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ProcContext_49));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          IOStateSpec_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IOStateSpec_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), IOStateSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), IOStateSpec_53, 2) = ((MR_Box) (Var_116));
        }
        {
          STATE_VARIABLE_Specs_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 0) = ((MR_Box) (IOStateSpec_53));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_125_125, 1) = ((MR_Box) (STATE_VARIABLE_Specs_87_87));
        }
      }
      else
        STATE_VARIABLE_Specs_125_125 = STATE_VARIABLE_Specs_87_87;
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_86_86, &ExportedProcsCord0_54);
      (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_55 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord0_54);
      ExportedProcsCord_56 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_55);
      hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcsCord_56, STATE_VARIABLE_ModuleInfo_86_86, &STATE_VARIABLE_ModuleInfo_126_126);
      check_hlds__det_analysis__det_infer_proc_8_p_0_4(&env);
      if ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
      {
        MR_Word PragmaContext_60;

        (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis__get_exported_proc_context_4_p_0((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_55, (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &PragmaContext_60);
        if ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        {
          MR_Word ExportPieces_61;
          MR_Word ExportSpec_62;
          MR_Word Var_130;
          MR_Word Var_133;
          MR_Word Var_136;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_String Var_141;
          MR_String Var_142;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_149;
          MR_Word Var_150;

          Var_142 = parse_tree__prog_out__determinism_to_string_1_f_0(*((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13));
          Var_141 = mercury__string__f_43_43_2_f_0(Var_142, (MR_String) ".");
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_140, 0) = ((MR_Box) (Var_141));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[136])));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[135])));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_136));
          }
          {
            Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[134])));
            MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
          }
          {
            ExportPieces_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExportPieces_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), ExportPieces_61, 1) = ((MR_Box) (Var_130));
          }
          {
            Var_150 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (ExportPieces_61));
          }
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
            MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (PragmaContext_60));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_149));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ExportSpec_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ExportSpec_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ExportSpec_62, 1) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), ExportSpec_62, 2) = ((MR_Box) (Var_147));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_73 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExportSpec_62));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_125_125));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_proc\'/8", (MR_String) "Cannot find proc in table of pragma foreign_exported procs");
            return;
          }
      }
      else
        *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_125_125;
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_30, ProcInfo0_18, &ProcInfo1_63);
      hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(*((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13), ProcInfo1_63, &ProcInfo_64);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), ((MR_Box) (ProcInfo_64)), ProcTable0_17, &ProcTable_65);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_65, PredInfo0_16, &PredInfo1_66);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_66, &STATE_VARIABLE_Markers_156_156);
      switch (HasFormatCalls_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 26, STATE_VARIABLE_Markers_156_156, &STATE_VARIABLE_Markers_158_158);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Markers_158_158 = STATE_VARIABLE_Markers_156_156;
          break;
      }
      switch (HasRequireScope_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, STATE_VARIABLE_Markers_158_158, &STATE_VARIABLE_Markers_160_160);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Markers_160_160 = STATE_VARIABLE_Markers_158_158;
          break;
      }
      switch (HasIncompleteSwitch_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 25, STATE_VARIABLE_Markers_160_160, &STATE_VARIABLE_Markers_162_162);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Markers_162_162 = STATE_VARIABLE_Markers_160_160;
          break;
      }
      hlds__hlds_pred__pred_info_set_markers_3_p_0(STATE_VARIABLE_Markers_162_162, PredInfo1_66, &PredInfo_68);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) ((env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), ((MR_Box) (PredInfo_68)), PredTable0_15, &PredTable_69);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_69, STATE_VARIABLE_ModuleInfo_126_126, STATE_VARIABLE_ModuleInfo_71);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word Var_15;
    MR_Integer Var_16;

    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)) = (MR_Box) ((((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) -4)) | (MR_Unsigned) (ArgX1_3)));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)) = ((MR_Box) (ArgX4_9));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (ArgX5_11));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, Var_15);
    if (succeeded)
      succeeded = (ArgX3_7 == Var_16);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Proc_5;
    MR_Word Procs_6;
    MR_Word Context0_12;
    MR_Word Var_13;
    MR_Integer Var_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Proc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Procs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_5, (MR_Integer) 1))));
      Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_5, (MR_Integer) 2))));
      Context0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_5, (MR_Integer) 4))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_13);
      if (succeeded)
        succeeded = (ProcId_8 == Var_14);
      if (succeeded)
      {
        *Context_9 = Context0_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Procs_6;

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

void MR_CALL 
check_hlds__det_analysis__det_get_soln_context_2_p_0(
  MR_Word DeclaredDetism_3,
  MR_Word * SolnContext_4)
{
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
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__3_367;

    conv2_HeadVar__3_367 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1781__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_367));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__3_361;

    conv1_HeadVar__3_361 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1741__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_361));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_352;

    conv0_HeadVar__3_352 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1687__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_352));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59, (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71);
    if ((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
      check_hlds__det_analysis__det_infer_scope_12_p_0_5(env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
      {
        parse_tree__set_of_var__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63, &(env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71, check_hlds__det_analysis__det_infer_scope_12_p_0_6, env_ptr);
        (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
  }
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
  MR_Word STATE_VARIABLE_DetInfo_0_111,
  MR_Word * STATE_VARIABLE_DetInfo_112)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s env;

    switch (MR_tag((MR_Word) Reason_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_111, STATE_VARIABLE_DetInfo_112);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_13, (MR_Integer) 0))));
          MR_Word Kind_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Reason_13, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word ProcInfo_26;
          MR_Word VarSet_27;
          MR_Word Context_28;
          MR_Word SolnContextToUse_29;
          MR_Word MaybePromiseEqvSolutionSets_30;
          MR_Word InstmapDelta_53;
          MR_Word ChangedVars_54;
          MR_Word ModuleInfo_55;
          MR_Word GroundBoundVars_57;
          MR_Word NonLocalVars_58;
          MR_Word BoundVars0_60;
          MR_Word VarTypes_61;
          MR_Word BoundVars_62;
          MR_Word ExtraVars_75;
          MR_Word IgnoreExtraVars_76;
          MR_Word STATE_VARIABLE_DetInfo_270_270;
          MR_Word Var_275;
          MR_Word Var_276;
          MR_Word Var_277;
          MR_Word STATE_VARIABLE_DetInfo_308_308;
          MR_Word Var_309;
          MR_Word STATE_VARIABLE_DetInfo_341_341;
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), Reason_13, (MR_Integer) 1)));
          MR_Word _GroundAtStartVars_56;

          check_hlds__det_util__det_get_proc_info_2_p_0(STATE_VARIABLE_DetInfo_0_111, &ProcInfo_26);
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_26, &VarSet_27);
          Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
          switch (Kind_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                SolnContextToUse_29 = SolnContext_18;
                if ((MaybePromiseEqvSolutionSets0_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_274;

                  {
                    Var_274 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (Vars_24));
                    MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (Context_28));
                  }
                  {
                    MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (Var_274));
                  }
                  STATE_VARIABLE_DetInfo_270_270 = STATE_VARIABLE_DetInfo_0_111;
                }
                else
                {
                  MR_Word PESSInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0))));
                  MR_Word OuterVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PESSInfo_31, (MR_Integer) 0))));
                  MR_Word OuterContext_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PESSInfo_31, (MR_Integer) 1))));
                  MR_Word NestedSpec_37;
                  MR_Word AllVars_38;
                  MR_Word Var_249;
                  MR_Word Var_250;
                  MR_Word Var_259;
                  MR_Word Var_260;
                  MR_Word Var_271;
                  MR_Word Var_272;
                  MR_Word Var_273;

                  {
                    Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (Context_28));
                    MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[116])));
                  }
                  {
                    Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_260, 0) = ((MR_Box) (OuterContext_33));
                    MR_hl_field(MR_mktag(1), Var_260, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[119])));
                  }
                  {
                    Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (Var_260));
                    MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (Var_250));
                    MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Var_259));
                  }
                  {
                    NestedSpec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), NestedSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_2[0])));
                    MR_hl_field(MR_mktag(0), NestedSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                    MR_hl_field(MR_mktag(0), NestedSpec_37, 2) = ((MR_Box) (Var_249));
                  }
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(NestedSpec_37, STATE_VARIABLE_DetInfo_0_111, &STATE_VARIABLE_DetInfo_270_270);
                  Var_271 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), OuterVars_32, Vars_24);
                  AllVars_38 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_271);
                  Var_273 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_38);
                  {
                    Var_272 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_272, 0) = ((MR_Box) (Var_273));
                    MR_hl_field(MR_mktag(0), Var_272, 1) = ((MR_Box) (OuterContext_33));
                  }
                  {
                    MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (Var_272));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                if ((MaybePromiseEqvSolutionSets0_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ArbitrarySpec_40;
                  MR_Word Var_219;
                  MR_Word Var_220;

                  {
                    Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (Context_28));
                    MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[120])));
                  }
                  {
                    Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
                    MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    ArbitrarySpec_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ArbitrarySpec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), ArbitrarySpec_40, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                    MR_hl_field(MR_mktag(0), ArbitrarySpec_40, 2) = ((MR_Box) (Var_219));
                  }
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(ArbitrarySpec_40, STATE_VARIABLE_DetInfo_0_111, &STATE_VARIABLE_DetInfo_270_270);
                }
                else
                {
                  MR_Word OldVars_41;
                  MR_Word PromiseContext_42;
                  MR_Word OverlapVars_43;
                  MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0))));
                  MR_Word Var_144;
                  MR_Word Var_145;

                  OldVars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 0))));
                  PromiseContext_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 1))));
                  Var_144 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVars_41);
                  Var_145 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
                  OverlapVars_43 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_144, Var_145);
                  (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_43);
                  if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
                    STATE_VARIABLE_DetInfo_270_270 = STATE_VARIABLE_DetInfo_0_111;
                  else
                  {
                    MR_Word OverlapVarNames_44;
                    MR_String OverlapVarStr_46;
                    MR_Word OverlapPieces_50;
                    MR_Word OverlapSpec_52;
                    MR_Word Var_146;
                    MR_Word Var_147;
                    MR_Word Var_152;
                    MR_Word Var_155;
                    MR_Word Var_158;
                    MR_Word Var_161;
                    MR_Word Var_164;
                    MR_Word Var_167;
                    MR_Word Var_168;
                    MR_Word Var_170;
                    MR_Word Var_171;
                    MR_Word Var_187;
                    MR_Word Var_188;
                    MR_Word Var_189;
                    MR_Word Var_190;
                    MR_Word Var_192;
                    MR_Word Var_193;

                    {
                      Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_146, 3) = ((MR_Box) (VarSet_27));
                    }
                    Var_147 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_43);
                    OverlapVarNames_44 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_146, Var_147);
                    if ((OverlapVarNames_44 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
                        return;
                      }
                    else
                    {
                      MR_Word Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OverlapVarNames_44, (MR_Integer) 1))));
                      MR_String Var_371 = ((MR_String) ((MR_hl_field(MR_mktag(1), OverlapVarNames_44, (MR_Integer) 0))));

                      if ((Var_370 == (MR_Word) ((MR_Unsigned) 0U)))
                        OverlapVarStr_46 = (MR_String) "the variable";
                      else
                        OverlapVarStr_46 = (MR_String) "the following variables:";
                    }
                    {
                      Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (OverlapVarStr_46));
                    }
                    {
                      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
                      MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[125])));
                      MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_167));
                    }
                    {
                      Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[124])));
                      MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_164));
                    }
                    {
                      Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
                      MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_161));
                    }
                    {
                      Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
                      MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_158));
                    }
                    {
                      Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[121])));
                      MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_155));
                    }
                    Var_171 = parse_tree__error_util__list_to_pieces_1_f_0(OverlapVarNames_44);
                    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_171, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[127])));
                    OverlapPieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_152, Var_170);
                    {
                      Var_190 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_190, 0) = ((MR_Box) (OverlapPieces_50));
                    }
                    {
                      Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (Var_190));
                      MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Context_28));
                      MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_189));
                    }
                    {
                      Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (PromiseContext_42));
                      MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[117])));
                    }
                    {
                      Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
                      MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
                      MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_192));
                    }
                    {
                      OverlapSpec_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), OverlapSpec_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), OverlapSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                      MR_hl_field(MR_mktag(0), OverlapSpec_52, 2) = ((MR_Box) (Var_187));
                    }
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(OverlapSpec_52, STATE_VARIABLE_DetInfo_0_111, &STATE_VARIABLE_DetInfo_270_270);
                  }
                }
                MaybePromiseEqvSolutionSets_30 = (MR_Word) ((MR_Unsigned) 0U);
                SolnContextToUse_29 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                SolnContextToUse_29 = (MR_Integer) 1;
                MaybePromiseEqvSolutionSets_30 = MaybePromiseEqvSolutionSets0_20;
                STATE_VARIABLE_DetInfo_270_270 = STATE_VARIABLE_DetInfo_0_111;
              }
              break;
          }
          InstmapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_16);
          hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_53, &ChangedVars_54);
          check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_270_270, &ModuleInfo_55);
          {
            Var_275 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_275, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_275, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_275, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_275, 3) = ((MR_Box) (ModuleInfo_55));
            MR_hl_field(MR_mktag(0), Var_275, 4) = ((MR_Box) (InstMap0_17));
          }
          parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_275, ChangedVars_54, &_GroundAtStartVars_56, &GroundBoundVars_57);
          NonLocalVars_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
          {
            Var_276 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_276, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_276, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
            MR_hl_field(MR_mktag(0), Var_276, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_276, 3) = ((MR_Box) (ModuleInfo_55));
            MR_hl_field(MR_mktag(0), Var_276, 4) = ((MR_Box) (InstMap0_17));
          }
          (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_276, NonLocalVars_58);
          BoundVars0_60 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GroundBoundVars_57, (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59);
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_26, &VarTypes_61);
          BoundVars_62 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_61, BoundVars0_60);
          Var_277 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundVars_62, Var_277, &(env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
          (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
          if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            STATE_VARIABLE_DetInfo_308_308 = STATE_VARIABLE_DetInfo_270_270;
          else
          {
            MR_Word MissingVarNames_64;
            MR_String MissingKindStr_65;
            MR_String MissingListStr_67;
            MR_String BindsWords_72;
            MR_Word MissingPieces_73;
            MR_Word MissingSpec_74;
            MR_Word Var_278;
            MR_Word Var_279;
            MR_Word Var_284;
            MR_Word Var_287;
            MR_Word Var_288;
            MR_Word Var_289;
            MR_Word Var_290;
            MR_Word Var_291;
            MR_Word Var_292;
            MR_Word Var_294;
            MR_Word Var_295;
            MR_Word Var_302;
            MR_Word Var_303;
            MR_Word Var_304;
            MR_Word Var_305;

            {
              Var_278 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
              MR_hl_field(MR_mktag(0), Var_278, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_278, 3) = ((MR_Box) (VarSet_27));
            }
            Var_279 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
            MissingVarNames_64 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_278, Var_279);
            MissingKindStr_65 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(Kind_25);
            if ((MissingVarNames_64 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
                return;
              }
            else
            {
              MR_Word Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MissingVarNames_64, (MR_Integer) 1))));
              MR_String Var_373 = ((MR_String) ((MR_hl_field(MR_mktag(1), MissingVarNames_64, (MR_Integer) 0))));

              if ((Var_372 == (MR_Word) ((MR_Unsigned) 0U)))
                MissingListStr_67 = (MR_String) "a variable that is not listed:";
              else
                MissingListStr_67 = (MR_String) "some variables that are not listed:";
            }
            check_hlds__det_analysis__det_infer_scope_12_p_0_7(&env);
            if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
              BindsWords_72 = (MR_String) "goal may constrain";
            else
              BindsWords_72 = (MR_String) "goal binds";
            {
              Var_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_288, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_288, 1) = ((MR_Box) (MissingKindStr_65));
            }
            {
              Var_290 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_290, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_290, 1) = ((MR_Box) (BindsWords_72));
            }
            {
              Var_292 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_292, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_292, 1) = ((MR_Box) (MissingListStr_67));
            }
            {
              Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (Var_292));
              MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_289, 0) = ((MR_Box) (Var_290));
              MR_hl_field(MR_mktag(1), Var_289, 1) = ((MR_Box) (Var_291));
            }
            {
              Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_287, 0) = ((MR_Box) (Var_288));
              MR_hl_field(MR_mktag(1), Var_287, 1) = ((MR_Box) (Var_289));
            }
            {
              Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_284, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_284, 1) = ((MR_Box) (Var_287));
            }
            Var_295 = parse_tree__error_util__list_to_pieces_1_f_0(MissingVarNames_64);
            Var_294 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_295, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[127])));
            MissingPieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_284, Var_294);
            {
              Var_305 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_305, 0) = ((MR_Box) (MissingPieces_73));
            }
            {
              Var_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_304, 0) = ((MR_Box) (Var_305));
              MR_hl_field(MR_mktag(1), Var_304, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_303, 0) = ((MR_Box) (Context_28));
              MR_hl_field(MR_mktag(1), Var_303, 1) = ((MR_Box) (Var_304));
            }
            {
              Var_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_302, 0) = ((MR_Box) (Var_303));
              MR_hl_field(MR_mktag(1), Var_302, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MissingSpec_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MissingSpec_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), MissingSpec_74, 1) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), MissingSpec_74, 2) = ((MR_Box) (Var_302));
            }
            check_hlds__det_util__det_info_add_error_spec_3_p_0(MissingSpec_74, STATE_VARIABLE_DetInfo_270_270, &STATE_VARIABLE_DetInfo_308_308);
          }
          Var_309 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_309, BoundVars_62, &ExtraVars_75);
          check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(STATE_VARIABLE_DetInfo_308_308, &IgnoreExtraVars_76);
          (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_75);
          if (!((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
            (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (IgnoreExtraVars_76 == (MR_Integer) 1);
          if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            STATE_VARIABLE_DetInfo_341_341 = STATE_VARIABLE_DetInfo_308_308;
          else
          {
            MR_Word ExtraVarNames_77;
            MR_String ExtraKindStr_78;
            MR_String ExtraListStr_80;
            MR_Word ExtraPieces_84;
            MR_Word ExtraSpec_85;
            MR_Word Var_310;
            MR_Word Var_311;
            MR_Word Var_316;
            MR_Word Var_319;
            MR_Word Var_320;
            MR_Word Var_321;
            MR_Word Var_324;
            MR_Word Var_325;
            MR_Word Var_327;
            MR_Word Var_328;
            MR_Word Var_335;
            MR_Word Var_336;
            MR_Word Var_337;
            MR_Word Var_338;

            {
              Var_310 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_310, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_310, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
              MR_hl_field(MR_mktag(0), Var_310, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_310, 3) = ((MR_Box) (VarSet_27));
            }
            Var_311 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_75);
            ExtraVarNames_77 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_analysis_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_310, Var_311);
            ExtraKindStr_78 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(Kind_25);
            if ((ExtraVarNames_77 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
                return;
              }
            else
            {
              MR_Word Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExtraVarNames_77, (MR_Integer) 1))));
              MR_String Var_375 = ((MR_String) ((MR_hl_field(MR_mktag(1), ExtraVarNames_77, (MR_Integer) 0))));

              if ((Var_374 == (MR_Word) ((MR_Unsigned) 0U)))
                ExtraListStr_80 = (MR_String) "an extra variable:";
              else
                ExtraListStr_80 = (MR_String) "some extra variables:";
            }
            {
              Var_320 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_320, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_320, 1) = ((MR_Box) (ExtraKindStr_78));
            }
            {
              Var_325 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_325, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_325, 1) = ((MR_Box) (ExtraListStr_80));
            }
            {
              Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_324, 0) = ((MR_Box) (Var_325));
              MR_hl_field(MR_mktag(1), Var_324, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_321, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[129])));
              MR_hl_field(MR_mktag(1), Var_321, 1) = ((MR_Box) (Var_324));
            }
            {
              Var_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_319, 0) = ((MR_Box) (Var_320));
              MR_hl_field(MR_mktag(1), Var_319, 1) = ((MR_Box) (Var_321));
            }
            {
              Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_316, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_316, 1) = ((MR_Box) (Var_319));
            }
            Var_328 = parse_tree__error_util__list_to_pieces_1_f_0(ExtraVarNames_77);
            Var_327 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_328, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[127])));
            ExtraPieces_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_316, Var_327);
            {
              Var_338 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_338, 0) = ((MR_Box) (ExtraPieces_84));
            }
            {
              Var_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_337, 0) = ((MR_Box) (Var_338));
              MR_hl_field(MR_mktag(1), Var_337, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_336, 0) = ((MR_Box) (Context_28));
              MR_hl_field(MR_mktag(1), Var_336, 1) = ((MR_Box) (Var_337));
            }
            {
              Var_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_335, 0) = ((MR_Box) (Var_336));
              MR_hl_field(MR_mktag(1), Var_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ExtraSpec_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ExtraSpec_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ExtraSpec_85, 1) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), ExtraSpec_85, 2) = ((MR_Box) (Var_335));
            }
            check_hlds__det_util__det_info_add_error_spec_3_p_0(ExtraSpec_85, STATE_VARIABLE_DetInfo_308_308, &STATE_VARIABLE_DetInfo_341_341);
          }
          check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContextToUse_29, RightFailingContexts_19, MaybePromiseEqvSolutionSets_30, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_341_341, STATE_VARIABLE_DetInfo_112);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_111, STATE_VARIABLE_DetInfo_112);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_DetInfo_119_119;

              check_hlds__det_util__det_info_set_has_req_scope_2_p_0(STATE_VARIABLE_DetInfo_0_111, &STATE_VARIABLE_DetInfo_119_119);
              check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_119_119, STATE_VARIABLE_DetInfo_112);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word FromGroundTermKind_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 1))));
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 2)));

              switch (FromGroundTermKind_110) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *Goal_15 = Goal0_14;
                    *Detism_21 = (MR_Integer) 0;
                    *GoalFailingContexts_22 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_DetInfo_112 = STATE_VARIABLE_DetInfo_0_111;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_111, STATE_VARIABLE_DetInfo_112);
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
              MR_Word Detism0_91;
              MR_Word STATE_VARIABLE_DetInfo_122_122;
              MR_Word Detism1_92;

              check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, &Detism0_91, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_111, &STATE_VARIABLE_DetInfo_122_122);
              switch (Detism0_91) {
                default:
                  (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  {
                    Detism1_92 = (MR_Integer) 4;
                    (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    Detism1_92 = (MR_Integer) 0;
                    (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Detism1_92 = (MR_Integer) 0;
                    (env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
              }
              if ((env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
              {
                *Detism_21 = Detism1_92;
                *STATE_VARIABLE_DetInfo_112 = STATE_VARIABLE_DetInfo_122_122;
              }
              else
              {
                MR_String DetismStr_93;
                MR_Word Pieces_94;
                MR_Word Spec_95;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_136;
                MR_Word Var_137;
                MR_Word Var_138;
                MR_Word Var_139;
                MR_Word Context_343;

                *Detism_21 = Detism0_91;
                Context_343 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
                DetismStr_93 = parse_tree__prog_out__determinism_to_string_1_f_0(*Detism_21);
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (DetismStr_93));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])));
                }
                {
                  Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[130])));
                  MR_hl_field(MR_mktag(1), Pieces_94, 1) = ((MR_Box) (Var_125));
                }
                {
                  Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Pieces_94));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Context_343));
                  MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
                }
                {
                  Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(0), Spec_95, 2) = ((MR_Box) (Var_136));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_95, STATE_VARIABLE_DetInfo_122_122, STATE_VARIABLE_DetInfo_112);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_14, Goal_15, InstMap0_17, SolnContext_18, RightFailingContexts_19, MaybePromiseEqvSolutionSets0_20, Detism_21, GoalFailingContexts_22, STATE_VARIABLE_DetInfo_0_111, STATE_VARIABLE_DetInfo_112);
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
  {
    MR_bool succeeded;
    MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_12 = STATE_VARIABLE_DetInfo_0_11;
    *STATE_VARIABLE_MaxSolns_10 = STATE_VARIABLE_MaxSolns_0_9;
    *STATE_VARIABLE_CanFail_8 = STATE_VARIABLE_CanFail_0_7;
  }
  else
  {
    MR_Word Goal0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_28;
    MR_Word Goals_29;
    MR_Word FirstDetism_37;
    MR_Word FirstCanFail_38;
    MR_Word FirstMaxSolns_39;
    MR_Word STATE_VARIABLE_DetInfo_46_46;
    MR_Word STATE_VARIABLE_CanFail_47_47;
    MR_Word STATE_VARIABLE_MaxSolns_48_48;

    check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(Goal0_26, &Goal_28, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &FirstDetism_37, STATE_VARIABLE_DetInfo_0_11, &STATE_VARIABLE_DetInfo_46_46);
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_37, &FirstCanFail_38, &FirstMaxSolns_39);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(STATE_VARIABLE_CanFail_0_7, FirstCanFail_38, &STATE_VARIABLE_CanFail_47_47);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(STATE_VARIABLE_MaxSolns_0_9, FirstMaxSolns_39, &STATE_VARIABLE_MaxSolns_48_48);
    check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(Goals0_27, &Goals_29, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CanFail_47_47, STATE_VARIABLE_CanFail_8, STATE_VARIABLE_MaxSolns_48_48, STATE_VARIABLE_MaxSolns_10, STATE_VARIABLE_DetInfo_46_46, STATE_VARIABLE_DetInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_29));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1568__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word InstMap0_12,
  MR_Word SolnContext_13,
  MR_Word RightFailingContexts_14,
  MR_Word MaybePromiseEqvSolutionSets0_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_DetInfo_0_25,
  MR_Word * STATE_VARIABLE_DetInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word GoalFailingContexts_18;
    MR_Word STATE_VARIABLE_DetInfo_27_27;

    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_10, Goal_11, InstMap0_12, SolnContext_13, RightFailingContexts_14, MaybePromiseEqvSolutionSets0_15, Detism_16, &GoalFailingContexts_18, STATE_VARIABLE_DetInfo_0_25, &STATE_VARIABLE_DetInfo_27_27);
    switch (*Detism_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          MR_Word Var_48;

          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (GoalFailingContexts_18));
            MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
          *STATE_VARIABLE_DetInfo_26 = STATE_VARIABLE_DetInfo_27_27;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
          MR_Word Context_21;
          MR_String DetismStr_22;
          MR_Word Pieces_23;
          MR_Word Spec_24;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;

          Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_20);
          DetismStr_22 = parse_tree__prog_out__determinism_to_string_1_f_0(*Detism_16);
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (DetismStr_22));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])));
          }
          {
            Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[113])));
            MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Pieces_23));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Context_21));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_41));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_24, STATE_VARIABLE_DetInfo_27_27, STATE_VARIABLE_DetInfo_26);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1568__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word MainDetism_22;
    MR_Word STATE_VARIABLE_DetInfo_32_32;
    MR_Word GoalFailingContexts_44;
    MR_Word STATE_VARIABLE_DetInfo_27_51;

    check_hlds__det_analysis__det_infer_goal_10_p_0(MainGoal0_12, MainGoal_13, InstMap0_16, SolnContext_17, RightFailingContexts_18, MaybePromiseEqvSolutionSets0_19, &MainDetism_22, &GoalFailingContexts_44, STATE_VARIABLE_DetInfo_0_30, &STATE_VARIABLE_DetInfo_27_51);
    switch (MainDetism_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          MR_Word Var_72;

          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (GoalFailingContexts_44));
            MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
          STATE_VARIABLE_DetInfo_32_32 = STATE_VARIABLE_DetInfo_27_51;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainGoal0_12, (MR_Integer) 1))));
          MR_Word Context_47;
          MR_String DetismStr_48;
          MR_Word Pieces_49;
          MR_Word Spec_50;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;

          Context_47 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_46);
          DetismStr_48 = parse_tree__prog_out__determinism_to_string_1_f_0(MainDetism_22);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (DetismStr_48));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])));
          }
          {
            Pieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[113])));
            MR_hl_field(MR_mktag(1), Pieces_49, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_49));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Context_47));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), Spec_50, 2) = ((MR_Box) (Var_65));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_50, STATE_VARIABLE_DetInfo_27_51, &STATE_VARIABLE_DetInfo_32_32);
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
      MR_Word Goal0_90;
      MR_Word Goals0_91;
      MR_Word Goal_92;
      MR_Word Goals_93;
      MR_Word FirstDetism_101;
      MR_Word FirstCanFail_102;
      MR_Word FirstMaxSolns_103;
      MR_Word STATE_VARIABLE_DetInfo_46_110;
      MR_Word STATE_VARIABLE_CanFail_47_111;
      MR_Word STATE_VARIABLE_MaxSolns_48_112;

      parse_tree__prog_data__determinism_components_3_p_0(MainDetism_22, &MainCanFail_25, &MainMaxSolns_26);
      Goal0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrElseGoals0_14, (MR_Integer) 0))));
      Goals0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrElseGoals0_14, (MR_Integer) 1))));
      check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(Goal0_90, &Goal_92, InstMap0_16, SolnContext_17, RightFailingContexts_18, MaybePromiseEqvSolutionSets0_19, &FirstDetism_101, STATE_VARIABLE_DetInfo_32_32, &STATE_VARIABLE_DetInfo_46_110);
      parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_101, &FirstCanFail_102, &FirstMaxSolns_103);
      parse_tree__prog_detism__det_switch_canfail_3_p_0(MainCanFail_25, FirstCanFail_102, &STATE_VARIABLE_CanFail_47_111);
      parse_tree__prog_detism__det_switch_maxsoln_3_p_0(MainMaxSolns_26, FirstMaxSolns_103, &STATE_VARIABLE_MaxSolns_48_112);
      check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(Goals0_91, &Goals_93, InstMap0_16, SolnContext_17, RightFailingContexts_18, MaybePromiseEqvSolutionSets0_19, STATE_VARIABLE_CanFail_47_111, &CanFail_27, STATE_VARIABLE_MaxSolns_48_112, &MaxSolns0_28, STATE_VARIABLE_DetInfo_46_110, STATE_VARIABLE_DetInfo_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OrElseGoals_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_92));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_93));
      }
      MaxSolns_29 = ((&check_hlds__det_analysis_vector_common_4[0 + MaxSolns0_28]))->check_hlds__det_analysis__vector_common_type_4_0__vct_4_f_0;
      parse_tree__prog_data__determinism_components_3_p_1(Detism_20, CanFail_27, MaxSolns_29);
    }
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
      *Detism_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_20, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Context_23));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_16 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
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
  MR_Word STATE_VARIABLE_DetInfo_0_48,
  MR_Word * STATE_VARIABLE_DetInfo_49)
{
  {
    MR_bool succeeded;
    MR_Word InstMap1_29;
    MR_Word ThenDetism_30;
    MR_Word ThenFailingContexts_31;
    MR_Word ThenCanFail_32;
    MR_Word ThenMaxSoln_33;
    MR_Word CondSolnContext_34;
    MR_Word CondDetism_35;
    MR_Word CondCanFail_37;
    MR_Word CondMaxSoln_38;
    MR_Word ElseDetism_39;
    MR_Word ElseFailingContexts_40;
    MR_Word ElseCanFail_41;
    MR_Word ElseMaxSoln_42;
    MR_Word STATE_VARIABLE_DetInfo_53_53;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_DetInfo_58_58;
    MR_Word _CondFailingContexts_36;

    hlds__goal_util__update_instmap_3_p_0(Cond0_15, InstMap0_21, &InstMap1_29);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Then0_17, Then_18, InstMap1_29, SolnContext_22, RightFailingContexts_23, MaybePromiseEqvSolutionSets_24, &ThenDetism_30, &ThenFailingContexts_31, STATE_VARIABLE_DetInfo_0_48, &STATE_VARIABLE_DetInfo_53_53);
    parse_tree__prog_data__determinism_components_3_p_0(ThenDetism_30, &ThenCanFail_32, &ThenMaxSoln_33);
    succeeded = (ThenCanFail_32 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (SolnContext_22 == (MR_Integer) 1);
    if (succeeded)
      CondSolnContext_34 = (MR_Integer) 1;
    else
      CondSolnContext_34 = (MR_Integer) 0;
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), ThenFailingContexts_31, RightFailingContexts_23);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Cond0_15, Cond_16, InstMap0_21, CondSolnContext_34, Var_57, MaybePromiseEqvSolutionSets_24, &CondDetism_35, &_CondFailingContexts_36, STATE_VARIABLE_DetInfo_53_53, &STATE_VARIABLE_DetInfo_58_58);
    parse_tree__prog_data__determinism_components_3_p_0(CondDetism_35, &CondCanFail_37, &CondMaxSoln_38);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Else0_19, Else_20, InstMap0_21, SolnContext_22, RightFailingContexts_23, MaybePromiseEqvSolutionSets_24, &ElseDetism_39, &ElseFailingContexts_40, STATE_VARIABLE_DetInfo_58_58, STATE_VARIABLE_DetInfo_49);
    parse_tree__prog_data__determinism_components_3_p_0(ElseDetism_39, &ElseCanFail_41, &ElseMaxSoln_42);
    switch (CondCanFail_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (CondMaxSoln_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word CTMaxSoln_45;
              MR_Word MaxSoln_46;
              MR_Word CanFail_47;

              parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(CondMaxSoln_38, ThenMaxSoln_33, &CTMaxSoln_45);
              parse_tree__prog_detism__det_switch_maxsoln_3_p_0(CTMaxSoln_45, ElseMaxSoln_42, &MaxSoln_46);
              parse_tree__prog_detism__det_switch_canfail_3_p_0(ThenCanFail_32, ElseCanFail_41, &CanFail_47);
              parse_tree__prog_data__determinism_components_3_p_1(Detism_25, CanFail_47, MaxSoln_46);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word MaybeNegDetism_43;
              MR_Word NegDetism_44;

              parse_tree__prog_detism__det_negation_det_2_p_0(CondDetism_35, &MaybeNegDetism_43);
              if ((MaybeNegDetism_43 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
                  return;
                }
              else
                NegDetism_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNegDetism_43, (MR_Integer) 0))));
              parse_tree__prog_detism__det_conjunction_detism_3_p_0(NegDetism_44, ElseDetism_39, Detism_25);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__prog_detism__det_conjunction_detism_3_p_0(CondDetism_35, ThenDetism_30, Detism_25);
        break;
    }
    *GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), ThenFailingContexts_31, ElseFailingContexts_40);
  }
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
  MR_Word STATE_VARIABLE_DetInfo_0_85,
  MR_Word * STATE_VARIABLE_DetInfo_86)
{
  {
    MR_bool succeeded;
    MR_Word UnifyCanFail_47;
    MR_Word ExaminesRepresentation_48;
    MR_Word UnifyNumSolns_49;
    MR_Word STATE_VARIABLE_DetInfo_101_101;
    MR_Word Var_103;

    switch (MR_tag((MR_Word) RHS0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *RHS_18 = RHS0_15;
          STATE_VARIABLE_DetInfo_101_101 = STATE_VARIABLE_DetInfo_0_85;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocalVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 2))));
          MR_Word Vars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 3))));
          MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 4))));
          MR_Word LambdaDeclaredDet_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word Goal0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 6))));
          MR_Word LambdaSolnContext_37;
          MR_Word ModuleInfo_38;
          MR_Word InstMap1_39;
          MR_Word Goal_40;
          MR_Word LambdaInferredDet_41;
          MR_Word STATE_VARIABLE_DetInfo_100_100;
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0)));
          MR_Word Var_122;
          MR_Word Var_36;
          MR_Word _LambdaFailingContexts_42;

          parse_tree__prog_data__determinism_components_3_p_0(LambdaDeclaredDet_34, &Var_36, &Var_122);
          succeeded = ((MR_Integer) 2 == Var_122);
          if (succeeded)
            LambdaSolnContext_37 = (MR_Integer) 1;
          else
            LambdaSolnContext_37 = (MR_Integer) 0;
          check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_85, &ModuleInfo_38);
          hlds__instmap__pre_lambda_update_5_p_0(ModuleInfo_38, Vars_32, Modes_33, InstMap0_20, &InstMap1_39);
          check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_35, &Goal_40, InstMap1_39, LambdaSolnContext_37, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &LambdaInferredDet_41, &_LambdaFailingContexts_42, STATE_VARIABLE_DetInfo_0_85, &STATE_VARIABLE_DetInfo_100_100);
          check_hlds__det_report__det_check_lambda_7_p_0(LambdaDeclaredDet_34, LambdaInferredDet_41, Goal_40, GoalInfo_19, InstMap1_39, STATE_VARIABLE_DetInfo_100_100, &STATE_VARIABLE_DetInfo_101_101);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            *RHS_18 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) (packed_word_0);
            MR_hl_field(MR_mktag(2), base, 1) = NULL;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NonLocalVars_31));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Vars_32));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Modes_33));
            MR_hl_field(MR_mktag(2), base, 5) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDet_34));
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (Goal_40));
          }
        }
        break;
    }
    check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(Unify_16, &UnifyCanFail_47);
    check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(Unify_16, &ExaminesRepresentation_48);
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (UnifyContext_17));
    }
    check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(LHS_14, ExaminesRepresentation_48, UnifyCanFail_47, SolnContext_21, RightFailingContexts_22, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_19, Var_103, &UnifyNumSolns_49, STATE_VARIABLE_DetInfo_101_101, STATE_VARIABLE_DetInfo_86);
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
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_16, (MR_Integer) 0))));
                MR_Word FailingGoal_114;
                MR_Word ConsId_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_16, (MR_Integer) 1))));
                MR_Word FailingContext_116;

                {
                  FailingGoal_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), FailingGoal_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), FailingGoal_114, 1) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(3), FailingGoal_114, 2) = ((MR_Box) (ConsId_115));
                }
                {
                  FailingContext_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FailingContext_116, 0) = ((MR_Box) (Context_50));
                  MR_hl_field(MR_mktag(0), FailingContext_116, 1) = ((MR_Box) (FailingGoal_114));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalFailingContexts_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_116));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_16, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unify_16, (MR_Integer) 1))));
                    MR_Word Var2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unify_16, (MR_Integer) 2))));
                    MR_Word FailingGoal_117;
                    MR_Word FailingContext_118;

                    {
                      FailingGoal_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), FailingGoal_117, 0) = ((MR_Box) (Var1_83));
                      MR_hl_field(MR_mktag(2), FailingGoal_117, 1) = ((MR_Box) (Var2_84));
                    }
                    {
                      FailingContext_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FailingContext_118, 0) = ((MR_Box) (Context_50));
                      MR_hl_field(MR_mktag(0), FailingContext_118, 1) = ((MR_Box) (FailingGoal_117));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalFailingContexts_24 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_118));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word FailingGoal_64;
                    MR_Word FailingContext_77;

                    switch (MR_tag((MR_Word) *RHS_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word RHSVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *RHS_18, (MR_Integer) 0))));

                          {
                            FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), FailingGoal_64, 0) = ((MR_Box) (LHS_14));
                            MR_hl_field(MR_mktag(2), FailingGoal_64, 1) = ((MR_Box) (RHSVar_63));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ConsId_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *RHS_18, (MR_Integer) 0))));

                          {
                            FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), FailingGoal_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), FailingGoal_64, 1) = ((MR_Box) (LHS_14));
                            MR_hl_field(MR_mktag(3), FailingGoal_64, 2) = ((MR_Box) (ConsId_65));
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
                      FailingContext_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FailingContext_77, 0) = ((MR_Box) (Context_50));
                      MR_hl_field(MR_mktag(0), FailingContext_77, 1) = ((MR_Box) (FailingGoal_64));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalFailingContexts_24 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_77));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word Case0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_31;
    MR_Word Cases_32;
    MR_Word MainConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 0))));
    MR_Word OtherConsIds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 1))));
    MR_Word Goal0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 2))));
    MR_Word ModuleInfo0_46;
    MR_Word VarTypes_47;
    MR_Word VarType_48;
    MR_Word InstMap1_49;
    MR_Word ModuleInfo_50;
    MR_Word Goal_52;
    MR_Word FirstDetism_53;
    MR_Word GoalFailingContexts_54;
    MR_Word FirstCanFail_55;
    MR_Word FirstMaxSolns_56;
    MR_Word STATE_VARIABLE_DetInfo_63_63;
    MR_Word STATE_VARIABLE_DetInfo_72_72;
    MR_Word STATE_VARIABLE_CanFail_73_73;
    MR_Word STATE_VARIABLE_MaxSolns_74_74;
    MR_Word STATE_VARIABLE_SwitchFailingContexts_75_75;

    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_13, &ModuleInfo0_46);
    check_hlds__det_util__det_info_get_vartypes_2_p_0(STATE_VARIABLE_DetInfo_0_13, &VarTypes_47);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_47, HeadVar__3_3, &VarType_48);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__3_3, VarType_48, MainConsId_43, OtherConsIds_44, HeadVar__4_4, &InstMap1_49, ModuleInfo0_46, &ModuleInfo_50);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_50, STATE_VARIABLE_DetInfo_0_13, &STATE_VARIABLE_DetInfo_63_63);
    check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_45, &Goal_52, InstMap1_49, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, &FirstDetism_53, &GoalFailingContexts_54, STATE_VARIABLE_DetInfo_63_63, &STATE_VARIABLE_DetInfo_72_72);
    {
      Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_31, 0) = ((MR_Box) (MainConsId_43));
      MR_hl_field(MR_mktag(0), Case_31, 1) = ((MR_Box) (OtherConsIds_44));
      MR_hl_field(MR_mktag(0), Case_31, 2) = ((MR_Box) (Goal_52));
    }
    parse_tree__prog_data__determinism_components_3_p_0(FirstDetism_53, &FirstCanFail_55, &FirstMaxSolns_56);
    parse_tree__prog_detism__det_switch_canfail_3_p_0(HeadVar__8_8, FirstCanFail_55, &STATE_VARIABLE_CanFail_73_73);
    parse_tree__prog_detism__det_switch_maxsoln_3_p_0(HeadVar__9_9, FirstMaxSolns_56, &STATE_VARIABLE_MaxSolns_74_74);
    check_hlds__det_analysis__det_infer_switch_cases_14_p_0(Cases0_30, &Cases_32, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_CanFail_73_73, STATE_VARIABLE_MaxSolns_74_74, Detism_10, STATE_VARIABLE_SwitchFailingContexts_0_11, &STATE_VARIABLE_SwitchFailingContexts_75_75, STATE_VARIABLE_DetInfo_72_72, STATE_VARIABLE_DetInfo_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_32));
    }
    *STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_54, STATE_VARIABLE_SwitchFailingContexts_75_75);
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
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_14));
          }
          {
            FailingContext_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FailingContext_36, 0) = ((MR_Box) (SwitchContext_35));
            MR_hl_field(MR_mktag(0), FailingContext_36, 1) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalFailingContexts0_27));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_24 = GoalFailingContexts0_27;
        break;
    }
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
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      GoalInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_30));
      }
      *STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_41, STATE_VARIABLE_DisjFailingContexts_58_58);
    }
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
        MR_hl_field(MR_mktag(0), FailingContext_24, 0) = ((MR_Box) (Context_23));
        MR_hl_field(MR_mktag(0), FailingContext_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalFailingContexts_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalFailingContexts0_22));
      }
    }
    else
      *GoalFailingContexts_20 = GoalFailingContexts0_22;
  }
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
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_25));
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
      MR_Word Pieces_28;
      MR_Word GoalMsgs_29;
      MR_Word SortedGoalMsgs_30;
      MR_Word Spec_31;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_DetInfo_46_46;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
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
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (First_26));
      }
      {
        Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[112])));
      }
      check_hlds__det_report__det_diagnose_conj_7_p_0(*Goals_13, InstMap0_15, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_35_35, &STATE_VARIABLE_DetInfo_46_46, &GoalMsgs_29);
      parse_tree__error_util__sort_error_msgs_2_p_0(GoalMsgs_29, &SortedGoalMsgs_30);
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces_28));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Context_24));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_50, SortedGoalMsgs_30);
      {
        Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_49));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_31, STATE_VARIABLE_DetInfo_46_46, STATE_VARIABLE_DetInfo_33);
    }
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
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_25));
      }
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(HeadDetism_38, TailDetism_34, HeadVar__7_7);
      *STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), GoalFailingContexts_39, STATE_VARIABLE_ConjFailingContexts_44_44);
    }
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
        MR_Word Goal0_54 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word Goal_55;

        check_hlds__det_analysis__det_infer_not_9_p_0(Goal0_54, &Goal_55, GoalInfo_14, InstMap0_15, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        *GoalExpr_13 = (MR_Word) ((MR_Word) (Goal_55));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0))));
        MR_Word RHS0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 1))));
        MR_Word Mode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Unify_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3))));
        MR_Word RHS_46;
        MR_Word UnifyContext_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 4))));

        check_hlds__det_analysis__det_infer_unify_13_p_0(LHS_42, RHS0_43, Unify_45, UnifyContext_110, &RHS_46, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_46));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_44));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unify_45));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_110));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
        MR_Integer ProcId0_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))));
        MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
        MR_Word Builtin_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 4))));
        MR_Word Name_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 5))));
        MR_Integer ProcId_36;

        check_hlds__det_analysis__det_infer_call_11_p_0(PredId_30, ProcId0_31, &ProcId_36, Args_32, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_13 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_30));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_36));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Args_32));
          MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_33));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (UnifyContext_34));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Name_35));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CallDetism_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 5))) & (MR_Integer) 7);

            check_hlds__det_analysis__det_infer_generic_call_9_p_0(GenericCall_37, CallDetism_41, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_13 = GoalExpr0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word PredId_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Integer ProcId_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));

            check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(Attributes_57, PredId_113, ProcId_114, GoalInfo_14, SolnContext_16, RightFailingContexts_17, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            *GoalExpr_13 = GoalExpr0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
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
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_22));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_24));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_109;

            check_hlds__det_analysis__det_infer_disj_11_p_0(Goals0_108, &Goals_109, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_109));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SwitchCanFail_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_29;
            MR_Word STATE_VARIABLE_DetInfo_92_92;

            switch (SwitchCanFail_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(STATE_VARIABLE_DetInfo_0_78, &STATE_VARIABLE_DetInfo_92_92);
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_DetInfo_92_92 = STATE_VARIABLE_DetInfo_0_78;
                break;
            }
            check_hlds__det_analysis__det_infer_switch_13_p_0(Var_25, SwitchCanFail_26, Cases0_27, &Cases_29, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_92_92, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_26));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_29));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goal0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goal_112;

            check_hlds__det_analysis__det_infer_scope_12_p_0(Reason_56, Goal0_111, &Goal_112, GoalInfo_14, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_56));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goal_112));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_51;
            MR_Word Then_52;
            MR_Word Else_53;

            check_hlds__det_analysis__det_infer_if_then_else_14_p_0(Cond0_48, &Cond_51, Then0_49, &Then_52, Else0_50, &Else_53, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_47));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_51));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_52));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_53));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
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
                  MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 1))));
                  MR_Word Outer_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 2))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;
                  MR_Word Vars_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_62, (MR_Integer) 3))));

                  check_hlds__det_analysis__det_infer_atomic_11_p_0(MainGoal0_66, &MainGoal_69, OrElseGoals0_67, &OrElseGoals_70, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, Detism_19, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 1) = ((MR_Box) (Inner_64));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 2) = ((MR_Box) (Outer_65));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 3) = ((MR_Box) (Vars_115));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(MR_mktag(1), ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_62, (MR_Integer) 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_62, (MR_Integer) 1))));
                  MR_Word TryGoal0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_62, (MR_Integer) 2))));
                  MR_Word TryGoal_75;

                  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(TryGoal0_74, &TryGoal_75, InstMap0_15, SolnContext_16, RightFailingContexts_17, MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, Detism_19, GoalFailingContexts_20, STATE_VARIABLE_DetInfo_0_78, STATE_VARIABLE_DetInfo_79);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(MR_mktag(2), ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(MR_mktag(2), ShortHand_71, 2) = ((MR_Box) (TryGoal_75));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_71));
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 0))));
    MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1))));
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
    succeeded = ((((MR_tag((MR_Word) GoalExpr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      ScopeReason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_22, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 2))
      {
        MR_Word PromiseEqvSolnsKind_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ScopeReason_25, (MR_Integer) 1))) & (MR_Integer) 3);

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
      if (((((MR_tag((MR_Word) ScopeReason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 4))))
      {
        MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ScopeReason_25, (MR_Integer) 1))) & (MR_Integer) 1);

        succeeded = (Var_56 == (MR_Integer) 0);
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
    succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 2))));
      CondInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1))));
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
        succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 1))) & (MR_Integer) 1);
          ConjGoals_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 2))));
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
      succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) GoalExpr1_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
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
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (GoalExpr1_30));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (InnerInfo_50));
      }
      {
        GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), GoalExpr_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[110])));
        MR_hl_field(MR_mktag(3), GoalExpr_51, 2) = ((MR_Box) (Var_63));
      }
    }
    else
      GoalExpr_51 = GoalExpr1_30;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_36));
    }
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
      MR_Word Var_48;
      MR_Word Var_53;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Spec_140;
      MR_Word Context_141;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_24, &Context_141);
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ProcId_14));
      }
      ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Integer) 1, Var_48);
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcPieces_42, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[24])));
      Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[109])), Var_53);
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Pieces_43));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Context_141));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_140 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_140, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_140, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_140, 2) = ((MR_Box) (Var_71));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_140, STATE_VARIABLE_DetInfo_0_44, STATE_VARIABLE_DetInfo_45);
      *Detism_19 = (MR_Integer) 6;
      *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Detism0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_25, (MR_Integer) 0))));
      MR_Word CanFail_27;
      MR_Word NumSolns0_28;
      MR_Word NumSolns_39;
      MR_Word STATE_VARIABLE_DetInfo_109_109;
      MR_Word Var_78;

      parse_tree__prog_data__determinism_components_3_p_0(Detism0_26, &CanFail_27, &NumSolns0_28);
      Var_78 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_12);
      succeeded = (Var_78 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Detism0_26 == (MR_Integer) 6);
      if (succeeded)
      {
        MR_Word ProcContext_29;
        MR_Word WillNotThrowProcPieces_30;
        MR_Word WillNotThrowPieces_31;
        MR_Word WillNotThrowSpec_32;
        MR_Word Var_81;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_24, &ProcContext_29);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (PredId_13));
          MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ProcId_14));
        }
        WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_22, (MR_Integer) 0, (MR_Integer) 1, Var_81);
        WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), WillNotThrowProcPieces_30, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[36])));
        {
          Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (WillNotThrowPieces_31));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ProcContext_29));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WillNotThrowSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), WillNotThrowSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), WillNotThrowSpec_32, 2) = ((MR_Box) (Var_103));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(WillNotThrowSpec_32, STATE_VARIABLE_DetInfo_0_44, &STATE_VARIABLE_DetInfo_109_109);
      }
      else
        STATE_VARIABLE_DetInfo_109_109 = STATE_VARIABLE_DetInfo_0_44;
      succeeded = (NumSolns0_28 == (MR_Integer) 2);
      if (succeeded)
        succeeded = (SolnContext_17 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word GoalContext_33;
        MR_Word VarSet_34;
        MR_Word WrongContextPredPieces_35;
        MR_Word WrongContextFirstPieces_36;
        MR_Word ContextMsgs_37;
        MR_Word Spec_38;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_String Var_121;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;

        GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_24, &VarSet_34);
        WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_22, (MR_Integer) 0, PredId_13);
        Var_121 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism0_26);
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Var_121));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[105])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
        }
        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), WrongContextPredPieces_35, Var_116);
        WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[104])), Var_115);
        ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_22, VarSet_34, RightFailingContexts_18);
        {
          Var_134 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (WrongContextFirstPieces_36));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (GoalContext_33));
          MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_131, ContextMsgs_37);
        {
          Spec_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_38, 2) = ((MR_Box) (Var_130));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_38, STATE_VARIABLE_DetInfo_109_109, STATE_VARIABLE_DetInfo_45);
        NumSolns_39 = (MR_Integer) 3;
      }
      else
      {
        NumSolns_39 = NumSolns0_28;
        *STATE_VARIABLE_DetInfo_45 = STATE_VARIABLE_DetInfo_109_109;
      }
      parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_27, NumSolns_39);
      switch (CanFail_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_40;
            MR_Word FailingContext_41;
            MR_Word Var_138;

            Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (PredId_13));
              MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (ProcId_14));
            }
            {
              FailingContext_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FailingContext_41, 0) = ((MR_Box) (Context_40));
              MR_hl_field(MR_mktag(0), FailingContext_41, 1) = ((MR_Box) (Var_138));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalFailingContexts_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
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
      *HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
  MR_Word STATE_VARIABLE_DetInfo_0_28,
  MR_Word * STATE_VARIABLE_DetInfo_29)
{
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
      MR_Word ProcInfo_21;
      MR_Word VarSet_22;
      MR_Word FirstPieces_23;
      MR_Word ModuleInfo_24;
      MR_Word ContextMsgs_25;
      MR_Word Spec_26;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_String Var_37;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;

      check_hlds__det_util__det_get_proc_info_2_p_0(STATE_VARIABLE_DetInfo_0_28, &ProcInfo_21);
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_21, &VarSet_22);
      Var_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(CallDetism_11);
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[107])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        FirstPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[106])));
        MR_hl_field(MR_mktag(1), FirstPieces_23, 1) = ((MR_Box) (Var_32));
      }
      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_28, &ModuleInfo_24);
      ContextMsgs_25 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_24, VarSet_22, RightFailingContexts_14);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (FirstPieces_23));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_47, ContextMsgs_25);
      {
        Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_46));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_26, STATE_VARIABLE_DetInfo_0_28, STATE_VARIABLE_DetInfo_29);
      parse_tree__prog_data__determinism_components_3_p_1(Detism_15, CanFail_18, (MR_Integer) 3);
    }
    else
    {
      *Detism_15 = CallDetism_11;
      *STATE_VARIABLE_DetInfo_29 = STATE_VARIABLE_DetInfo_0_28;
    }
    switch (CanFail_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FailingContext_27;
          MR_Word Var_55;

          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (GenericCall_10));
          }
          {
            FailingContext_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FailingContext_27, 0) = ((MR_Box) (Context_20));
            MR_hl_field(MR_mktag(0), FailingContext_27, 1) = ((MR_Box) (Var_55));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_16 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId0_13,
  MR_Integer * ProcId_14,
  MR_Word Args_15,
  MR_Word GoalInfo_16,
  MR_Word SolnContext_17,
  MR_Word RightFailingContexts_18,
  MR_Word * Detism_19,
  MR_Word * GoalFailingContexts_20,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40)
{
  {
    MR_bool succeeded;
    MR_Word CalleePredInfo_22;
    MR_Word Detism0_23;
    MR_Word ModuleInfo_24;
    MR_Word CalleeModuleName_25;
    MR_String CalleeName_26;
    MR_Word CanFail_27;
    MR_Word NumSolns_28;
    MR_Word STATE_VARIABLE_DetInfo_41_41;

    check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(STATE_VARIABLE_DetInfo_0_39, PredId_12, ProcId0_13, &CalleePredInfo_22, &Detism0_23);
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_39, &ModuleInfo_24);
    CalleeModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_22);
    CalleeName_26 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_22);
    succeeded = check_hlds__simplify__format_call__is_format_call_3_p_0(CalleeModuleName_25, CalleeName_26, Args_15);
    if (succeeded)
      check_hlds__det_util__det_info_set_has_format_call_2_p_0(STATE_VARIABLE_DetInfo_0_39, &STATE_VARIABLE_DetInfo_41_41);
    else
      STATE_VARIABLE_DetInfo_41_41 = STATE_VARIABLE_DetInfo_0_39;
    parse_tree__prog_data__determinism_components_3_p_0(Detism0_23, &CanFail_27, &NumSolns_28);
    succeeded = (NumSolns_28 == (MR_Integer) 2);
    if (succeeded)
      succeeded = (SolnContext_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer ProcIdPrime_29;
      MR_Word ModuleInfo_81;
      MR_Word PredTable_82;
      MR_Word PredInfo_83;
      MR_Word ProcTable_84;
      MR_Word ProcList_85;
      MR_Box conv0_PredInfo_83;

      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_41_41, &ModuleInfo_81);
      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_81, &PredTable_82);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_82, ((MR_Box) (PredId_12)), &conv0_PredInfo_83);
      PredInfo_83 = ((MR_Word) (conv0_PredInfo_83));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_83, &ProcTable_84);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_84, &ProcList_85);
      succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(ProcList_85, ModuleInfo_81, PredInfo_83, ProcId0_13, &ProcIdPrime_29);
      if (succeeded)
      {
        *ProcId_14 = ProcIdPrime_29;
        parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_27, (MR_Integer) 3);
        *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_41_41;
      }
      else
      {
        MR_Word GoalContext_30;
        MR_Word ProcInfo_31;
        MR_Word VarSet_32;
        MR_Word PredPieces_33;
        MR_Word FirstPieces_34;
        MR_Word ContextMsgs_35;
        MR_Word Spec_36;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_String Var_54;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;

        GoalContext_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        check_hlds__det_util__det_get_proc_info_2_p_0(STATE_VARIABLE_DetInfo_41_41, &ProcInfo_31);
        hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_31, &VarSet_32);
        PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_24, (MR_Integer) 0, PredId_12);
        Var_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism0_23);
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[105])));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
        }
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_33, Var_49);
        FirstPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[104])), Var_48);
        ContextMsgs_35 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_24, VarSet_32, RightFailingContexts_18);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (FirstPieces_34));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (GoalContext_30));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_64, ContextMsgs_35);
        {
          Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_63));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_36, STATE_VARIABLE_DetInfo_41_41, STATE_VARIABLE_DetInfo_40);
        *ProcId_14 = ProcId0_13;
        parse_tree__prog_data__determinism_components_3_p_1(Detism_19, CanFail_27, (MR_Integer) 3);
      }
    }
    else
    {
      *ProcId_14 = ProcId0_13;
      *Detism_19 = Detism0_23;
      *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_41_41;
    }
    switch (CanFail_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_37;
          MR_Word FailingContext_38;
          MR_Word Var_72;

          Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (PredId_12));
            MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (*ProcId_14));
          }
          {
            FailingContext_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FailingContext_38, 0) = ((MR_Box) (Context_37));
            MR_hl_field(MR_mktag(0), FailingContext_38, 1) = ((MR_Box) (Var_72));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GoalFailingContexts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FailingContext_38));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *GoalFailingContexts_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Integer STATE_VARIABLE_ProcId_0_15,
  MR_Integer * STATE_VARIABLE_ProcId_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer TestProcId_6;
    MR_Word ProcInfo_7;
    MR_Word Rest_8;
    MR_Word Var_17;
    MR_Word Detism_12;
    MR_Word MaxSoln_14;
    MR_Word _CanFail_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Rest_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      TestProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      ProcInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      succeeded = (TestProcId_6 != STATE_VARIABLE_ProcId_0_15);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_7, &Detism_12);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_12, &_CanFail_13, &MaxSoln_14);
        succeeded = (MaxSoln_14 == (MR_Integer) 3);
        if (succeeded)
          succeeded = check_hlds__mode_comparison__modes_are_identical_bar_cc_4_p_0(STATE_VARIABLE_ProcId_0_15, TestProcId_6, PredInfo_10, ModuleInfo_9);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_ProcId_16 = TestProcId_6;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Rest_8;

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
  MR_Word STATE_VARIABLE_DetInfo_0_41,
  MR_Word * STATE_VARIABLE_DetInfo_42)
{
  {
    MR_bool succeeded = (ExaminesRepresentation_13 == (MR_Integer) 1);
    MR_Word ProcInfo_22;
    MR_Word Type_24;
    MR_Word VarTypes_23;

    if (succeeded)
    {
      check_hlds__det_util__det_get_proc_info_2_p_0(STATE_VARIABLE_DetInfo_0_41, &ProcInfo_22);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_22, &VarTypes_23);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, Var_12, &Type_24);
      succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(STATE_VARIABLE_DetInfo_0_41, Type_24);
    }
    if (succeeded)
    {
      switch (CanFail_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_25;
            MR_Word VarSet_26;
            MR_Word Pieces0_28;
            MR_String ErrorMsg_30;
            MR_Word Pieces1_33;
            MR_Word Spec_35;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_181;

            Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
            hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_22, &VarSet_26);
            if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String VarStr_27;
              MR_Word Var_121;
              MR_Word Var_122;

              VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_26, Var_12);
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (VarStr_27));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])));
              }
              {
                Pieces0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces0_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95])));
                MR_hl_field(MR_mktag(1), Pieces0_28, 1) = ((MR_Box) (Var_121));
              }
              ErrorMsg_30 = (MR_String) "error:";
            }
            else
            {
              MR_Word UnifyContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContext_19, (MR_Integer) 0))));

              hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_29, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_28);
              if ((Pieces0_28 == (MR_Word) ((MR_Unsigned) 0U)))
                ErrorMsg_30 = (MR_String) "Error:";
              else
                ErrorMsg_30 = (MR_String) "error:";
            }
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ErrorMsg_30));
            }
            {
              Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (Type_24));
            }
            {
              Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
              MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[98])));
            }
            {
              Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[96])));
              MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
            }
            {
              Pieces1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces1_33, 0) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(1), Pieces1_33, 1) = ((MR_Box) (Var_130));
            }
            Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces0_28, Pieces1_33);
            {
              Var_180 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (Var_181));
            }
            {
              Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
              MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[100])));
            }
            {
              Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Context_25));
              MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
            }
            {
              Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
              MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) (Var_177));
            }
            check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_35, STATE_VARIABLE_DetInfo_0_41, STATE_VARIABLE_DetInfo_42);
          }
          break;
        case (MR_Integer) 1:
          switch (SolnContext_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_39;
                MR_Word ContextMsgs_40;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_103;
                MR_Word Var_106;
                MR_Word Var_107;
                MR_Word Var_108;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Context_192;
                MR_Word VarSet_193;
                MR_Word Pieces0_195;
                MR_String ErrorMsg_197;
                MR_Word Pieces1_198;
                MR_Word Spec_200;

                Context_192 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_22, &VarSet_193);
                if ((GoalContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_47;
                  MR_Word Var_48;
                  MR_String VarStr_188;

                  VarStr_188 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_193, Var_12);
                  {
                    Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (VarStr_188));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])));
                  }
                  {
                    Pieces0_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces0_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95])));
                    MR_hl_field(MR_mktag(1), Pieces0_195, 1) = ((MR_Box) (Var_47));
                  }
                  ErrorMsg_197 = (MR_String) "error:";
                }
                else
                {
                  MR_Word UnifyContext_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContext_19, (MR_Integer) 0))));
                  MR_Word Var_36;

                  hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &Var_36, UnifyContext_189, (MR_Word) ((MR_Unsigned) 0U), &Pieces0_195);
                  if ((Pieces0_195 == (MR_Word) ((MR_Unsigned) 0U)))
                    ErrorMsg_197 = (MR_String) "Error:";
                  else
                    ErrorMsg_197 = (MR_String) "error:";
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (ErrorMsg_197));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                  MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Type_24));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[96])));
                  MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                }
                {
                  Pieces1_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces1_198, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Pieces1_198, 1) = ((MR_Box) (Var_56));
                }
                check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_41, &ModuleInfo_39);
                Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), FailingContextsA_16, FailingContextsB_17);
                ContextMsgs_40 = check_hlds__det_report__failing_contexts_description_3_f_0(ModuleInfo_39, VarSet_193, Var_103);
                Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces0_195, Pieces1_198);
                {
                  Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Var_111));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[102])));
                }
                {
                  Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Context_192));
                  MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
                }
                {
                  Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
                  MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_107, ContextMsgs_40);
                {
                  Spec_200 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_200, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_200, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(0), Spec_200, 2) = ((MR_Box) (Var_106));
                }
                check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_200, STATE_VARIABLE_DetInfo_0_41, STATE_VARIABLE_DetInfo_42);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_DetInfo_42 = STATE_VARIABLE_DetInfo_0_41;
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
      *STATE_VARIABLE_DetInfo_42 = STATE_VARIABLE_DetInfo_0_41;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word DetInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_5;
    MR_Word Var_6;

    check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_3, &ModuleInfo_5);
    succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_4, &Var_6);
    return succeeded;
  }
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
      ConjGoal_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      ConjGoals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ConjGoalInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjGoal_2, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_analysis____Compare____pess_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_analysis____Compare____soln_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
