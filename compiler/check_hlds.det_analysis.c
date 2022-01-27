/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version DEV
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


/* :- module check_hlds.det_analysis. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63;
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71;
};

struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s {
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9;
  MR_Integer check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10;
  MR_Word * check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13;
  MR_bool check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_164_164;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_54;
  jmp_buf check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_126_126;
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_165_165;
  MR_Box check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_165_165;
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

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word check_hlds__det_analysis__Attributes_12,
  MR_Word check_hlds__det_analysis__PredId_13,
  MR_Integer check_hlds__det_analysis__ProcId_14,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1738__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_369);

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1697__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_363);

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1642__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_354);

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1523__1_2_p_0(
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
  MR_Word check_hlds__det_analysis__HeadVar__2_52);

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2);

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9);

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word check_hlds__det_analysis__DetInfo_3,
  MR_Word check_hlds__det_analysis__Type_4);

static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
  MR_Word check_hlds__det_analysis__Var_12,
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
  MR_Word check_hlds__det_analysis__CanFail_14,
  MR_Word check_hlds__det_analysis__SolnContext_15,
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
  MR_Word check_hlds__det_analysis__GoalInfo_18,
  MR_Word check_hlds__det_analysis__GoalContext_19,
  MR_Word * check_hlds__det_analysis__NumSolns_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
  MR_Word check_hlds__det_analysis__PredInfo_10,
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
  MR_Word check_hlds__det_analysis__Reason_13,
  MR_Word check_hlds__det_analysis__Goal0_14,
  MR_Word * check_hlds__det_analysis__Goal_15,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__InstMap0_17,
  MR_Word check_hlds__det_analysis__SolnContext_18,
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
  MR_Word * check_hlds__det_analysis__Detism_21,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);

static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
  MR_Word check_hlds__det_analysis__Goal0_10,
  MR_Word * check_hlds__det_analysis__Goal_11,
  MR_Word check_hlds__det_analysis__InstMap0_12,
  MR_Word check_hlds__det_analysis__SolnContext_13,
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
  MR_Word * check_hlds__det_analysis__Detism_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
  MR_Word check_hlds__det_analysis__MainGoal0_12,
  MR_Word * check_hlds__det_analysis__MainGoal_13,
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
  MR_Word check_hlds__det_analysis__InstMap0_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
  MR_Word * check_hlds__det_analysis__Detism_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);

static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
  MR_Word check_hlds__det_analysis__Goal0_10,
  MR_Word * check_hlds__det_analysis__Goal_11,
  MR_Word check_hlds__det_analysis__GoalInfo_12,
  MR_Word check_hlds__det_analysis__InstMap0_13,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
  MR_Word * check_hlds__det_analysis__Detism_15,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);

static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
  MR_Word check_hlds__det_analysis__Cond0_15,
  MR_Word * check_hlds__det_analysis__Cond_16,
  MR_Word check_hlds__det_analysis__Then0_17,
  MR_Word * check_hlds__det_analysis__Then_18,
  MR_Word check_hlds__det_analysis__Else0_19,
  MR_Word * check_hlds__det_analysis__Else_20,
  MR_Word check_hlds__det_analysis__InstMap0_21,
  MR_Word check_hlds__det_analysis__SolnContext_22,
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
  MR_Word * check_hlds__det_analysis__Detism_25,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
  MR_Word check_hlds__det_analysis__LHS_14,
  MR_Word check_hlds__det_analysis__RHS0_15,
  MR_Word check_hlds__det_analysis__Unify_16,
  MR_Word check_hlds__det_analysis__UnifyContext_17,
  MR_Word * check_hlds__det_analysis__RHS_18,
  MR_Word check_hlds__det_analysis__GoalInfo_19,
  MR_Word check_hlds__det_analysis__InstMap0_20,
  MR_Word check_hlds__det_analysis__SolnContext_21,
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
  MR_Word * check_hlds__det_analysis__Detism_23,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);

static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
  MR_Word check_hlds__det_analysis__GenericCall_10,
  MR_Word check_hlds__det_analysis__CallDetism_11,
  MR_Word check_hlds__det_analysis__GoalInfo_12,
  MR_Word check_hlds__det_analysis__SolnContext_13,
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
  MR_Word * check_hlds__det_analysis__Detism_15,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word check_hlds__det_analysis__PredId_12,
  MR_Integer check_hlds__det_analysis__ProcId0_13,
  MR_Integer * check_hlds__det_analysis__ProcId_14,
  MR_Word check_hlds__det_analysis__Args_15,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
  MR_Word * check_hlds__det_analysis__Detism_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
  MR_Word check_hlds__det_analysis__Var_14,
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
  MR_Word check_hlds__det_analysis__Cases0_16,
  MR_Word * check_hlds__det_analysis__Cases_17,
  MR_Word check_hlds__det_analysis__GoalInfo_18,
  MR_Word check_hlds__det_analysis__InstMap0_19,
  MR_Word check_hlds__det_analysis__SolnContext_20,
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
  MR_Word * check_hlds__det_analysis__Detism_23,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
  MR_Word * check_hlds__det_analysis__Detism_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
  MR_Word check_hlds__det_analysis__Goals0_12,
  MR_Word * check_hlds__det_analysis__Goals_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
  MR_Word check_hlds__det_analysis__Goals0_12,
  MR_Word * check_hlds__det_analysis__Goals_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);

static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);

static MR_bool MR_CALL 
check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1);

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
  MR_Word check_hlds__det_analysis__Goal0_12,
  MR_Word * check_hlds__det_analysis__Goal_13,
  MR_Word check_hlds__det_analysis__InstMap0_14,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_52,
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
  MR_Word check_hlds__det_analysis__AddPruning_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_53,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_54);

static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__PredId_7,
  MR_Integer check_hlds__det_analysis__ProcId_8,
  MR_Word * check_hlds__det_analysis__Context_9);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
  void * check_hlds__det_analysis__env_ptr_arg);

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word check_hlds__det_analysis__PredId_9,
  MR_Integer check_hlds__det_analysis__ProcId_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_72,
  MR_Word * check_hlds__det_analysis__OldDetism_12,
  MR_Word * check_hlds__det_analysis__NewDetism_13,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_73,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_74);

static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__Debug_2,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
  MR_Word check_hlds__det_analysis__ProcList_7,
  MR_Word check_hlds__det_analysis__Debug_8,
  MR_Word * check_hlds__det_analysis__Specs_9);

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box * check_hlds__det_analysis__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[137][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[3][6];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[1][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[1][5];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_7[3][1];


/* sealed */ struct check_hlds__det_analysis__vector_common_type_5_0_s {
  const MR_Word check_hlds__det_analysis__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct check_hlds__det_analysis__vector_common_type_5_0_s check_hlds__det_analysis_vector_common_5[4];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with I/O state arguments."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: invalid determinism for a predicate"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "det, cc_multi and erroneous."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Valid determinisms are "))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs in a context which requires all solutions."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a procedure without a determinism declaration."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- pragma foreign_proc(...)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "will_not_throw_exception"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has determinism erroneous but also has"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope is nested inside another."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope is not nested inside a"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[49])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "you must do it explicitly.)"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "implicitly. (If that\'s really what you want,"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "representations, but I\'m not going to do that"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "backtracking over all possible"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a solution to this unification would require"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "representation. Figuring out whether there is"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "might depend on the choice of concrete"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of this type. The success of this unification"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "representation for each abstract value"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "there is more than one possible concrete"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "equality predicate, I must presume that"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "solutions to this unification would require"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[13])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a procedure that has a determinism of"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The current implementation supports only single-solution non-failing parallel conjunctions."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row 112 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_7[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_7[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_7[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope and the"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "scope it is nested inside overlap on"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "goal lists"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not guaranteed to succeed."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[83])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[94])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[0])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_7[3][1] = {
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


static /* final */ const struct check_hlds__det_analysis__vector_common_type_5_0_s check_hlds__det_analysis_vector_common_5[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0 = {
  (MR_String) "pess_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_analysis____Unify____pess_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____pess_info_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "pess_info",
  {     check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0 },
  {     check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0
};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_analysis____Unify____soln_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____soln_context_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "soln_context",
  {     check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0 },
  {     check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0
};

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    {
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

    {
      check_hlds__det_analysis____Compare____pess_info_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    {
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

    {
      check_hlds__det_analysis____Compare____soln_context_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word check_hlds__det_analysis__Attributes_12,
  MR_Word check_hlds__det_analysis__PredId_13,
  MR_Integer check_hlds__det_analysis__ProcId_14,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__ModuleInfo_22;
    MR_Word check_hlds__det_analysis__ProcInfo_24;
    MR_Word check_hlds__det_analysis__MaybeDetism_25;
    MR_Word check_hlds__det_analysis__V_23_23;

    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__ModuleInfo_22);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__PredId_13, check_hlds__det_analysis__ProcId_14, &check_hlds__det_analysis__V_23_23, &check_hlds__det_analysis__ProcInfo_24);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__MaybeDetism_25);
    }
    if ((check_hlds__det_analysis__MaybeDetism_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__det_analysis__TypeCtorInfo_143_143;
        MR_Word check_hlds__det_analysis__ProcPieces_42;
        MR_Word check_hlds__det_analysis__Pieces_43;
        MR_Word check_hlds__det_analysis__V_47_47;
        MR_Word check_hlds__det_analysis__V_52_52;
        MR_Word check_hlds__det_analysis__V_70_70;
        MR_Word check_hlds__det_analysis__V_71_71;
        MR_Word check_hlds__det_analysis__V_72_72;
        MR_Word check_hlds__det_analysis__V_73_73;
        MR_Word check_hlds__det_analysis__Spec_138;
        MR_Word check_hlds__det_analysis__Context_139;

        {
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__Context_139);
        }
        {
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
        }
        {
          check_hlds__det_analysis__ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_47_47);
        }
        check_hlds__det_analysis__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          check_hlds__det_analysis__V_52_52 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, check_hlds__det_analysis__ProcPieces_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[24]));
        }
        {
          check_hlds__det_analysis__Pieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[96]), check_hlds__det_analysis__V_52_52);
        }
        {
          check_hlds__det_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_73_73, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_43));
        }
        {
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (check_hlds__det_analysis__V_73_73));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 0) = ((MR_Box) (check_hlds__det_analysis__Context_139));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
        }
        {
          check_hlds__det_analysis__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 0) = ((MR_Box) (check_hlds__det_analysis__V_71_71));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__Spec_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 2) = ((MR_Box) (check_hlds__det_analysis__V_70_70));
        }
        {
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_138, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
        }
        *check_hlds__det_analysis__Detism_19 = (MR_Integer) 6;
        *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word check_hlds__det_analysis__Detism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_25, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__CanFail_27;
        MR_Word check_hlds__det_analysis__NumSolns0_28;
        MR_Word check_hlds__det_analysis__NumSolns_39;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
        MR_Word check_hlds__det_analysis__V_77_77;

        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_26, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns0_28);
        }
        {
          check_hlds__det_analysis__V_77_77 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(check_hlds__det_analysis__Attributes_12);
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_77_77 == (MR_Integer) 0);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Detism0_26 == (MR_Integer) 6);
        if (check_hlds__det_analysis__succeeded)
          {
            MR_Word check_hlds__det_analysis__ProcContext_29;
            MR_Word check_hlds__det_analysis__WillNotThrowProcPieces_30;
            MR_Word check_hlds__det_analysis__WillNotThrowPieces_31;
            MR_Word check_hlds__det_analysis__WillNotThrowSpec_32;
            MR_Word check_hlds__det_analysis__V_79_79;
            MR_Word check_hlds__det_analysis__V_101_101;
            MR_Word check_hlds__det_analysis__V_102_102;
            MR_Word check_hlds__det_analysis__V_103_103;
            MR_Word check_hlds__det_analysis__V_104_104;

            {
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__ProcContext_29);
            }
            {
              check_hlds__det_analysis__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
            }
            {
              check_hlds__det_analysis__WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_79_79);
            }
            {
              check_hlds__det_analysis__WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__WillNotThrowProcPieces_30, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[36]));
            }
            {
              check_hlds__det_analysis__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_104_104, 0) = ((MR_Box) (check_hlds__det_analysis__WillNotThrowPieces_31));
            }
            {
              check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__V_104_104));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_29));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 1) = ((MR_Box) (check_hlds__det_analysis__V_103_103));
            }
            {
              check_hlds__det_analysis__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 0) = ((MR_Box) (check_hlds__det_analysis__V_102_102));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 2) = ((MR_Box) (check_hlds__det_analysis__V_101_101));
            }
            {
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__WillNotThrowSpec_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107);
            }
          }
        else
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44;
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns0_28 == (MR_Integer) 2);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
        if (check_hlds__det_analysis__succeeded)
          {
            MR_Word check_hlds__det_analysis__TypeCtorInfo_141_141;
            MR_Word check_hlds__det_analysis__GoalContext_33;
            MR_Word check_hlds__det_analysis__VarSet_34;
            MR_Word check_hlds__det_analysis__WrongContextPredPieces_35;
            MR_Word check_hlds__det_analysis__WrongContextFirstPieces_36;
            MR_Word check_hlds__det_analysis__ContextMsgs_37;
            MR_Word check_hlds__det_analysis__Spec_38;
            MR_Word check_hlds__det_analysis__V_113_113;
            MR_Word check_hlds__det_analysis__V_114_114;
            MR_Word check_hlds__det_analysis__V_117_117;
            MR_Word check_hlds__det_analysis__V_118_118;
            MR_String check_hlds__det_analysis__V_119_119;
            MR_Word check_hlds__det_analysis__V_128_128;
            MR_Word check_hlds__det_analysis__V_129_129;
            MR_Word check_hlds__det_analysis__V_130_130;
            MR_Word check_hlds__det_analysis__V_131_131;
            MR_Word check_hlds__det_analysis__V_132_132;

            {
              check_hlds__det_analysis__GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
            {
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__VarSet_34);
            }
            {
              check_hlds__det_analysis__WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 0, check_hlds__det_analysis__PredId_13);
            }
            check_hlds__det_analysis__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              check_hlds__det_analysis__V_119_119 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_26);
            }
            {
              check_hlds__det_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_118_118, 1) = ((MR_Box) (check_hlds__det_analysis__V_119_119));
            }
            {
              check_hlds__det_analysis__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 0) = ((MR_Box) (check_hlds__det_analysis__V_118_118));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
            }
            {
              check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[108])));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (check_hlds__det_analysis__V_117_117));
            }
            {
              check_hlds__det_analysis__V_113_113 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, check_hlds__det_analysis__WrongContextPredPieces_35, check_hlds__det_analysis__V_114_114);
            }
            {
              check_hlds__det_analysis__WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[107]), check_hlds__det_analysis__V_113_113);
            }
            {
              check_hlds__det_analysis__ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__VarSet_34, check_hlds__det_analysis__RightFailingContexts_18);
            }
            {
              check_hlds__det_analysis__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_132_132, 0) = ((MR_Box) (check_hlds__det_analysis__WrongContextFirstPieces_36));
            }
            {
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (check_hlds__det_analysis__V_132_132));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_33));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
            }
            {
              check_hlds__det_analysis__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__V_128_128 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_129_129, check_hlds__det_analysis__ContextMsgs_37);
            }
            {
              check_hlds__det_analysis__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 2) = ((MR_Box) (check_hlds__det_analysis__V_128_128));
            }
            {
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_38, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
            }
            check_hlds__det_analysis__NumSolns_39 = (MR_Integer) 3;
          }
        else
          {
            check_hlds__det_analysis__NumSolns_39 = check_hlds__det_analysis__NumSolns0_28;
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
          }
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__NumSolns_39);
        }
        switch (check_hlds__det_analysis__CanFail_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_analysis__Context_40;
              MR_Word check_hlds__det_analysis__FailingContext_41;
              MR_Word check_hlds__det_analysis__V_136_136;

              {
                check_hlds__det_analysis__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
              }
              {
                check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 2) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
              }
              {
                check_hlds__det_analysis__FailingContext_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 0) = ((MR_Box) (check_hlds__det_analysis__Context_40));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalFailingContexts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
      }
  }
}

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1738__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_369)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_String check_hlds__det_analysis__HeadVar__3_370;

    {
      check_hlds__det_analysis__HeadVar__3_370 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_27, check_hlds__det_analysis__HeadVar__2_369);
    }
    return check_hlds__det_analysis__HeadVar__3_370;
  }
}

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1697__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_363)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_String check_hlds__det_analysis__HeadVar__3_364;

    {
      check_hlds__det_analysis__HeadVar__3_364 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_27, check_hlds__det_analysis__HeadVar__2_363);
    }
    return check_hlds__det_analysis__HeadVar__3_364;
  }
}

static MR_String MR_CALL 
check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1642__1_2_f_0(
  MR_Word check_hlds__det_analysis__VarSet_27,
  MR_Word check_hlds__det_analysis__HeadVar__2_354)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_String check_hlds__det_analysis__HeadVar__3_355;

    {
      check_hlds__det_analysis__HeadVar__3_355 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_27, check_hlds__det_analysis__HeadVar__2_354);
    }
    return check_hlds__det_analysis__HeadVar__3_355;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1523__1_2_p_0(
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
  MR_Word check_hlds__det_analysis__HeadVar__2_52)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    {
      check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[1], ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18)), ((MR_Box) (check_hlds__det_analysis__HeadVar__2_52)));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__det_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer check_hlds__det_analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 2)));
    MR_String check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word check_hlds__det_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word check_hlds__det_analysis__V_15_15;
    MR_Integer check_hlds__det_analysis__V_16_16;

    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__det_analysis__V_8_8));
    check_hlds__det_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
    check_hlds__det_analysis__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)) = ((MR_Box) (check_hlds__det_analysis__V_11_11));
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (check_hlds__det_analysis__V_12_12));
    {
      check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__V_9_9, check_hlds__det_analysis__V_15_15);
    }
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_10_10 == check_hlds__det_analysis__V_16_16);
    return check_hlds__det_analysis__succeeded;
  }
}

void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0(
  MR_Word * check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Integer check_hlds__det_analysis__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;
    MR_Integer check_hlds__det_analysis__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_analysis__HeadVar__1_1, check_hlds__det_analysis__Cast_HeadVar1_4, check_hlds__det_analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0(
  MR_Word check_hlds__det_analysis__HeadVar__2_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__2_1 == check_hlds__det_analysis__HeadVar__2_2);

    return check_hlds__det_analysis__succeeded;
  }
}

void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0(
  MR_Word * check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Integer check_hlds__det_analysis__CastX_9 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;
    MR_Integer check_hlds__det_analysis__CastY_10 = (MR_Integer) check_hlds__det_analysis__HeadVar__3_3;

    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CastX_9 == check_hlds__det_analysis__CastY_10);
    if (check_hlds__det_analysis__succeeded)
      *check_hlds__det_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], &check_hlds__det_analysis__V_8_8, ((MR_Box) (check_hlds__det_analysis__V_4_4)), ((MR_Box) (check_hlds__det_analysis__V_6_6)));
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_8_8 == (MR_Integer) 0);
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
        if (check_hlds__det_analysis__succeeded)
          *check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__V_8_8;
        else
          {
            mercury__term____Compare____context_0_0(check_hlds__det_analysis__HeadVar__1_1, check_hlds__det_analysis__V_5_5, check_hlds__det_analysis__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Integer check_hlds__det_analysis__CastX_7 = (MR_Integer) check_hlds__det_analysis__HeadVar__1_1;
    MR_Integer check_hlds__det_analysis__CastY_8 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;

    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CastX_7 == check_hlds__det_analysis__CastY_8);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], ((MR_Box) (check_hlds__det_analysis__V_3_3)), ((MR_Box) (check_hlds__det_analysis__V_5_5)));
        }
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_analysis__V_4_4, check_hlds__det_analysis__V_6_6);
          }
      }
    return check_hlds__det_analysis__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__TypeCtorInfo_19_19;
    MR_Word check_hlds__det_analysis__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer check_hlds__det_analysis__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__det_analysis__PredInfo0_7;
    MR_Word check_hlds__det_analysis__Procs0_8;
    MR_Word check_hlds__det_analysis__ProcInfo0_9;
    MR_Word check_hlds__det_analysis__MaybeDet_10;
    MR_Box check_hlds__det_analysis__conv0_ProcInfo0_9;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__PredId_4, &check_hlds__det_analysis__PredInfo0_7);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__Procs0_8);
    }
    check_hlds__det_analysis__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__det_analysis__TypeCtorInfo_19_19, check_hlds__det_analysis__Procs0_8, check_hlds__det_analysis__ProcId_5, &check_hlds__det_analysis__conv0_ProcInfo0_9);
    }
    check_hlds__det_analysis__ProcInfo0_9 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo0_9);
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__MaybeDet_10);
    }
    if ((check_hlds__det_analysis__MaybeDet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15;
    else
      {
        MR_Word check_hlds__det_analysis__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDet_10, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__ProcInfo_12;
        MR_Word check_hlds__det_analysis__Procs_13;
        MR_Word check_hlds__det_analysis__PredInfo_14;

        {
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(check_hlds__det_analysis__Det_11, check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__ProcInfo_12);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__det_analysis__TypeCtorInfo_19_19, check_hlds__det_analysis__ProcId_5, ((MR_Box) (check_hlds__det_analysis__ProcInfo_12)), check_hlds__det_analysis__Procs0_8, &check_hlds__det_analysis__Procs_13);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__det_analysis__Procs_13, check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__PredInfo_14);
        }
        {
          hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__det_analysis__PredId_4, check_hlds__det_analysis__PredInfo_14, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded;

        if ((check_hlds__det_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
          }
        else
          {
            MR_Integer check_hlds__det_analysis__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__det_analysis__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__det_analysis__PredProcId_28;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;

            {
              check_hlds__det_analysis__PredProcId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 0) = ((MR_Box) (check_hlds__det_analysis__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_23));
            }
            {
              check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
            }
            if (!(check_hlds__det_analysis__succeeded))
              {
                {
                  MR_Integer check_hlds__det_analysis__V_49_49;

                  {
                    check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
                  }
                  if (check_hlds__det_analysis__succeeded)
                    {
                      {
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__det_analysis__V_49_49);
                      }
                      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_23 == check_hlds__det_analysis__V_49_49);
                    }
                }
                if (!(check_hlds__det_analysis__succeeded))
                  {
                    MR_Word check_hlds__det_analysis__Markers_29;

                    {
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__Markers_29);
                    }
                    {
                      check_hlds__det_analysis__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_analysis__Markers_29, (MR_Integer) 10);
                    }
                  }
              }
            if (check_hlds__det_analysis__succeeded)
              {
                {
                  check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8));
                }
                check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
                check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
              }
            else
              {
                MR_Word check_hlds__det_analysis__ProcTable_30;
                MR_Word check_hlds__det_analysis__ProcInfo_31;
                MR_Word check_hlds__det_analysis__MaybeDetism_32;
                MR_Box check_hlds__det_analysis__conv0_ProcInfo_31;

                {
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__ProcTable_30);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_30, check_hlds__det_analysis__ProcId_23, &check_hlds__det_analysis__conv0_ProcInfo_31);
                }
                check_hlds__det_analysis__ProcInfo_31 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo_31);
                {
                  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__MaybeDetism_32);
                }
                if ((check_hlds__det_analysis__MaybeDetism_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6));
                    }
                    check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
                  }
                else
                  {
                    {
                      check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4));
                    }
                    check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
                  }
                check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_analysis__HeadVar__3__tmp_copy_3 = check_hlds__det_analysis__ProcIds_24;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;

              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8;
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6;
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4;
              check_hlds__det_analysis__HeadVar__3_3 = check_hlds__det_analysis__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded;

        if ((check_hlds__det_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7;
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5;
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3;
          }
        else
          {
            MR_Word check_hlds__det_analysis__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__det_analysis__PredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__det_analysis__PredInfo_25;
            MR_Word check_hlds__det_analysis__ProcIds_26;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;
            MR_Box check_hlds__det_analysis__conv0_PredInfo_25;

            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__HeadVar__1_1, ((MR_Box) (check_hlds__det_analysis__PredId_20)), &check_hlds__det_analysis__conv0_PredInfo_25);
            }
            check_hlds__det_analysis__PredInfo_25 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_25);
            {
              check_hlds__det_analysis__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__det_analysis__PredInfo_25);
            }
            {
              check_hlds__det_analysis__determinism_declarations_procs_9_p_0(check_hlds__det_analysis__PredId_20, check_hlds__det_analysis__PredInfo_25, check_hlds__det_analysis__ProcIds_26, check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3, &check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33, check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34, check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7, &check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_analysis__HeadVar__2__tmp_copy_2 = check_hlds__det_analysis__PredIds_21;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;

              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7;
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5;
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3;
              check_hlds__det_analysis__HeadVar__2_2 = check_hlds__det_analysis__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word check_hlds__det_analysis__V_8_8;

          *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)));
          check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 5)));
        }
        break;
      case (MR_Integer) 2:
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__V_22_22;

              *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
              check_hlds__det_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
  MR_Word check_hlds__det_analysis__DetInfo_3,
  MR_Word check_hlds__det_analysis__Type_4)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__ModuleInfo_5;
    MR_Word check_hlds__det_analysis__V_6_6;

    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_3, &check_hlds__det_analysis__ModuleInfo_5);
    }
    {
      check_hlds__det_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__det_analysis__ModuleInfo_5, check_hlds__det_analysis__Type_4, &check_hlds__det_analysis__V_6_6);
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
  MR_Word check_hlds__det_analysis__Var_12,
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
  MR_Word check_hlds__det_analysis__CanFail_14,
  MR_Word check_hlds__det_analysis__SolnContext_15,
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
  MR_Word check_hlds__det_analysis__GoalInfo_18,
  MR_Word check_hlds__det_analysis__GoalContext_19,
  MR_Word * check_hlds__det_analysis__NumSolns_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42)
{
  {
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ExaminesRepresentation_13 == (MR_Integer) 1);
    MR_Word check_hlds__det_analysis__ProcInfo_22;
    MR_Word check_hlds__det_analysis__Type_24;
    MR_Word check_hlds__det_analysis__VarTypes_23;

    if (check_hlds__det_analysis__succeeded)
      {
        {
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ProcInfo_22);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarTypes_23);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_23, check_hlds__det_analysis__Var_12, &check_hlds__det_analysis__Type_24);
        }
        {
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__Type_24);
        }
      }
    if (check_hlds__det_analysis__succeeded)
      {
        switch (check_hlds__det_analysis__CanFail_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_analysis__Context_25;
              MR_Word check_hlds__det_analysis__VarSet_26;
              MR_Word check_hlds__det_analysis__Pieces0_28;
              MR_String check_hlds__det_analysis__ErrorMsg_30;
              MR_Word check_hlds__det_analysis__Pieces1_33;
              MR_Word check_hlds__det_analysis__Spec_35;
              MR_Word check_hlds__det_analysis__V_129_129;
              MR_Word check_hlds__det_analysis__V_130_130;
              MR_Word check_hlds__det_analysis__V_133_133;
              MR_Word check_hlds__det_analysis__V_134_134;
              MR_Word check_hlds__det_analysis__V_177_177;
              MR_Word check_hlds__det_analysis__V_178_178;
              MR_Word check_hlds__det_analysis__V_179_179;
              MR_Word check_hlds__det_analysis__V_180_180;
              MR_Word check_hlds__det_analysis__V_181_181;

              {
                check_hlds__det_analysis__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
              }
              {
                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_26);
              }
              if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String check_hlds__det_analysis__VarStr_27;
                  MR_Word check_hlds__det_analysis__V_121_121;
                  MR_Word check_hlds__det_analysis__V_122_122;

                  {
                    check_hlds__det_analysis__VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_26, check_hlds__det_analysis__Var_12);
                  }
                  {
                    check_hlds__det_analysis__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_122_122, 1) = ((MR_Box) (check_hlds__det_analysis__VarStr_27));
                  }
                  {
                    check_hlds__det_analysis__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_121_121, 0) = ((MR_Box) (check_hlds__det_analysis__V_122_122));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])));
                  }
                  {
                    check_hlds__det_analysis__Pieces0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[129])));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 1) = ((MR_Box) (check_hlds__det_analysis__V_121_121));
                  }
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
                }
              else
                {
                  MR_Word check_hlds__det_analysis__UnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));

                  {
                    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(check_hlds__det_analysis__UnifyContext_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_28);
                  }
                  if ((check_hlds__det_analysis__Pieces0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "Error:";
                  else
                    check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
                }
              {
                check_hlds__det_analysis__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_129_129, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_30));
              }
              {
                check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
              }
              {
                check_hlds__det_analysis__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 0) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[132])));
              }
              {
                check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[130])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_133_133));
              }
              {
                check_hlds__det_analysis__Pieces1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 0) = ((MR_Box) (check_hlds__det_analysis__V_129_129));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 1) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
              }
              {
                check_hlds__det_analysis__V_181_181 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_28, check_hlds__det_analysis__Pieces1_33);
              }
              {
                check_hlds__det_analysis__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_180_180, 0) = ((MR_Box) (check_hlds__det_analysis__V_181_181));
              }
              {
                check_hlds__det_analysis__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_179_179, 0) = ((MR_Box) (check_hlds__det_analysis__V_180_180));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[134])));
              }
              {
                check_hlds__det_analysis__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_178_178, 0) = ((MR_Box) (check_hlds__det_analysis__Context_25));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_178_178, 1) = ((MR_Box) (check_hlds__det_analysis__V_179_179));
              }
              {
                check_hlds__det_analysis__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_177_177, 0) = ((MR_Box) (check_hlds__det_analysis__V_178_178));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 2) = ((MR_Box) (check_hlds__det_analysis__V_177_177));
              }
              {
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_35, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
              }
            }
            break;
          case (MR_Integer) 1:
            switch (check_hlds__det_analysis__SolnContext_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__det_analysis__ModuleInfo_39;
                  MR_Word check_hlds__det_analysis__ContextMsgs_40;
                  MR_Word check_hlds__det_analysis__V_55_55;
                  MR_Word check_hlds__det_analysis__V_56_56;
                  MR_Word check_hlds__det_analysis__V_59_59;
                  MR_Word check_hlds__det_analysis__V_60_60;
                  MR_Word check_hlds__det_analysis__V_103_103;
                  MR_Word check_hlds__det_analysis__V_106_106;
                  MR_Word check_hlds__det_analysis__V_107_107;
                  MR_Word check_hlds__det_analysis__V_108_108;
                  MR_Word check_hlds__det_analysis__V_109_109;
                  MR_Word check_hlds__det_analysis__V_110_110;
                  MR_Word check_hlds__det_analysis__V_111_111;
                  MR_Word check_hlds__det_analysis__Context_192;
                  MR_Word check_hlds__det_analysis__VarSet_193;
                  MR_Word check_hlds__det_analysis__Pieces0_195;
                  MR_String check_hlds__det_analysis__ErrorMsg_197;
                  MR_Word check_hlds__det_analysis__Pieces1_198;
                  MR_Word check_hlds__det_analysis__Spec_200;

                  {
                    check_hlds__det_analysis__Context_192 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_193);
                  }
                  if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word check_hlds__det_analysis__V_47_47;
                      MR_Word check_hlds__det_analysis__V_48_48;
                      MR_String check_hlds__det_analysis__VarStr_188;

                      {
                        check_hlds__det_analysis__VarStr_188 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_193, check_hlds__det_analysis__Var_12);
                      }
                      {
                        check_hlds__det_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__VarStr_188));
                      }
                      {
                        check_hlds__det_analysis__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])));
                      }
                      {
                        check_hlds__det_analysis__Pieces0_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[129])));
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 1) = ((MR_Box) (check_hlds__det_analysis__V_47_47));
                      }
                      check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
                    }
                  else
                    {
                      MR_Word check_hlds__det_analysis__UnifyContext_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));
                      MR_Word check_hlds__det_analysis__V_36_36;

                      {
                        hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &check_hlds__det_analysis__V_36_36, check_hlds__det_analysis__UnifyContext_189, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_195);
                      }
                      if ((check_hlds__det_analysis__Pieces0_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "Error:";
                      else
                        check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
                    }
                  {
                    check_hlds__det_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_197));
                  }
                  {
                    check_hlds__det_analysis__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_60_60, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
                  }
                  {
                    check_hlds__det_analysis__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_59_59, 0) = ((MR_Box) (check_hlds__det_analysis__V_60_60));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
                  }
                  {
                    check_hlds__det_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[130])));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_56_56, 1) = ((MR_Box) (check_hlds__det_analysis__V_59_59));
                  }
                  {
                    check_hlds__det_analysis__Pieces1_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 0) = ((MR_Box) (check_hlds__det_analysis__V_55_55));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 1) = ((MR_Box) (check_hlds__det_analysis__V_56_56));
                  }
                  {
                    check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ModuleInfo_39);
                  }
                  {
                    check_hlds__det_analysis__V_103_103 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__FailingContextsA_16, check_hlds__det_analysis__FailingContextsB_17);
                  }
                  {
                    check_hlds__det_analysis__ContextMsgs_40 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_39, check_hlds__det_analysis__VarSet_193, check_hlds__det_analysis__V_103_103);
                  }
                  {
                    check_hlds__det_analysis__V_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_195, check_hlds__det_analysis__Pieces1_198);
                  }
                  {
                    check_hlds__det_analysis__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_110_110, 0) = ((MR_Box) (check_hlds__det_analysis__V_111_111));
                  }
                  {
                    check_hlds__det_analysis__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_109_109, 0) = ((MR_Box) (check_hlds__det_analysis__V_110_110));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[136])));
                  }
                  {
                    check_hlds__det_analysis__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_108_108, 0) = ((MR_Box) (check_hlds__det_analysis__Context_192));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_108_108, 1) = ((MR_Box) (check_hlds__det_analysis__V_109_109));
                  }
                  {
                    check_hlds__det_analysis__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_107_107, 0) = ((MR_Box) (check_hlds__det_analysis__V_108_108));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__det_analysis__V_106_106 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_107_107, check_hlds__det_analysis__ContextMsgs_40);
                  }
                  {
                    check_hlds__det_analysis__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 2) = ((MR_Box) (check_hlds__det_analysis__V_106_106));
                  }
                  {
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_200, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
                break;
            }
            break;
        }
        switch (check_hlds__det_analysis__SolnContext_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 2;
            break;
        }
      }
    else
      {
        *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 1;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
  MR_Word check_hlds__det_analysis__PredInfo_10,
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer check_hlds__det_analysis__TestProcId_6;
        MR_Word check_hlds__det_analysis__ProcInfo_7;
        MR_Word check_hlds__det_analysis__Rest_8;
        MR_Word check_hlds__det_analysis__V_17_17;
        MR_Word check_hlds__det_analysis__Detism_12;
        MR_Word check_hlds__det_analysis__MaxSoln_14;
        MR_Word check_hlds__det_analysis___CanFail_13;

        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__det_analysis__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__det_analysis__TestProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 0)));
            check_hlds__det_analysis__ProcInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 1)));
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TestProcId_6 == check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15);
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
            if (check_hlds__det_analysis__succeeded)
              {
                {
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_7, &check_hlds__det_analysis__Detism_12);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism_12, &check_hlds__det_analysis___CanFail_13, &check_hlds__det_analysis__MaxSoln_14);
                }
                check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__MaxSoln_14 == (MR_Integer) 3);
                if (check_hlds__det_analysis__succeeded)
                  {
                    check_hlds__det_analysis__succeeded = check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15, check_hlds__det_analysis__TestProcId_6, check_hlds__det_analysis__PredInfo_10, check_hlds__det_analysis__ModuleInfo_9);
                  }
              }
            if (check_hlds__det_analysis__succeeded)
              {
                *check_hlds__det_analysis__STATE_VARIABLE_ProcId_16 = check_hlds__det_analysis__TestProcId_6;
                check_hlds__det_analysis__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Rest_8;

                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__det_analysis__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
    MR_String check_hlds__det_analysis__conv2_HeadVar__3_370;

    {
      check_hlds__det_analysis__conv2_HeadVar__3_370 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1738__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv2_HeadVar__3_370));
    return check_hlds__det_analysis__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
    MR_String check_hlds__det_analysis__conv1_HeadVar__3_364;

    {
      check_hlds__det_analysis__conv1_HeadVar__3_364 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1697__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv1_HeadVar__3_364));
    return check_hlds__det_analysis__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

    {
      check_hlds__det_analysis__succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

    {
      check_hlds__det_analysis__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
{
  {
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
    MR_String check_hlds__det_analysis__conv0_HeadVar__3_355;

    {
      check_hlds__det_analysis__conv0_HeadVar__3_355 = check_hlds__det_analysis__IntroducedFrom__func__det_infer_scope__1642__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__3_355));
    return check_hlds__det_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    {
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71);
    }
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
      {
        check_hlds__det_analysis__det_infer_scope_12_p_0_5(check_hlds__det_analysis__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
      {
        {
          parse_tree__set_of_var__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71, check_hlds__det_analysis__det_infer_scope_12_p_0_6, check_hlds__det_analysis__env_ptr);
        }
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
  MR_Word check_hlds__det_analysis__Reason_13,
  MR_Word check_hlds__det_analysis__Goal0_14,
  MR_Word * check_hlds__det_analysis__Goal_15,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__InstMap0_17,
  MR_Word check_hlds__det_analysis__SolnContext_18,
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
  MR_Word * check_hlds__det_analysis__Detism_21,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110)
{
  {
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s check_hlds__det_analysis__env;

    switch (MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_analysis__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)));
          MR_Word check_hlds__det_analysis__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));
          MR_Word check_hlds__det_analysis__ProcInfo_26;
          MR_Word check_hlds__det_analysis__VarSet_27;
          MR_Word check_hlds__det_analysis__Context_28;
          MR_Word check_hlds__det_analysis__SolnContextToUse_29;
          MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30;
          MR_Word check_hlds__det_analysis__InstmapDelta_53;
          MR_Word check_hlds__det_analysis__ChangedVars_54;
          MR_Word check_hlds__det_analysis__ModuleInfo_55;
          MR_Word check_hlds__det_analysis__GroundBoundVars_57;
          MR_Word check_hlds__det_analysis__NonLocalVars_58;
          MR_Word check_hlds__det_analysis__BoundVars0_60;
          MR_Word check_hlds__det_analysis__VarTypes_61;
          MR_Word check_hlds__det_analysis__BoundVars_62;
          MR_Word check_hlds__det_analysis__ExtraVars_75;
          MR_Word check_hlds__det_analysis__IgnoreExtraVars_76;
          MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271;
          MR_Word check_hlds__det_analysis__V_276_276;
          MR_Word check_hlds__det_analysis__V_277_277;
          MR_Word check_hlds__det_analysis__V_278_278;
          MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310;
          MR_Word check_hlds__det_analysis__V_311_311;
          MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344;
          MR_Word check_hlds__det_analysis___GroundAtStartVars_56;

          {
            check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__ProcInfo_26);
          }
          {
            hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarSet_27);
          }
          {
            check_hlds__det_analysis__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
          }
          switch (check_hlds__det_analysis__Kind_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__det_analysis__SolnContextToUse_29 = check_hlds__det_analysis__SolnContext_18;
                if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__det_analysis__V_275_275;

                    {
                      check_hlds__det_analysis__V_275_275 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 0) = ((MR_Box) (check_hlds__det_analysis__Vars_24));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 1) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                    }
                    {
                      check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_275_275));
                    }
                    check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
                  }
                else
                  {
                    MR_Word check_hlds__det_analysis__TypeCtorInfo_349_349;
                    MR_Word check_hlds__det_analysis__PESSInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
                    MR_Word check_hlds__det_analysis__OuterVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 0)));
                    MR_Word check_hlds__det_analysis__OuterContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 1)));
                    MR_Word check_hlds__det_analysis__NestedSpec_37;
                    MR_Word check_hlds__det_analysis__AllVars_38;
                    MR_Word check_hlds__det_analysis__V_250_250;
                    MR_Word check_hlds__det_analysis__V_251_251;
                    MR_Word check_hlds__det_analysis__V_260_260;
                    MR_Word check_hlds__det_analysis__V_261_261;
                    MR_Word check_hlds__det_analysis__V_272_272;
                    MR_Word check_hlds__det_analysis__V_273_273;
                    MR_Word check_hlds__det_analysis__V_274_274;

                    {
                      check_hlds__det_analysis__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_251_251, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_251_251, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[114])));
                    }
                    {
                      check_hlds__det_analysis__V_261_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_261_261, 0) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[117])));
                    }
                    {
                      check_hlds__det_analysis__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_260_260, 0) = ((MR_Box) (check_hlds__det_analysis__V_261_261));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_260_260, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__det_analysis__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_250_250, 0) = ((MR_Box) (check_hlds__det_analysis__V_251_251));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_250_250, 1) = ((MR_Box) (check_hlds__det_analysis__V_260_260));
                    }
                    {
                      check_hlds__det_analysis__NestedSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_2[0])));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 2) = ((MR_Box) (check_hlds__det_analysis__V_250_250));
                    }
                    {
                      check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__NestedSpec_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                    }
                    check_hlds__det_analysis__TypeCtorInfo_349_349 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__det_analysis__V_272_272 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], check_hlds__det_analysis__OuterVars_32, check_hlds__det_analysis__Vars_24);
                    }
                    {
                      check_hlds__det_analysis__AllVars_38 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__V_272_272);
                    }
                    {
                      check_hlds__det_analysis__V_274_274 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__AllVars_38);
                    }
                    {
                      check_hlds__det_analysis__V_273_273 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 0) = ((MR_Box) (check_hlds__det_analysis__V_274_274));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 1) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
                    }
                    {
                      check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_273_273));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__det_analysis__ArbitrarySpec_40;
                    MR_Word check_hlds__det_analysis__V_220_220;
                    MR_Word check_hlds__det_analysis__V_221_221;

                    {
                      check_hlds__det_analysis__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_221_221, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_221_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118])));
                    }
                    {
                      check_hlds__det_analysis__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_220_220, 0) = ((MR_Box) (check_hlds__det_analysis__V_221_221));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__det_analysis__ArbitrarySpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 2) = ((MR_Box) (check_hlds__det_analysis__V_220_220));
                    }
                    {
                      check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ArbitrarySpec_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__det_analysis__TypeCtorInfo_351_351;
                    MR_Word check_hlds__det_analysis__OldVars_41;
                    MR_Word check_hlds__det_analysis__PromiseContext_42;
                    MR_Word check_hlds__det_analysis__OverlapVars_43;
                    MR_Word check_hlds__det_analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
                    MR_Word check_hlds__det_analysis__V_144_144;
                    MR_Word check_hlds__det_analysis__V_145_145;

                    check_hlds__det_analysis__OldVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_143_143, (MR_Integer) 0)));
                    check_hlds__det_analysis__PromiseContext_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_143_143, (MR_Integer) 1)));
                    check_hlds__det_analysis__TypeCtorInfo_351_351 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__det_analysis__V_144_144 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OldVars_41);
                    }
                    {
                      check_hlds__det_analysis__V_145_145 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__Vars_24);
                    }
                    {
                      check_hlds__det_analysis__OverlapVars_43 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__V_144_144, check_hlds__det_analysis__V_145_145);
                    }
                    {
                      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OverlapVars_43);
                    }
                    if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
                      check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
                    else
                      {
                        MR_Word check_hlds__det_analysis__TypeCtorInfo_357_357;
                        MR_Word check_hlds__det_analysis__OverlapVarNames_44;
                        MR_String check_hlds__det_analysis__OverlapVarStr_46;
                        MR_Word check_hlds__det_analysis__OverlapPieces_50;
                        MR_Word check_hlds__det_analysis__OverlapSpec_52;
                        MR_Word check_hlds__det_analysis__V_146_146;
                        MR_Word check_hlds__det_analysis__V_147_147;
                        MR_Word check_hlds__det_analysis__V_153_153;
                        MR_Word check_hlds__det_analysis__V_156_156;
                        MR_Word check_hlds__det_analysis__V_159_159;
                        MR_Word check_hlds__det_analysis__V_162_162;
                        MR_Word check_hlds__det_analysis__V_165_165;
                        MR_Word check_hlds__det_analysis__V_168_168;
                        MR_Word check_hlds__det_analysis__V_169_169;
                        MR_Word check_hlds__det_analysis__V_171_171;
                        MR_Word check_hlds__det_analysis__V_172_172;
                        MR_Word check_hlds__det_analysis__V_188_188;
                        MR_Word check_hlds__det_analysis__V_189_189;
                        MR_Word check_hlds__det_analysis__V_190_190;
                        MR_Word check_hlds__det_analysis__V_191_191;
                        MR_Word check_hlds__det_analysis__V_193_193;
                        MR_Word check_hlds__det_analysis__V_194_194;

                        {
                          check_hlds__det_analysis__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[1]));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
                        }
                        {
                          check_hlds__det_analysis__V_147_147 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OverlapVars_43);
                        }
                        {
                          check_hlds__det_analysis__OverlapVarNames_44 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_146_146, check_hlds__det_analysis__V_147_147);
                        }
                        if ((check_hlds__det_analysis__OverlapVarNames_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
                              return;
                            }
                          }
                        else
                          {
                            MR_Word check_hlds__det_analysis__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 1)));
                            MR_String check_hlds__det_analysis__V_374_374 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 0)));

                            if ((check_hlds__det_analysis__V_373_373 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the variable";
                            else
                              check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the following variables:";
                          }
                        check_hlds__det_analysis__TypeCtorInfo_357_357 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          check_hlds__det_analysis__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_169_169, 1) = ((MR_Box) (check_hlds__det_analysis__OverlapVarStr_46));
                        }
                        {
                          check_hlds__det_analysis__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_168_168, 0) = ((MR_Box) (check_hlds__det_analysis__V_169_169));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__det_analysis__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_165_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_165_165, 1) = ((MR_Box) (check_hlds__det_analysis__V_168_168));
                        }
                        {
                          check_hlds__det_analysis__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_162_162, 1) = ((MR_Box) (check_hlds__det_analysis__V_165_165));
                        }
                        {
                          check_hlds__det_analysis__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_159_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[121])));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_159_159, 1) = ((MR_Box) (check_hlds__det_analysis__V_162_162));
                        }
                        {
                          check_hlds__det_analysis__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_156_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[120])));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_156_156, 1) = ((MR_Box) (check_hlds__det_analysis__V_159_159));
                        }
                        {
                          check_hlds__det_analysis__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_153_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_153_153, 1) = ((MR_Box) (check_hlds__det_analysis__V_156_156));
                        }
                        {
                          check_hlds__det_analysis__V_172_172 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__OverlapVarNames_44);
                        }
                        {
                          check_hlds__det_analysis__V_171_171 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_357_357, check_hlds__det_analysis__V_172_172, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[125]));
                        }
                        {
                          check_hlds__det_analysis__OverlapPieces_50 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_357_357, check_hlds__det_analysis__V_153_153, check_hlds__det_analysis__V_171_171);
                        }
                        {
                          check_hlds__det_analysis__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_191_191, 0) = ((MR_Box) (check_hlds__det_analysis__OverlapPieces_50));
                        }
                        {
                          check_hlds__det_analysis__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_190_190, 0) = ((MR_Box) (check_hlds__det_analysis__V_191_191));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__det_analysis__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_189_189, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_189_189, 1) = ((MR_Box) (check_hlds__det_analysis__V_190_190));
                        }
                        {
                          check_hlds__det_analysis__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_194_194, 0) = ((MR_Box) (check_hlds__det_analysis__PromiseContext_42));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[115])));
                        }
                        {
                          check_hlds__det_analysis__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_193_193, 0) = ((MR_Box) (check_hlds__det_analysis__V_194_194));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__det_analysis__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 0) = ((MR_Box) (check_hlds__det_analysis__V_189_189));
                          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 1) = ((MR_Box) (check_hlds__det_analysis__V_193_193));
                        }
                        {
                          check_hlds__det_analysis__OverlapSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 2) = ((MR_Box) (check_hlds__det_analysis__V_188_188));
                        }
                        {
                          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__OverlapSpec_52, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                        }
                      }
                  }
                check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
                check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20;
                check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
              }
              break;
          }
          {
            check_hlds__det_analysis__InstmapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo_16);
          }
          {
            hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__det_analysis__InstmapDelta_53, &check_hlds__det_analysis__ChangedVars_54);
          }
          {
            check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271, &check_hlds__det_analysis__ModuleInfo_55);
          }
          {
            check_hlds__det_analysis__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
          }
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__set_of_var__divide_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__V_276_276, check_hlds__det_analysis__ChangedVars_54, &check_hlds__det_analysis___GroundAtStartVars_56, &check_hlds__det_analysis__GroundBoundVars_57);
          }
          {
            check_hlds__det_analysis__NonLocalVars_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo_16);
          }
          {
            check_hlds__det_analysis__V_277_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
          }
          {
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59 = parse_tree__set_of_var__filter_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__V_277_277, check_hlds__det_analysis__NonLocalVars_58);
          }
          {
            check_hlds__det_analysis__BoundVars0_60 = parse_tree__set_of_var__union_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__GroundBoundVars_57, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59);
          }
          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarTypes_61);
          }
          {
            check_hlds__det_analysis__BoundVars_62 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(check_hlds__det_analysis__VarTypes_61, check_hlds__det_analysis__BoundVars0_60);
          }
          {
            check_hlds__det_analysis__V_278_278 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__Vars_24);
          }
          {
            parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__BoundVars_62, check_hlds__det_analysis__V_278_278, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
          }
          {
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
          }
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271;
          else
            {
              MR_Word check_hlds__det_analysis__TypeCtorInfo_366_366;
              MR_Word check_hlds__det_analysis__MissingVarNames_64;
              MR_String check_hlds__det_analysis__MissingKindStr_65;
              MR_String check_hlds__det_analysis__MissingListStr_67;
              MR_String check_hlds__det_analysis__BindsWords_72;
              MR_Word check_hlds__det_analysis__MissingPieces_73;
              MR_Word check_hlds__det_analysis__MissingSpec_74;
              MR_Word check_hlds__det_analysis__V_279_279;
              MR_Word check_hlds__det_analysis__V_280_280;
              MR_Word check_hlds__det_analysis__V_286_286;
              MR_Word check_hlds__det_analysis__V_289_289;
              MR_Word check_hlds__det_analysis__V_290_290;
              MR_Word check_hlds__det_analysis__V_291_291;
              MR_Word check_hlds__det_analysis__V_292_292;
              MR_Word check_hlds__det_analysis__V_293_293;
              MR_Word check_hlds__det_analysis__V_294_294;
              MR_Word check_hlds__det_analysis__V_296_296;
              MR_Word check_hlds__det_analysis__V_297_297;
              MR_Word check_hlds__det_analysis__V_304_304;
              MR_Word check_hlds__det_analysis__V_305_305;
              MR_Word check_hlds__det_analysis__V_306_306;
              MR_Word check_hlds__det_analysis__V_307_307;

              {
                check_hlds__det_analysis__V_279_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
              }
              {
                check_hlds__det_analysis__V_280_280 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
              }
              {
                check_hlds__det_analysis__MissingVarNames_64 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_279_279, check_hlds__det_analysis__V_280_280);
              }
              {
                check_hlds__det_analysis__MissingKindStr_65 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
              }
              if ((check_hlds__det_analysis__MissingVarNames_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
                    return;
                  }
                }
              else
                {
                  MR_Word check_hlds__det_analysis__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 1)));
                  MR_String check_hlds__det_analysis__V_376_376 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 0)));

                  if ((check_hlds__det_analysis__V_375_375 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    check_hlds__det_analysis__MissingListStr_67 = (MR_String) "a variable that is not listed:";
                  else
                    check_hlds__det_analysis__MissingListStr_67 = (MR_String) "some variables that are not listed:";
                }
              {
                check_hlds__det_analysis__det_infer_scope_12_p_0_7(&check_hlds__det_analysis__env);
              }
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
                check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal may constrain";
              else
                check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal binds";
              check_hlds__det_analysis__TypeCtorInfo_366_366 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                check_hlds__det_analysis__V_290_290 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_290_290, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_290_290, 1) = ((MR_Box) (check_hlds__det_analysis__MissingKindStr_65));
              }
              {
                check_hlds__det_analysis__V_292_292 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 1) = ((MR_Box) (check_hlds__det_analysis__BindsWords_72));
              }
              {
                check_hlds__det_analysis__V_294_294 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_294_294, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_294_294, 1) = ((MR_Box) (check_hlds__det_analysis__MissingListStr_67));
              }
              {
                check_hlds__det_analysis__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_293_293, 0) = ((MR_Box) (check_hlds__det_analysis__V_294_294));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_293_293, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_291_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 0) = ((MR_Box) (check_hlds__det_analysis__V_292_292));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 1) = ((MR_Box) (check_hlds__det_analysis__V_293_293));
              }
              {
                check_hlds__det_analysis__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 0) = ((MR_Box) (check_hlds__det_analysis__V_290_290));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 1) = ((MR_Box) (check_hlds__det_analysis__V_291_291));
              }
              {
                check_hlds__det_analysis__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[126])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 1) = ((MR_Box) (check_hlds__det_analysis__V_289_289));
              }
              {
                check_hlds__det_analysis__V_297_297 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__MissingVarNames_64);
              }
              {
                check_hlds__det_analysis__V_296_296 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_366_366, check_hlds__det_analysis__V_297_297, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[125]));
              }
              {
                check_hlds__det_analysis__MissingPieces_73 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_366_366, check_hlds__det_analysis__V_286_286, check_hlds__det_analysis__V_296_296);
              }
              {
                check_hlds__det_analysis__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_307_307, 0) = ((MR_Box) (check_hlds__det_analysis__MissingPieces_73));
              }
              {
                check_hlds__det_analysis__V_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_306_306, 0) = ((MR_Box) (check_hlds__det_analysis__V_307_307));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_306_306, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_305_305 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_305_305, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_305_305, 1) = ((MR_Box) (check_hlds__det_analysis__V_306_306));
              }
              {
                check_hlds__det_analysis__V_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 0) = ((MR_Box) (check_hlds__det_analysis__V_305_305));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__MissingSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 2) = ((MR_Box) (check_hlds__det_analysis__V_304_304));
              }
              {
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__MissingSpec_74, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310);
              }
            }
          {
            check_hlds__det_analysis__V_311_311 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__Vars_24);
          }
          {
            parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__V_311_311, check_hlds__det_analysis__BoundVars_62, &check_hlds__det_analysis__ExtraVars_75);
          }
          {
            check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310, &check_hlds__det_analysis__IgnoreExtraVars_76);
          }
          {
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__ExtraVars_75);
          }
          if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (check_hlds__det_analysis__IgnoreExtraVars_76 == (MR_Integer) 1);
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
            check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310;
          else
            {
              MR_Word check_hlds__det_analysis__TypeCtorInfo_372_372;
              MR_Word check_hlds__det_analysis__ExtraVarNames_77;
              MR_String check_hlds__det_analysis__ExtraKindStr_78;
              MR_String check_hlds__det_analysis__ExtraListStr_80;
              MR_Word check_hlds__det_analysis__ExtraPieces_84;
              MR_Word check_hlds__det_analysis__ExtraSpec_85;
              MR_Word check_hlds__det_analysis__V_312_312;
              MR_Word check_hlds__det_analysis__V_313_313;
              MR_Word check_hlds__det_analysis__V_319_319;
              MR_Word check_hlds__det_analysis__V_322_322;
              MR_Word check_hlds__det_analysis__V_323_323;
              MR_Word check_hlds__det_analysis__V_324_324;
              MR_Word check_hlds__det_analysis__V_327_327;
              MR_Word check_hlds__det_analysis__V_328_328;
              MR_Word check_hlds__det_analysis__V_330_330;
              MR_Word check_hlds__det_analysis__V_331_331;
              MR_Word check_hlds__det_analysis__V_338_338;
              MR_Word check_hlds__det_analysis__V_339_339;
              MR_Word check_hlds__det_analysis__V_340_340;
              MR_Word check_hlds__det_analysis__V_341_341;

              {
                check_hlds__det_analysis__V_312_312 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
              }
              {
                check_hlds__det_analysis__V_313_313 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_359_359, check_hlds__det_analysis__ExtraVars_75);
              }
              {
                check_hlds__det_analysis__ExtraVarNames_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_312_312, check_hlds__det_analysis__V_313_313);
              }
              {
                check_hlds__det_analysis__ExtraKindStr_78 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
              }
              if ((check_hlds__det_analysis__ExtraVarNames_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
                    return;
                  }
                }
              else
                {
                  MR_Word check_hlds__det_analysis__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 1)));
                  MR_String check_hlds__det_analysis__V_378_378 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 0)));

                  if ((check_hlds__det_analysis__V_377_377 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "an extra variable:";
                  else
                    check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "some extra variables:";
                }
              check_hlds__det_analysis__TypeCtorInfo_372_372 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                check_hlds__det_analysis__V_323_323 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_323_323, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_323_323, 1) = ((MR_Box) (check_hlds__det_analysis__ExtraKindStr_78));
              }
              {
                check_hlds__det_analysis__V_328_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_328_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_328_328, 1) = ((MR_Box) (check_hlds__det_analysis__ExtraListStr_80));
              }
              {
                check_hlds__det_analysis__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_327_327, 0) = ((MR_Box) (check_hlds__det_analysis__V_328_328));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_327_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_324_324, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[127])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_324_324, 1) = ((MR_Box) (check_hlds__det_analysis__V_327_327));
              }
              {
                check_hlds__det_analysis__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 0) = ((MR_Box) (check_hlds__det_analysis__V_323_323));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 1) = ((MR_Box) (check_hlds__det_analysis__V_324_324));
              }
              {
                check_hlds__det_analysis__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_319_319, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[126])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_319_319, 1) = ((MR_Box) (check_hlds__det_analysis__V_322_322));
              }
              {
                check_hlds__det_analysis__V_331_331 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__ExtraVarNames_77);
              }
              {
                check_hlds__det_analysis__V_330_330 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_372_372, check_hlds__det_analysis__V_331_331, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[125]));
              }
              {
                check_hlds__det_analysis__ExtraPieces_84 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_372_372, check_hlds__det_analysis__V_319_319, check_hlds__det_analysis__V_330_330);
              }
              {
                check_hlds__det_analysis__V_341_341 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_341_341, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraPieces_84));
              }
              {
                check_hlds__det_analysis__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_340_340, 0) = ((MR_Box) (check_hlds__det_analysis__V_341_341));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_340_340, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_339_339, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_339_339, 1) = ((MR_Box) (check_hlds__det_analysis__V_340_340));
              }
              {
                check_hlds__det_analysis__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 0) = ((MR_Box) (check_hlds__det_analysis__V_339_339));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__ExtraSpec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 2) = ((MR_Box) (check_hlds__det_analysis__V_338_338));
              }
              {
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ExtraSpec_85, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344);
              }
            }
          {
            check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContextToUse_29, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119;

              {
                check_hlds__det_util__det_info_set_has_req_scope_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119);
              }
              {
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__det_analysis__FromGroundTermKind_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));

              switch (check_hlds__det_analysis__FromGroundTermKind_108) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *check_hlds__det_analysis__Goal_15 = check_hlds__det_analysis__Goal0_14;
                    *check_hlds__det_analysis__Detism_21 = (MR_Integer) 0;
                    *check_hlds__det_analysis__GoalFailingContexts_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__det_analysis__Detism0_91;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122;
              MR_Word check_hlds__det_analysis__Detism1_92;

              {
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, &check_hlds__det_analysis__Detism0_91, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122);
              }
              switch (check_hlds__det_analysis__Detism0_91) {
                default:
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  {
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 4;
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
                  }
                  break;
              }
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
                {
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism1_92;
                  *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122;
                }
              else
                {
                  MR_String check_hlds__det_analysis__DetismStr_93;
                  MR_Word check_hlds__det_analysis__Pieces_94;
                  MR_Word check_hlds__det_analysis__Spec_95;
                  MR_Word check_hlds__det_analysis__V_125_125;
                  MR_Word check_hlds__det_analysis__V_126_126;
                  MR_Word check_hlds__det_analysis__V_136_136;
                  MR_Word check_hlds__det_analysis__V_137_137;
                  MR_Word check_hlds__det_analysis__V_138_138;
                  MR_Word check_hlds__det_analysis__V_139_139;
                  MR_Word check_hlds__det_analysis__Context_346;

                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism0_91;
                  {
                    check_hlds__det_analysis__Context_346 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
                  }
                  {
                    check_hlds__det_analysis__DetismStr_93 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_21);
                  }
                  {
                    check_hlds__det_analysis__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_126_126, 1) = ((MR_Box) (check_hlds__det_analysis__DetismStr_93));
                  }
                  {
                    check_hlds__det_analysis__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 0) = ((MR_Box) (check_hlds__det_analysis__V_126_126));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])));
                  }
                  {
                    check_hlds__det_analysis__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[128])));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 1) = ((MR_Box) (check_hlds__det_analysis__V_125_125));
                  }
                  {
                    check_hlds__det_analysis__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_139_139, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_94));
                  }
                  {
                    check_hlds__det_analysis__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 0) = ((MR_Box) (check_hlds__det_analysis__V_139_139));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__det_analysis__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 0) = ((MR_Box) (check_hlds__det_analysis__Context_346));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 1) = ((MR_Box) (check_hlds__det_analysis__V_138_138));
                  }
                  {
                    check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (check_hlds__det_analysis__V_137_137));
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__det_analysis__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 2) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
                  }
                  {
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_95, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
                  }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
              }
              switch (*check_hlds__det_analysis__Detism_21) {
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
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
                      return;
                    }
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

static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11;
        *check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9;
        *check_hlds__det_analysis__STATE_VARIABLE_CanFail_8 = check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7;
      }
    else
      {
        MR_Word check_hlds__det_analysis__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__Goals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Goal_28;
        MR_Word check_hlds__det_analysis__Goals_29;
        MR_Word check_hlds__det_analysis__FirstDetism_37;
        MR_Word check_hlds__det_analysis__FirstCanFail_38;
        MR_Word check_hlds__det_analysis__FirstMaxSolns_39;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48;

        {
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_26, &check_hlds__det_analysis__Goal_28, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_37, &check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__FirstMaxSolns_39);
        }
        {
          parse_tree__prog_detism__det_switch_canfail_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7, check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47);
        }
        {
          parse_tree__prog_detism__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9, check_hlds__det_analysis__FirstMaxSolns_39, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48);
        }
        {
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_27, &check_hlds__det_analysis__Goals_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47, check_hlds__det_analysis__STATE_VARIABLE_CanFail_8, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_29));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

    {
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1523__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))));
    }
    return check_hlds__det_analysis__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
  MR_Word check_hlds__det_analysis__Goal0_10,
  MR_Word * check_hlds__det_analysis__Goal_11,
  MR_Word check_hlds__det_analysis__InstMap0_12,
  MR_Word check_hlds__det_analysis__SolnContext_13,
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
  MR_Word * check_hlds__det_analysis__Detism_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__GoalFailingContexts_18;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;

    {
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_12, check_hlds__det_analysis__SolnContext_13, check_hlds__det_analysis__RightFailingContexts_14, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15, check_hlds__det_analysis__Detism_16, &check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27);
    }
    switch (*check_hlds__det_analysis__Detism_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          MR_Word check_hlds__det_analysis__V_48_48;

          {
            check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 3) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(check_hlds__det_analysis__V_48_48, (MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
          }
          *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_analysis__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 1)));
          MR_Word check_hlds__det_analysis__Context_21;
          MR_String check_hlds__det_analysis__DetismStr_22;
          MR_Word check_hlds__det_analysis__Pieces_23;
          MR_Word check_hlds__det_analysis__Spec_24;
          MR_Word check_hlds__det_analysis__V_30_30;
          MR_Word check_hlds__det_analysis__V_31_31;
          MR_Word check_hlds__det_analysis__V_41_41;
          MR_Word check_hlds__det_analysis__V_42_42;
          MR_Word check_hlds__det_analysis__V_43_43;
          MR_Word check_hlds__det_analysis__V_44_44;
          MR_Word check_hlds__det_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 0)));

          {
            check_hlds__det_analysis__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo0_20);
          }
          {
            check_hlds__det_analysis__DetismStr_22 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_16);
          }
          {
            check_hlds__det_analysis__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_31_31, 1) = ((MR_Box) (check_hlds__det_analysis__DetismStr_22));
          }
          {
            check_hlds__det_analysis__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_31_31));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])));
          }
          {
            check_hlds__det_analysis__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[111])));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_30_30));
          }
          {
            check_hlds__det_analysis__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_44_44, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_23));
          }
          {
            check_hlds__det_analysis__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__V_44_44));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_analysis__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__Context_21));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__V_43_43));
          }
          {
            check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__V_42_42));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_analysis__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 2) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
          }
          {
            check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
  MR_Word check_hlds__det_analysis__MainGoal0_12,
  MR_Word * check_hlds__det_analysis__MainGoal_13,
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
  MR_Word check_hlds__det_analysis__InstMap0_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
  MR_Word * check_hlds__det_analysis__Detism_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__MainDetism_22;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;

    {
      check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__MainGoal0_12, check_hlds__det_analysis__MainGoal_13, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__MainDetism_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32);
    }
    if ((check_hlds__det_analysis__OrElseGoals0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__OrElseGoals_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_analysis__Detism_20 = check_hlds__det_analysis__MainDetism_22;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;
      }
    else
      {
        MR_Word check_hlds__det_analysis__MainCanFail_25;
        MR_Word check_hlds__det_analysis__MainMaxSolns_26;
        MR_Word check_hlds__det_analysis__CanFail_27;
        MR_Word check_hlds__det_analysis__MaxSolns0_28;
        MR_Word check_hlds__det_analysis__MaxSolns_29;
        MR_Word check_hlds__det_analysis__Goal0_47;
        MR_Word check_hlds__det_analysis__Goals0_48;
        MR_Word check_hlds__det_analysis__Goal_49;
        MR_Word check_hlds__det_analysis__Goals_50;
        MR_Word check_hlds__det_analysis__FirstDetism_58;
        MR_Word check_hlds__det_analysis__FirstCanFail_59;
        MR_Word check_hlds__det_analysis__FirstMaxSolns_60;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69;

        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__MainDetism_22, &check_hlds__det_analysis__MainCanFail_25, &check_hlds__det_analysis__MainMaxSolns_26);
        }
        check_hlds__det_analysis__Goal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 0)));
        check_hlds__det_analysis__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 1)));
        {
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_47, &check_hlds__det_analysis__Goal_49, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__FirstDetism_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_58, &check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__FirstMaxSolns_60);
        }
        {
          parse_tree__prog_detism__det_switch_canfail_3_p_0(check_hlds__det_analysis__MainCanFail_25, check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68);
        }
        {
          parse_tree__prog_detism__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__MainMaxSolns_26, check_hlds__det_analysis__FirstMaxSolns_60, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69);
        }
        {
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_48, &check_hlds__det_analysis__Goals_50, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68, &check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69, &check_hlds__det_analysis__MaxSolns0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__OrElseGoals_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_50));
        }
        check_hlds__det_analysis__MaxSolns_29 = ((&check_hlds__det_analysis_vector_common_5[0 + check_hlds__det_analysis__MaxSolns0_28]))->check_hlds__det_analysis__vector_common_type_5_0__vct_5_f_0;
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_20, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__MaxSolns_29);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
  MR_Word check_hlds__det_analysis__Goal0_10,
  MR_Word * check_hlds__det_analysis__Goal_11,
  MR_Word check_hlds__det_analysis__GoalInfo_12,
  MR_Word check_hlds__det_analysis__InstMap0_13,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
  MR_Word * check_hlds__det_analysis__Detism_15,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__NegDetism_18;
    MR_Word check_hlds__det_analysis__MaybeDetism_20;
    MR_Word check_hlds__det_analysis__CanFail_21;
    MR_Word check_hlds__det_analysis___NegatedGoalCanFail_19;
    MR_Word check_hlds__det_analysis__V_22_22;

    {
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_13, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14, &check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis___NegatedGoalCanFail_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);
    }
    {
      parse_tree__prog_detism__det_negation_det_2_p_0(check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis__MaybeDetism_20);
    }
    if ((check_hlds__det_analysis__MaybeDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_not\'/9", (MR_String) "inappropriate determinism inside a negation");
          return;
        }
      }
    else
      *check_hlds__det_analysis__Detism_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_20, (MR_Integer) 0)));
    {
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_15, &check_hlds__det_analysis__CanFail_21, &check_hlds__det_analysis__V_22_22);
    }
    switch (check_hlds__det_analysis__CanFail_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__Context_23;
          MR_Word check_hlds__det_analysis__V_32_32;

          {
            check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
          }
          {
            check_hlds__det_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalFailingContexts_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
  MR_Word check_hlds__det_analysis__Cond0_15,
  MR_Word * check_hlds__det_analysis__Cond_16,
  MR_Word check_hlds__det_analysis__Then0_17,
  MR_Word * check_hlds__det_analysis__Then_18,
  MR_Word check_hlds__det_analysis__Else0_19,
  MR_Word * check_hlds__det_analysis__Else_20,
  MR_Word check_hlds__det_analysis__InstMap0_21,
  MR_Word check_hlds__det_analysis__SolnContext_22,
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
  MR_Word * check_hlds__det_analysis__Detism_25,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__TypeCtorInfo_66_66;
    MR_Word check_hlds__det_analysis__InstMap1_29;
    MR_Word check_hlds__det_analysis__ThenDetism_30;
    MR_Word check_hlds__det_analysis__ThenFailingContexts_31;
    MR_Word check_hlds__det_analysis__ThenCanFail_32;
    MR_Word check_hlds__det_analysis__ThenMaxSoln_33;
    MR_Word check_hlds__det_analysis__CondSolnContext_34;
    MR_Word check_hlds__det_analysis__CondDetism_35;
    MR_Word check_hlds__det_analysis__CondCanFail_37;
    MR_Word check_hlds__det_analysis__CondMaxSoln_38;
    MR_Word check_hlds__det_analysis__ElseDetism_39;
    MR_Word check_hlds__det_analysis__ElseFailingContexts_40;
    MR_Word check_hlds__det_analysis__ElseCanFail_41;
    MR_Word check_hlds__det_analysis__ElseMaxSoln_42;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
    MR_Word check_hlds__det_analysis__V_57_57;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58;
    MR_Word check_hlds__det_analysis___CondFailingContexts_36;

    {
      hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__InstMap0_21, &check_hlds__det_analysis__InstMap1_29);
    }
    {
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Then0_17, check_hlds__det_analysis__Then_18, check_hlds__det_analysis__InstMap1_29, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenCanFail_32, &check_hlds__det_analysis__ThenMaxSoln_33);
    }
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ThenCanFail_32 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_22 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 1;
    else
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 0;
    check_hlds__det_analysis__TypeCtorInfo_66_66 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
    {
      check_hlds__det_analysis__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__RightFailingContexts_23);
    }
    {
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__Cond_16, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__CondSolnContext_34, check_hlds__det_analysis__V_57_57, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis___CondFailingContexts_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__CondCanFail_37, &check_hlds__det_analysis__CondMaxSoln_38);
    }
    {
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Else0_19, check_hlds__det_analysis__Else_20, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseFailingContexts_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__ElseMaxSoln_42);
    }
    switch (check_hlds__det_analysis__CondCanFail_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (check_hlds__det_analysis__CondMaxSoln_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_analysis__CTMaxSoln_45;
              MR_Word check_hlds__det_analysis__MaxSoln_46;
              MR_Word check_hlds__det_analysis__CanFail_47;

              {
                parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__CondMaxSoln_38, check_hlds__det_analysis__ThenMaxSoln_33, &check_hlds__det_analysis__CTMaxSoln_45);
              }
              {
                parse_tree__prog_detism__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__CTMaxSoln_45, check_hlds__det_analysis__ElseMaxSoln_42, &check_hlds__det_analysis__MaxSoln_46);
              }
              {
                parse_tree__prog_detism__det_switch_canfail_3_p_0(check_hlds__det_analysis__ThenCanFail_32, check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__CanFail_47);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_25, check_hlds__det_analysis__CanFail_47, check_hlds__det_analysis__MaxSoln_46);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_analysis__MaybeNegDetism_43;
              MR_Word check_hlds__det_analysis__NegDetism_44;

              {
                parse_tree__prog_detism__det_negation_det_2_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__MaybeNegDetism_43);
              }
              if ((check_hlds__det_analysis__MaybeNegDetism_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
                    return;
                  }
                }
              else
                check_hlds__det_analysis__NegDetism_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeNegDetism_43, (MR_Integer) 0)));
              {
                parse_tree__prog_detism__det_conjunction_detism_3_p_0(check_hlds__det_analysis__NegDetism_44, check_hlds__det_analysis__ElseDetism_39, check_hlds__det_analysis__Detism_25);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__prog_detism__det_conjunction_detism_3_p_0(check_hlds__det_analysis__CondDetism_35, check_hlds__det_analysis__ThenDetism_30, check_hlds__det_analysis__Detism_25);
        }
        break;
    }
    {
      *check_hlds__det_analysis__GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__ElseFailingContexts_40);
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
  MR_Word check_hlds__det_analysis__LHS_14,
  MR_Word check_hlds__det_analysis__RHS0_15,
  MR_Word check_hlds__det_analysis__Unify_16,
  MR_Word check_hlds__det_analysis__UnifyContext_17,
  MR_Word * check_hlds__det_analysis__RHS_18,
  MR_Word check_hlds__det_analysis__GoalInfo_19,
  MR_Word check_hlds__det_analysis__InstMap0_20,
  MR_Word check_hlds__det_analysis__SolnContext_21,
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
  MR_Word * check_hlds__det_analysis__Detism_23,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__UnifyCanFail_47;
    MR_Word check_hlds__det_analysis__ExaminesRepresentation_48;
    MR_Word check_hlds__det_analysis__UnifyNumSolns_49;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
    MR_Word check_hlds__det_analysis__V_103_103;

    switch (MR_tag((MR_Word) check_hlds__det_analysis__RHS0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *check_hlds__det_analysis__RHS_18 = check_hlds__det_analysis__RHS0_15;
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__det_analysis__Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__det_analysis__Groundness_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__det_analysis__PredOrFunc_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__det_analysis__NonLocalVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 2)));
          MR_Word check_hlds__det_analysis__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 3)));
          MR_Word check_hlds__det_analysis__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 4)));
          MR_Word check_hlds__det_analysis__LambdaDeclaredDet_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 5)));
          MR_Word check_hlds__det_analysis__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 6)));
          MR_Word check_hlds__det_analysis__LambdaSolnContext_37;
          MR_Word check_hlds__det_analysis__ModuleInfo_38;
          MR_Word check_hlds__det_analysis__InstMap1_39;
          MR_Word check_hlds__det_analysis__Goal_40;
          MR_Word check_hlds__det_analysis__LambdaInferredDet_41;
          MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100;
          MR_Word check_hlds__det_analysis__V_125_125;
          MR_Word check_hlds__det_analysis__V_36_36;
          MR_Word check_hlds__det_analysis___LambdaFailingContexts_42;

          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, &check_hlds__det_analysis__V_36_36, &check_hlds__det_analysis__V_125_125);
          }
          check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_125_125);
          if (check_hlds__det_analysis__succeeded)
            check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 1;
          else
            check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 0;
          {
            check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__ModuleInfo_38);
          }
          {
            hlds__instmap__pre_lambda_update_5_p_0(check_hlds__det_analysis__ModuleInfo_38, check_hlds__det_analysis__Vars_32, check_hlds__det_analysis__Modes_33, check_hlds__det_analysis__InstMap0_20, &check_hlds__det_analysis__InstMap1_39);
          }
          {
            check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_35, &check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__LambdaSolnContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__LambdaInferredDet_41, &check_hlds__det_analysis___LambdaFailingContexts_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100);
          }
          {
            check_hlds__det_report__det_check_lambda_7_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, check_hlds__det_analysis__LambdaInferredDet_41, check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__RHS_18 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__det_analysis__Purity_27 | ((((check_hlds__det_analysis__Groundness_28 << (MR_Integer) 2)) | ((check_hlds__det_analysis__PredOrFunc_29 << (MR_Integer) 3)))))));
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__NonLocalVars_31));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_32));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__Modes_33));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__LambdaDeclaredDet_34));
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__det_analysis__Goal_40));
          }
        }
        break;
    }
    {
      check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__UnifyCanFail_47);
    }
    {
      check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__ExaminesRepresentation_48);
    }
    {
      check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_17));
    }
    {
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__LHS_14, check_hlds__det_analysis__ExaminesRepresentation_48, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__SolnContext_21, check_hlds__det_analysis__RightFailingContexts_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__V_103_103, &check_hlds__det_analysis__UnifyNumSolns_49, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__UnifyNumSolns_49);
    }
    switch (check_hlds__det_analysis__UnifyCanFail_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__Context_50;

          {
            check_hlds__det_analysis__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_19);
          }
          switch (MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail construct");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__det_analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)));
                MR_Word check_hlds__det_analysis__FailingGoal_117;
                MR_Word check_hlds__det_analysis__ConsId_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
                MR_Word check_hlds__det_analysis__FailingContext_119;
                MR_Word check_hlds__det_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
                MR_Word check_hlds__det_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 3)));
                MR_Word check_hlds__det_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 4)));
                MR_Word check_hlds__det_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 5)));

                {
                  check_hlds__det_analysis__FailingGoal_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 1) = ((MR_Box) (check_hlds__det_analysis__Var_78));
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_118));
                }
                {
                  check_hlds__det_analysis__FailingContext_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_117));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__det_analysis__GoalFailingContexts_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_119));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail assign");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__det_analysis__Var1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
                    MR_Word check_hlds__det_analysis__Var2_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
                    MR_Word check_hlds__det_analysis__FailingGoal_120;
                    MR_Word check_hlds__det_analysis__FailingContext_121;

                    {
                      check_hlds__det_analysis__FailingGoal_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 0) = ((MR_Box) (check_hlds__det_analysis__Var1_83));
                      MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 1) = ((MR_Box) (check_hlds__det_analysis__Var2_84));
                    }
                    {
                      check_hlds__det_analysis__FailingContext_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_120));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__det_analysis__GoalFailingContexts_24 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_121));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__det_analysis__FailingGoal_64;
                    MR_Word check_hlds__det_analysis__FailingContext_77;

                    switch (MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__det_analysis__RHSVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));

                          {
                            check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
                            MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__RHSVar_63));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__det_analysis__ConsId_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));
                          MR_Word check_hlds__det_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 1)));
                          MR_Word check_hlds__det_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 2)));

                          {
                            check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
                            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_65));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
                            return;
                          }
                        }
                        break;
                    }
                    {
                      check_hlds__det_analysis__FailingContext_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
                      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_64));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__det_analysis__GoalFailingContexts_24 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_77));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__GoalFailingContexts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
  MR_Word check_hlds__det_analysis__GenericCall_10,
  MR_Word check_hlds__det_analysis__CallDetism_11,
  MR_Word check_hlds__det_analysis__GoalInfo_12,
  MR_Word check_hlds__det_analysis__SolnContext_13,
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
  MR_Word * check_hlds__det_analysis__Detism_15,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__CanFail_18;
    MR_Word check_hlds__det_analysis__NumSolns_19;
    MR_Word check_hlds__det_analysis__Context_20;

    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CallDetism_11, &check_hlds__det_analysis__CanFail_18, &check_hlds__det_analysis__NumSolns_19);
    }
    {
      check_hlds__det_analysis__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
    }
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_19 == (MR_Integer) 2);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_13 == (MR_Integer) 0);
    if (check_hlds__det_analysis__succeeded)
      {
        MR_Word check_hlds__det_analysis__ProcInfo_21;
        MR_Word check_hlds__det_analysis__VarSet_22;
        MR_Word check_hlds__det_analysis__FirstPieces_23;
        MR_Word check_hlds__det_analysis__ModuleInfo_24;
        MR_Word check_hlds__det_analysis__ContextMsgs_25;
        MR_Word check_hlds__det_analysis__Spec_26;
        MR_Word check_hlds__det_analysis__V_32_32;
        MR_Word check_hlds__det_analysis__V_35_35;
        MR_Word check_hlds__det_analysis__V_36_36;
        MR_String check_hlds__det_analysis__V_37_37;
        MR_Word check_hlds__det_analysis__V_46_46;
        MR_Word check_hlds__det_analysis__V_47_47;
        MR_Word check_hlds__det_analysis__V_48_48;
        MR_Word check_hlds__det_analysis__V_49_49;
        MR_Word check_hlds__det_analysis__V_50_50;

        {
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ProcInfo_21);
        }
        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_21, &check_hlds__det_analysis__VarSet_22);
        }
        {
          check_hlds__det_analysis__V_37_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__CallDetism_11);
        }
        {
          check_hlds__det_analysis__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_36_36, 1) = ((MR_Box) (check_hlds__det_analysis__V_37_37));
        }
        {
          check_hlds__det_analysis__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 0) = ((MR_Box) (check_hlds__det_analysis__V_36_36));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
        }
        {
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[110])));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (check_hlds__det_analysis__V_35_35));
        }
        {
          check_hlds__det_analysis__FirstPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[109])));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
        }
        {
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ModuleInfo_24);
        }
        {
          check_hlds__det_analysis__ContextMsgs_25 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_22, check_hlds__det_analysis__RightFailingContexts_14);
        }
        {
          check_hlds__det_analysis__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_50_50, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_23));
        }
        {
          check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
        }
        {
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_47_47, check_hlds__det_analysis__ContextMsgs_25);
        }
        {
          check_hlds__det_analysis__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 2) = ((MR_Box) (check_hlds__det_analysis__V_46_46));
        }
        {
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_26, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_15, check_hlds__det_analysis__CanFail_18, (MR_Integer) 3);
        }
      }
    else
      {
        *check_hlds__det_analysis__Detism_15 = check_hlds__det_analysis__CallDetism_11;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28;
      }
    switch (check_hlds__det_analysis__CanFail_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__FailingContext_27;
          MR_Word check_hlds__det_analysis__V_55_55;

          {
            check_hlds__det_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 1) = ((MR_Box) (check_hlds__det_analysis__GenericCall_10));
          }
          {
            check_hlds__det_analysis__FailingContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 1) = ((MR_Box) (check_hlds__det_analysis__V_55_55));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalFailingContexts_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
  MR_Word check_hlds__det_analysis__PredId_12,
  MR_Integer check_hlds__det_analysis__ProcId0_13,
  MR_Integer * check_hlds__det_analysis__ProcId_14,
  MR_Word check_hlds__det_analysis__Args_15,
  MR_Word check_hlds__det_analysis__GoalInfo_16,
  MR_Word check_hlds__det_analysis__SolnContext_17,
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__CalleePredInfo_22;
    MR_Word check_hlds__det_analysis__Detism0_23;
    MR_Word check_hlds__det_analysis__ModuleInfo_24;
    MR_Word check_hlds__det_analysis__CalleeModuleName_25;
    MR_String check_hlds__det_analysis__CalleeName_26;
    MR_Word check_hlds__det_analysis__CanFail_27;
    MR_Word check_hlds__det_analysis__NumSolns_28;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;

    {
      check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, check_hlds__det_analysis__PredId_12, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__CalleePredInfo_22, &check_hlds__det_analysis__Detism0_23);
    }
    {
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__ModuleInfo_24);
    }
    {
      check_hlds__det_analysis__CalleeModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
    {
      check_hlds__det_analysis__CalleeName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
    {
      check_hlds__det_analysis__succeeded = check_hlds__simplify__format_call__is_format_call_3_p_0(check_hlds__det_analysis__CalleeModuleName_25, check_hlds__det_analysis__CalleeName_26, check_hlds__det_analysis__Args_15);
    }
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_util__det_info_set_has_format_call_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41);
      }
    else
      check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39;
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_23, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns_28);
    }
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_28 == (MR_Integer) 2);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
    if (check_hlds__det_analysis__succeeded)
      {
        MR_Integer check_hlds__det_analysis__ProcIdPrime_29;
        MR_Word check_hlds__det_analysis__ModuleInfo_81;
        MR_Word check_hlds__det_analysis__PredTable_82;
        MR_Word check_hlds__det_analysis__PredInfo_83;
        MR_Word check_hlds__det_analysis__ProcTable_84;
        MR_Word check_hlds__det_analysis__ProcList_85;
        MR_Box check_hlds__det_analysis__conv0_PredInfo_83;

        {
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ModuleInfo_81);
        }
        {
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__ModuleInfo_81, &check_hlds__det_analysis__PredTable_82);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__PredTable_82, ((MR_Box) (check_hlds__det_analysis__PredId_12)), &check_hlds__det_analysis__conv0_PredInfo_83);
        }
        check_hlds__det_analysis__PredInfo_83 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_83);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo_83, &check_hlds__det_analysis__ProcTable_84);
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_84, &check_hlds__det_analysis__ProcList_85);
        }
        {
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(check_hlds__det_analysis__ProcList_85, check_hlds__det_analysis__ModuleInfo_81, check_hlds__det_analysis__PredInfo_83, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__ProcIdPrime_29);
        }
        if (check_hlds__det_analysis__succeeded)
          {
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcIdPrime_29;
            {
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
          }
        else
          {
            MR_Word check_hlds__det_analysis__TypeCtorInfo_74_74;
            MR_Word check_hlds__det_analysis__GoalContext_30;
            MR_Word check_hlds__det_analysis__ProcInfo_31;
            MR_Word check_hlds__det_analysis__VarSet_32;
            MR_Word check_hlds__det_analysis__PredPieces_33;
            MR_Word check_hlds__det_analysis__FirstPieces_34;
            MR_Word check_hlds__det_analysis__ContextMsgs_35;
            MR_Word check_hlds__det_analysis__Spec_36;
            MR_Word check_hlds__det_analysis__V_48_48;
            MR_Word check_hlds__det_analysis__V_49_49;
            MR_Word check_hlds__det_analysis__V_52_52;
            MR_Word check_hlds__det_analysis__V_53_53;
            MR_String check_hlds__det_analysis__V_54_54;
            MR_Word check_hlds__det_analysis__V_63_63;
            MR_Word check_hlds__det_analysis__V_64_64;
            MR_Word check_hlds__det_analysis__V_65_65;
            MR_Word check_hlds__det_analysis__V_66_66;
            MR_Word check_hlds__det_analysis__V_67_67;

            {
              check_hlds__det_analysis__GoalContext_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
            {
              check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ProcInfo_31);
            }
            {
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__VarSet_32);
            }
            {
              check_hlds__det_analysis__PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_24, (MR_Integer) 0, check_hlds__det_analysis__PredId_12);
            }
            check_hlds__det_analysis__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              check_hlds__det_analysis__V_54_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_23);
            }
            {
              check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_53_53, 1) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
            }
            {
              check_hlds__det_analysis__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
            }
            {
              check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[108])));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
            }
            {
              check_hlds__det_analysis__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, check_hlds__det_analysis__PredPieces_33, check_hlds__det_analysis__V_49_49);
            }
            {
              check_hlds__det_analysis__FirstPieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[107]), check_hlds__det_analysis__V_48_48);
            }
            {
              check_hlds__det_analysis__ContextMsgs_35 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_32, check_hlds__det_analysis__RightFailingContexts_18);
            }
            {
              check_hlds__det_analysis__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_67_67, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_34));
            }
            {
              check_hlds__det_analysis__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 0) = ((MR_Box) (check_hlds__det_analysis__V_67_67));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_30));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 1) = ((MR_Box) (check_hlds__det_analysis__V_66_66));
            }
            {
              check_hlds__det_analysis__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 0) = ((MR_Box) (check_hlds__det_analysis__V_65_65));
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__det_analysis__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_64_64, check_hlds__det_analysis__ContextMsgs_35);
            }
            {
              check_hlds__det_analysis__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 2) = ((MR_Box) (check_hlds__det_analysis__V_63_63));
            }
            {
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);
            }
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
            {
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
          }
      }
    else
      {
        *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
        *check_hlds__det_analysis__Detism_19 = check_hlds__det_analysis__Detism0_23;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
      }
    switch (check_hlds__det_analysis__CanFail_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__Context_37;
          MR_Word check_hlds__det_analysis__FailingContext_38;
          MR_Word check_hlds__det_analysis__V_72_72;

          {
            check_hlds__det_analysis__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
          }
          {
            check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_12));
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 2) = ((MR_Box) (*check_hlds__det_analysis__ProcId_14));
          }
          {
            check_hlds__det_analysis__FailingContext_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 0) = ((MR_Box) (check_hlds__det_analysis__Context_37));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalFailingContexts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_38));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
  MR_Word * check_hlds__det_analysis__Detism_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__HeadVar__9_9);
        }
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13;
        *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11;
      }
    else
      {
        MR_Word check_hlds__det_analysis__Case0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__Cases0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Case_31;
        MR_Word check_hlds__det_analysis__Cases_32;
        MR_Word check_hlds__det_analysis__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 2)));
        MR_Word check_hlds__det_analysis__ModuleInfo0_46;
        MR_Word check_hlds__det_analysis__VarTypes_47;
        MR_Word check_hlds__det_analysis__VarType_48;
        MR_Word check_hlds__det_analysis__InstMap1_49;
        MR_Word check_hlds__det_analysis__ModuleInfo_50;
        MR_Word check_hlds__det_analysis__Goal_52;
        MR_Word check_hlds__det_analysis__FirstDetism_53;
        MR_Word check_hlds__det_analysis__GoalFailingContexts_54;
        MR_Word check_hlds__det_analysis__FirstCanFail_55;
        MR_Word check_hlds__det_analysis__FirstMaxSolns_56;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75;

        {
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__ModuleInfo0_46);
        }
        {
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__VarTypes_47);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_47, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__VarType_48);
        }
        {
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__VarType_48, check_hlds__det_analysis__MainConsId_43, check_hlds__det_analysis__OtherConsIds_44, check_hlds__det_analysis__HeadVar__4_4, &check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__ModuleInfo0_46, &check_hlds__det_analysis__ModuleInfo_50);
        }
        {
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_analysis__ModuleInfo_50, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63);
        }
        {
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_45, &check_hlds__det_analysis__Goal_52, check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, &check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72);
        }
        {
          check_hlds__det_analysis__Case_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 0) = ((MR_Box) (check_hlds__det_analysis__MainConsId_43));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 1) = ((MR_Box) (check_hlds__det_analysis__OtherConsIds_44));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_52));
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__FirstMaxSolns_56);
        }
        {
          parse_tree__prog_detism__det_switch_canfail_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73);
        }
        {
          parse_tree__prog_detism__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__9_9, check_hlds__det_analysis__FirstMaxSolns_56, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74);
        }
        {
          check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_30, &check_hlds__det_analysis__Cases_32, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74, check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11, &check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Case_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Cases_32));
        }
        {
          *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
  MR_Word check_hlds__det_analysis__Var_14,
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
  MR_Word check_hlds__det_analysis__Cases0_16,
  MR_Word * check_hlds__det_analysis__Cases_17,
  MR_Word check_hlds__det_analysis__GoalInfo_18,
  MR_Word check_hlds__det_analysis__InstMap0_19,
  MR_Word check_hlds__det_analysis__SolnContext_20,
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
  MR_Word * check_hlds__det_analysis__Detism_23,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__CasesDetism_26;
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_27;
    MR_Word check_hlds__det_analysis__CasesCanFail_28;
    MR_Word check_hlds__det_analysis__CasesSolns_29;
    MR_Word check_hlds__det_analysis__SwitchSolnContext_30;
    MR_Word check_hlds__det_analysis__SwitchSolns_32;
    MR_Word check_hlds__det_analysis__CanFail_33;
    MR_Word check_hlds__det_analysis__NumSolns_34;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42;

    {
      check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_16, check_hlds__det_analysis__Cases_17, check_hlds__det_analysis__Var_14, check_hlds__det_analysis__InstMap0_19, check_hlds__det_analysis__SolnContext_20, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__det_analysis__CasesDetism_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CasesDetism_26, &check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CasesSolns_29);
    }
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CasesCanFail_28 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_20 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 1;
    else
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 0;
    {
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__Var_14, (MR_Integer) 1, check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__SwitchSolnContext_30, check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__GoalInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);
    }
    {
      parse_tree__prog_detism__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CanFail_33);
    }
    {
      parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__CasesSolns_29, &check_hlds__det_analysis__NumSolns_34);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__CanFail_33, check_hlds__det_analysis__NumSolns_34);
    }
    switch (check_hlds__det_analysis__SwitchCanFail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__SwitchContext_35;
          MR_Word check_hlds__det_analysis__FailingContext_36;
          MR_Word check_hlds__det_analysis__V_45_45;

          {
            check_hlds__det_analysis__SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
          }
          {
            check_hlds__det_analysis__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_45_45, 0) = ((MR_Box) (check_hlds__det_analysis__Var_14));
          }
          {
            check_hlds__det_analysis__FailingContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 0) = ((MR_Box) (check_hlds__det_analysis__SwitchContext_35));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 1) = ((MR_Box) (check_hlds__det_analysis__V_45_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalFailingContexts_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_27));
          }
        }
        break;
      case (MR_Integer) 1:
        *check_hlds__det_analysis__GoalFailingContexts_24 = check_hlds__det_analysis__GoalFailingContexts0_27;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
  MR_Word * check_hlds__det_analysis__Detism_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__HeadVar__8_8);
        }
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12;
        *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10;
      }
    else
      {
        MR_Word check_hlds__det_analysis__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Goal_29;
        MR_Word check_hlds__det_analysis__Goals_30;
        MR_Word check_hlds__det_analysis__FirstDetism_40;
        MR_Word check_hlds__det_analysis__GoalFailingContexts_41;
        MR_Word check_hlds__det_analysis__FirstCanFail_42;
        MR_Word check_hlds__det_analysis__FirstMaxSolns_43;
        MR_Word check_hlds__det_analysis__GoalInfo_45;
        MR_Word check_hlds__det_analysis__AdjFirstMaxSolns_46;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58;
        MR_Word check_hlds__det_analysis__V_44_44;
        MR_Word check_hlds__det_analysis__V_54_54;

        {
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_27, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__FirstMaxSolns_43);
        }
        check_hlds__det_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 0)));
        check_hlds__det_analysis__GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 1)));
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__8_8 == (MR_Integer) 0);
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__FirstMaxSolns_43 == (MR_Integer) 0);
            if (check_hlds__det_analysis__succeeded)
              {
                check_hlds__det_analysis__V_54_54 = (MR_Integer) 6;
                {
                  check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo_45, check_hlds__det_analysis__V_54_54);
                }
              }
          }
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = (MR_Integer) 1;
        else
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = check_hlds__det_analysis__FirstMaxSolns_43;
        {
          parse_tree__prog_detism__det_disjunction_canfail_3_p_0(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55);
        }
        {
          parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__AdjFirstMaxSolns_46, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56);
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56 == (MR_Integer) 3);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = (MR_Integer) 2;
        else
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
        {
          check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_28, &check_hlds__det_analysis__Goals_30, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57, check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_30));
        }
        {
          *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
  MR_Word check_hlds__det_analysis__Goals0_12,
  MR_Word * check_hlds__det_analysis__Goals_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_22;

    {
      check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
    }
    if ((*check_hlds__det_analysis__Goals_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__det_analysis__Context_23;
        MR_Word check_hlds__det_analysis__FailingContext_24;

        {
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
        {
          check_hlds__det_analysis__FailingContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_22));
        }
      }
    else
      *check_hlds__det_analysis__GoalFailingContexts_20 = check_hlds__det_analysis__GoalFailingContexts0_22;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
      }
    else
      {
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Goal_24;
        MR_Word check_hlds__det_analysis__Goals_25;
        MR_Word check_hlds__det_analysis__HeadDetism_33;
        MR_Word check_hlds__det_analysis__GoalFailingContexts_34;
        MR_Word check_hlds__det_analysis__HeadCanFail_35;
        MR_Word check_hlds__det_analysis__HeadMaxSolns_36;
        MR_Word check_hlds__det_analysis__TailDetism_37;
        MR_Word check_hlds__det_analysis__TailCanFail_38;
        MR_Word check_hlds__det_analysis__TailMaxSolns_39;
        MR_Word check_hlds__det_analysis__MaxSolns_40;
        MR_Word check_hlds__det_analysis__CanFail_41;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47;

        {
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__HeadCanFail_35, &check_hlds__det_analysis__HeadMaxSolns_36);
        }
        {
          check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_37, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_37, &check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__TailMaxSolns_39);
        }
        {
          parse_tree__prog_detism__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadMaxSolns_36, check_hlds__det_analysis__TailMaxSolns_39, &check_hlds__det_analysis__MaxSolns_40);
        }
        {
          parse_tree__prog_detism__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__HeadCanFail_35, check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__CanFail_41);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__CanFail_41, check_hlds__det_analysis__MaxSolns_40);
        }
        {
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
  MR_Word check_hlds__det_analysis__Goals0_12,
  MR_Word * check_hlds__det_analysis__Goals_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
    MR_Word check_hlds__det_analysis__CanFail_22;
    MR_Word check_hlds__det_analysis__Solns_23;

    {
      check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_22, &check_hlds__det_analysis__Solns_23);
    }
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CanFail_22 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_23 == (MR_Integer) 3);
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
      }
    if (check_hlds__det_analysis__succeeded)
      *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
    else
      {
        MR_Word check_hlds__det_analysis__Context_24;
        MR_Word check_hlds__det_analysis__MaxSoln_25;
        MR_String check_hlds__det_analysis__First_26;
        MR_Word check_hlds__det_analysis__Pieces_28;
        MR_Word check_hlds__det_analysis__GoalMsgs_29;
        MR_Word check_hlds__det_analysis__SortedGoalMsgs_30;
        MR_Word check_hlds__det_analysis__Spec_31;
        MR_Word check_hlds__det_analysis__V_41_41;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47;
        MR_Word check_hlds__det_analysis__V_50_50;
        MR_Word check_hlds__det_analysis__V_51_51;
        MR_Word check_hlds__det_analysis__V_52_52;
        MR_Word check_hlds__det_analysis__V_53_53;
        MR_Word check_hlds__det_analysis__V_54_54;
        MR_Word check_hlds__det_analysis__CanFail_58;

        {
          check_hlds__det_analysis__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_58, &check_hlds__det_analysis__MaxSoln_25);
        }
        switch (check_hlds__det_analysis__CanFail_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may fail.";
            break;
          case (MR_Integer) 1:
            switch (check_hlds__det_analysis__MaxSoln_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
                    return;
                  }
                }
                break;
            }
            break;
        }
        {
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__First_26));
        }
        {
          check_hlds__det_analysis__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 0) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[105])));
        }
        {
          check_hlds__det_report__det_diagnose_conj_7_p_0(*check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, &check_hlds__det_analysis__GoalMsgs_29);
        }
        {
          parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_analysis__GoalMsgs_29, &check_hlds__det_analysis__SortedGoalMsgs_30);
        }
        {
          check_hlds__det_analysis__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_54_54, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_28));
        }
        {
          check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__Context_24));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
        }
        {
          check_hlds__det_analysis__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 0) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__det_analysis__V_50_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_51_51, check_hlds__det_analysis__SortedGoalMsgs_30);
        }
        {
          check_hlds__det_analysis__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 2) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
        }
        {
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
      }
    else
      {
        MR_Word check_hlds__det_analysis__TypeCtorInfo_49_49;
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Goal_24;
        MR_Word check_hlds__det_analysis__Goals_25;
        MR_Word check_hlds__det_analysis__InstMap1_33;
        MR_Word check_hlds__det_analysis__TailDetism_34;
        MR_Word check_hlds__det_analysis__TailCanFail_35;
        MR_Word check_hlds__det_analysis__HeadSolnContext_37;
        MR_Word check_hlds__det_analysis__HeadDetism_38;
        MR_Word check_hlds__det_analysis__GoalFailingContexts_39;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45;
        MR_Word check_hlds__det_analysis__V_46_46;
        MR_Word check_hlds__det_analysis___TailMaxSolns_36;

        {
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Goal0_22, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__InstMap1_33);
        }
        {
          check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__InstMap1_33, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_34, &check_hlds__det_analysis__TailCanFail_35, &check_hlds__det_analysis___TailMaxSolns_36);
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TailCanFail_35 == (MR_Integer) 1);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 1;
        else
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 0;
        check_hlds__det_analysis__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
        {
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__HeadVar__5_5);
        }
        {
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadSolnContext_37, check_hlds__det_analysis__V_46_46, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_38, &check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__det_analysis__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
        }
        {
          parse_tree__prog_detism__det_conjunction_detism_3_p_0(check_hlds__det_analysis__HeadDetism_38, check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__HeadVar__7_7);
        }
        {
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44);
        }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
  MR_Word check_hlds__det_analysis__GoalInfo_14,
  MR_Word check_hlds__det_analysis__InstMap0_15,
  MR_Word check_hlds__det_analysis__SolnContext_16,
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_analysis__Goal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__det_analysis__GoalExpr0_12), (MR_Integer) 0);
          MR_Word check_hlds__det_analysis__Goal_55;

          {
            check_hlds__det_analysis__det_infer_not_9_p_0(check_hlds__det_analysis__Goal0_54, &check_hlds__det_analysis__Goal_55, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
          *check_hlds__det_analysis__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__det_analysis__Goal_55);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_analysis__LHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word check_hlds__det_analysis__RHS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word check_hlds__det_analysis__Mode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word check_hlds__det_analysis__Unify_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word check_hlds__det_analysis__RHS_46;
          MR_Word check_hlds__det_analysis__UnifyContext_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

          {
            check_hlds__det_analysis__det_infer_unify_13_p_0(check_hlds__det_analysis__LHS_42, check_hlds__det_analysis__RHS0_43, check_hlds__det_analysis__Unify_45, check_hlds__det_analysis__UnifyContext_110, &check_hlds__det_analysis__RHS_46, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalExpr_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__RHS_46));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__det_analysis__Mode_44));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__det_analysis__Unify_45));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_110));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__det_analysis__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
          MR_Integer check_hlds__det_analysis__ProcId0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word check_hlds__det_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word check_hlds__det_analysis__Builtin_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
          MR_Word check_hlds__det_analysis__UnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
          MR_Word check_hlds__det_analysis__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
          MR_Integer check_hlds__det_analysis__ProcId_36;

          {
            check_hlds__det_analysis__det_infer_call_11_p_0(check_hlds__det_analysis__PredId_30, check_hlds__det_analysis__ProcId0_31, &check_hlds__det_analysis__ProcId_36, check_hlds__det_analysis__Args_32, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__det_analysis__GoalExpr_13 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_30));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_36));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__Args_32));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Builtin_33));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_34));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__Name_35));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__det_analysis__GenericCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__CallDetism_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
              MR_Word check_hlds__det_analysis___ArgVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis___Modes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word check_hlds__det_analysis___MaybArgRegs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

              {
                check_hlds__det_analysis__det_infer_generic_call_9_p_0(check_hlds__det_analysis__GenericCall_37, check_hlds__det_analysis__CallDetism_41, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__det_analysis__Attributes_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__PredId_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Integer check_hlds__det_analysis__ProcId_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word check_hlds__det_analysis___Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word check_hlds__det_analysis___ExtraArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
              MR_Word check_hlds__det_analysis___MaybeTraceRuntimeCond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 6)));
              MR_Word check_hlds__det_analysis__PragmaCode_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 7)));

              {
                check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(check_hlds__det_analysis__Attributes_57, check_hlds__det_analysis__PredId_113, check_hlds__det_analysis__ProcId_114, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__det_analysis__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis__Goals_24;

              switch (check_hlds__det_analysis__ConjType_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__det_analysis__det_infer_par_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ConjType_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goals_24));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__det_analysis__Goals0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__Goals_109;

              {
                check_hlds__det_analysis__det_infer_disj_11_p_0(check_hlds__det_analysis__Goals0_108, &check_hlds__det_analysis__Goals_109, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_109));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__det_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__SwitchCanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word check_hlds__det_analysis__Cases_29;

              {
                check_hlds__det_analysis__det_infer_switch_13_p_0(check_hlds__det_analysis__Var_25, check_hlds__det_analysis__SwitchCanFail_26, check_hlds__det_analysis__Cases0_27, &check_hlds__det_analysis__Cases_29, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Var_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__SwitchCanFail_26));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Cases_29));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__det_analysis__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis__Goal_112;

              {
                check_hlds__det_analysis__det_infer_scope_12_p_0(check_hlds__det_analysis__Reason_56, check_hlds__det_analysis__Goal0_111, &check_hlds__det_analysis__Goal_112, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Reason_56));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_112));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__det_analysis__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word check_hlds__det_analysis__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word check_hlds__det_analysis__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word check_hlds__det_analysis__Cond_51;
              MR_Word check_hlds__det_analysis__Then_52;
              MR_Word check_hlds__det_analysis__Else_53;

              {
                check_hlds__det_analysis__det_infer_if_then_else_14_p_0(check_hlds__det_analysis__Cond0_48, &check_hlds__det_analysis__Cond_51, check_hlds__det_analysis__Then0_49, &check_hlds__det_analysis__Then_52, check_hlds__det_analysis__Else0_50, &check_hlds__det_analysis__Else_53, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Vars_47));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Cond_51));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Then_52));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__det_analysis__Else_53));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__det_analysis__ShortHand0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word check_hlds__det_analysis__ShortHand_71;

              switch (MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__det_analysis__GoalType_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
                    MR_Word check_hlds__det_analysis__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
                    MR_Word check_hlds__det_analysis__Outer_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
                    MR_Word check_hlds__det_analysis__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 4)));
                    MR_Word check_hlds__det_analysis__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 5)));
                    MR_Word check_hlds__det_analysis__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 6)));
                    MR_Word check_hlds__det_analysis__MainGoal_69;
                    MR_Word check_hlds__det_analysis__OrElseGoals_70;
                    MR_Word check_hlds__det_analysis__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 3)));

                    {
                      check_hlds__det_analysis__det_infer_atomic_11_p_0(check_hlds__det_analysis__MainGoal0_66, &check_hlds__det_analysis__MainGoal_69, check_hlds__det_analysis__OrElseGoals0_67, &check_hlds__det_analysis__OrElseGoals_70, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
                    *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__GoalType_63));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__Inner_64));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__Outer_65));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_115));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 4) = ((MR_Box) (check_hlds__det_analysis__MainGoal_69));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 5) = ((MR_Box) (check_hlds__det_analysis__OrElseGoals_70));
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 6) = ((MR_Box) (check_hlds__det_analysis__OrElseInners_68));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__det_analysis__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
                    MR_Word check_hlds__det_analysis__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
                    MR_Word check_hlds__det_analysis__TryGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
                    MR_Word check_hlds__det_analysis__TryGoal_75;

                    {
                      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__TryGoal0_74, &check_hlds__det_analysis__TryGoal_75, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
                    {
                      check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__MaybeIO_72));
                      MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__ResultVar_73));
                      MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__TryGoal_75));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__GoalExpr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ShortHand_71));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__ConjGoal_2;
        MR_Word check_hlds__det_analysis__ConjGoals_3;
        MR_Word check_hlds__det_analysis__ConjGoalInfo_5;
        MR_Word check_hlds__det_analysis__ConjGoalDetism_6;
        MR_Word check_hlds__det_analysis__V_8_8;
        MR_Word check_hlds__det_analysis__V_9_9;
        MR_Word check_hlds__det_analysis__V_4_4;
        MR_Word check_hlds__det_analysis__V_7_7;

        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__ConjGoal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__det_analysis__ConjGoals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ConjGoal_2, (MR_Integer) 0)));
            check_hlds__det_analysis__ConjGoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ConjGoal_2, (MR_Integer) 1)));
            {
              check_hlds__det_analysis__ConjGoalDetism_6 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_analysis__ConjGoalInfo_5);
            }
            check_hlds__det_analysis__V_8_8 = (MR_Integer) 3;
            {
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ConjGoalDetism_6, &check_hlds__det_analysis__V_7_7, &check_hlds__det_analysis__V_9_9);
            }
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_8_8 == check_hlds__det_analysis__V_9_9);
            if (check_hlds__det_analysis__succeeded)
              check_hlds__det_analysis__succeeded = MR_TRUE;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__ConjGoals_3;

                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__det_analysis__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
  MR_Word check_hlds__det_analysis__Goal0_12,
  MR_Word * check_hlds__det_analysis__Goal_13,
  MR_Word check_hlds__det_analysis__InstMap0_14,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_52,
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
  MR_Word check_hlds__det_analysis__AddPruning_18,
  MR_Word * check_hlds__det_analysis__Detism_19,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_53,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_54)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 0)));
    MR_Word check_hlds__det_analysis__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 1)));
    MR_Word check_hlds__det_analysis__InstmapDelta_24;
    MR_Word check_hlds__det_analysis__Prune_29;
    MR_Word check_hlds__det_analysis__GoalExpr1_30;
    MR_Word check_hlds__det_analysis__InternalDetism0_31;
    MR_Word check_hlds__det_analysis__InternalCanFail_32;
    MR_Word check_hlds__det_analysis__InternalSolns0_33;
    MR_Word check_hlds__det_analysis__InternalSolns_34;
    MR_Word check_hlds__det_analysis__Solns_35;
    MR_Word check_hlds__det_analysis__GoalInfo_36;
    MR_Word check_hlds__det_analysis__FinalInternalSolns_44;
    MR_Word check_hlds__det_analysis__FinalInternalDetism_46;
    MR_Word check_hlds__det_analysis__GoalExpr_51;
    MR_Word check_hlds__det_analysis__ScopeReason_25;
    MR_Word check_hlds__det_analysis__V_26_26;
    MR_Word check_hlds__det_analysis__CondInfo_39;
    MR_Word check_hlds__det_analysis__CondDetism_42;
    MR_Word check_hlds__det_analysis__V_58_58;
    MR_Word check_hlds__det_analysis__V_59_59;
    MR_Word check_hlds__det_analysis__V_64_64;
    MR_Word check_hlds__det_analysis__V_37_37;
    MR_Word check_hlds__det_analysis__V_40_40;
    MR_Word check_hlds__det_analysis__V_41_41;
    MR_Word check_hlds__det_analysis__V_38_38;
    MR_Word check_hlds__det_analysis__V_43_43;
    MR_Word check_hlds__det_analysis__V_47_47;
    MR_Word check_hlds__det_analysis__V_48_48;
    MR_Word check_hlds__det_analysis__V_49_49;

    {
      check_hlds__det_analysis__InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_23);
    }
    check_hlds__det_analysis__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_analysis__ScopeReason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 1)));
        check_hlds__det_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 2)));
        if (((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word check_hlds__det_analysis__PromiseEqvSolnsKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));
            MR_Word check_hlds__det_analysis__V_55_55;
            MR_Word check_hlds__det_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)));

            switch (check_hlds__det_analysis__PromiseEqvSolnsKind_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__det_analysis__V_55_55 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                check_hlds__det_analysis__V_55_55 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                check_hlds__det_analysis__V_55_55 = (MR_Integer) 1;
                break;
            }
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_55_55 == (MR_Integer) 1);
          }
        else
        if (((((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
          {
            MR_Word check_hlds__det_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));

            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_56_56 == (MR_Integer) 0);
          }
        else
          check_hlds__det_analysis__succeeded = MR_FALSE;
      }
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__Prune_29 = (MR_Integer) 1;
    else
      check_hlds__det_analysis__Prune_29 = check_hlds__det_analysis__AddPruning_18;
    {
      check_hlds__det_analysis__det_infer_goal_expr_11_p_0(check_hlds__det_analysis__GoalExpr0_22, &check_hlds__det_analysis__GoalExpr1_30, check_hlds__det_analysis__GoalInfo0_23, check_hlds__det_analysis__InstMap0_14, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_52, check_hlds__det_analysis__RightFailingContexts_16, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17, &check_hlds__det_analysis__InternalDetism0_31, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_53, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_54);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InternalDetism0_31, &check_hlds__det_analysis__InternalCanFail_32, &check_hlds__det_analysis__InternalSolns0_33);
    }
    {
      check_hlds__det_analysis__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__det_analysis__InstmapDelta_24);
    }
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__InternalSolns_34 = (MR_Integer) 0;
    else
      check_hlds__det_analysis__InternalSolns_34 = check_hlds__det_analysis__InternalSolns0_33;
    switch (check_hlds__det_analysis__InternalSolns_34) {
      default:
        check_hlds__det_analysis__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        check_hlds__det_analysis__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        check_hlds__det_analysis__succeeded = MR_TRUE;
        break;
    }
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Prune_29 == (MR_Integer) 1);
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__Solns_35 = (MR_Integer) 1;
    else
      {
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_52 == (MR_Integer) 1);
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__Solns_35 = (MR_Integer) 2;
        else
          check_hlds__det_analysis__Solns_35 = check_hlds__det_analysis__InternalSolns_34;
      }
    {
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__Solns_35);
    }
    {
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(*check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__GoalInfo_36);
    }
    check_hlds__det_analysis__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
        check_hlds__det_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
        check_hlds__det_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 3)));
        check_hlds__det_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 4)));
        check_hlds__det_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_58_58, (MR_Integer) 0)));
        check_hlds__det_analysis__CondInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_58_58, (MR_Integer) 1)));
        {
          check_hlds__det_analysis__CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_analysis__CondInfo_39);
        }
        check_hlds__det_analysis__V_59_59 = (MR_Integer) 3;
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_42, &check_hlds__det_analysis__V_43_43, &check_hlds__det_analysis__V_64_64);
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_59_59 == check_hlds__det_analysis__V_64_64);
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 3);
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
          }
      }
    if (check_hlds__det_analysis__succeeded)
      check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
    else
      {
        MR_Word check_hlds__det_analysis__ConjGoals_45;
        MR_Word check_hlds__det_analysis__V_60_60;

        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 0);
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__det_analysis__succeeded)
              {
                check_hlds__det_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
                check_hlds__det_analysis__ConjGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
                check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_60_60 == (MR_Integer) 0);
                if (check_hlds__det_analysis__succeeded)
                  {
                    check_hlds__det_analysis__succeeded = check_hlds__det_analysis__some_goal_is_at_most_many_1_p_0(check_hlds__det_analysis__ConjGoals_45);
                  }
              }
          }
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
        else
          check_hlds__det_analysis__FinalInternalSolns_44 = check_hlds__det_analysis__InternalSolns_34;
      }
    {
      parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__FinalInternalDetism_46, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__FinalInternalSolns_44);
    }
    check_hlds__det_analysis__succeeded = (*check_hlds__det_analysis__Detism_19 == check_hlds__det_analysis__FinalInternalDetism_46);
    check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_analysis__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__det_analysis__succeeded)
          check_hlds__det_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (check_hlds__det_analysis__succeeded)
              {
                check_hlds__det_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
                check_hlds__det_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
              }
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
          }
      }
    if (check_hlds__det_analysis__succeeded)
      {
        MR_Word check_hlds__det_analysis__InnerInfo_50;
        MR_Word check_hlds__det_analysis__V_63_63;

        {
          hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__det_analysis__FinalInternalDetism_46, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__InnerInfo_50);
        }
        {
          check_hlds__det_analysis__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_63_63, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr1_30));
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_63_63, 1) = ((MR_Box) (check_hlds__det_analysis__InnerInfo_50));
        }
        {
          check_hlds__det_analysis__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103])));
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_51, 2) = ((MR_Box) (check_hlds__det_analysis__V_63_63));
        }
      }
    else
      check_hlds__det_analysis__GoalExpr_51 = check_hlds__det_analysis__GoalExpr1_30;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__det_analysis__Goal_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalInfo_36));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__PredId_7,
  MR_Integer check_hlds__det_analysis__ProcId_8,
  MR_Word * check_hlds__det_analysis__Context_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__det_analysis__Proc_5;
        MR_Word check_hlds__det_analysis__Procs_6;
        MR_Word check_hlds__det_analysis__Context0_12;
        MR_Word check_hlds__det_analysis__V_13_13;
        MR_Integer check_hlds__det_analysis__V_14_14;
        MR_Word check_hlds__det_analysis__V_10_10;
        MR_String check_hlds__det_analysis__V_11_11;

        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__det_analysis__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__det_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 0)));
            check_hlds__det_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 1)));
            check_hlds__det_analysis__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 2)));
            check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 3)));
            check_hlds__det_analysis__Context0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 4)));
            {
              check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__PredId_7, check_hlds__det_analysis__V_13_13);
            }
            if (check_hlds__det_analysis__succeeded)
              check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_8 == check_hlds__det_analysis__V_14_14);
            if (check_hlds__det_analysis__succeeded)
              {
                *check_hlds__det_analysis__Context_9 = check_hlds__det_analysis__Context0_12;
                check_hlds__det_analysis__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Procs_6;

                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__det_analysis__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_165_165 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_165_165);
    {
      check_hlds__det_analysis__det_infer_proc_8_p_0_2(check_hlds__det_analysis__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    {
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_126_126, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_165_165);
    }
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
      {
        switch (*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13)) {
          default:
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
          {
            check_hlds__det_analysis__det_infer_proc_8_p_0_1(check_hlds__det_analysis__env_ptr);
          }
      }
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
  void * check_hlds__det_analysis__env_ptr_arg)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word check_hlds__det_analysis__V_56_56;
          MR_String check_hlds__det_analysis__V_57_57;
          MR_Word check_hlds__det_analysis__V_58_58;

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_126_126 = base;
            MR_hl_field(MR_mktag(0), base, 0) = NULL;
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
            MR_hl_field(MR_mktag(0), base, 3) = NULL;
            MR_hl_field(MR_mktag(0), base, 4) = NULL;
          }
          {
            mercury__list__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_164_164, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_165_165, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_54, check_hlds__det_analysis__det_infer_proc_8_p_0_3, check_hlds__det_analysis__env_ptr);
          }
        }
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
  MR_Word check_hlds__det_analysis__PredId_9,
  MR_Integer check_hlds__det_analysis__ProcId_10,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_72,
  MR_Word * check_hlds__det_analysis__OldDetism_12,
  MR_Word * check_hlds__det_analysis__NewDetism_13,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_73,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_74)
{
  {
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s check_hlds__det_analysis__env;

    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9 = check_hlds__det_analysis__PredId_9;
    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10 = check_hlds__det_analysis__ProcId_10;
    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13 = check_hlds__det_analysis__NewDetism_13;
    {
      MR_Word check_hlds__det_analysis__TypeCtorInfo_159_159;
      MR_Word check_hlds__det_analysis__TypeCtorInfo_160_160;
      MR_Word check_hlds__det_analysis__TypeCtorInfo_162_162;
      MR_Word check_hlds__det_analysis__PredTable0_15;
      MR_Word check_hlds__det_analysis__PredInfo0_16;
      MR_Word check_hlds__det_analysis__ProcTable0_17;
      MR_Word check_hlds__det_analysis__ProcInfo0_18;
      MR_Word check_hlds__det_analysis__OldInferredSolnContext_19;
      MR_Word check_hlds__det_analysis__MaybeDeclaredDetism_20;
      MR_Word check_hlds__det_analysis__DeclaredSolnContext_22;
      MR_Word check_hlds__det_analysis__SolnContext_23;
      MR_Word check_hlds__det_analysis__Goal0_25;
      MR_Word check_hlds__det_analysis__InstMap0_26;
      MR_Word check_hlds__det_analysis__VarSet_27;
      MR_Word check_hlds__det_analysis__VarTypes_28;
      MR_Word check_hlds__det_analysis__DetInfo0_29;
      MR_Word check_hlds__det_analysis__Goal_30;
      MR_Word check_hlds__det_analysis__InferDetism_31;
      MR_Word check_hlds__det_analysis__DetInfo_33;
      MR_Word check_hlds__det_analysis__HasFormatCalls_34;
      MR_Word check_hlds__det_analysis__HasRequireScope_35;
      MR_Word check_hlds__det_analysis__OldCanFail_36;
      MR_Word check_hlds__det_analysis__OldMaxSoln_37;
      MR_Word check_hlds__det_analysis__InferCanFail_38;
      MR_Word check_hlds__det_analysis__InferMaxSoln_39;
      MR_Word check_hlds__det_analysis__CanFail_40;
      MR_Word check_hlds__det_analysis__MaxSoln_41;
      MR_Word check_hlds__det_analysis__TentativeDetism_42;
      MR_Word check_hlds__det_analysis__EvalMethod_43;
      MR_Word check_hlds__det_analysis__ExportedProcsCord0_53;
      MR_Word check_hlds__det_analysis__ExportedProcsCord_55;
      MR_Word check_hlds__det_analysis__ProcInfo1_62;
      MR_Word check_hlds__det_analysis__ProcInfo_63;
      MR_Word check_hlds__det_analysis__ProcTable_64;
      MR_Word check_hlds__det_analysis__PredInfo1_65;
      MR_Word check_hlds__det_analysis__Markers1_66;
      MR_Word check_hlds__det_analysis__Markers2_67;
      MR_Word check_hlds__det_analysis__Markers_68;
      MR_Word check_hlds__det_analysis__PredInfo_69;
      MR_Word check_hlds__det_analysis__PredTable_70;
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86;
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_87_87;
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124;
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_125_125;
      MR_Box check_hlds__det_analysis__conv0_PredInfo0_16;
      MR_Box check_hlds__det_analysis__conv1_ProcInfo0_18;
      MR_Word check_hlds__det_analysis__V_32_32;
      MR_Word check_hlds__det_analysis__ToBeCheckedDetism_46;
      MR_Word check_hlds__det_analysis__ToBeCheckedCodeModel_47;
      MR_Integer check_hlds__det_analysis___InArg_44;
      MR_Integer check_hlds__det_analysis___OutArg_45;

      {
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_71, &check_hlds__det_analysis__PredTable0_15);
      }
      check_hlds__det_analysis__TypeCtorInfo_159_159 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      check_hlds__det_analysis__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      {
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_159_159, check_hlds__det_analysis__TypeCtorInfo_160_160, check_hlds__det_analysis__PredTable0_15, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), &check_hlds__det_analysis__conv0_PredInfo0_16);
      }
      check_hlds__det_analysis__PredInfo0_16 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo0_16);
      {
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__ProcTable0_17);
      }
      check_hlds__det_analysis__TypeCtorInfo_162_162 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__det_analysis__TypeCtorInfo_162_162, check_hlds__det_analysis__ProcTable0_17, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &check_hlds__det_analysis__conv1_ProcInfo0_18);
      }
      check_hlds__det_analysis__ProcInfo0_18 = ((MR_Word) check_hlds__det_analysis__conv1_ProcInfo0_18);
      {
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__OldDetism_12);
      }
      {
        check_hlds__det_analysis__det_get_soln_context_2_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldInferredSolnContext_19);
      }
      {
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__MaybeDeclaredDetism_20);
      }
      if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        check_hlds__det_analysis__DeclaredSolnContext_22 = (MR_Integer) 0;
      else
        {
          MR_Word check_hlds__det_analysis__DeclaredDetism_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));

          {
            check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__det_analysis__DeclaredDetism_21, &check_hlds__det_analysis__DeclaredSolnContext_22);
          }
        }
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__DeclaredSolnContext_22 == (MR_Integer) 1);
      if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded))
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__OldInferredSolnContext_19 == (MR_Integer) 1);
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 1;
      else
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 0;
      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__Goal0_25);
      }
      {
        hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_71, &check_hlds__det_analysis__InstMap0_26);
      }
      {
        hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__VarSet_27);
      }
      {
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__VarTypes_28);
      }
      {
        check_hlds__det_util__det_info_init_8_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_71, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, check_hlds__det_analysis__VarSet_27, check_hlds__det_analysis__VarTypes_28, (MR_Integer) 0, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_73, &check_hlds__det_analysis__DetInfo0_29);
      }
      {
        check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_25, &check_hlds__det_analysis__Goal_30, check_hlds__det_analysis__InstMap0_26, check_hlds__det_analysis__SolnContext_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__InferDetism_31, &check_hlds__det_analysis__V_32_32, check_hlds__det_analysis__DetInfo0_29, &check_hlds__det_analysis__DetInfo_33);
      }
      {
        check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_33, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86);
      }
      {
        check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_analysis__DetInfo_33, &check_hlds__det_analysis__STATE_VARIABLE_Specs_87_87);
      }
      {
        check_hlds__det_util__det_info_get_has_format_call_2_p_0(check_hlds__det_analysis__DetInfo_33, &check_hlds__det_analysis__HasFormatCalls_34);
      }
      {
        check_hlds__det_util__det_info_get_has_req_scope_2_p_0(check_hlds__det_analysis__DetInfo_33, &check_hlds__det_analysis__HasRequireScope_35);
      }
      {
        parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldCanFail_36, &check_hlds__det_analysis__OldMaxSoln_37);
      }
      {
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InferDetism_31, &check_hlds__det_analysis__InferCanFail_38, &check_hlds__det_analysis__InferMaxSoln_39);
      }
      {
        parse_tree__prog_detism__det_switch_canfail_3_p_0(check_hlds__det_analysis__OldCanFail_36, check_hlds__det_analysis__InferCanFail_38, &check_hlds__det_analysis__CanFail_40);
      }
      {
        parse_tree__prog_detism__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__OldMaxSoln_37, check_hlds__det_analysis__InferMaxSoln_39, &check_hlds__det_analysis__MaxSoln_41);
      }
      {
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__TentativeDetism_42, check_hlds__det_analysis__CanFail_40, check_hlds__det_analysis__MaxSoln_41);
      }
      {
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__EvalMethod_43);
      }
      {
        *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) = hlds__hlds_pred__eval_method_change_determinism_2_f_0(check_hlds__det_analysis__EvalMethod_43, check_hlds__det_analysis__TentativeDetism_42);
      }
      {
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis___InArg_44, &check_hlds__det_analysis___OutArg_45);
      }
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        {
          if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__det_analysis__ToBeCheckedDetism_46 = *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13);
          else
            check_hlds__det_analysis__ToBeCheckedDetism_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));
          {
            hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__det_analysis__ToBeCheckedDetism_46, &check_hlds__det_analysis__ToBeCheckedCodeModel_47);
          }
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__ToBeCheckedCodeModel_47 == (MR_Integer) 0);
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded);
        }
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        {
          MR_Word check_hlds__det_analysis__TypeCtorInfo_163_163;
          MR_Word check_hlds__det_analysis__ProcContext_48;
          MR_Word check_hlds__det_analysis__IOStateProcPieces_49;
          MR_Word check_hlds__det_analysis__IOStatePieces_50;
          MR_Word check_hlds__det_analysis__IOStateSpec_52;
          MR_Word check_hlds__det_analysis__V_89_89;
          MR_Word check_hlds__det_analysis__V_94_94;
          MR_Word check_hlds__det_analysis__V_115_115;
          MR_Word check_hlds__det_analysis__V_116_116;
          MR_Word check_hlds__det_analysis__V_117_117;
          MR_Word check_hlds__det_analysis__V_118_118;

          {
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcContext_48);
          }
          {
            check_hlds__det_analysis__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_89_89, 0) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_89_89, 1) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
          }
          {
            check_hlds__det_analysis__IOStateProcPieces_49 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86, (MR_Integer) 1, check_hlds__det_analysis__V_89_89);
          }
          check_hlds__det_analysis__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            check_hlds__det_analysis__V_94_94 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_163_163, check_hlds__det_analysis__IOStateProcPieces_49, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[9]));
          }
          {
            check_hlds__det_analysis__IOStatePieces_50 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_163_163, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[96]), check_hlds__det_analysis__V_94_94);
          }
          {
            check_hlds__det_analysis__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_118_118, 0) = ((MR_Box) (check_hlds__det_analysis__IOStatePieces_50));
          }
          {
            check_hlds__det_analysis__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 0) = ((MR_Box) (check_hlds__det_analysis__V_118_118));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[98])));
          }
          {
            check_hlds__det_analysis__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_116_116, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_48));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_116_116, 1) = ((MR_Box) (check_hlds__det_analysis__V_117_117));
          }
          {
            check_hlds__det_analysis__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_115_115, 0) = ((MR_Box) (check_hlds__det_analysis__V_116_116));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__det_analysis__IOStateSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_52, 2) = ((MR_Box) (check_hlds__det_analysis__V_115_115));
          }
          {
            check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124, 0) = ((MR_Box) (check_hlds__det_analysis__IOStateSpec_52));
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_87_87));
          }
        }
      else
        check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124 = check_hlds__det_analysis__STATE_VARIABLE_Specs_87_87;
      {
        hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86, &check_hlds__det_analysis__ExportedProcsCord0_53);
      }
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_164_164 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
      {
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_54 = mercury__cord__list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_164_164, check_hlds__det_analysis__ExportedProcsCord0_53);
      }
      {
        check_hlds__det_analysis__ExportedProcsCord_55 = mercury__cord__from_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_164_164, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_54);
      }
      {
        hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(check_hlds__det_analysis__ExportedProcsCord_55, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_86_86, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_125_125);
      }
      {
        check_hlds__det_analysis__det_infer_proc_8_p_0_4(&check_hlds__det_analysis__env);
      }
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
        {
          MR_Word check_hlds__det_analysis__PragmaContext_59;

          {
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis__get_exported_proc_context_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_54, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &check_hlds__det_analysis__PragmaContext_59);
          }
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
            {
              MR_Word check_hlds__det_analysis__ExportPieces_60;
              MR_Word check_hlds__det_analysis__ExportSpec_61;
              MR_Word check_hlds__det_analysis__V_129_129;
              MR_Word check_hlds__det_analysis__V_132_132;
              MR_Word check_hlds__det_analysis__V_135_135;
              MR_Word check_hlds__det_analysis__V_138_138;
              MR_Word check_hlds__det_analysis__V_139_139;
              MR_String check_hlds__det_analysis__V_140_140;
              MR_String check_hlds__det_analysis__V_141_141;
              MR_Word check_hlds__det_analysis__V_146_146;
              MR_Word check_hlds__det_analysis__V_147_147;
              MR_Word check_hlds__det_analysis__V_148_148;
              MR_Word check_hlds__det_analysis__V_149_149;

              {
                check_hlds__det_analysis__V_141_141 = parse_tree__prog_out__determinism_to_string_1_f_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13));
              }
              {
                check_hlds__det_analysis__V_140_140 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__V_141_141, (MR_String) ".");
              }
              {
                check_hlds__det_analysis__V_139_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_139_139, 0) = ((MR_Box) (check_hlds__det_analysis__V_140_140));
              }
              {
                check_hlds__det_analysis__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 0) = ((MR_Box) (check_hlds__det_analysis__V_139_139));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[102])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__V_138_138));
              }
              {
                check_hlds__det_analysis__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_132_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[101])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_132_132, 1) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
              }
              {
                check_hlds__det_analysis__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[100])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 1) = ((MR_Box) (check_hlds__det_analysis__V_132_132));
              }
              {
                check_hlds__det_analysis__ExportPieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[99])));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_60, 1) = ((MR_Box) (check_hlds__det_analysis__V_129_129));
              }
              {
                check_hlds__det_analysis__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_149_149, 0) = ((MR_Box) (check_hlds__det_analysis__ExportPieces_60));
              }
              {
                check_hlds__det_analysis__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_148_148, 0) = ((MR_Box) (check_hlds__det_analysis__V_149_149));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_147_147, 0) = ((MR_Box) (check_hlds__det_analysis__PragmaContext_59));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_147_147, 1) = ((MR_Box) (check_hlds__det_analysis__V_148_148));
              }
              {
                check_hlds__det_analysis__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_146_146, 0) = ((MR_Box) (check_hlds__det_analysis__V_147_147));
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__det_analysis__ExportSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_61, 2) = ((MR_Box) (check_hlds__det_analysis__V_146_146));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__det_analysis__STATE_VARIABLE_Specs_74 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__ExportSpec_61));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124));
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_proc\'/8", (MR_String) "Cannot find proc in table of pragma foreign_exported procs");
                return;
              }
            }
        }
      else
        *check_hlds__det_analysis__STATE_VARIABLE_Specs_74 = check_hlds__det_analysis__STATE_VARIABLE_Specs_124_124;
      {
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__det_analysis__Goal_30, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcInfo1_62);
      }
      {
        hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13), check_hlds__det_analysis__ProcInfo1_62, &check_hlds__det_analysis__ProcInfo_63);
      }
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__det_analysis__TypeCtorInfo_162_162, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, ((MR_Box) (check_hlds__det_analysis__ProcInfo_63)), check_hlds__det_analysis__ProcTable0_17, &check_hlds__det_analysis__ProcTable_64);
      }
      {
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__det_analysis__ProcTable_64, check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__PredInfo1_65);
      }
      {
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__PredInfo1_65, &check_hlds__det_analysis__Markers1_66);
      }
      switch (check_hlds__det_analysis__HasFormatCalls_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            {
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 25, check_hlds__det_analysis__Markers1_66, &check_hlds__det_analysis__Markers2_67);
            }
          }
          break;
        case (MR_Integer) 0:
          check_hlds__det_analysis__Markers2_67 = check_hlds__det_analysis__Markers1_66;
          break;
      }
      switch (check_hlds__det_analysis__HasRequireScope_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            {
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, check_hlds__det_analysis__Markers2_67, &check_hlds__det_analysis__Markers_68);
            }
          }
          break;
        case (MR_Integer) 0:
          check_hlds__det_analysis__Markers_68 = check_hlds__det_analysis__Markers2_67;
          break;
      }
      {
        hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__det_analysis__Markers_68, check_hlds__det_analysis__PredInfo1_65, &check_hlds__det_analysis__PredInfo_69);
      }
      {
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_159_159, check_hlds__det_analysis__TypeCtorInfo_160_160, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), ((MR_Box) (check_hlds__det_analysis__PredInfo_69)), check_hlds__det_analysis__PredTable0_15, &check_hlds__det_analysis__PredTable_70);
      }
      {
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__det_analysis__PredTable_70, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_125_125, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_72);
      }
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
  MR_Word check_hlds__det_analysis__Debug_2,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded;

        if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_analysis__STATE_VARIABLE_Changed_8 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
            *check_hlds__det_analysis__STATE_VARIABLE_Specs_6 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5;
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3;
          }
        else
          {
            MR_Word check_hlds__det_analysis__PredId_19;
            MR_Integer check_hlds__det_analysis__ProcId_20;
            MR_Word check_hlds__det_analysis__PredProcs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_analysis__OldDetism_26;
            MR_Word check_hlds__det_analysis__NewDetism_27;
            MR_String check_hlds__det_analysis__ChangeStr_28;
            MR_Word check_hlds__det_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

            check_hlds__det_analysis__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 0)));
            check_hlds__det_analysis__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 1)));
            {
              check_hlds__det_analysis__det_infer_proc_8_p_0(check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__det_analysis__OldDetism_26, &check_hlds__det_analysis__NewDetism_27, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38);
            }
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NewDetism_27 == check_hlds__det_analysis__OldDetism_26);
            if (check_hlds__det_analysis__succeeded)
              {
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "old";
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
              }
            else
              {
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "new";
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 0;
              }
            switch (check_hlds__det_analysis__Debug_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String check_hlds__det_analysis__V_41_41;
                  MR_String check_hlds__det_analysis__V_44_44;

                  {
                    check_hlds__det_analysis__V_44_44 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__ChangeStr_28, (MR_String) " detism ");
                  }
                  {
                    check_hlds__det_analysis__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "% Inferred ", check_hlds__det_analysis__V_44_44);
                  }
                  {
                    mercury__io__write_string_3_p_0(check_hlds__det_analysis__V_41_41);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(check_hlds__det_analysis__NewDetism_27);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__PredProcs_21;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

              check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7;
              check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
  MR_Word check_hlds__det_analysis__ProcList_7,
  MR_Word check_hlds__det_analysis__Debug_8,
  MR_Word * check_hlds__det_analysis__Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_analysis__succeeded;
        MR_Word check_hlds__det_analysis__Specs1_10;
        MR_Word check_hlds__det_analysis__Changed_11;
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

        {
          check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__ProcList_7, check_hlds__det_analysis__Debug_8, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Specs1_10, (MR_Integer) 1, &check_hlds__det_analysis__Changed_11);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Debug_8, (MR_String) "% Inference pass complete\n");
        }
        switch (check_hlds__det_analysis__Changed_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

                check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__det_analysis__Specs_9 = check_hlds__det_analysis__Specs1_10;
              *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
check_hlds__det_analysis__det_get_soln_context_2_p_0(
  MR_Word check_hlds__det_analysis__DeclaredDetism_3,
  MR_Word * check_hlds__det_analysis__SolnContext_4)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__V_7_7;
    MR_Word check_hlds__det_analysis__V_5_5;

    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__DeclaredDetism_3, &check_hlds__det_analysis__V_5_5, &check_hlds__det_analysis__V_7_7);
    }
    check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_7_7);
    if (check_hlds__det_analysis__succeeded)
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 1;
    else
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
check_hlds__det_analysis__det_infer_goal_10_p_0(
  MR_Word check_hlds__det_analysis__Goal0_11,
  MR_Word * check_hlds__det_analysis__Goal_12,
  MR_Word check_hlds__det_analysis__InstMap0_13,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26,
  MR_Word check_hlds__det_analysis__RightFailingContexts_15,
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16,
  MR_Word * check_hlds__det_analysis__Detism_17,
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_18,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 1)));
    MR_Word check_hlds__det_analysis__NonLocalVars_22;
    MR_Word check_hlds__det_analysis__InstmapDelta_23;
    MR_Word check_hlds__det_analysis__AddPruning_25;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30;
    MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 0)));
    MR_Word check_hlds__det_analysis__Purity_24;
    MR_Word check_hlds__det_analysis__V_29_29;

    {
      check_hlds__det_analysis__NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
    {
      check_hlds__det_analysis__InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
    {
      check_hlds__det_analysis__succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__InstmapDelta_23, check_hlds__det_analysis__NonLocalVars_22);
    }
    if (check_hlds__det_analysis__succeeded)
      {
        {
          check_hlds__det_analysis__Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
        }
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Purity_24 == (MR_Integer) 2);
        if (check_hlds__det_analysis__succeeded)
          {
            check_hlds__det_analysis__V_29_29 = (MR_Integer) 2;
            {
              check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo0_21, check_hlds__det_analysis__V_29_29);
            }
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
          }
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
      }
    if (check_hlds__det_analysis__succeeded)
      {
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 1;
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = (MR_Integer) 1;
      }
    else
      {
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 0;
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26;
      }
    {
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__Goal0_11, check_hlds__det_analysis__Goal_12, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30, check_hlds__det_analysis__RightFailingContexts_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16, check_hlds__det_analysis__AddPruning_25, check_hlds__det_analysis__Detism_17, check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
    }
  }
}

void MR_CALL 
check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(
  MR_Word check_hlds__det_analysis__PredId_5,
  MR_Integer check_hlds__det_analysis__ProcId_6,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis___OldDetism_8;
    MR_Word check_hlds__det_analysis___NewDetism_9;
    MR_Word check_hlds__det_analysis___Specs_10;

    {
      check_hlds__det_analysis__det_infer_proc_8_p_0(check_hlds__det_analysis__PredId_5, check_hlds__det_analysis__ProcId_6, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_12, &check_hlds__det_analysis___OldDetism_8, &check_hlds__det_analysis___NewDetism_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis___Specs_10);
    }
  }
}

void MR_CALL 
check_hlds__det_analysis__determinism_check_proc_5_p_0(
  MR_Integer check_hlds__det_analysis__ProcId_6,
  MR_Word check_hlds__det_analysis__PredId_7,
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13,
  MR_Word * check_hlds__det_analysis__Specs_9)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__Globals_10;
    MR_Word check_hlds__det_analysis__Debug_11;
    MR_Word check_hlds__det_analysis__V_17_17;
    MR_Word check_hlds__det_analysis__V_18_18;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31;
    MR_Word check_hlds__det_analysis__V_33_33;
    MR_Word check_hlds__det_analysis__V_28_28;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 68, &check_hlds__det_analysis__Debug_11);
    }
    {
      check_hlds__det_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_7));
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_6));
    }
    {
      check_hlds__det_analysis__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 0) = ((MR_Box) (check_hlds__det_analysis__V_18_18));
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__V_17_17, check_hlds__det_analysis__Debug_11, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, (MR_Integer) 1, &check_hlds__det_analysis__V_28_28);
    }
    {
      check_hlds__det_analysis__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__V_17_17);
    }
    {
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_33_33, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, check_hlds__det_analysis__Specs_9);
    }
  }
}

static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
  MR_Box check_hlds__det_analysis__closure_arg,
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
  MR_Box * check_hlds__det_analysis__wrapper_arg_3)
{
  {
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
    MR_Word check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

    {
      check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), &check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
    *check_hlds__det_analysis__wrapper_arg_3 = ((MR_Box) (check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
  }
}

void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0(
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19,
  MR_Word * check_hlds__det_analysis__Specs_5)
{
  {
    MR_bool check_hlds__det_analysis__succeeded;
    MR_Word check_hlds__det_analysis__PredIds_6;
    MR_Word check_hlds__det_analysis__DeclaredProcs_7;
    MR_Word check_hlds__det_analysis__UndeclaredProcs_8;
    MR_Word check_hlds__det_analysis__NoInferProcs_9;
    MR_Word check_hlds__det_analysis__Globals_10;
    MR_Word check_hlds__det_analysis__Verbose_11;
    MR_Word check_hlds__det_analysis__Debug_12;
    MR_Word check_hlds__det_analysis__InferenceSpecs_13;
    MR_Word check_hlds__det_analysis__FinalSpecs_17;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word check_hlds__det_analysis__PredTable_49;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62;
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64;
    MR_Word check_hlds__det_analysis__V_66_66;
    MR_Box check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word check_hlds__det_analysis__V_61_61;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__PredIds_6);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__PredTable_49);
    }
    {
      check_hlds__det_analysis__determinism_declarations_preds_8_p_0(check_hlds__det_analysis__PredTable_49, check_hlds__det_analysis__PredIds_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__DeclaredProcs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__UndeclaredProcs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__NoInferProcs_9);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__det_analysis_scalar_common_4[0], check_hlds__det_analysis__NoInferProcs_9, ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18)), &check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21);
    }
    check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21);
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__det_analysis__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 47, &check_hlds__det_analysis__Verbose_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 68, &check_hlds__det_analysis__Debug_12);
    }
    if ((check_hlds__det_analysis__UndeclaredProcs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__det_analysis__InferenceSpecs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21;
      }
    else
      {
        {
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism inference...\n");
        }
        {
          check_hlds__det_analysis__global_inference_pass_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__Debug_12, &check_hlds__det_analysis__InferenceSpecs_13);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
        }
      }
    {
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism checking...\n");
    }
    {
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__DeclaredProcs_7, check_hlds__det_analysis__Debug_12, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64, (MR_Integer) 1, &check_hlds__det_analysis__V_61_61);
    }
    {
      check_hlds__det_analysis__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__DeclaredProcs_7);
    }
    {
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_66_66, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64, &check_hlds__det_analysis__FinalSpecs_17);
    }
    {
      *check_hlds__det_analysis__Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_analysis__InferenceSpecs_13, check_hlds__det_analysis__FinalSpecs_17);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
    }
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

/* :- end_module check_hlds.det_analysis. */
