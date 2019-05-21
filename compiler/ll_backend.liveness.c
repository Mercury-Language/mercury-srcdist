/*
** Automatically generated from `liveness.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module ll_backend.liveness. */
/* :- implementation. */

/*
INIT mercury__ll_backend__liveness__init
ENDINIT
*/

#include "ll_backend.liveness.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[5];

static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1];

static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1];

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1];

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
  MR_Word * ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
  MR_Word ll_backend__liveness__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word ll_backend__liveness__VarSet_3,
  MR_Word ll_backend__liveness__Var_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_6,
  MR_Word ll_backend__liveness__PredId_7,
  MR_Integer ll_backend__liveness__ProcId_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_PredInfo_13);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box * ll_backend__liveness__wrapper_arg_3);

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_4,
  MR_Word ll_backend__liveness__PredId_5,
  MR_Word * ll_backend__liveness__PredInfo_6);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3,
  MR_Box * ll_backend__liveness__wrapper_arg_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box * ll_backend__liveness__wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3,
  MR_Box * ll_backend__liveness__wrapper_arg_4);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box * ll_backend__liveness__wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
  MR_Word ll_backend__liveness__PredIds_5,
  MR_Word ll_backend__liveness__HLDS0_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_10,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_11);

static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__PredId_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_41);

static void MR_CALL 
ll_backend__liveness__live_info_init_6_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_7,
  MR_Word ll_backend__liveness__TypeInfoLiveness_8,
  MR_Word ll_backend__liveness__VarSet_9,
  MR_Word ll_backend__liveness__VarTypes_10,
  MR_Word ll_backend__liveness__RttiVarMaps_11,
  MR_Word * ll_backend__liveness__LiveInfo_12);

static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__ProcInfo_6,
  MR_Word ll_backend__liveness__LiveInfo_7,
  MR_Word * ll_backend__liveness__Deadness_8);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6,
  MR_Word * ll_backend__liveness__Needed_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__Liveness0_3,
  MR_Word * ll_backend__liveness__Liveness_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6,
  MR_Word * ll_backend__liveness__Needed_7);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6);

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_85,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_86,
  MR_Word ll_backend__liveness__LiveInfo_10,
  MR_Word ll_backend__liveness__ResumeVars0_11);

static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
  MR_Word ll_backend__liveness__LivenessFirst_5,
  MR_Word ll_backend__liveness__LivenessRest_6,
  MR_String ll_backend__liveness__GoalType_7,
  MR_Word ll_backend__liveness__LiveInfo_8);

static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
  MR_Word ll_backend__liveness__Goal0_5,
  MR_Word * ll_backend__liveness__Goal_6,
  MR_Word ll_backend__liveness__VarSet_7,
  MR_Word ll_backend__liveness__BornVars0_8);

static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__BornVars0_3,
  MR_Word ll_backend__liveness__DelayedDead0_4,
  MR_Word ll_backend__liveness__VarSet_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__BornVars0_3,
  MR_Word ll_backend__liveness__DelayedDead0_4,
  MR_Word ll_backend__liveness__VarSet_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__VarSet_7);

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_4,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_6,
  MR_Word ll_backend__liveness__VarSet_7);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalExpr_73,
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalInfo_75,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_76,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_77,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_79,
  MR_Word ll_backend__liveness__VarSet_14);

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1);

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word ll_backend__liveness__Goal0_8,
  MR_Word * ll_backend__liveness__Goal_9,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_30,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_31,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_33,
  MR_Word ll_backend__liveness__VarSet_12);

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
  MR_Word ll_backend__liveness__HeadVar__2_2);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
  MR_Word ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
  MR_Word ll_backend__liveness__SwitchVar_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word * ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__CompletedNonLocals_6,
  MR_Word ll_backend__liveness__LiveInfo_7,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_8,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_9,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_10);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
  MR_Word ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_4,
  MR_Word ll_backend__liveness__Liveness0_5,
  MR_Word ll_backend__liveness__HeadVar__6_6);

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_105,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_106,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_107,
  MR_Word ll_backend__liveness__LiveInfo_11);

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word ll_backend__liveness__LiveInfo_4,
  MR_Word ll_backend__liveness__Vars0_5,
  MR_Word * ll_backend__liveness__Vars_6);

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
  MR_Word ll_backend__liveness__DeadnessGoal_6,
  MR_Word ll_backend__liveness__Deadness0_7,
  MR_Word ll_backend__liveness__InstmapReachable_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_11,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_12);

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
  MR_Word ll_backend__liveness__DeadnessGoal_7,
  MR_Word ll_backend__liveness__Deadness0_8,
  MR_Word ll_backend__liveness__CompletedNonLocalUnion_9,
  MR_Word ll_backend__liveness__InstmapReachable_10,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Goal_0_14,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Goal_15);

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__LiveInfo_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4);

static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
  MR_Word ll_backend__liveness__GoalExpr_5,
  MR_Word ll_backend__liveness__LiveInfo_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_55,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_56);

static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word ll_backend__liveness__Goal_5,
  MR_Word ll_backend__liveness__LiveInfo_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_20,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_21);

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__ReachableGoal_7);

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__ReachableGoal_5);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__liveness__HeadVar__5_5);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word ll_backend__liveness__Goal0_6,
  MR_Word * ll_backend__liveness__Goal_7,
  MR_Word ll_backend__liveness__Liveness0_8,
  MR_Word * ll_backend__liveness__FinalLiveness_9,
  MR_Word ll_backend__liveness__LiveInfo_10);

static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__GoalInfo_6,
  MR_Word * ll_backend__liveness__NonLocals_7,
  MR_Word * ll_backend__liveness__CompletedNonLocals_8);

static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__LiveInfo_2,
  MR_Word ll_backend__liveness__InstMapDelta_3,
  MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ValueVars_5);

static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
  MR_Word ll_backend__liveness__Goal0_4,
  MR_Word ll_backend__liveness__Residue_5,
  MR_Word * ll_backend__liveness__Goal_6);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_25,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_26,
  MR_Word ll_backend__liveness__LiveInfo_10,
  MR_Word ll_backend__liveness__TermVar_11);

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4);

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_9,
  MR_String ll_backend__liveness__Message_10,
  MR_Integer ll_backend__liveness__DebugLiveness_11,
  MR_Integer ll_backend__liveness__PredIdInt_12,
  MR_Word ll_backend__liveness__VarSet_13,
  MR_Word ll_backend__liveness__Goal_14);

static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_5,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_6);

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2);

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[3][6];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][8];




static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_5[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0,
    (MR_PseudoTypeInfo) &ll_backend__liveness__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[5] = {
  (MR_String) "li_module_info",
  (MR_String) "li_typeinfo_liveness",
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_rtti_varmaps"
};

static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0 = {
  (MR_String) "live_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0,
  ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__liveness____Unify____live_info_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____live_info_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "live_info",
  {     ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0 },
  {     ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0
};

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
  MR_Word * ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Integer ll_backend__liveness__CastX_18 = (MR_Integer) ll_backend__liveness__HeadVar__2_2;
    MR_Integer ll_backend__liveness__CastY_19 = (MR_Integer) ll_backend__liveness__HeadVar__3_3;

    ll_backend__liveness__succeeded = (ll_backend__liveness__CastX_18 == ll_backend__liveness__CastY_19);
    if (ll_backend__liveness__succeeded)
      *ll_backend__liveness__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__liveness__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__liveness__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ll_backend__liveness__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__liveness__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ll_backend__liveness__Var_14;

      hlds__hlds_module____Compare____module_info_0_0(&ll_backend__liveness__Var_14, ll_backend__liveness__ArgX1_4, ll_backend__liveness__ArgY1_5);
      ll_backend__liveness__succeeded = (ll_backend__liveness__Var_14 == (MR_Integer) 0);
      ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
      if (ll_backend__liveness__succeeded)
        *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__Var_14;
      else
      {
        MR_Word ll_backend__liveness__Var_15;
        MR_Integer ll_backend__liveness__Var_25 = (MR_Integer) ll_backend__liveness__ArgX2_6;
        MR_Integer ll_backend__liveness__Var_26 = (MR_Integer) ll_backend__liveness__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__liveness__Var_15, ll_backend__liveness__Var_25, ll_backend__liveness__Var_26);
        ll_backend__liveness__succeeded = (ll_backend__liveness__Var_15 == (MR_Integer) 0);
        ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
        if (ll_backend__liveness__succeeded)
          *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__Var_15;
        else
        {
          MR_Word ll_backend__liveness__Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__liveness_scalar_common_1[2], &ll_backend__liveness__Var_16, ((MR_Box) (ll_backend__liveness__ArgX3_8)), ((MR_Box) (ll_backend__liveness__ArgY3_9)));
          ll_backend__liveness__succeeded = (ll_backend__liveness__Var_16 == (MR_Integer) 0);
          ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
          if (ll_backend__liveness__succeeded)
            *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__Var_16;
          else
          {
            MR_Word ll_backend__liveness__Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__liveness_scalar_common_2[2], &ll_backend__liveness__Var_17, ((MR_Box) (ll_backend__liveness__ArgX4_10)), ((MR_Box) (ll_backend__liveness__ArgY4_11)));
            ll_backend__liveness__succeeded = (ll_backend__liveness__Var_17 == (MR_Integer) 0);
            ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
            if (ll_backend__liveness__succeeded)
              *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__Var_17;
            else
              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(ll_backend__liveness__HeadVar__1_1, ll_backend__liveness__ArgX5_12, ll_backend__liveness__ArgY5_13);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Integer ll_backend__liveness__CastX_13 = (MR_Integer) ll_backend__liveness__HeadVar__1_1;
    MR_Integer ll_backend__liveness__CastY_14 = (MR_Integer) ll_backend__liveness__HeadVar__2_2;

    ll_backend__liveness__succeeded = (ll_backend__liveness__CastX_13 == ll_backend__liveness__CastY_14);
    if (ll_backend__liveness__succeeded)
      ll_backend__liveness__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__liveness__TypeInfo_16_16;
      MR_Word ll_backend__liveness__TypeInfo_17_17;
      MR_Word ll_backend__liveness__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ll_backend__liveness__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__liveness__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ll_backend__liveness__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 4)));

      ll_backend__liveness__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__liveness__ArgX1_3, ll_backend__liveness__ArgY1_4);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__succeeded = (ll_backend__liveness__ArgX2_5 == ll_backend__liveness__ArgY2_6);
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__TypeInfo_16_16 = (MR_Word) &ll_backend__liveness_scalar_common_1[2];
          ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeInfo_16_16, ((MR_Box) (ll_backend__liveness__ArgX3_7)), ((MR_Box) (ll_backend__liveness__ArgY3_8)));
          if (ll_backend__liveness__succeeded)
          {
            ll_backend__liveness__TypeInfo_17_17 = (MR_Word) &ll_backend__liveness_scalar_common_2[2];
            ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeInfo_17_17, ((MR_Box) (ll_backend__liveness__ArgX4_9)), ((MR_Box) (ll_backend__liveness__ArgY4_10)));
            if (ll_backend__liveness__succeeded)
              ll_backend__liveness__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ll_backend__liveness__ArgX5_11, ll_backend__liveness__ArgY5_12);
          }
        }
      }
    }
    return ll_backend__liveness__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
  MR_Word ll_backend__liveness__HeadVar__2_2)
{
  {
    MR_Word ll_backend__liveness__Case_7;
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__liveness__Case0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__DelayedDead0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 2)));
    MR_Word ll_backend__liveness__ToBeKilled_11;
    MR_Word ll_backend__liveness__GoalExpr_12;
    MR_Word ll_backend__liveness__GoalInfo0_13;
    MR_Word ll_backend__liveness__PostDeath0_14;
    MR_Word ll_backend__liveness__PostDeath_15;
    MR_Word ll_backend__liveness__GoalInfo_16;
    MR_Word ll_backend__liveness__Goal_17;

    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__DelayedDead0_6, ll_backend__liveness__FinalDelayedDead_4, &ll_backend__liveness__ToBeKilled_11);
    ll_backend__liveness__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeath0_14);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PostDeath0_14, ll_backend__liveness__ToBeKilled_11, &ll_backend__liveness__PostDeath_15);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeath_15, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_16);
    {
      ll_backend__liveness__Goal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_17, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_12));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_17, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_16));
    }
    {
      ll_backend__liveness__Case_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_8));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_9));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 2) = ((MR_Box) (ll_backend__liveness__Goal_17));
    }
    return ll_backend__liveness__Case_7;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
  MR_Word ll_backend__liveness__VarSet_3,
  MR_Word ll_backend__liveness__Var_4)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_String ll_backend__liveness__Var_5;

    ll_backend__liveness__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__VarSet_3, ll_backend__liveness__Var_4, &ll_backend__liveness__Var_5);
    return ll_backend__liveness__succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_6,
  MR_Word ll_backend__liveness__PredId_7,
  MR_Integer ll_backend__liveness__ProcId_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_PredInfo_13)
{
  {
    MR_Word ll_backend__liveness__ProcInfo0_10;
    MR_Word ll_backend__liveness__ProcInfo_11;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12, ll_backend__liveness__ProcId_8, &ll_backend__liveness__ProcInfo0_10);
    ll_backend__liveness__detect_liveness_proc_2_4_p_0(ll_backend__liveness__ModuleInfo_6, ll_backend__liveness__PredId_7, ll_backend__liveness__ProcInfo0_10, &ll_backend__liveness__ProcInfo_11);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ll_backend__liveness__ProcId_8, ll_backend__liveness__ProcInfo_11, ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12, ll_backend__liveness__STATE_VARIABLE_PredInfo_13);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box * ll_backend__liveness__wrapper_arg_3)
{
  {
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13;

    ll_backend__liveness__detect_liveness_pred_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), &ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13);
    *ll_backend__liveness__wrapper_arg_3 = ((MR_Box) (ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_4,
  MR_Word ll_backend__liveness__PredId_5,
  MR_Word * ll_backend__liveness__PredInfo_6)
{
  {
    MR_Word ll_backend__liveness__PredInfo0_7;
    MR_Word ll_backend__liveness__ProcIds_8;
    MR_Word ll_backend__liveness__Var_9;
    MR_Box ll_backend__liveness__conv1_PredInfo_6;

    hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__liveness__ModuleInfo_4, ll_backend__liveness__PredId_5, &ll_backend__liveness__PredInfo0_7);
    ll_backend__liveness__ProcIds_8 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__liveness__PredInfo0_7);
    {
      ll_backend__liveness__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_9, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_9, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_9, 3) = ((MR_Box) (ll_backend__liveness__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_9, 4) = ((MR_Box) (ll_backend__liveness__PredId_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__liveness__Var_9, ll_backend__liveness__ProcIds_8, ((MR_Box) (ll_backend__liveness__PredInfo0_7)), &ll_backend__liveness__conv1_PredInfo_6);
    *ll_backend__liveness__PredInfo_6 = ((MR_Word) ll_backend__liveness__conv1_PredInfo_6);
  }
}

void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_5,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_6)
{
  {
    MR_Word ll_backend__liveness__PredIds_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__liveness__STATE_VARIABLE_HLDS_0_5, &ll_backend__liveness__PredIds_4);
    ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(ll_backend__liveness__PredIds_4, ll_backend__liveness__STATE_VARIABLE_HLDS_0_5, ll_backend__liveness__STATE_VARIABLE_HLDS_0_5, ll_backend__liveness__STATE_VARIABLE_HLDS_6);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3,
  MR_Box * ll_backend__liveness__wrapper_arg_4)
{
  {
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv4_HeadVar__4_4;

    hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3), &ll_backend__liveness__conv4_HeadVar__4_4);
    *ll_backend__liveness__wrapper_arg_4 = ((MR_Box) (ll_backend__liveness__conv4_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box * ll_backend__liveness__wrapper_arg_2)
{
  {
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv3_PredInfo_6;

    ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1), &ll_backend__liveness__conv3_PredInfo_6);
    *ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv3_PredInfo_6));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3,
  MR_Box * ll_backend__liveness__wrapper_arg_4)
{
  {
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv1_HeadVar__4_4;

    hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3), &ll_backend__liveness__conv1_HeadVar__4_4);
    *ll_backend__liveness__wrapper_arg_4 = ((MR_Box) (ll_backend__liveness__conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box * ll_backend__liveness__wrapper_arg_2)
{
  {
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv0_PredInfo_6;

    ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1), &ll_backend__liveness__conv0_PredInfo_6);
    *ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv0_PredInfo_6));
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
  MR_Word ll_backend__liveness__PredIds_5,
  MR_Word ll_backend__liveness__HLDS0_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_10,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__liveness__succeeded;
      MR_Word ll_backend__liveness__HeadPredIds_8;
      MR_Word ll_backend__liveness__TailPredIds_9;

      ll_backend__liveness__succeeded = mercury__list__split_list_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Integer) 1000, ll_backend__liveness__PredIds_5, &ll_backend__liveness__HeadPredIds_8, &ll_backend__liveness__TailPredIds_9);
      if (ll_backend__liveness__succeeded)
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_16_28;
        MR_Word ll_backend__liveness__TypeCtorInfo_17_29;
        MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_13_13;
        MR_Word ll_backend__liveness__PredInfos_22;
        MR_Word ll_backend__liveness__Var_23;
        MR_Box ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13;

        {
          ll_backend__liveness__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_23, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_23, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_23, 3) = ((MR_Box) (ll_backend__liveness__HLDS0_6));
        }
        ll_backend__liveness__TypeCtorInfo_16_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        ll_backend__liveness__TypeCtorInfo_17_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        mercury__list__map_3_p_0(ll_backend__liveness__TypeCtorInfo_16_28, ll_backend__liveness__TypeCtorInfo_17_29, ll_backend__liveness__Var_23, ll_backend__liveness__HeadPredIds_8, &ll_backend__liveness__PredInfos_22);
        mercury__list__foldl_corresponding_5_p_0(ll_backend__liveness__TypeCtorInfo_16_28, ll_backend__liveness__TypeCtorInfo_17_29, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__liveness_scalar_common_2[4], ll_backend__liveness__HeadPredIds_8, ll_backend__liveness__PredInfos_22, ((MR_Box) (ll_backend__liveness__STATE_VARIABLE_HLDS_0_10)), &ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13);
        ll_backend__liveness__STATE_VARIABLE_HLDS_13_13 = ((MR_Word) ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13);
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__liveness__next_value_of_PredIds_5 = ll_backend__liveness__TailPredIds_9;
          MR_Word ll_backend__liveness__next_value_of_STATE_VARIABLE_HLDS_0_10 = ll_backend__liveness__STATE_VARIABLE_HLDS_13_13;

          ll_backend__liveness__PredIds_5 = ll_backend__liveness__next_value_of_PredIds_5;
          ll_backend__liveness__STATE_VARIABLE_HLDS_0_10 = ll_backend__liveness__next_value_of_STATE_VARIABLE_HLDS_0_10;
        }
        continue;
      }
      else
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_16_46;
        MR_Word ll_backend__liveness__TypeCtorInfo_17_47;
        MR_Word ll_backend__liveness__PredInfos_40;
        MR_Word ll_backend__liveness__Var_41;
        MR_Box ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11;

        {
          ll_backend__liveness__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_41, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_41, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_41, 3) = ((MR_Box) (ll_backend__liveness__HLDS0_6));
        }
        ll_backend__liveness__TypeCtorInfo_16_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        ll_backend__liveness__TypeCtorInfo_17_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        mercury__list__map_3_p_0(ll_backend__liveness__TypeCtorInfo_16_46, ll_backend__liveness__TypeCtorInfo_17_47, ll_backend__liveness__Var_41, ll_backend__liveness__PredIds_5, &ll_backend__liveness__PredInfos_40);
        mercury__list__foldl_corresponding_5_p_0(ll_backend__liveness__TypeCtorInfo_16_46, ll_backend__liveness__TypeCtorInfo_17_47, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__liveness_scalar_common_2[5], ll_backend__liveness__PredIds_5, ll_backend__liveness__PredInfos_40, ((MR_Box) (ll_backend__liveness__STATE_VARIABLE_HLDS_0_10)), &ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11);
        *ll_backend__liveness__STATE_VARIABLE_HLDS_11 = ((MR_Word) ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11);
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__liveness__detect_liveness_proc_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_10)
{
  {
    MR_Word ll_backend__liveness__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ll_backend__liveness___ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));

    ll_backend__liveness__detect_liveness_proc_2_4_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredId_6, ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_9, ll_backend__liveness__STATE_VARIABLE_ProcInfo_10);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__PredId_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_41)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__Globals_8;
    MR_Integer ll_backend__liveness__DebugLiveness_9;
    MR_Integer ll_backend__liveness__PredIdInt_10;
    MR_Word ll_backend__liveness__GoalBeforeQuant_11;
    MR_Word ll_backend__liveness__VarSetBeforeQuant_12;
    MR_Word ll_backend__liveness__GoalAfterQuant_14;
    MR_Word ll_backend__liveness__VarSet_15;
    MR_Word ll_backend__liveness__VarTypes_16;
    MR_Word ll_backend__liveness__RttiVarMaps_17;
    MR_Word ll_backend__liveness__PredInfo_18;
    MR_Word ll_backend__liveness__TypeInfoLiveness_19;
    MR_Word ll_backend__liveness__LiveInfo_20;
    MR_Word ll_backend__liveness__Liveness0_21;
    MR_Word ll_backend__liveness__GoalAfterLiveness_22;
    MR_Word ll_backend__liveness__Deadness0_24;
    MR_Word ll_backend__liveness__GoalAfterDeadness_25;
    MR_Word ll_backend__liveness__TraceLevel_27;
    MR_Word ll_backend__liveness__GoalAfterDelayDeath_35;
    MR_Word ll_backend__liveness__NeedsFailVars_36;
    MR_Word ll_backend__liveness__ResumeVars0_37;
    MR_Word ll_backend__liveness__Goal_38;
    MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47;
    MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_66_66;
    MR_Word ll_backend__liveness__Var_23;
    MR_Word ll_backend__liveness__Var_26;
    MR_Word ll_backend__liveness__AllowDelayDeath_28;
    MR_Word ll_backend__liveness__DelayDeath_29;
    MR_Integer ll_backend__liveness__DelayDeathMaxVars_30;
    MR_Word ll_backend__liveness__Origin_32;
    MR_Word ll_backend__liveness__Var_57;
    MR_Word ll_backend__liveness__Var_58;
    MR_Word ll_backend__liveness__Var_71;
    MR_Word ll_backend__liveness__Var_33;
    MR_Word ll_backend__liveness__Var_34;
    MR_Word ll_backend__liveness__Var_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Globals_8);
    libs__globals__lookup_int_option_3_p_0(ll_backend__liveness__Globals_8, (MR_Integer) 84, &ll_backend__liveness__DebugLiveness_9);
    hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__liveness__PredId_6, &ll_backend__liveness__PredIdInt_10);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__liveness__GoalBeforeQuant_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__liveness__VarSetBeforeQuant_12);
    ll_backend__liveness__succeeded = (ll_backend__liveness__DebugLiveness_9 == ll_backend__liveness__PredIdInt_10);
    if (ll_backend__liveness__succeeded)
    {
      MR_Word ll_backend__liveness__Globals_82;
      MR_Word ll_backend__liveness__OutInfo_83;

      mercury__io__write_string_3_p_0((MR_String) "\nbefore requantify");
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Globals_82);
      ll_backend__liveness__OutInfo_83 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(ll_backend__liveness__Globals_82, (MR_Integer) 1);
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__liveness__OutInfo_83, ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__VarSetBeforeQuant_12, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", ll_backend__liveness__GoalBeforeQuant_11);
    }
    else
    {
    }
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__GoalAfterQuant_14);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__VarSet_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__VarTypes_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__RttiVarMaps_17);
    hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredId_6, &ll_backend__liveness__PredInfo_18);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__liveness__PredInfo_18, ll_backend__liveness__Globals_8, &ll_backend__liveness__TypeInfoLiveness_19);
    ll_backend__liveness__live_info_init_6_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__TypeInfoLiveness_19, ll_backend__liveness__VarSet_15, ll_backend__liveness__VarTypes_16, ll_backend__liveness__RttiVarMaps_17, &ll_backend__liveness__LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nbefore liveness", ll_backend__liveness__DebugLiveness_9, ll_backend__liveness__PredIdInt_10, ll_backend__liveness__VarSet_15, ll_backend__liveness__GoalAfterQuant_14);
    ll_backend__liveness__initial_liveness_4_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredInfo_18, ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__Liveness0_21);
    ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__GoalAfterQuant_14, &ll_backend__liveness__GoalAfterLiveness_22, ll_backend__liveness__Liveness0_21, &ll_backend__liveness__Var_23, ll_backend__liveness__LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter liveness", ll_backend__liveness__DebugLiveness_9, ll_backend__liveness__PredIdInt_10, ll_backend__liveness__VarSet_15, ll_backend__liveness__GoalAfterLiveness_22);
    ll_backend__liveness__initial_deadness_4_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, ll_backend__liveness__LiveInfo_20, &ll_backend__liveness__Deadness0_24);
    ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__GoalAfterLiveness_22, &ll_backend__liveness__GoalAfterDeadness_25, ll_backend__liveness__Deadness0_24, &ll_backend__liveness__Var_26, ll_backend__liveness__Liveness0_21, ll_backend__liveness__LiveInfo_20);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter deadness", ll_backend__liveness__DebugLiveness_9, ll_backend__liveness__PredIdInt_10, ll_backend__liveness__VarSet_15, ll_backend__liveness__GoalAfterDeadness_25);
    libs__globals__get_trace_level_2_p_0(ll_backend__liveness__Globals_8, &ll_backend__liveness__TraceLevel_27);
    libs__globals__get_trace_level_2_p_0(ll_backend__liveness__Globals_8, &ll_backend__liveness__Var_71);
    ll_backend__liveness__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__liveness__TraceLevel_27, ll_backend__liveness__Var_71);
    if (ll_backend__liveness__succeeded)
    {
      ll_backend__liveness__AllowDelayDeath_28 = libs__trace_params__trace_level_allows_delay_death_1_f_0(ll_backend__liveness__TraceLevel_27);
      ll_backend__liveness__succeeded = (ll_backend__liveness__AllowDelayDeath_28 == (MR_Integer) 1);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Var_57 = (MR_Integer) 143;
        libs__globals__lookup_bool_option_3_p_0(ll_backend__liveness__Globals_8, ll_backend__liveness__Var_57, &ll_backend__liveness__DelayDeath_29);
        ll_backend__liveness__succeeded = (ll_backend__liveness__DelayDeath_29 == (MR_Integer) 1);
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__Var_58 = (MR_Integer) 144;
          libs__globals__lookup_int_option_3_p_0(ll_backend__liveness__Globals_8, ll_backend__liveness__Var_58, &ll_backend__liveness__DelayDeathMaxVars_30);
          {
            MR_Integer ll_backend__liveness__Var_59;

            ll_backend__liveness__Var_59 = mercury__varset__num_allocated_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__VarSet_15);
            ll_backend__liveness__succeeded = (ll_backend__liveness__Var_59 <= ll_backend__liveness__DelayDeathMaxVars_30);
          }
          if (!(ll_backend__liveness__succeeded))
          {
            MR_Integer ll_backend__liveness__NumVars_31;

            hlds__vartypes__vartypes_count_2_p_0(ll_backend__liveness__VarTypes_16, &ll_backend__liveness__NumVars_31);
            ll_backend__liveness__succeeded = (ll_backend__liveness__NumVars_31 <= ll_backend__liveness__DelayDeathMaxVars_30);
          }
          if (ll_backend__liveness__succeeded)
          {
            hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__liveness__PredInfo_18, &ll_backend__liveness__Origin_32);
            ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Origin_32)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__liveness__succeeded)
            {
              ll_backend__liveness__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Origin_32, (MR_Integer) 0)));
              ll_backend__liveness__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Origin_32, (MR_Integer) 1)));
            }
            ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
          }
        }
      }
    }
    if (ll_backend__liveness__succeeded)
    {
      ll_backend__liveness__delay_death_proc_body_4_p_0(ll_backend__liveness__GoalAfterDeadness_25, &ll_backend__liveness__GoalAfterDelayDeath_35, ll_backend__liveness__VarSet_15, ll_backend__liveness__Liveness0_21);
      ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter delay death", ll_backend__liveness__DebugLiveness_9, ll_backend__liveness__PredIdInt_10, ll_backend__liveness__VarSet_15, ll_backend__liveness__GoalAfterDelayDeath_35);
    }
    else
      ll_backend__liveness__GoalAfterDelayDeath_35 = ll_backend__liveness__GoalAfterDeadness_25;
    ll_backend__liveness__NeedsFailVars_36 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredInfo_18, ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, ll_backend__liveness__TraceLevel_27);
    switch (ll_backend__liveness__NeedsFailVars_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__liveness__ResumeVars0_37 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        break;
      case (MR_Integer) 1:
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__ResumeVars0_37);
        break;
    }
    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__GoalAfterDelayDeath_35, &ll_backend__liveness__Goal_38, ll_backend__liveness__Liveness0_21, &ll_backend__liveness__Var_39, ll_backend__liveness__LiveInfo_20, ll_backend__liveness__ResumeVars0_37);
    ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter resume point", ll_backend__liveness__DebugLiveness_9, ll_backend__liveness__PredIdInt_10, ll_backend__liveness__VarSet_15, ll_backend__liveness__Goal_38);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__liveness__Goal_38, ll_backend__liveness__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__liveness__STATE_VARIABLE_ProcInfo_66_66);
    hlds__hlds_pred__proc_info_set_liveness_info_3_p_0(ll_backend__liveness__Liveness0_21, ll_backend__liveness__STATE_VARIABLE_ProcInfo_66_66, ll_backend__liveness__STATE_VARIABLE_ProcInfo_41);
  }
}

static void MR_CALL 
ll_backend__liveness__live_info_init_6_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_7,
  MR_Word ll_backend__liveness__TypeInfoLiveness_8,
  MR_Word ll_backend__liveness__VarSet_9,
  MR_Word ll_backend__liveness__VarTypes_10,
  MR_Word ll_backend__liveness__RttiVarMaps_11,
  MR_Word * ll_backend__liveness__LiveInfo_12)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
    *ll_backend__liveness__LiveInfo_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__ModuleInfo_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__TypeInfoLiveness_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__liveness__VarSet_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__liveness__VarTypes_10));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__liveness__RttiVarMaps_11));
  }
}

static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__ProcInfo_6,
  MR_Word ll_backend__liveness__LiveInfo_7,
  MR_Word * ll_backend__liveness__Deadness_8)
{
  {
    MR_Word ll_backend__liveness__Deadness0_10;
    MR_Word ll_backend__liveness__VarTypes_12;
    MR_Word ll_backend__liveness__RttiVarMaps_13;
    MR_Word ll_backend__liveness__Var_14;
    MR_Word ll_backend__liveness__Var_15;
    MR_Word ll_backend__liveness__Var_9;
    MR_Word ll_backend__liveness__Var_11;
    MR_Word ll_backend__liveness__Var_16;
    MR_Word ll_backend__liveness__Var_17;
    MR_Word ll_backend__liveness__Var_18;
    MR_Word ll_backend__liveness__Var_19;

    hlds__arg_info__partition_proc_args_5_p_0(ll_backend__liveness__ProcInfo_6, ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Var_9, &ll_backend__liveness__Deadness0_10, &ll_backend__liveness__Var_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__ProcInfo_6, &ll_backend__liveness__VarTypes_12);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__ProcInfo_6, &ll_backend__liveness__RttiVarMaps_13);
    ll_backend__liveness__Var_14 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Deadness0_10);
    ll_backend__liveness__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 0)));
    ll_backend__liveness__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 1)));
    ll_backend__liveness__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 2)));
    ll_backend__liveness__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 3)));
    ll_backend__liveness__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 4)));
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Var_14, ll_backend__liveness__Var_15, ll_backend__liveness__VarTypes_12, ll_backend__liveness__RttiVarMaps_13, ll_backend__liveness__Deadness_8);
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
  }
  else
  {
    MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_14;
    MR_Word ll_backend__liveness__Goals_15;
    MR_Word ll_backend__liveness___LivenessRest_20;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
    ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness___LivenessRest_20, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
    }
    else
    {
      MR_Word ll_backend__liveness__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Case_14;
      MR_Word ll_backend__liveness__Cases_15;
      MR_Word ll_backend__liveness__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__Goal_23;

      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_22, &ll_backend__liveness__Goal_23, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
      {
        ll_backend__liveness__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_20));
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_21));
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 2) = ((MR_Box) (ll_backend__liveness__Goal_23));
      }
      if ((ll_backend__liveness__Cases0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__liveness__Cases_15 = ll_backend__liveness__Cases0_13;
      else
      {
        MR_Word ll_backend__liveness__LivenessRest_26;

        ll_backend__liveness__detect_resume_points_in_cases_6_p_0(ll_backend__liveness__Cases0_13, &ll_backend__liveness__Cases_15, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__LivenessRest_26, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        ll_backend__liveness__succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LivenessRest_26);
        if (!(ll_backend__liveness__succeeded))
        {
          MR_Word ll_backend__liveness__TypeCtorInfo_37_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__liveness__VarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 2)));
          MR_Word ll_backend__liveness__FirstVars_33;
          MR_Word ll_backend__liveness__RestVars_34;
          MR_String ll_backend__liveness__FirstNames_35;
          MR_String ll_backend__liveness__RestNames_36;
          MR_String ll_backend__liveness__Msg_37;
          MR_String ll_backend__liveness__Var_41;
          MR_String ll_backend__liveness__Var_42;
          MR_String ll_backend__liveness__Var_44;
          MR_String ll_backend__liveness__Var_46;
          MR_String ll_backend__liveness__Var_47;
          MR_String ll_backend__liveness__Var_49;
          MR_String ll_backend__liveness__Var_51;
          MR_Word ll_backend__liveness__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 0)));
          MR_Word ll_backend__liveness__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 1)));
          MR_Word ll_backend__liveness__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 3)));
          MR_Word ll_backend__liveness__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 4)));

          ll_backend__liveness__FirstVars_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_60, *ll_backend__liveness__HeadVar__4_4);
          ll_backend__liveness__RestVars_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__LivenessRest_26);
          ll_backend__liveness__FirstNames_35 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__VarSet_32, (MR_Integer) 1, ll_backend__liveness__FirstVars_33);
          ll_backend__liveness__RestNames_36 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__VarSet_32, (MR_Integer) 1, ll_backend__liveness__RestVars_34);
          ll_backend__liveness__Var_51 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__RestNames_36, (MR_String) "\n");
          ll_backend__liveness__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", ll_backend__liveness__Var_51);
          ll_backend__liveness__Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__liveness__Var_49);
          ll_backend__liveness__Var_46 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__FirstNames_35, ll_backend__liveness__Var_47);
          ll_backend__liveness__Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", ll_backend__liveness__Var_46);
          ll_backend__liveness__Var_42 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", ll_backend__liveness__Var_44);
          ll_backend__liveness__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "switch", ll_backend__liveness__Var_42);
          ll_backend__liveness__Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", ll_backend__liveness__Var_41);
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", ll_backend__liveness__Msg_37);
            return;
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6,
  MR_Word * ll_backend__liveness__Needed_7)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__liveness__Needed_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_16;
      MR_Word ll_backend__liveness__Goals_17;
      MR_Word ll_backend__liveness__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_14, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Detism0_25;
      MR_Word ll_backend__liveness__CanFail0_26;
      MR_Word ll_backend__liveness__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_14, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Var_27;
      MR_Word ll_backend__liveness__Var_28;
      MR_Word ll_backend__liveness__Var_29;

      ll_backend__liveness__Detism0_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__liveness__GoalInfo0_24);
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__liveness__Detism0_25, &ll_backend__liveness__CanFail0_26, &ll_backend__liveness__Var_27);
      ll_backend__liveness__succeeded = (ll_backend__liveness__CanFail0_26 == (MR_Integer) 0);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Goals0_15)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_15, (MR_Integer) 0)));
          ll_backend__liveness__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_15, (MR_Integer) 1)));
        }
      }
      if (ll_backend__liveness__succeeded)
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_31_54;
        MR_Word ll_backend__liveness__LivenessRest_30;
        MR_Word ll_backend__liveness__NeededRest_31;
        MR_Word ll_backend__liveness__ResumeVars1_44;
        MR_Word ll_backend__liveness__Goal1_45;
        MR_Word ll_backend__liveness__ResumeLocs_46;
        MR_Word ll_backend__liveness__Resume_47;
        MR_Word ll_backend__liveness__GoalInfo_49;
        MR_Word ll_backend__liveness__PreDeaths_50;
        MR_Word ll_backend__liveness__NeededFirst_51;
        MR_Word ll_backend__liveness__CompletedNeededFirst_52;
        MR_Word ll_backend__liveness__Var_48;

        ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__LivenessRest_30, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__NeededRest_31);
        ll_backend__liveness__TypeCtorInfo_31_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_54, ll_backend__liveness__NeededRest_31, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__ResumeVars1_44);
        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal1_45, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars1_44);
        ll_backend__liveness__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
        if (ll_backend__liveness__succeeded)
          ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__Goal1_45);
        if (ll_backend__liveness__succeeded)
          ll_backend__liveness__ResumeLocs_46 = (MR_Integer) 0;
        else
        {
          ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__Goal1_45);
          if (ll_backend__liveness__succeeded)
            ll_backend__liveness__ResumeLocs_46 = (MR_Integer) 1;
          else
            ll_backend__liveness__ResumeLocs_46 = (MR_Integer) 3;
        }
        {
          ll_backend__liveness__Resume_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_47, 0) = ((MR_Box) (ll_backend__liveness__ResumeVars1_44));
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_47, 1) = ((MR_Box) (ll_backend__liveness__ResumeLocs_46));
        }
        hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__Resume_47, ll_backend__liveness__Goal1_45, &ll_backend__liveness__Goal_16);
        ll_backend__liveness__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, (MR_Integer) 1)));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_49, &ll_backend__liveness__PreDeaths_50);
        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_31_54, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__PreDeaths_50, &ll_backend__liveness__NeededFirst_51);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_5, ll_backend__liveness__NeededFirst_51, &ll_backend__liveness__CompletedNeededFirst_52);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_54, ll_backend__liveness__CompletedNeededFirst_52, ll_backend__liveness__NeededRest_31, ll_backend__liveness__Needed_7);
        ll_backend__liveness__require_equal_4_p_0(*ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LivenessRest_30, (MR_String) "disjunction", ll_backend__liveness__LiveInfo_5);
      }
      else
      {
        MR_Word ll_backend__liveness__GoalInfo_63;
        MR_Word ll_backend__liveness__PreDeaths_64;
        MR_Word ll_backend__liveness__Needed_65;
        MR_Word ll_backend__liveness__Var_62;

        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal_16, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        ll_backend__liveness__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, (MR_Integer) 1)));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_63, &ll_backend__liveness__PreDeaths_64);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__PreDeaths_64, &ll_backend__liveness__Needed_65);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_5, ll_backend__liveness__Needed_65, ll_backend__liveness__Needed_7);
        ll_backend__liveness__Goals_17 = ll_backend__liveness__Goals0_15;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__Liveness0_3,
  MR_Word * ll_backend__liveness__Liveness_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6,
  MR_Word * ll_backend__liveness__Needed_7)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_non_disj\'/7", (MR_String) "empty nondet disjunction");
        return;
      }
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_19;
      MR_Word ll_backend__liveness__Goals_20;

      if ((ll_backend__liveness__Goals0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__liveness__GoalInfo_39;
        MR_Word ll_backend__liveness__PreDeaths_40;
        MR_Word ll_backend__liveness__Needed_41;
        MR_Word ll_backend__liveness__Var_38;

        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_17, &ll_backend__liveness__Goal_19, ll_backend__liveness__Liveness0_3, ll_backend__liveness__Liveness_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        ll_backend__liveness__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_19, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_19, (MR_Integer) 1)));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_39, &ll_backend__liveness__PreDeaths_40);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Liveness0_3, ll_backend__liveness__PreDeaths_40, &ll_backend__liveness__Needed_41);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_5, ll_backend__liveness__Needed_41, ll_backend__liveness__Needed_7);
        ll_backend__liveness__Goals_20 = ll_backend__liveness__Goals0_18;
      }
      else
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_31_63;
        MR_Word ll_backend__liveness__LivenessRest_28;
        MR_Word ll_backend__liveness__NeededRest_29;
        MR_Word ll_backend__liveness__ResumeVars1_53;
        MR_Word ll_backend__liveness__Goal1_54;
        MR_Word ll_backend__liveness__ResumeLocs_55;
        MR_Word ll_backend__liveness__Resume_56;
        MR_Word ll_backend__liveness__GoalInfo_58;
        MR_Word ll_backend__liveness__PreDeaths_59;
        MR_Word ll_backend__liveness__NeededFirst_60;
        MR_Word ll_backend__liveness__CompletedNeededFirst_61;
        MR_Word ll_backend__liveness__Var_57;

        ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(ll_backend__liveness__Goals0_18, &ll_backend__liveness__Goals_20, ll_backend__liveness__Liveness0_3, &ll_backend__liveness__LivenessRest_28, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__NeededRest_29);
        ll_backend__liveness__TypeCtorInfo_31_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_63, ll_backend__liveness__NeededRest_29, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__ResumeVars1_53);
        ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_17, &ll_backend__liveness__Goal1_54, ll_backend__liveness__Liveness0_3, ll_backend__liveness__Liveness_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars1_53);
        ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__Goal1_54);
        if (ll_backend__liveness__succeeded)
          ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 1;
        else
          ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 3;
        {
          ll_backend__liveness__Resume_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 0) = ((MR_Box) (ll_backend__liveness__ResumeVars1_53));
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 1) = ((MR_Box) (ll_backend__liveness__ResumeLocs_55));
        }
        hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__Resume_56, ll_backend__liveness__Goal1_54, &ll_backend__liveness__Goal_19);
        ll_backend__liveness__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_19, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_19, (MR_Integer) 1)));
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_58, &ll_backend__liveness__PreDeaths_59);
        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_31_63, ll_backend__liveness__Liveness0_3, ll_backend__liveness__PreDeaths_59, &ll_backend__liveness__NeededFirst_60);
        ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_5, ll_backend__liveness__NeededFirst_60, &ll_backend__liveness__CompletedNeededFirst_61);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_63, ll_backend__liveness__CompletedNeededFirst_61, ll_backend__liveness__NeededRest_29, ll_backend__liveness__Needed_7);
        ll_backend__liveness__require_equal_4_p_0(*ll_backend__liveness__Liveness_4, ll_backend__liveness__LivenessRest_28, (MR_String) "disjunction", ll_backend__liveness__LiveInfo_5);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_20));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__ResumeVars0_6)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
  }
  else
  {
    MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_14;
    MR_Word ll_backend__liveness__Goals_15;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;

    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
    ll_backend__liveness__detect_resume_points_in_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__STATE_VARIABLE_Liveness_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_85,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_86,
  MR_Word ll_backend__liveness__LiveInfo_10,
  MR_Word ll_backend__liveness__ResumeVars0_11)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__TypeCtorInfo_114_114;
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__PreDeaths0_14;
    MR_Word ll_backend__liveness__PreBirths0_15;
    MR_Word ll_backend__liveness__PostDeaths0_16;
    MR_Word ll_backend__liveness__PostBirths0_17;
    MR_Word ll_backend__liveness__GoalExpr_21;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_87_87;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_88_88;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_103_103;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_104_104;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreDeaths0_14);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreBirths0_15);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeaths0_16);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostBirths0_17);
    ll_backend__liveness__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_0_85, ll_backend__liveness__PreDeaths0_14, &ll_backend__liveness__STATE_VARIABLE_Liveness_87_87);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__PreBirths0_15, ll_backend__liveness__STATE_VARIABLE_Liveness_87_87, &ll_backend__liveness__STATE_VARIABLE_Liveness_88_88);
    switch (MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_12), (MR_Integer) 0);
          MR_Word ll_backend__liveness__CompletedLiveness_51;
          MR_Word ll_backend__liveness__ResumeVars1_52;
          MR_Word ll_backend__liveness__SubGoal1_53;
          MR_Word ll_backend__liveness__ResumeLocs_55;
          MR_Word ll_backend__liveness__Resume_56;
          MR_Word ll_backend__liveness__SubGoal_57;
          MR_Word ll_backend__liveness__Var_50;
          MR_Word ll_backend__liveness___Liveness_54;

          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_49, &ll_backend__liveness__Var_50, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
          ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, &ll_backend__liveness__CompletedLiveness_51);
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CompletedLiveness_51, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__ResumeVars1_52);
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_49, &ll_backend__liveness__SubGoal1_53, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness___Liveness_54, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars1_52);
          ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__SubGoal1_53);
          if (ll_backend__liveness__succeeded)
            ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 0;
          else
          {
            ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__SubGoal1_53);
            if (ll_backend__liveness__succeeded)
              ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 1;
            else
              ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 3;
          }
          {
            ll_backend__liveness__Resume_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 0) = ((MR_Box) (ll_backend__liveness__ResumeVars1_52));
            MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 1) = ((MR_Box) (ll_backend__liveness__ResumeLocs_55));
          }
          hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__Resume_56, ll_backend__liveness__SubGoal1_53, &ll_backend__liveness__SubGoal_57);
          ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_57);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          ll_backend__liveness__GoalExpr_21 = ll_backend__liveness__GoalExpr0_12;
          ll_backend__liveness__STATE_VARIABLE_Liveness_103_103 = ll_backend__liveness__STATE_VARIABLE_Liveness_88_88;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ll_backend__liveness__GoalExpr_21 = ll_backend__liveness__GoalExpr0_12;
              ll_backend__liveness__STATE_VARIABLE_Liveness_103_103 = ll_backend__liveness__STATE_VARIABLE_Liveness_88_88;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__liveness__ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Goals_20;

              switch (ll_backend__liveness__ConjType_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_20, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__detect_resume_points_in_conj_6_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_20, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
                  break;
              }
              {
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__ConjType_18));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__Goals_20));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__liveness__CodeModel_22;
              MR_Word ll_backend__liveness__Goals0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goals_107;

              ll_backend__liveness__CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__liveness__GoalInfo0_13);
              switch (ll_backend__liveness__CodeModel_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__liveness__Var_24;

                    ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(ll_backend__liveness__Goals0_106, &ll_backend__liveness__Goals_107, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__Var_24);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__liveness__Var_23;

                    ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(ll_backend__liveness__Goals0_106, &ll_backend__liveness__Goals_107, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__Var_23);
                  }
                  break;
              }
              {
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Goals_107));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__liveness__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__CF_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Cases_28;

              ll_backend__liveness__detect_resume_points_in_cases_6_p_0(ll_backend__liveness__Cases0_27, &ll_backend__liveness__Cases_28, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              {
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Var_25));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__CF_26));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 3) = ((MR_Box) (ll_backend__liveness__Cases_28));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__liveness__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__SubGoal0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__SubGoal_113;
              MR_Word ll_backend__liveness__TermVar_59;
              MR_Word ll_backend__liveness__Var_92;

              ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 1)));
                ll_backend__liveness__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 2)));
                ll_backend__liveness__succeeded = (ll_backend__liveness__Var_92 == (MR_Integer) 1);
              }
              if (ll_backend__liveness__succeeded)
              {
                MR_Word ll_backend__liveness__CompletedTermVars_60;
                MR_Word ll_backend__liveness__Var_93;

                ll_backend__liveness__Var_93 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__TermVar_59);
                ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Var_93, &ll_backend__liveness__CompletedTermVars_60);
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CompletedTermVars_60, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103);
                ll_backend__liveness__SubGoal_113 = ll_backend__liveness__SubGoal0_112;
              }
              else
                ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_112, &ll_backend__liveness__SubGoal_113, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              {
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Reason_58));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_113));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__liveness__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Cond0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Else0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word ll_backend__liveness__ElseInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_32, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__ElsePreDeath0_36;
              MR_Word ll_backend__liveness__CondResumeVars0_37;
              MR_Word ll_backend__liveness__CondResumeVars1_38;
              MR_Word ll_backend__liveness__CondResumeVars_39;
              MR_Word ll_backend__liveness__Cond1_40;
              MR_Word ll_backend__liveness__LivenessCond_41;
              MR_Word ll_backend__liveness__Then_42;
              MR_Word ll_backend__liveness__Else_44;
              MR_Word ll_backend__liveness__LivenessElse_45;
              MR_Word ll_backend__liveness__CondResumeLocs_46;
              MR_Word ll_backend__liveness__CondResume_47;
              MR_Word ll_backend__liveness__Cond_48;
              MR_Word ll_backend__liveness___ElseExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_32, (MR_Integer) 0)));
              MR_Word ll_backend__liveness__CodeModel_108;

              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__ElseInfo0_35, &ll_backend__liveness__ElsePreDeath0_36);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, ll_backend__liveness__ElsePreDeath0_36, &ll_backend__liveness__CondResumeVars0_37);
              ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__CondResumeVars0_37, &ll_backend__liveness__CondResumeVars1_38);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CondResumeVars1_38, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__CondResumeVars_39);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Cond0_30, &ll_backend__liveness__Cond1_40, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__LivenessCond_41, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__CondResumeVars_39);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Then0_31, &ll_backend__liveness__Then_42, ll_backend__liveness__LivenessCond_41, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Else0_32, &ll_backend__liveness__Else_44, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__LivenessElse_45, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__Cond1_40);
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__CodeModel_108 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__liveness__GoalInfo0_13);
                ll_backend__liveness__succeeded = (ll_backend__liveness__CodeModel_108 == (MR_Integer) 2);
                ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
              }
              if (ll_backend__liveness__succeeded)
                ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 0;
              else
              {
                ll_backend__liveness__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CondResumeVars_39);
                if (ll_backend__liveness__succeeded)
                  ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 1;
                else
                {
                  ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__Cond1_40);
                  if (ll_backend__liveness__succeeded)
                    ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 1;
                  else
                    ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 3;
                }
              }
              {
                ll_backend__liveness__CondResume_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__liveness__CondResume_47, 0) = ((MR_Box) (ll_backend__liveness__CondResumeVars_39));
                MR_hl_field(MR_mktag(1), ll_backend__liveness__CondResume_47, 1) = ((MR_Box) (ll_backend__liveness__CondResumeLocs_46));
              }
              hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__CondResume_47, ll_backend__liveness__Cond1_40, &ll_backend__liveness__Cond_48);
              ll_backend__liveness__require_equal_4_p_0(ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LivenessElse_45, (MR_String) "if-then-else", ll_backend__liveness__LiveInfo_10);
              {
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Vars_29));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__Cond_48));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 3) = ((MR_Box) (ll_backend__liveness__Then_42));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 4) = ((MR_Box) (ll_backend__liveness__Else_44));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo0_13));
    }
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__PostDeaths0_16, &ll_backend__liveness__STATE_VARIABLE_Liveness_104_104);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__PostBirths0_17, ll_backend__liveness__STATE_VARIABLE_Liveness_104_104, ll_backend__liveness__STATE_VARIABLE_Liveness_86);
  }
}

static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
  MR_Word ll_backend__liveness__LivenessFirst_5,
  MR_Word ll_backend__liveness__LivenessRest_6,
  MR_String ll_backend__liveness__GoalType_7,
  MR_Word ll_backend__liveness__LiveInfo_8)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    ll_backend__liveness__succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__LivenessFirst_5, ll_backend__liveness__LivenessRest_6);
    if (!(ll_backend__liveness__succeeded))
    {
      MR_Word ll_backend__liveness__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      MR_Word ll_backend__liveness__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__FirstVars_10;
      MR_Word ll_backend__liveness__RestVars_11;
      MR_String ll_backend__liveness__FirstNames_12;
      MR_String ll_backend__liveness__RestNames_13;
      MR_String ll_backend__liveness__Msg_14;
      MR_String ll_backend__liveness__Var_18;
      MR_String ll_backend__liveness__Var_19;
      MR_String ll_backend__liveness__Var_21;
      MR_String ll_backend__liveness__Var_23;
      MR_String ll_backend__liveness__Var_24;
      MR_String ll_backend__liveness__Var_26;
      MR_String ll_backend__liveness__Var_28;
      MR_Word ll_backend__liveness__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 3)));
      MR_Word ll_backend__liveness__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 4)));

      ll_backend__liveness__FirstVars_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__LivenessFirst_5);
      ll_backend__liveness__RestVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__LivenessRest_6);
      ll_backend__liveness__FirstNames_12 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__VarSet_9, (MR_Integer) 1, ll_backend__liveness__FirstVars_10);
      ll_backend__liveness__RestNames_13 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__VarSet_9, (MR_Integer) 1, ll_backend__liveness__RestVars_11);
      ll_backend__liveness__Var_28 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__RestNames_13, (MR_String) "\n");
      ll_backend__liveness__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", ll_backend__liveness__Var_28);
      ll_backend__liveness__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__liveness__Var_26);
      ll_backend__liveness__Var_23 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__FirstNames_12, ll_backend__liveness__Var_24);
      ll_backend__liveness__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", ll_backend__liveness__Var_23);
      ll_backend__liveness__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", ll_backend__liveness__Var_21);
      ll_backend__liveness__Var_18 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__GoalType_7, ll_backend__liveness__Var_19);
      ll_backend__liveness__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", ll_backend__liveness__Var_18);
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", ll_backend__liveness__Msg_14);
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
  MR_Word ll_backend__liveness__Goal0_5,
  MR_Word * ll_backend__liveness__Goal_6,
  MR_Word ll_backend__liveness__VarSet_7,
  MR_Word ll_backend__liveness__BornVars0_8)
{
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__liveness__Goal1_9;
    MR_Word ll_backend__liveness__DelayedDead_11;
    MR_Word ll_backend__liveness__GoalExpr_12;
    MR_Word ll_backend__liveness__GoalInfo1_13;
    MR_Word ll_backend__liveness__PostDeaths1_14;
    MR_Word ll_backend__liveness__PostDeaths_15;
    MR_Word ll_backend__liveness__GoalInfo_16;
    MR_Word ll_backend__liveness__Var_17;
    MR_Word ll_backend__liveness__Var_10;

    ll_backend__liveness__Var_17 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_18_18);
    ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_5, &ll_backend__liveness__Goal1_9, ll_backend__liveness__BornVars0_8, &ll_backend__liveness__Var_10, ll_backend__liveness__Var_17, &ll_backend__liveness__DelayedDead_11, ll_backend__liveness__VarSet_7);
    ll_backend__liveness__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_9, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_9, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo1_13, &ll_backend__liveness__PostDeaths1_14);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PostDeaths1_14, ll_backend__liveness__DelayedDead_11, &ll_backend__liveness__PostDeaths_15);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_15, ll_backend__liveness__GoalInfo1_13, &ll_backend__liveness__GoalInfo_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_16));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__BornVars0_3,
  MR_Word ll_backend__liveness__DelayedDead0_4,
  MR_Word ll_backend__liveness__VarSet_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word ll_backend__liveness__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Case_12;
    MR_Word ll_backend__liveness__DelayedDeadGoal_13;
    MR_Word ll_backend__liveness__Cases_14;
    MR_Word ll_backend__liveness__BornVars_18;
    MR_Word ll_backend__liveness__DelayedDead_19;
    MR_Word ll_backend__liveness__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 2)));
    MR_Word ll_backend__liveness__Goal_23;
    MR_Word ll_backend__liveness__BornVarsGoal_24;
    MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_25;
    MR_Word ll_backend__liveness__Var_28;
    MR_Word ll_backend__liveness__Var_29;

    ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_22, &ll_backend__liveness__Goal_23, ll_backend__liveness__BornVars0_3, &ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__DelayedDead0_4, &ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__VarSet_5);
    {
      ll_backend__liveness__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_20));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_21));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 2) = ((MR_Box) (ll_backend__liveness__Goal_23));
    }
    {
      ll_backend__liveness__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_28, 0) = ((MR_Box) (ll_backend__liveness__Case_12));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_28, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadGoal_13));
    }
    ll_backend__liveness__delay_death_cases_6_p_0(ll_backend__liveness__Cases0_11, &ll_backend__liveness__Cases_14, ll_backend__liveness__BornVars0_3, ll_backend__liveness__DelayedDead0_4, ll_backend__liveness__VarSet_5, &ll_backend__liveness__MaybeBornVarsDelayedDead_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Var_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_14));
    }
    if ((ll_backend__liveness__MaybeBornVarsDelayedDead_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__liveness__BornVars_18 = ll_backend__liveness__BornVarsGoal_24;
      ll_backend__liveness__DelayedDead_19 = ll_backend__liveness__DelayedDeadGoal_13;
    }
    else
    {
      MR_Word ll_backend__liveness__TypeCtorInfo_31_31;
      MR_Word ll_backend__liveness__BornVarsCases_26;
      MR_Word ll_backend__liveness__DelayedDeadCases_27;
      MR_Word ll_backend__liveness__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_25, (MR_Integer) 0)));

      ll_backend__liveness__BornVarsCases_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_30, (MR_Integer) 0)));
      ll_backend__liveness__DelayedDeadCases_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_30, (MR_Integer) 1)));
      ll_backend__liveness__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__BornVarsCases_26, &ll_backend__liveness__BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__DelayedDeadCases_27, &ll_backend__liveness__DelayedDead_19);
    }
    {
      ll_backend__liveness__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_29, 0) = ((MR_Box) (ll_backend__liveness__BornVars_18));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_29, 1) = ((MR_Box) (ll_backend__liveness__DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Var_29));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__BornVars0_3,
  MR_Word ll_backend__liveness__DelayedDead0_4,
  MR_Word ll_backend__liveness__VarSet_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_12;
    MR_Word ll_backend__liveness__DelayedDeadGoal_13;
    MR_Word ll_backend__liveness__Goals_14;
    MR_Word ll_backend__liveness__BornVars_18;
    MR_Word ll_backend__liveness__DelayedDead_19;
    MR_Word ll_backend__liveness__BornVarsGoal_20;
    MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_21;
    MR_Word ll_backend__liveness__Var_24;
    MR_Word ll_backend__liveness__Var_25;

    ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_10, &ll_backend__liveness__Goal_12, ll_backend__liveness__BornVars0_3, &ll_backend__liveness__BornVarsGoal_20, ll_backend__liveness__DelayedDead0_4, &ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__VarSet_5);
    {
      ll_backend__liveness__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_24, 0) = ((MR_Box) (ll_backend__liveness__Goal_12));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_24, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadGoal_13));
    }
    ll_backend__liveness__delay_death_disj_6_p_0(ll_backend__liveness__Goals0_11, &ll_backend__liveness__Goals_14, ll_backend__liveness__BornVars0_3, ll_backend__liveness__DelayedDead0_4, ll_backend__liveness__VarSet_5, &ll_backend__liveness__MaybeBornVarsDelayedDead_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Var_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_14));
    }
    if ((ll_backend__liveness__MaybeBornVarsDelayedDead_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__liveness__BornVars_18 = ll_backend__liveness__BornVarsGoal_20;
      ll_backend__liveness__DelayedDead_19 = ll_backend__liveness__DelayedDeadGoal_13;
    }
    else
    {
      MR_Word ll_backend__liveness__TypeCtorInfo_27_27;
      MR_Word ll_backend__liveness__BornVarsGoals_22;
      MR_Word ll_backend__liveness__DelayedDeadGoals_23;
      MR_Word ll_backend__liveness__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_21, (MR_Integer) 0)));

      ll_backend__liveness__BornVarsGoals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_26, (MR_Integer) 0)));
      ll_backend__liveness__DelayedDeadGoals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_26, (MR_Integer) 1)));
      ll_backend__liveness__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_27_27, ll_backend__liveness__BornVarsGoal_20, ll_backend__liveness__BornVarsGoals_22, &ll_backend__liveness__BornVars_18);
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_27_27, ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__DelayedDeadGoals_23, &ll_backend__liveness__DelayedDead_19);
    }
    {
      ll_backend__liveness__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_25, 0) = ((MR_Box) (ll_backend__liveness__BornVars_18));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_25, 1) = ((MR_Box) (ll_backend__liveness__DelayedDead_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Var_25));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word * ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word * ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__VarSet_7)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__HeadVar__6_6 = ll_backend__liveness__HeadVar__5_5;
    *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
  }
  else
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_28_28;
    MR_Word ll_backend__liveness__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_17;
    MR_Word ll_backend__liveness__Goals_18;
    MR_Word ll_backend__liveness__BornVarsGoal_24;
    MR_Word ll_backend__liveness__DelayedDeadGoal_25;
    MR_Word ll_backend__liveness__BornVarsGoals_26;
    MR_Word ll_backend__liveness__DelayedDeadGoals_27;

    ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_15, &ll_backend__liveness__Goal_17, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__HeadVar__5_5, &ll_backend__liveness__DelayedDeadGoal_25, ll_backend__liveness__VarSet_7);
    ll_backend__liveness__delay_death_par_conj_7_p_0(ll_backend__liveness__Goals0_16, &ll_backend__liveness__Goals_18, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__BornVarsGoals_26, ll_backend__liveness__HeadVar__5_5, &ll_backend__liveness__DelayedDeadGoals_27, ll_backend__liveness__VarSet_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_18));
    }
    ll_backend__liveness__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__BornVarsGoals_26, ll_backend__liveness__HeadVar__4_4);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__DelayedDeadGoal_25, ll_backend__liveness__DelayedDeadGoals_27, ll_backend__liveness__HeadVar__6_6);
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_4,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_6,
  MR_Word ll_backend__liveness__VarSet_7)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__STATE_VARIABLE_DelayedDead_6 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5;
    *ll_backend__liveness__STATE_VARIABLE_BornVars_4 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_3;
  }
  else
  {
    MR_Word ll_backend__liveness__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_17;
    MR_Word ll_backend__liveness__Goals_18;
    MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_26_26;
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27;

    ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_15, &ll_backend__liveness__Goal_17, ll_backend__liveness__STATE_VARIABLE_BornVars_0_3, &ll_backend__liveness__STATE_VARIABLE_BornVars_26_26, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27, ll_backend__liveness__VarSet_7);
    ll_backend__liveness__delay_death_conj_7_p_0(ll_backend__liveness__Goals0_16, &ll_backend__liveness__Goals_18, ll_backend__liveness__STATE_VARIABLE_BornVars_26_26, ll_backend__liveness__STATE_VARIABLE_BornVars_4, ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27, ll_backend__liveness__STATE_VARIABLE_DelayedDead_6, ll_backend__liveness__VarSet_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_18));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1)
{
  {
    MR_Box ll_backend__liveness__wrapper_arg_2;
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv1_Case_7;

    ll_backend__liveness__conv1_Case_7 = ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv1_Case_7));
    return ll_backend__liveness__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1)
{
  {
    MR_Box ll_backend__liveness__wrapper_arg_2;
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
    MR_Word ll_backend__liveness__conv0_Goal_7;

    ll_backend__liveness__conv0_Goal_7 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv0_Goal_7));
    return ll_backend__liveness__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalExpr_73,
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalInfo_75,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_76,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_77,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_79,
  MR_Word ll_backend__liveness__VarSet_14)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    switch (MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__Goal0_48 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72), (MR_Integer) 0);
          MR_Word ll_backend__liveness__Goal_49;
          MR_Word ll_backend__liveness__Var_50;

          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_48, &ll_backend__liveness__Goal_49, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__Var_50, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
          *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__Goal_49);
          *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
          *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
          *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
          *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
          *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
              *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
              *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
              *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
              *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__liveness__ConjType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Goals_40;

              switch (ll_backend__liveness__ConjType_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__liveness__delay_death_par_conj_7_p_0(ll_backend__liveness__Goals0_39, &ll_backend__liveness__Goals_40, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_BornVars_77, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__delay_death_conj_7_p_0(ll_backend__liveness__Goals0_39, &ll_backend__liveness__Goals_40, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_BornVars_77, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__ConjType_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Goals_40));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__liveness__GoalDeaths_41;
              MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_42;
              MR_Word ll_backend__liveness__Goals0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));

              ll_backend__liveness__delay_death_disj_6_p_0(ll_backend__liveness__Goals0_113, &ll_backend__liveness__GoalDeaths_41, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__VarSet_14, &ll_backend__liveness__MaybeBornVarsDelayedDead_42);
              if ((ll_backend__liveness__MaybeBornVarsDelayedDead_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
                *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
                *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
              }
              else
              {
                MR_Word ll_backend__liveness__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_42, (MR_Integer) 0)));
                MR_Word ll_backend__liveness__Var_104;
                MR_Word ll_backend__liveness__Goals_111;

                *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_101, (MR_Integer) 0)));
                *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_101, (MR_Integer) 1)));
                {
                  ll_backend__liveness__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_104, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_104, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_104, 3) = ((MR_Box) (*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79));
                }
                ll_backend__liveness__Goals_111 = mercury__list__map_2_f_0((MR_Word) &ll_backend__liveness_scalar_common_2[0], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__liveness__Var_104, ll_backend__liveness__GoalDeaths_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_111));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__liveness__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__CanFail_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Cases0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__CaseDeaths_46;
              MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_115;

              ll_backend__liveness__delay_death_cases_6_p_0(ll_backend__liveness__Cases0_45, &ll_backend__liveness__CaseDeaths_46, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__VarSet_14, &ll_backend__liveness__MaybeBornVarsDelayedDead_115);
              if ((ll_backend__liveness__MaybeBornVarsDelayedDead_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "empty switch");
                  return;
                }
              }
              else
              {
                MR_Word ll_backend__liveness__Cases_47;
                MR_Word ll_backend__liveness__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_115, (MR_Integer) 0)));
                MR_Word ll_backend__liveness__Var_99;

                *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_96, (MR_Integer) 0)));
                *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_96, (MR_Integer) 1)));
                {
                  ll_backend__liveness__Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_99, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_99, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_2));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_99, 3) = ((MR_Box) (*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79));
                }
                ll_backend__liveness__Cases_47 = mercury__list__map_2_f_0((MR_Word) &ll_backend__liveness_scalar_common_2[1], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, ll_backend__liveness__Var_99, ll_backend__liveness__CaseDeaths_46);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Var_43));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__CanFail_44));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__liveness__Cases_47));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__liveness__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goal0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Goal_117;
              MR_Word ll_backend__liveness__Var_83;
              MR_Word ll_backend__liveness__Var_69;

              ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 1)));
                ll_backend__liveness__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 2)));
                ll_backend__liveness__succeeded = (ll_backend__liveness__Var_83 == (MR_Integer) 1);
              }
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__Goal_117 = ll_backend__liveness__Goal0_116;
                *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
              }
              else
              {
                MR_Word ll_backend__liveness__Var_70;

                ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_116, &ll_backend__liveness__Goal_117, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__Var_70, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Reason_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Goal_117));
              }
              *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__liveness__TypeCtorInfo_126_126;
              MR_Word ll_backend__liveness__QuantVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Cond0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Then0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 4)));
              MR_Word ll_backend__liveness__Cond_57;
              MR_Word ll_backend__liveness__BornVarsCond_58;
              MR_Word ll_backend__liveness__DelayedDeadCond_59;
              MR_Word ll_backend__liveness__Then1_60;
              MR_Word ll_backend__liveness__BornVarsThen_61;
              MR_Word ll_backend__liveness__DelayedDeadThen_62;
              MR_Word ll_backend__liveness__Else1_63;
              MR_Word ll_backend__liveness__BornVarsElse_64;
              MR_Word ll_backend__liveness__DelayedDeadElse_65;
              MR_Word ll_backend__liveness__Then_66;
              MR_Word ll_backend__liveness__Else_67;
              MR_Word ll_backend__liveness__Var_86;
              MR_Word ll_backend__liveness__Var_89;

              ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Cond0_52, &ll_backend__liveness__Cond_57, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__BornVarsCond_58, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, &ll_backend__liveness__DelayedDeadCond_59, ll_backend__liveness__VarSet_14);
              ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Then0_53, &ll_backend__liveness__Then1_60, ll_backend__liveness__BornVarsCond_58, &ll_backend__liveness__BornVarsThen_61, ll_backend__liveness__DelayedDeadCond_59, &ll_backend__liveness__DelayedDeadThen_62, ll_backend__liveness__VarSet_14);
              ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Else0_54, &ll_backend__liveness__Else1_63, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__BornVarsElse_64, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, &ll_backend__liveness__DelayedDeadElse_65, ll_backend__liveness__VarSet_14);
              ll_backend__liveness__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_126_126, ll_backend__liveness__BornVarsThen_61, ll_backend__liveness__BornVarsElse_64, ll_backend__liveness__STATE_VARIABLE_BornVars_77);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_126_126, ll_backend__liveness__DelayedDeadThen_62, ll_backend__liveness__DelayedDeadElse_65, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79);
              {
                ll_backend__liveness__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_86, 0) = ((MR_Box) (ll_backend__liveness__Then1_60));
                MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_86, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadThen_62));
              }
              ll_backend__liveness__Then_66 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__Var_86);
              {
                ll_backend__liveness__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_89, 0) = ((MR_Box) (ll_backend__liveness__Else1_63));
                MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_89, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadElse_65));
              }
              ll_backend__liveness__Else_67 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__Var_89);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__QuantVars_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Cond_57));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__liveness__Then_66));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__liveness__Else_67));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    *ll_backend__liveness__STATE_VARIABLE_GoalInfo_75 = ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
  MR_Box ll_backend__liveness__closure_arg,
  MR_Box ll_backend__liveness__wrapper_arg_1)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;

    ll_backend__liveness__succeeded = ll_backend__liveness__var_is_named_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    return ll_backend__liveness__succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
  MR_Word ll_backend__liveness__Goal0_8,
  MR_Word * ll_backend__liveness__Goal_9,
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_30,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_31,
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_33,
  MR_Word ll_backend__liveness__VarSet_12)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__TypeCtorInfo_43_43;
    MR_Word ll_backend__liveness__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__PreBirths_15;
    MR_Word ll_backend__liveness__PreDeaths0_16;
    MR_Word ll_backend__liveness__PreDelayedDead_18;
    MR_Word ll_backend__liveness__UnnamedPreDeaths_19;
    MR_Word ll_backend__liveness__GoalInfo1_20;
    MR_Word ll_backend__liveness__GoalExpr_21;
    MR_Word ll_backend__liveness__GoalInfo2_22;
    MR_Word ll_backend__liveness__PostBirths_23;
    MR_Word ll_backend__liveness__PostDeaths2_24;
    MR_Word ll_backend__liveness__PostDelayedDead_25;
    MR_Word ll_backend__liveness__UnnamedPostDeaths_26;
    MR_Word ll_backend__liveness__ToBeKilled_27;
    MR_Word ll_backend__liveness__PostDeaths_28;
    MR_Word ll_backend__liveness__GoalInfo_29;
    MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_34_34;
    MR_Word ll_backend__liveness__Var_35;
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36;
    MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_37_37;
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38;
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41;

    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__PreBirths_15);
    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__PreDeaths0_16);
    ll_backend__liveness__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PreBirths_15, ll_backend__liveness__STATE_VARIABLE_BornVars_0_30, &ll_backend__liveness__STATE_VARIABLE_BornVars_34_34);
    {
      ll_backend__liveness__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_35, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_35, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_35, 3) = ((MR_Box) (ll_backend__liveness__VarSet_12));
    }
    parse_tree__set_of_var__divide_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__Var_35, ll_backend__liveness__PreDeaths0_16, &ll_backend__liveness__PreDelayedDead_18, &ll_backend__liveness__UnnamedPreDeaths_19);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PreDelayedDead_18, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36);
    hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__UnnamedPreDeaths_19, ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__GoalInfo1_20);
    ll_backend__liveness__delay_death_goal_expr_9_p_0(ll_backend__liveness__GoalExpr0_13, &ll_backend__liveness__GoalExpr_21, ll_backend__liveness__GoalInfo1_20, &ll_backend__liveness__GoalInfo2_22, ll_backend__liveness__STATE_VARIABLE_BornVars_34_34, &ll_backend__liveness__STATE_VARIABLE_BornVars_37_37, ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38, ll_backend__liveness__VarSet_12);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__PostBirths_23);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__PostDeaths2_24);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PostBirths_23, ll_backend__liveness__STATE_VARIABLE_BornVars_37_37, ll_backend__liveness__STATE_VARIABLE_BornVars_31);
    parse_tree__set_of_var__divide_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__Var_35, ll_backend__liveness__PostDeaths2_24, &ll_backend__liveness__PostDelayedDead_25, &ll_backend__liveness__UnnamedPostDeaths_26);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PostDelayedDead_25, ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41);
    parse_tree__set_of_var__divide_by_set_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__STATE_VARIABLE_BornVars_0_30, ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41, ll_backend__liveness__STATE_VARIABLE_DelayedDead_33, &ll_backend__liveness__ToBeKilled_27);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__UnnamedPostDeaths_26, ll_backend__liveness__ToBeKilled_27, &ll_backend__liveness__PostDeaths_28);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_28, ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__GoalInfo_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_29));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
  MR_Word ll_backend__liveness__HeadVar__2_2)
{
  {
    MR_Word ll_backend__liveness__Goal_7;
    MR_Word ll_backend__liveness__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__liveness__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__DelayedDead0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__ToBeKilled_8;
    MR_Word ll_backend__liveness__GoalExpr_9;
    MR_Word ll_backend__liveness__GoalInfo0_10;
    MR_Word ll_backend__liveness__PostDeath0_11;
    MR_Word ll_backend__liveness__PostDeath_12;
    MR_Word ll_backend__liveness__GoalInfo_13;

    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_14_14, ll_backend__liveness__DelayedDead0_6, ll_backend__liveness__FinalDelayedDead_4, &ll_backend__liveness__ToBeKilled_8);
    ll_backend__liveness__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_5, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_5, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_10, &ll_backend__liveness__PostDeath0_11);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_14_14, ll_backend__liveness__PostDeath0_11, ll_backend__liveness__ToBeKilled_8, &ll_backend__liveness__PostDeath_12);
    hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeath_12, ll_backend__liveness__GoalInfo0_10, &ll_backend__liveness__GoalInfo_13);
    {
      ll_backend__liveness__Goal_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_7, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_9));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_7, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_13));
    }
    return ll_backend__liveness__Goal_7;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
  MR_Word ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__CompletedNonLocalUnion_9);
      *ll_backend__liveness__STATE_VARIABLE_Union_8 = ll_backend__liveness__STATE_VARIABLE_Union_0_7;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_20;
      MR_Word ll_backend__liveness__Goals_21;
      MR_Word ll_backend__liveness__Goal1_28;
      MR_Word ll_backend__liveness__DeadnessGoal_29;
      MR_Word ll_backend__liveness__GoalInfo1_31;
      MR_Word ll_backend__liveness__InstmapDelta1_32;
      MR_Word ll_backend__liveness__InstmapReachable_33;
      MR_Word ll_backend__liveness__STATE_VARIABLE_Union_36_36;
      MR_Word ll_backend__liveness__Var_30;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_18, &ll_backend__liveness__Goal1_28, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__6_6);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__STATE_VARIABLE_Union_0_7, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
      ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_21, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__STATE_VARIABLE_Union_36_36, ll_backend__liveness__STATE_VARIABLE_Union_8, ll_backend__liveness__CompletedNonLocalUnion_9);
      ll_backend__liveness__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 0)));
      ll_backend__liveness__GoalInfo1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 1)));
      ll_backend__liveness__InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_31);
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_32);
      if (ll_backend__liveness__succeeded)
        ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 1;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_par_conj\'/9", (MR_String) "unreachable instmap");
          return;
        }
      }
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, *ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__InstmapReachable_33, ll_backend__liveness__Goal1_28, &ll_backend__liveness__Goal_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
  MR_Word ll_backend__liveness__SwitchVar_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word * ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__CompletedNonLocals_6,
  MR_Word ll_backend__liveness__LiveInfo_7,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_8,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_9,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_10)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ll_backend__liveness__TypeCtorInfo_48_48;
      MR_Word ll_backend__liveness__CompletedSwitchVar_18;
      MR_Word ll_backend__liveness__Var_21;
      MR_Word ll_backend__liveness__Var_52;
      MR_Word ll_backend__liveness__Var_57;
      MR_Word ll_backend__liveness__Var_58;
      MR_Word ll_backend__liveness__Var_55;
      MR_Word ll_backend__liveness__Var_56;

      *ll_backend__liveness__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ll_backend__liveness__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      ll_backend__liveness__Var_21 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_48_48, ll_backend__liveness__SwitchVar_1);
      ll_backend__liveness__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 0)));
      ll_backend__liveness__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 1)));
      ll_backend__liveness__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 2)));
      ll_backend__liveness__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 3)));
      ll_backend__liveness__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 4)));
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Var_21, ll_backend__liveness__Var_52, ll_backend__liveness__Var_57, ll_backend__liveness__Var_58, &ll_backend__liveness__CompletedSwitchVar_18);
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_48_48, ll_backend__liveness__CompletedSwitchVar_18, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__STATE_VARIABLE_Union_9);
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_48_48, *ll_backend__liveness__STATE_VARIABLE_Union_9, ll_backend__liveness__CompletedNonLocals_6, ll_backend__liveness__CompletedNonLocalUnion_10);
    }
    else
    {
      MR_Word ll_backend__liveness__Case0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Cases0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Case_26;
      MR_Word ll_backend__liveness__Cases_27;
      MR_Word ll_backend__liveness__MainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__OtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 2)));
      MR_Word ll_backend__liveness__Goal1_37;
      MR_Word ll_backend__liveness__DeadnessGoal_38;
      MR_Word ll_backend__liveness__GoalInfo1_40;
      MR_Word ll_backend__liveness__InstmapDelta1_41;
      MR_Word ll_backend__liveness__InstmapReachable_42;
      MR_Word ll_backend__liveness__Goal_43;
      MR_Word ll_backend__liveness__STATE_VARIABLE_Union_46_46;
      MR_Word ll_backend__liveness__Var_39;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_36, &ll_backend__liveness__Goal1_37, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__LiveInfo_7);
      ll_backend__liveness__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_37, (MR_Integer) 0)));
      ll_backend__liveness__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_37, (MR_Integer) 1)));
      ll_backend__liveness__InstmapDelta1_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_40);
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_41);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__InstmapReachable_42 = (MR_Integer) 1;
        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__DeadnessGoal_38, &ll_backend__liveness__STATE_VARIABLE_Union_46_46);
      }
      else
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_16_77;
        MR_Word ll_backend__liveness__FilteredDeadnessGoal_73;

        ll_backend__liveness__InstmapReachable_42 = (MR_Integer) 0;
        ll_backend__liveness__TypeCtorInfo_16_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_77, ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__FilteredDeadnessGoal_73);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_77, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__FilteredDeadnessGoal_73, &ll_backend__liveness__STATE_VARIABLE_Union_46_46);
      }
      ll_backend__liveness__detect_deadness_in_cases_10_p_0(ll_backend__liveness__SwitchVar_1, ll_backend__liveness__Cases0_25, &ll_backend__liveness__Cases_27, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__CompletedNonLocals_6, ll_backend__liveness__LiveInfo_7, ll_backend__liveness__STATE_VARIABLE_Union_46_46, ll_backend__liveness__STATE_VARIABLE_Union_9, ll_backend__liveness__CompletedNonLocalUnion_10);
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__4_4, *ll_backend__liveness__CompletedNonLocalUnion_10, ll_backend__liveness__InstmapReachable_42, ll_backend__liveness__Goal1_37, &ll_backend__liveness__Goal_43);
      {
        ll_backend__liveness__Case_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_34));
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_35));
        MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 2) = ((MR_Box) (ll_backend__liveness__Goal_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_27));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
  MR_Word ll_backend__liveness__HeadVar__6_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__CompletedNonLocalUnion_9);
      *ll_backend__liveness__STATE_VARIABLE_Union_8 = ll_backend__liveness__STATE_VARIABLE_Union_0_7;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_20;
      MR_Word ll_backend__liveness__Goals_21;
      MR_Word ll_backend__liveness__Goal1_28;
      MR_Word ll_backend__liveness__DeadnessGoal_29;
      MR_Word ll_backend__liveness__GoalInfo1_31;
      MR_Word ll_backend__liveness__InstmapDelta1_32;
      MR_Word ll_backend__liveness__InstmapReachable_33;
      MR_Word ll_backend__liveness__STATE_VARIABLE_Union_36_36;
      MR_Word ll_backend__liveness__Var_30;

      ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_18, &ll_backend__liveness__Goal1_28, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__6_6);
      ll_backend__liveness__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 0)));
      ll_backend__liveness__GoalInfo1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 1)));
      ll_backend__liveness__InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_31);
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_32);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 1;
        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__DeadnessGoal_29, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
      }
      else
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_16_49;
        MR_Word ll_backend__liveness__FilteredDeadnessGoal_45;

        ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 0;
        ll_backend__liveness__TypeCtorInfo_16_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_49, ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__FilteredDeadnessGoal_45);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_49, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__FilteredDeadnessGoal_45, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
      }
      ll_backend__liveness__detect_deadness_in_disj_9_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_21, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__STATE_VARIABLE_Union_36_36, ll_backend__liveness__STATE_VARIABLE_Union_8, ll_backend__liveness__CompletedNonLocalUnion_9);
      ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, *ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__InstmapReachable_33, ll_backend__liveness__Goal1_28, &ll_backend__liveness__Goal_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_4,
  MR_Word ll_backend__liveness__Liveness0_5,
  MR_Word ll_backend__liveness__HeadVar__6_6)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__liveness__STATE_VARIABLE_Deadness_4 = ll_backend__liveness__STATE_VARIABLE_Deadness_0_3;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_14;
      MR_Word ll_backend__liveness__Goals_15;
      MR_Word ll_backend__liveness__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_12, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__InstmapDelta_21;
      MR_Word ll_backend__liveness__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_12, (MR_Integer) 0)));

      ll_backend__liveness__InstmapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_20);
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_21);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Goals_15 = ll_backend__liveness__Goals0_13;
        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Deadness_0_3, ll_backend__liveness__STATE_VARIABLE_Deadness_4, ll_backend__liveness__Liveness0_5, ll_backend__liveness__HeadVar__6_6);
      }
      else
      {
        MR_Word ll_backend__liveness__LivenessGoal_22;
        MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_26_26;

        ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal0_12, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__Liveness0_5, &ll_backend__liveness__LivenessGoal_22);
        ll_backend__liveness__detect_deadness_in_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__STATE_VARIABLE_Deadness_0_3, &ll_backend__liveness__STATE_VARIABLE_Deadness_26_26, ll_backend__liveness__LivenessGoal_22, ll_backend__liveness__HeadVar__6_6);
        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Deadness_26_26, ll_backend__liveness__STATE_VARIABLE_Deadness_4, ll_backend__liveness__Liveness0_5, ll_backend__liveness__HeadVar__6_6);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_105,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_106,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_107,
  MR_Word ll_backend__liveness__LiveInfo_11)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__TypeCtorInfo_155_155;
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__PreDeaths0_14;
    MR_Word ll_backend__liveness__PreBirths0_15;
    MR_Word ll_backend__liveness__PostDeaths0_16;
    MR_Word ll_backend__liveness__PostBirths0_17;
    MR_Word ll_backend__liveness__GoalExpr_45;
    MR_Word ll_backend__liveness__GoalInfo_47;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_108_108;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_110_110;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_111_111;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_125_125;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_126_126;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreDeaths0_14);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreBirths0_15);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeaths0_16);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostBirths0_17);
    ll_backend__liveness__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_0_105, ll_backend__liveness__PostBirths0_17, &ll_backend__liveness__STATE_VARIABLE_Deadness_108_108);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PostDeaths0_16, ll_backend__liveness__STATE_VARIABLE_Deadness_108_108, &ll_backend__liveness__STATE_VARIABLE_Deadness_109_109);
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Liveness_0_107, ll_backend__liveness__PreDeaths0_14, &ll_backend__liveness__STATE_VARIABLE_Liveness_110_110);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PreBirths0_15, ll_backend__liveness__STATE_VARIABLE_Liveness_110_110, &ll_backend__liveness__STATE_VARIABLE_Liveness_111_111);
    switch (MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_12), (MR_Integer) 0);
          MR_Word ll_backend__liveness__SubGoal_100;

          ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__SubGoal0_99, &ll_backend__liveness__SubGoal_100, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
          ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_100);
          ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__liveness__CompletedNonLocals_42;
          MR_Word ll_backend__liveness__LiveNonLocals_43;
          MR_Word ll_backend__liveness__NewPostDeaths_44;
          MR_Word ll_backend__liveness__PostDeaths_46;
          MR_Word ll_backend__liveness___BaseNonLocals_41;

          ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness___BaseNonLocals_41, &ll_backend__liveness__CompletedNonLocals_42);
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_42, &ll_backend__liveness__LiveNonLocals_43);
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__LiveNonLocals_43, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__NewPostDeaths_44);
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__NewPostDeaths_44, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
          ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PostDeaths0_16, ll_backend__liveness__NewPostDeaths_44, &ll_backend__liveness__PostDeaths_46);
          hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_46, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_47);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__liveness__CompletedNonLocals_42;
              MR_Word ll_backend__liveness__LiveNonLocals_43;
              MR_Word ll_backend__liveness__NewPostDeaths_44;
              MR_Word ll_backend__liveness__PostDeaths_46;
              MR_Word ll_backend__liveness___BaseNonLocals_41;

              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness___BaseNonLocals_41, &ll_backend__liveness__CompletedNonLocals_42);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_42, &ll_backend__liveness__LiveNonLocals_43);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__LiveNonLocals_43, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__NewPostDeaths_44);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__NewPostDeaths_44, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
              ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PostDeaths0_16, ll_backend__liveness__NewPostDeaths_44, &ll_backend__liveness__PostDeaths_46);
              hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_46, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_47);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__liveness__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Conjuncts0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));

              if ((ll_backend__liveness__Conjuncts0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
                ll_backend__liveness__STATE_VARIABLE_Deadness_125_125 = ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
              }
              else
              {
                MR_Word ll_backend__liveness__Conjuncts_52;

                switch (ll_backend__liveness__ConjType_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__liveness__Union0_54;
                      MR_Word ll_backend__liveness__CompletedNonLocals_128;
                      MR_Word ll_backend__liveness__Var_53;
                      MR_Word ll_backend__liveness___CompletedNonLocalUnion_56;

                      ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__Var_53, &ll_backend__liveness__CompletedNonLocals_128);
                      ll_backend__liveness__Union0_54 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                      ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(ll_backend__liveness__Conjuncts0_49, &ll_backend__liveness__Conjuncts_52, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_128, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_54, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness___CompletedNonLocalUnion_56);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word ll_backend__liveness__Goal0_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts0_49, (MR_Integer) 0)));
                      MR_Word ll_backend__liveness__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts0_49, (MR_Integer) 1)));
                      MR_Word ll_backend__liveness__Goal_163;
                      MR_Word ll_backend__liveness__Goals_164;
                      MR_Word ll_backend__liveness__GoalInfo_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_161, (MR_Integer) 1)));
                      MR_Word ll_backend__liveness__InstmapDelta_170;
                      MR_Word ll_backend__liveness__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_161, (MR_Integer) 0)));

                      ll_backend__liveness__InstmapDelta_170 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_169);
                      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_170);
                      if (ll_backend__liveness__succeeded)
                      {
                        ll_backend__liveness__Goals_164 = ll_backend__liveness__Goals0_162;
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_161, &ll_backend__liveness__Goal_163, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
                      }
                      else
                      {
                        MR_Word ll_backend__liveness__LivenessGoal_171;
                        MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_26_175;

                        ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal0_161, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, &ll_backend__liveness__LivenessGoal_171);
                        ll_backend__liveness__detect_deadness_in_conj_6_p_0(ll_backend__liveness__Goals0_162, &ll_backend__liveness__Goals_164, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_26_175, ll_backend__liveness__LivenessGoal_171, ll_backend__liveness__LiveInfo_11);
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_161, &ll_backend__liveness__Goal_163, ll_backend__liveness__STATE_VARIABLE_Deadness_26_175, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
                      }
                      {
                        ll_backend__liveness__Conjuncts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts_52, 0) = ((MR_Box) (ll_backend__liveness__Goal_163));
                        MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts_52, 1) = ((MR_Box) (ll_backend__liveness__Goals_164));
                      }
                    }
                    break;
                }
                {
                  ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__ConjType_48));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Conjuncts_52));
                }
              }
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__liveness__Disjuncts0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));

              if ((ll_backend__liveness__Disjuncts0_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
                ll_backend__liveness__STATE_VARIABLE_Deadness_125_125 = ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
              }
              else
              {
                MR_Word ll_backend__liveness__Disjuncts_61;
                MR_Word ll_backend__liveness__CompletedNonLocals_133;
                MR_Word ll_backend__liveness__Union0_134;
                MR_Word ll_backend__liveness__Var_60;
                MR_Word ll_backend__liveness__Var_62;

                ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__Var_60, &ll_backend__liveness__CompletedNonLocals_133);
                ll_backend__liveness__Union0_134 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                ll_backend__liveness__detect_deadness_in_disj_9_p_0(ll_backend__liveness__Disjuncts0_57, &ll_backend__liveness__Disjuncts_61, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_133, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_134, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness__Var_62);
                {
                  ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Disjuncts_61));
                }
              }
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__liveness__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Det_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Cases0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Cases_67;
              MR_Word ll_backend__liveness__CompletedNonLocals_142;
              MR_Word ll_backend__liveness__Union0_143;
              MR_Word ll_backend__liveness__Var_66;
              MR_Word ll_backend__liveness__Var_68;

              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__Var_66, &ll_backend__liveness__CompletedNonLocals_142);
              ll_backend__liveness__Union0_143 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
              ll_backend__liveness__detect_deadness_in_cases_10_p_0(ll_backend__liveness__Var_63, ll_backend__liveness__Cases0_65, &ll_backend__liveness__Cases_67, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_142, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_143, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness__Var_68);
              {
                ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Var_63));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Det_64));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 3) = ((MR_Box) (ll_backend__liveness__Cases_67));
              }
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__liveness__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__SubGoal0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__SubGoal_154;
              MR_Word ll_backend__liveness__TermVar_102;
              MR_Word ll_backend__liveness__Var_115;

              ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__TermVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 1)));
                ll_backend__liveness__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 2)));
                ll_backend__liveness__succeeded = (ll_backend__liveness__Var_115 == (MR_Integer) 1);
              }
              if (ll_backend__liveness__succeeded)
              {
                MR_Word ll_backend__liveness__CompletedTermVars_103;
                MR_Word ll_backend__liveness__Var_116;

                ll_backend__liveness__Var_116 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__TermVar_102);
                ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Var_116, &ll_backend__liveness__CompletedTermVars_103);
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedTermVars_103, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                ll_backend__liveness__SubGoal_154 = ll_backend__liveness__SubGoal0_153;
              }
              else
                ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__SubGoal0_153, &ll_backend__liveness__SubGoal_154, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
              {
                ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Reason_101));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_154));
              }
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__liveness__Vars_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 4)));
              MR_Word ll_backend__liveness__LivenessCond_74;
              MR_Word ll_backend__liveness__Else1_75;
              MR_Word ll_backend__liveness__DeadnessElse_76;
              MR_Word ll_backend__liveness__Then_77;
              MR_Word ll_backend__liveness__DeadnessThen_78;
              MR_Word ll_backend__liveness__Cond1_79;
              MR_Word ll_backend__liveness__DeadnessCond_80;
              MR_Word ll_backend__liveness__InstmapDelta_82;
              MR_Word ll_backend__liveness__Cond_96;
              MR_Word ll_backend__liveness__Else_97;
              MR_Word ll_backend__liveness__CompletedNonLocals_150;
              MR_Word ll_backend__liveness__Var_81;

              ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Cond0_70, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, &ll_backend__liveness__LivenessCond_74);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Else0_72, &ll_backend__liveness__Else1_75, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Then0_71, &ll_backend__liveness__Then_77, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__DeadnessThen_78, ll_backend__liveness__LivenessCond_74, ll_backend__liveness__LiveInfo_11);
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Cond0_70, &ll_backend__liveness__Cond1_79, ll_backend__liveness__DeadnessThen_78, &ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
              ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__Var_81, &ll_backend__liveness__CompletedNonLocals_150);
              ll_backend__liveness__InstmapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo0_13);
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta_82);
              if (ll_backend__liveness__succeeded)
              {
                MR_Word ll_backend__liveness__CondGoalInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond0_70, (MR_Integer) 1)));
                MR_Word ll_backend__liveness__CondInstmapDelta_85;
                MR_Word ll_backend__liveness__ThenGoalInfo_87;
                MR_Word ll_backend__liveness__ThenInstmapDelta_88;
                MR_Word ll_backend__liveness__ElseGoalInfo_90;
                MR_Word ll_backend__liveness__ElseInstmapDelta_91;
                MR_Word ll_backend__liveness__CondThenInstmapReachable_92;
                MR_Word ll_backend__liveness__ElseInstmapReachable_93;
                MR_Word ll_backend__liveness__Union1_94;
                MR_Word ll_backend__liveness__CompletedNonLocalDeadness_95;
                MR_Word ll_backend__liveness__Union0_145;
                MR_Word ll_backend__liveness__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond0_70, (MR_Integer) 0)));
                MR_Word ll_backend__liveness__Var_86;
                MR_Word ll_backend__liveness__Var_89;

                ll_backend__liveness__CondInstmapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondGoalInfo_84);
                ll_backend__liveness__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then0_71, (MR_Integer) 0)));
                ll_backend__liveness__ThenGoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then0_71, (MR_Integer) 1)));
                ll_backend__liveness__ThenInstmapDelta_88 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ThenGoalInfo_87);
                ll_backend__liveness__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_72, (MR_Integer) 0)));
                ll_backend__liveness__ElseGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_72, (MR_Integer) 1)));
                ll_backend__liveness__ElseInstmapDelta_91 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ElseGoalInfo_90);
                ll_backend__liveness__Union0_145 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__CondInstmapDelta_85);
                if (ll_backend__liveness__succeeded)
                  ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ThenInstmapDelta_88);
                if (ll_backend__liveness__succeeded)
                {
                  ll_backend__liveness__CondThenInstmapReachable_92 = (MR_Integer) 1;
                  parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Union0_145, ll_backend__liveness__DeadnessCond_80, &ll_backend__liveness__Union1_94);
                }
                else
                {
                  MR_Word ll_backend__liveness__TypeCtorInfo_16_187;
                  MR_Word ll_backend__liveness__FilteredDeadnessGoal_183;

                  ll_backend__liveness__CondThenInstmapReachable_92 = (MR_Integer) 0;
                  ll_backend__liveness__TypeCtorInfo_16_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_187, ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__FilteredDeadnessGoal_183);
                  parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_187, ll_backend__liveness__Union0_145, ll_backend__liveness__FilteredDeadnessGoal_183, &ll_backend__liveness__Union1_94);
                }
                ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ElseInstmapDelta_91);
                if (ll_backend__liveness__succeeded)
                {
                  ll_backend__liveness__ElseInstmapReachable_93 = (MR_Integer) 1;
                  ll_backend__liveness__union_branch_deadness_5_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__ElseInstmapReachable_93, ll_backend__liveness__Union1_94, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                }
                else
                {
                  MR_Word ll_backend__liveness__TypeCtorInfo_16_209;
                  MR_Word ll_backend__liveness__FilteredDeadnessGoal_205;

                  ll_backend__liveness__ElseInstmapReachable_93 = (MR_Integer) 0;
                  ll_backend__liveness__TypeCtorInfo_16_209 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_209, ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__FilteredDeadnessGoal_205);
                  parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_209, ll_backend__liveness__Union1_94, ll_backend__liveness__FilteredDeadnessGoal_205, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                }
                parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__CompletedNonLocals_150, &ll_backend__liveness__CompletedNonLocalDeadness_95);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_95, ll_backend__liveness__CondThenInstmapReachable_92, ll_backend__liveness__Cond1_79, &ll_backend__liveness__Cond_96);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_95, ll_backend__liveness__ElseInstmapReachable_93, ll_backend__liveness__Else1_75, &ll_backend__liveness__Else_97);
              }
              else
              {
                MR_Word ll_backend__liveness__CompletedNonLocalDeadness_147;

                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__DeadnessElse_76, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__CompletedNonLocals_150, &ll_backend__liveness__CompletedNonLocalDeadness_147);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_147, (MR_Integer) 0, ll_backend__liveness__Cond1_79, &ll_backend__liveness__Cond_96);
                ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_147, (MR_Integer) 0, ll_backend__liveness__Else1_75, &ll_backend__liveness__Else_97);
              }
              {
                ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Vars_69));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Cond_96));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 3) = ((MR_Box) (ll_backend__liveness__Then_77));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 4) = ((MR_Box) (ll_backend__liveness__Else_97));
              }
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_47));
    }
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__PreBirths0_15, &ll_backend__liveness__STATE_VARIABLE_Deadness_126_126);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PreDeaths0_14, ll_backend__liveness__STATE_VARIABLE_Deadness_126_126, ll_backend__liveness__STATE_VARIABLE_Deadness_106);
  }
}

static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
  MR_Word ll_backend__liveness__LiveInfo_4,
  MR_Word ll_backend__liveness__Vars0_5,
  MR_Word * ll_backend__liveness__Vars_6)
{
  {
    MR_Word ll_backend__liveness__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 3)));
    MR_Word ll_backend__liveness__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 4)));
    MR_Word ll_backend__liveness__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 2)));

    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Vars0_5, ll_backend__liveness__Var_7, ll_backend__liveness__Var_12, ll_backend__liveness__Var_13, ll_backend__liveness__Vars_6);
  }
}

static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
  MR_Word ll_backend__liveness__DeadnessGoal_6,
  MR_Word ll_backend__liveness__Deadness0_7,
  MR_Word ll_backend__liveness__InstmapReachable_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_11,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_12)
{
  switch (ll_backend__liveness__InstmapReachable_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ll_backend__liveness__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word ll_backend__liveness__FilteredDeadnessGoal_10;

        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_16, ll_backend__liveness__DeadnessGoal_6, ll_backend__liveness__Deadness0_7, &ll_backend__liveness__FilteredDeadnessGoal_10);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_16, ll_backend__liveness__STATE_VARIABLE_Union_0_11, ll_backend__liveness__FilteredDeadnessGoal_10, ll_backend__liveness__STATE_VARIABLE_Union_12);
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_11, ll_backend__liveness__DeadnessGoal_6, ll_backend__liveness__STATE_VARIABLE_Union_12);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
  MR_Word ll_backend__liveness__DeadnessGoal_7,
  MR_Word ll_backend__liveness__Deadness0_8,
  MR_Word ll_backend__liveness__CompletedNonLocalUnion_9,
  MR_Word ll_backend__liveness__InstmapReachable_10,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Goal_0_14,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Goal_15)
{
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__liveness__PreDeaths_12;

    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__DeadnessGoal_7, &ll_backend__liveness__PreDeaths_12);
    switch (ll_backend__liveness__InstmapReachable_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__FilteredPreDeaths_13;
          MR_Word ll_backend__liveness__GoalExpr_22;
          MR_Word ll_backend__liveness__GoalInfo0_23;
          MR_Word ll_backend__liveness__PreDeaths0_24;
          MR_Word ll_backend__liveness__PreDeaths_25;
          MR_Word ll_backend__liveness__GoalInfo_26;

          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PreDeaths_12, ll_backend__liveness__Deadness0_8, &ll_backend__liveness__FilteredPreDeaths_13);
          ll_backend__liveness__GoalExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 0)));
          ll_backend__liveness__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 1)));
          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_23, &ll_backend__liveness__PreDeaths0_24);
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PreDeaths0_24, ll_backend__liveness__FilteredPreDeaths_13, &ll_backend__liveness__PreDeaths_25);
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__PreDeaths_25, ll_backend__liveness__GoalInfo0_23, &ll_backend__liveness__GoalInfo_26);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__liveness__STATE_VARIABLE_Goal_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_22));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_26));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__liveness__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 0)));
          MR_Word ll_backend__liveness__GoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 1)));
          MR_Word ll_backend__liveness__PreDeaths0_33;
          MR_Word ll_backend__liveness__PreDeaths_34;
          MR_Word ll_backend__liveness__GoalInfo_35;

          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_32, &ll_backend__liveness__PreDeaths0_33);
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PreDeaths0_33, ll_backend__liveness__PreDeaths_12, &ll_backend__liveness__PreDeaths_34);
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__PreDeaths_34, ll_backend__liveness__GoalInfo0_32, &ll_backend__liveness__GoalInfo_35);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__liveness__STATE_VARIABLE_Goal_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_31));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_35));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__LiveInfo_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
    else
    {
      MR_Word ll_backend__liveness__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_15_15;

      ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_9, ll_backend__liveness__LiveInfo_2, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word ll_backend__liveness__next_value_of_HeadVar__1_1 = ll_backend__liveness__Goals_10;
        MR_Word ll_backend__liveness__next_value_of_STATE_VARIABLE_Liveness_0_3 = ll_backend__liveness__STATE_VARIABLE_Liveness_15_15;

        ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__next_value_of_HeadVar__1_1;
        ll_backend__liveness__STATE_VARIABLE_Liveness_0_3 = ll_backend__liveness__next_value_of_STATE_VARIABLE_Liveness_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
  MR_Word ll_backend__liveness__GoalExpr_5,
  MR_Word ll_backend__liveness__LiveInfo_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_55,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_56)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    switch (MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__SubGoal_50 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr_5), (MR_Integer) 0);

          ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__SubGoal_50, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
        break;
      case (MR_Integer) 2:
        *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
            break;
          case (MR_Integer) 1:
            *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__liveness__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
              MR_Word ll_backend__liveness___ConjType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));

              ll_backend__liveness__update_liveness_conj_4_p_0(ll_backend__liveness__Goals_32, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__liveness__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goal_33;

              ll_backend__liveness__succeeded = ll_backend__liveness__find_reachable_goal_2_p_0(ll_backend__liveness__Goals_71, &ll_backend__liveness__Goal_33);
              if (ll_backend__liveness__succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_33, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
              else
                *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__liveness__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Goal_72;

              ll_backend__liveness__succeeded = ll_backend__liveness__find_reachable_case_2_p_0(ll_backend__liveness__Cases_36, &ll_backend__liveness__Goal_72);
              if (ll_backend__liveness__succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_72, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
              else
                *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__liveness__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__SubGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__TermVar_52;
              MR_Word ll_backend__liveness__Var_60;

              ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__TermVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 1)));
                ll_backend__liveness__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 2)));
                ll_backend__liveness__succeeded = (ll_backend__liveness__Var_60 == (MR_Integer) 1);
              }
              if (ll_backend__liveness__succeeded)
              {
                MR_Word ll_backend__liveness__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                MR_Word ll_backend__liveness__CompletedTermVars_53;
                MR_Word ll_backend__liveness__Var_61;
                MR_Word ll_backend__liveness__Var_79;
                MR_Word ll_backend__liveness__Var_84;
                MR_Word ll_backend__liveness__Var_85;
                MR_Word ll_backend__liveness__Var_82;
                MR_Word ll_backend__liveness__Var_83;

                ll_backend__liveness__Var_61 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_75_75, ll_backend__liveness__TermVar_52);
                ll_backend__liveness__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 0)));
                ll_backend__liveness__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 1)));
                ll_backend__liveness__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 2)));
                ll_backend__liveness__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 3)));
                ll_backend__liveness__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 4)));
                hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Var_61, ll_backend__liveness__Var_79, ll_backend__liveness__Var_84, ll_backend__liveness__Var_85, &ll_backend__liveness__CompletedTermVars_53);
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_75_75, ll_backend__liveness__CompletedTermVars_53, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
              }
              else
                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__SubGoal_74, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__liveness__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 4)));
              MR_Word ll_backend__liveness__ElseGoalInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else_40, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__ElseInstmapDelta_43;
              MR_Word ll_backend__liveness__CondGoalInfo_45;
              MR_Word ll_backend__liveness__CondInstmapDelta_46;
              MR_Word ll_backend__liveness__ThenGoalInfo_48;
              MR_Word ll_backend__liveness__ThenInstmapDelta_49;
              MR_Word ll_backend__liveness__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else_40, (MR_Integer) 0)));
              MR_Word ll_backend__liveness__Var_44;
              MR_Word ll_backend__liveness__Var_47;

              ll_backend__liveness__ElseInstmapDelta_43 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ElseGoalInfo_42);
              ll_backend__liveness__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_38, (MR_Integer) 0)));
              ll_backend__liveness__CondGoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_38, (MR_Integer) 1)));
              ll_backend__liveness__CondInstmapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondGoalInfo_45);
              ll_backend__liveness__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then_39, (MR_Integer) 0)));
              ll_backend__liveness__ThenGoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then_39, (MR_Integer) 1)));
              ll_backend__liveness__ThenInstmapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ThenGoalInfo_48);
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ElseInstmapDelta_43);
              if (ll_backend__liveness__succeeded)
                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Else_40, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
              else
              {
                ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__CondInstmapDelta_46);
                if (ll_backend__liveness__succeeded)
                  ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ThenInstmapDelta_49);
                if (ll_backend__liveness__succeeded)
                {
                  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_66_66;

                  ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Cond_38, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, &ll_backend__liveness__STATE_VARIABLE_Liveness_66_66);
                  ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Then_39, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_66_66, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
                }
                else
                  *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.update_liveness_expr\'/4", (MR_String) "shorthand");
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
ll_backend__liveness__update_liveness_goal_4_p_0(
  MR_Word ll_backend__liveness__Goal_5,
  MR_Word ll_backend__liveness__LiveInfo_6,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_20,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_21)
{
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_28_28;
    MR_Word ll_backend__liveness__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__PreDeaths_10;
    MR_Word ll_backend__liveness__PreBirths_11;
    MR_Word ll_backend__liveness__PostDeaths_12;
    MR_Word ll_backend__liveness__PostBirths_13;
    MR_Word ll_backend__liveness__OldLiveness_15;
    MR_Word ll_backend__liveness__NewLiveness0_16;
    MR_Word ll_backend__liveness__Var_17;
    MR_Word ll_backend__liveness__CompletedNonLocals_18;
    MR_Word ll_backend__liveness__NewLiveness_19;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_23_23;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_24_24;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_25_25;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_26_26;
    MR_Word ll_backend__liveness__Var_36;
    MR_Word ll_backend__liveness__Var_41;
    MR_Word ll_backend__liveness__Var_42;
    MR_Word ll_backend__liveness__Var_39;
    MR_Word ll_backend__liveness__Var_40;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PreDeaths_10);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PreBirths_11);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PostDeaths_12);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PostBirths_13);
    ll_backend__liveness__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_0_20, ll_backend__liveness__PreDeaths_10, &ll_backend__liveness__STATE_VARIABLE_Liveness_22_22);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__PreBirths_11, ll_backend__liveness__STATE_VARIABLE_Liveness_22_22, &ll_backend__liveness__STATE_VARIABLE_Liveness_23_23);
    ll_backend__liveness__update_liveness_expr_4_p_0(ll_backend__liveness__GoalExpr_8, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_23_23, &ll_backend__liveness__STATE_VARIABLE_Liveness_24_24);
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_24_24, ll_backend__liveness__PostDeaths_12, &ll_backend__liveness__STATE_VARIABLE_Liveness_25_25);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__PostBirths_13, ll_backend__liveness__STATE_VARIABLE_Liveness_25_25, &ll_backend__liveness__STATE_VARIABLE_Liveness_26_26);
    parse_tree__set_of_var__divide_by_set_4_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_0_20, ll_backend__liveness__STATE_VARIABLE_Liveness_26_26, &ll_backend__liveness__OldLiveness_15, &ll_backend__liveness__NewLiveness0_16);
    ll_backend__liveness__Var_17 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_9);
    ll_backend__liveness__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 0)));
    ll_backend__liveness__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 1)));
    ll_backend__liveness__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 2)));
    ll_backend__liveness__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 3)));
    ll_backend__liveness__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 4)));
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Var_17, ll_backend__liveness__Var_36, ll_backend__liveness__Var_41, ll_backend__liveness__Var_42, &ll_backend__liveness__CompletedNonLocals_18);
    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__NewLiveness0_16, ll_backend__liveness__CompletedNonLocals_18, &ll_backend__liveness__NewLiveness_19);
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__OldLiveness_15, ll_backend__liveness__NewLiveness_19, ll_backend__liveness__STATE_VARIABLE_Liveness_21);
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__ReachableGoal_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_5;
      MR_Word ll_backend__liveness__Cases_6;
      MR_Word ll_backend__liveness__GoalInfo_9;
      MR_Word ll_backend__liveness__InstmapDelta_10;
      MR_Word ll_backend__liveness__Var_11;
      MR_Word ll_backend__liveness__Var_3;
      MR_Word ll_backend__liveness__Var_4;
      MR_Word ll_backend__liveness__Var_8;

      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__liveness__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
        ll_backend__liveness__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_11, (MR_Integer) 0)));
        ll_backend__liveness__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_11, (MR_Integer) 1)));
        ll_backend__liveness__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_11, (MR_Integer) 2)));
        ll_backend__liveness__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 1)));
        ll_backend__liveness__InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_9);
        ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_10);
        if (ll_backend__liveness__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__liveness__next_value_of_HeadVar__1_1 = ll_backend__liveness__Cases_6;

            ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__next_value_of_HeadVar__1_1;
          }
          continue;
        }
        else
        {
          *ll_backend__liveness__ReachableGoal_7 = ll_backend__liveness__Goal_5;
          ll_backend__liveness__succeeded = MR_TRUE;
        }
      }
      return ll_backend__liveness__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__ReachableGoal_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_3;
      MR_Word ll_backend__liveness__Goals_4;
      MR_Word ll_backend__liveness__GoalInfo_7;
      MR_Word ll_backend__liveness__InstmapDelta_8;
      MR_Word ll_backend__liveness__Var_6;

      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__liveness__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
        ll_backend__liveness__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_3, (MR_Integer) 0)));
        ll_backend__liveness__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_3, (MR_Integer) 1)));
        ll_backend__liveness__InstmapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_7);
        ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta_8);
        if (ll_backend__liveness__succeeded)
        {
          *ll_backend__liveness__ReachableGoal_5 = ll_backend__liveness__Goal_3;
          ll_backend__liveness__succeeded = MR_TRUE;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__liveness__next_value_of_HeadVar__1_1 = ll_backend__liveness__Goals_4;

            ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return ll_backend__liveness__succeeded;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_30_30;
    MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_16;
    MR_Word ll_backend__liveness__Goals_17;
    MR_Word ll_backend__liveness__Goal1_22;
    MR_Word ll_backend__liveness__Liveness1_23;
    MR_Word ll_backend__liveness__NonLocalUnion_24;
    MR_Word ll_backend__liveness__Residue_25;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Union_28_28;
    MR_Word ll_backend__liveness__GoalExpr_34;
    MR_Word ll_backend__liveness__GoalInfo0_35;
    MR_Word ll_backend__liveness__PostBirths0_36;
    MR_Word ll_backend__liveness__PostBirths_37;
    MR_Word ll_backend__liveness__GoalInfo_38;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal1_22, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_23, ll_backend__liveness__HeadVar__5_5);
    ll_backend__liveness__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__Liveness1_23, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_28_28, ll_backend__liveness__STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__NonLocalUnion_24, ll_backend__liveness__Liveness1_23, &ll_backend__liveness__Residue_25);
    ll_backend__liveness__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__PostBirths0_36);
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_36, ll_backend__liveness__Residue_25, &ll_backend__liveness__PostBirths_37);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_37, ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__GoalInfo_38);
    {
      ll_backend__liveness__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_34));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_34_34;
    MR_Word ll_backend__liveness__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Case_16;
    MR_Word ll_backend__liveness__Cases_17;
    MR_Word ll_backend__liveness__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 2)));
    MR_Word ll_backend__liveness__Goal1_25;
    MR_Word ll_backend__liveness__Liveness1_26;
    MR_Word ll_backend__liveness__NonLocalUnion_27;
    MR_Word ll_backend__liveness__Residue_28;
    MR_Word ll_backend__liveness__Goal_29;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Union_32_32;
    MR_Word ll_backend__liveness__GoalExpr_38;
    MR_Word ll_backend__liveness__GoalInfo0_39;
    MR_Word ll_backend__liveness__PostBirths0_40;
    MR_Word ll_backend__liveness__PostBirths_41;
    MR_Word ll_backend__liveness__GoalInfo_42;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_24, &ll_backend__liveness__Goal1_25, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_26, ll_backend__liveness__HeadVar__5_5);
    ll_backend__liveness__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, ll_backend__liveness__Liveness1_26, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_32_32);
    ll_backend__liveness__detect_liveness_in_cases_7_p_0(ll_backend__liveness__Cases0_15, &ll_backend__liveness__Cases_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_32_32, ll_backend__liveness__STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_27);
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, ll_backend__liveness__NonLocalUnion_27, ll_backend__liveness__Liveness1_26, &ll_backend__liveness__Residue_28);
    ll_backend__liveness__GoalExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_25, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_25, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_39, &ll_backend__liveness__PostBirths0_40);
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_40, ll_backend__liveness__Residue_28, &ll_backend__liveness__PostBirths_41);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_41, ll_backend__liveness__GoalInfo0_39, &ll_backend__liveness__GoalInfo_42);
    {
      ll_backend__liveness__Goal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_29, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_38));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_29, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_42));
    }
    {
      ll_backend__liveness__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_22));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_23));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 2) = ((MR_Box) (ll_backend__liveness__Goal_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__HeadVar__5_5,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
{
  if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
  }
  else
  {
    MR_Word ll_backend__liveness__TypeCtorInfo_30_30;
    MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Goal_16;
    MR_Word ll_backend__liveness__Goals_17;
    MR_Word ll_backend__liveness__Goal1_22;
    MR_Word ll_backend__liveness__Liveness1_23;
    MR_Word ll_backend__liveness__NonLocalUnion_24;
    MR_Word ll_backend__liveness__Residue_25;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Union_28_28;
    MR_Word ll_backend__liveness__GoalExpr_34;
    MR_Word ll_backend__liveness__GoalInfo0_35;
    MR_Word ll_backend__liveness__PostBirths0_36;
    MR_Word ll_backend__liveness__PostBirths_37;
    MR_Word ll_backend__liveness__GoalInfo_38;

    ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal1_22, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_23, ll_backend__liveness__HeadVar__5_5);
    ll_backend__liveness__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__Liveness1_23, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_28_28);
    ll_backend__liveness__detect_liveness_in_disj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_28_28, ll_backend__liveness__STATE_VARIABLE_Union_7);
    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_24);
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__NonLocalUnion_24, ll_backend__liveness__Liveness1_23, &ll_backend__liveness__Residue_25);
    ll_backend__liveness__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__PostBirths0_36);
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_36, ll_backend__liveness__Residue_25, &ll_backend__liveness__PostBirths_37);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_37, ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__GoalInfo_38);
    {
      ll_backend__liveness__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_34));
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__liveness__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__liveness__HeadVar__5_5)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_12;
      MR_Word ll_backend__liveness__Goals_13;
      MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;
      MR_Word ll_backend__liveness__GoalInfo_17;
      MR_Word ll_backend__liveness__InstmapDelta_18;
      MR_Word ll_backend__liveness__Var_16;

      ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_10, &ll_backend__liveness__Goal_12, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__HeadVar__5_5);
      ll_backend__liveness__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 0)));
      ll_backend__liveness__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 1)));
      ll_backend__liveness__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_17);
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_18);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Goals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;
      }
      else
        ll_backend__liveness__detect_liveness_in_conj_5_p_0(ll_backend__liveness__Goals0_11, &ll_backend__liveness__Goals_13, ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__STATE_VARIABLE_Liveness_4, ll_backend__liveness__HeadVar__5_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_13));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
  MR_Word ll_backend__liveness__Goal0_6,
  MR_Word * ll_backend__liveness__Goal_7,
  MR_Word ll_backend__liveness__Liveness0_8,
  MR_Word * ll_backend__liveness__FinalLiveness_9,
  MR_Word ll_backend__liveness__LiveInfo_10)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__TypeCtorInfo_106_106;
    MR_Word ll_backend__liveness__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_6, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_6, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__BaseNonLocals_13;
    MR_Word ll_backend__liveness__CompletedNonLocals_14;
    MR_Word ll_backend__liveness__NewVarsSet_15;
    MR_Word ll_backend__liveness__InstMapDelta_16;
    MR_Word ll_backend__liveness__Births_17;
    MR_Word ll_backend__liveness__PreDeaths_46;
    MR_Word ll_backend__liveness__PreBirths_47;
    MR_Word ll_backend__liveness__PostDeaths_48;
    MR_Word ll_backend__liveness__PostBirths_49;
    MR_Word ll_backend__liveness__GoalExpr_50;
    MR_Word ll_backend__liveness__GoalInfo_87;

    ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__GoalInfo0_12, &ll_backend__liveness__BaseNonLocals_13, &ll_backend__liveness__CompletedNonLocals_14);
    ll_backend__liveness__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__NewVarsSet_15);
    ll_backend__liveness__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo0_12);
    ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstMapDelta_16);
    if (ll_backend__liveness__succeeded)
      ll_backend__liveness__Births_17 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
    else
    {
      MR_Word ll_backend__liveness__NewVarsList_18;
      MR_Word ll_backend__liveness__Births0_19;
      MR_Word ll_backend__liveness__Births1_20;
      MR_Word ll_backend__liveness__TypeInfos_21;
      MR_Word ll_backend__liveness__NewTypeInfos_22;

      ll_backend__liveness__NewVarsList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NewVarsSet_15);
      ll_backend__liveness__Births0_19 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
      ll_backend__liveness__find_value_giving_occurrences_5_p_0(ll_backend__liveness__NewVarsList_18, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__InstMapDelta_16, ll_backend__liveness__Births0_19, &ll_backend__liveness__Births1_20);
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__BaseNonLocals_13, &ll_backend__liveness__TypeInfos_21);
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__TypeInfos_21, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__NewTypeInfos_22);
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__Births1_20, ll_backend__liveness__NewTypeInfos_22, &ll_backend__liveness__Births_17);
    }
    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__Liveness0_8, ll_backend__liveness__Births_17, ll_backend__liveness__FinalLiveness_9);
    switch (MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__liveness__SubGoal0_80 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_11), (MR_Integer) 0);
          MR_Word ll_backend__liveness__SubGoal_81;
          MR_Word ll_backend__liveness__Liveness_113;
          MR_Word ll_backend__liveness__NonLocalLiveness_114;
          MR_Word ll_backend__liveness__GoalFinalLiveness_115;

          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__SubGoal0_80, &ll_backend__liveness__SubGoal_81, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_113, ll_backend__liveness__LiveInfo_10);
          ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_81);
          ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
          ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_113, &ll_backend__liveness__NonLocalLiveness_114);
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_114, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_115);
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_115, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_115, &ll_backend__liveness__PostBirths_49);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
          ll_backend__liveness__PreBirths_47 = ll_backend__liveness__Births_17;
          ll_backend__liveness__PostDeaths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
          ll_backend__liveness__PostBirths_49 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
          ll_backend__liveness__GoalExpr_50 = ll_backend__liveness__GoalExpr0_11;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = ll_backend__liveness__Births_17;
              ll_backend__liveness__PostDeaths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PostBirths_49 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__GoalExpr_50 = ll_backend__liveness__GoalExpr0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__liveness__ConjType_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goals0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Goals_53;
              MR_Word ll_backend__liveness__Liveness_54;
              MR_Word ll_backend__liveness__NonLocalLiveness_84;
              MR_Word ll_backend__liveness__GoalFinalLiveness_85;

              switch (ll_backend__liveness__ConjType_51) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__liveness__Union0_55;
                    MR_Word ll_backend__liveness__Union_56;

                    ll_backend__liveness__Union0_55 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
                    ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(ll_backend__liveness__Goals0_52, &ll_backend__liveness__Goals_53, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Union0_55, &ll_backend__liveness__Union_56);
                    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__Union_56, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_54);
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__liveness__detect_liveness_in_conj_5_p_0(ll_backend__liveness__Goals0_52, &ll_backend__liveness__Goals_53, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_54, ll_backend__liveness__LiveInfo_10);
                  break;
              }
              {
                ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__ConjType_51));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 2) = ((MR_Box) (ll_backend__liveness__Goals_53));
              }
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_54, &ll_backend__liveness__NonLocalLiveness_84);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_84, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_85);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_85, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_85, &ll_backend__liveness__PostBirths_49);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__liveness__Goals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Goals_97;
              MR_Word ll_backend__liveness__Union0_98;
              MR_Word ll_backend__liveness__Union_99;
              MR_Word ll_backend__liveness__Liveness_107;
              MR_Word ll_backend__liveness__NonLocalLiveness_108;
              MR_Word ll_backend__liveness__GoalFinalLiveness_109;

              ll_backend__liveness__Union0_98 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__detect_liveness_in_disj_7_p_0(ll_backend__liveness__Goals0_96, &ll_backend__liveness__Goals_97, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Union0_98, &ll_backend__liveness__Union_99);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__Union_99, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_107);
              {
                ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__Goals_97));
              }
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_107, &ll_backend__liveness__NonLocalLiveness_108);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_108, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_109);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_109, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_109, &ll_backend__liveness__PostBirths_49);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__liveness__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Det_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Cases0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Cases_60;
              MR_Word ll_backend__liveness__Liveness_119;
              MR_Word ll_backend__liveness__NonLocalLiveness_120;
              MR_Word ll_backend__liveness__GoalFinalLiveness_121;

              ll_backend__liveness__detect_liveness_in_cases_7_p_0(ll_backend__liveness__Cases0_59, &ll_backend__liveness__Cases_60, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_119);
              {
                ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__Var_57));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 2) = ((MR_Box) (ll_backend__liveness__Det_58));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 3) = ((MR_Box) (ll_backend__liveness__Cases_60));
              }
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_119, &ll_backend__liveness__NonLocalLiveness_120);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_120, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_121);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_121, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_121, &ll_backend__liveness__PostBirths_49);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__liveness__Reason_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__SubGoal0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Liveness_116;
              MR_Word ll_backend__liveness__NonLocalLiveness_117;
              MR_Word ll_backend__liveness__GoalFinalLiveness_118;
              MR_Word ll_backend__liveness__TermVar_83;
              MR_Word ll_backend__liveness__Var_91;

              ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__TermVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 1)));
                ll_backend__liveness__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 2)));
                ll_backend__liveness__succeeded = (ll_backend__liveness__Var_91 == (MR_Integer) 1);
              }
              if (ll_backend__liveness__succeeded)
              {
                ll_backend__liveness__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14);
                if (ll_backend__liveness__succeeded)
                {
                  ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__liveness_scalar_common_2[3]);
                  ll_backend__liveness__Liveness_116 = ll_backend__liveness__Liveness0_8;
                }
                else
                {
                  MR_Word ll_backend__liveness__SubGoal_100;

                  ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(ll_backend__liveness__SubGoal0_104, &ll_backend__liveness__SubGoal_100, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_116, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__TermVar_83);
                  {
                    ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__Reason_82));
                    MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_100));
                  }
                }
              }
              else
              {
                MR_Word ll_backend__liveness__SubGoal_102;

                ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__SubGoal0_104, &ll_backend__liveness__SubGoal_102, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_116, ll_backend__liveness__LiveInfo_10);
                {
                  ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__Reason_82));
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_102));
                }
              }
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_116, &ll_backend__liveness__NonLocalLiveness_117);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_117, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_118);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_118, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_118, &ll_backend__liveness__PostBirths_49);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__liveness__Vars_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__liveness__Cond0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__liveness__Then0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__liveness__Else0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word ll_backend__liveness__Cond_65;
              MR_Word ll_backend__liveness__LivenessCond_66;
              MR_Word ll_backend__liveness__CondInfo_68;
              MR_Word ll_backend__liveness__CondDelta_69;
              MR_Word ll_backend__liveness__LivenessThen_70;
              MR_Word ll_backend__liveness__Then1_71;
              MR_Word ll_backend__liveness__Else1_73;
              MR_Word ll_backend__liveness__LivenessElse_74;
              MR_Word ll_backend__liveness__ITENonLocalLiveness_75;
              MR_Word ll_backend__liveness__ResidueThen_76;
              MR_Word ll_backend__liveness__ResidueElse_77;
              MR_Word ll_backend__liveness__Then_78;
              MR_Word ll_backend__liveness__Else_79;
              MR_Word ll_backend__liveness__Liveness_110;
              MR_Word ll_backend__liveness__NonLocalLiveness_111;
              MR_Word ll_backend__liveness__GoalFinalLiveness_112;
              MR_Word ll_backend__liveness__Var_67;

              ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Cond0_62, &ll_backend__liveness__Cond_65, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__LivenessCond_66, ll_backend__liveness__LiveInfo_10);
              ll_backend__liveness__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_65, (MR_Integer) 0)));
              ll_backend__liveness__CondInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_65, (MR_Integer) 1)));
              ll_backend__liveness__CondDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondInfo_68);
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__CondDelta_69);
              if (ll_backend__liveness__succeeded)
              {
                MR_Word ll_backend__liveness___LivenessThen_72;

                ll_backend__liveness__LivenessThen_70 = ll_backend__liveness__LivenessCond_66;
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Then0_63, &ll_backend__liveness__Then1_71, ll_backend__liveness__LivenessCond_66, &ll_backend__liveness___LivenessThen_72, ll_backend__liveness__LiveInfo_10);
              }
              else
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Then0_63, &ll_backend__liveness__Then1_71, ll_backend__liveness__LivenessCond_66, &ll_backend__liveness__LivenessThen_70, ll_backend__liveness__LiveInfo_10);
              ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Else0_64, &ll_backend__liveness__Else1_73, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__LivenessElse_74, ll_backend__liveness__LiveInfo_10);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__LivenessThen_70, ll_backend__liveness__LivenessElse_74, &ll_backend__liveness__Liveness_110);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__Liveness_110, ll_backend__liveness__CompletedNonLocals_14, &ll_backend__liveness__ITENonLocalLiveness_75);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__ITENonLocalLiveness_75, ll_backend__liveness__LivenessThen_70, &ll_backend__liveness__ResidueThen_76);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__ITENonLocalLiveness_75, ll_backend__liveness__LivenessElse_74, &ll_backend__liveness__ResidueElse_77);
              ll_backend__liveness__add_liveness_after_goal_3_p_0(ll_backend__liveness__Then1_71, ll_backend__liveness__ResidueThen_76, &ll_backend__liveness__Then_78);
              ll_backend__liveness__add_liveness_after_goal_3_p_0(ll_backend__liveness__Else1_73, ll_backend__liveness__ResidueElse_77, &ll_backend__liveness__Else_79);
              {
                ll_backend__liveness__GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 1) = ((MR_Box) (ll_backend__liveness__Vars_61));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 2) = ((MR_Box) (ll_backend__liveness__Cond_65));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 3) = ((MR_Box) (ll_backend__liveness__Then_78));
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_50, 4) = ((MR_Box) (ll_backend__liveness__Else_79));
              }
              ll_backend__liveness__PreDeaths_46 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              ll_backend__liveness__PreBirths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_106_106);
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_110, &ll_backend__liveness__NonLocalLiveness_111);
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__NonLocalLiveness_111, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_112);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, ll_backend__liveness__GoalFinalLiveness_112, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_48);
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_106_106, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_112, &ll_backend__liveness__PostBirths_49);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_goal\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_47, ll_backend__liveness__PostBirths_49, ll_backend__liveness__PreDeaths_46, ll_backend__liveness__PostDeaths_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_12, &ll_backend__liveness__GoalInfo_87);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_87));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
  MR_Word ll_backend__liveness__LiveInfo_5,
  MR_Word ll_backend__liveness__GoalInfo_6,
  MR_Word * ll_backend__liveness__NonLocals_7,
  MR_Word * ll_backend__liveness__CompletedNonLocals_8)
{
  {
    MR_Word ll_backend__liveness__Var_12;
    MR_Word ll_backend__liveness__Var_17;
    MR_Word ll_backend__liveness__Var_18;
    MR_Word ll_backend__liveness__Var_15;
    MR_Word ll_backend__liveness__Var_16;

    *ll_backend__liveness__NonLocals_7 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_6);
    ll_backend__liveness__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 0)));
    ll_backend__liveness__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 1)));
    ll_backend__liveness__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 2)));
    ll_backend__liveness__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 3)));
    ll_backend__liveness__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 4)));
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(*ll_backend__liveness__NonLocals_7, ll_backend__liveness__Var_12, ll_backend__liveness__Var_17, ll_backend__liveness__Var_18, ll_backend__liveness__CompletedNonLocals_8);
  }
}

static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__LiveInfo_2,
  MR_Word ll_backend__liveness__InstMapDelta_3,
  MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ValueVars_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__liveness__succeeded;

      if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__liveness__STATE_VARIABLE_ValueVars_5 = ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4;
      else
      {
        MR_Word ll_backend__liveness__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__liveness__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__liveness__VarTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 3)));
        MR_Word ll_backend__liveness__Type_17;
        MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25;
        MR_Word ll_backend__liveness__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 0)));
        MR_Word ll_backend__liveness__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 1)));
        MR_Word ll_backend__liveness__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 2)));
        MR_Word ll_backend__liveness__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 4)));
        MR_Word ll_backend__liveness__Inst_18;
        MR_Word ll_backend__liveness__ModuleInfo_19;
        MR_Word ll_backend__liveness__Var_22;
        MR_Word ll_backend__liveness__Var_23;
        MR_Word ll_backend__liveness__Var_24;
        MR_Word ll_backend__liveness__Var_36;
        MR_Word ll_backend__liveness__Var_31;
        MR_Word ll_backend__liveness__Var_32;
        MR_Word ll_backend__liveness__Var_33;
        MR_Word ll_backend__liveness__Var_34;

        hlds__vartypes__lookup_var_type_3_p_0(ll_backend__liveness__VarTypes_16, ll_backend__liveness__Var_11, &ll_backend__liveness__Type_17);
        ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(ll_backend__liveness__InstMapDelta_3, ll_backend__liveness__Var_11, &ll_backend__liveness__Inst_18);
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 0)));
          ll_backend__liveness__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 1)));
          ll_backend__liveness__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 2)));
          ll_backend__liveness__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 3)));
          ll_backend__liveness__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 4)));
          ll_backend__liveness__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__liveness__Var_23 = (MR_Integer) 1;
          {
            ll_backend__liveness__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_22, 0) = ((MR_Box) (ll_backend__liveness__Var_24));
            MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_22, 1) = ((MR_Box) (ll_backend__liveness__Inst_18));
          }
          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ll_backend__liveness__ModuleInfo_19, ll_backend__liveness__Var_22, ll_backend__liveness__Type_17, &ll_backend__liveness__Var_36);
          ll_backend__liveness__succeeded = (ll_backend__liveness__Var_23 == ll_backend__liveness__Var_36);
        }
        if (ll_backend__liveness__succeeded)
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Var_11, ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4, &ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25);
        }
        else
          ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25 = ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4;
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__liveness__next_value_of_HeadVar__1_1 = ll_backend__liveness__Vars_12;
          MR_Word ll_backend__liveness__next_value_of_STATE_VARIABLE_ValueVars_0_4 = ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25;

          ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__next_value_of_HeadVar__1_1;
          ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4 = ll_backend__liveness__next_value_of_STATE_VARIABLE_ValueVars_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
  MR_Word ll_backend__liveness__Goal0_4,
  MR_Word ll_backend__liveness__Residue_5,
  MR_Word * ll_backend__liveness__Goal_6)
{
  {
    MR_Word ll_backend__liveness__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_4, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_4, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__PostBirths0_9;
    MR_Word ll_backend__liveness__PostBirths_10;
    MR_Word ll_backend__liveness__GoalInfo_11;

    hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_8, &ll_backend__liveness__PostBirths0_9);
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_9, ll_backend__liveness__Residue_5, &ll_backend__liveness__PostBirths_10);
    hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_10, ll_backend__liveness__GoalInfo0_8, &ll_backend__liveness__GoalInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__liveness__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_11));
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_6_p_0(
  MR_Word ll_backend__liveness__Goal0_7,
  MR_Word * ll_backend__liveness__Goal_8,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_25,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_26,
  MR_Word ll_backend__liveness__LiveInfo_10,
  MR_Word ll_backend__liveness__TermVar_11)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
    MR_Word ll_backend__liveness__Conjuncts0_14;
    MR_Word ll_backend__liveness__Var_27;

    ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (ll_backend__liveness__succeeded)
    {
      ll_backend__liveness__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
      ll_backend__liveness__Conjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
      ll_backend__liveness__succeeded = (ll_backend__liveness__Var_27 == (MR_Integer) 0);
    }
    if (ll_backend__liveness__succeeded)
    {
      MR_Word ll_backend__liveness__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      MR_Word ll_backend__liveness__LocalLiveVars0_15;
      MR_Word ll_backend__liveness__Conjuncts_16;
      MR_Word ll_backend__liveness__LocalLiveVars_17;
      MR_Word ll_backend__liveness__TypeInfo_40_40;
      MR_Word ll_backend__liveness__Var_39;

      ll_backend__liveness__LocalLiveVars0_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
      ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(ll_backend__liveness__Conjuncts0_14, &ll_backend__liveness__Conjuncts_16, ll_backend__liveness__LocalLiveVars0_15, &ll_backend__liveness__LocalLiveVars_17);
      ll_backend__liveness__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__LocalLiveVars_17, &ll_backend__liveness__Var_39);
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__TypeInfo_40_40 = (MR_Word) &ll_backend__liveness_scalar_common_1[0];
        ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeInfo_40_40, ((MR_Box) (ll_backend__liveness__TermVar_11)), ((MR_Box) (ll_backend__liveness__Var_39)));
      }
      if (ll_backend__liveness__succeeded)
      {
        MR_Word ll_backend__liveness__CompletedTermVars_18;
        MR_Word ll_backend__liveness__GoalExpr_19;
        MR_Word ll_backend__liveness__PreBirths_20;
        MR_Word ll_backend__liveness__PostBirths_21;
        MR_Word ll_backend__liveness__PreDeaths_22;
        MR_Word ll_backend__liveness__PostDeaths_23;
        MR_Word ll_backend__liveness__GoalInfo_24;
        MR_Word ll_backend__liveness__Var_28;
        MR_Word ll_backend__liveness__Var_44;
        MR_Word ll_backend__liveness__Var_49;
        MR_Word ll_backend__liveness__Var_50;
        MR_Word ll_backend__liveness__Var_47;
        MR_Word ll_backend__liveness__Var_48;

        ll_backend__liveness__Var_28 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__TermVar_11);
        ll_backend__liveness__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 0)));
        ll_backend__liveness__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 1)));
        ll_backend__liveness__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 2)));
        ll_backend__liveness__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 3)));
        ll_backend__liveness__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 4)));
        hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Var_28, ll_backend__liveness__Var_44, ll_backend__liveness__Var_49, ll_backend__liveness__Var_50, &ll_backend__liveness__CompletedTermVars_18);
        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__CompletedTermVars_18, ll_backend__liveness__STATE_VARIABLE_Liveness_0_25, ll_backend__liveness__STATE_VARIABLE_Liveness_26);
        {
          ll_backend__liveness__GoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 2) = ((MR_Box) (ll_backend__liveness__Conjuncts_16));
        }
        ll_backend__liveness__PreBirths_20 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
        ll_backend__liveness__PostBirths_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
        ll_backend__liveness__PreDeaths_22 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
        ll_backend__liveness__PostDeaths_23 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
        hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_20, ll_backend__liveness__PostBirths_21, ll_backend__liveness__PreDeaths_22, ll_backend__liveness__PostDeaths_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_24);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__liveness__Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_24));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct\'/6", (MR_String) "unexpected liveness");
          return;
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct\'/6", (MR_String) "not conj");
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word * ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4 = ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3;
    }
    else
    {
      MR_Word ll_backend__liveness__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__Goal_10;
      MR_Word ll_backend__liveness__Goals_11;
      MR_Word ll_backend__liveness__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 0)));
      MR_Word ll_backend__liveness__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 1)));
      MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35;
      MR_Word ll_backend__liveness__LHSVar_20;
      MR_Word ll_backend__liveness__RHSVars_22;
      MR_Word ll_backend__liveness__Unification_18;
      MR_Word ll_backend__liveness__Var_31;
      MR_Word ll_backend__liveness__Var_32;
      MR_Word ll_backend__liveness__Var_33;
      MR_Word ll_backend__liveness__Var_15;
      MR_Word ll_backend__liveness__Var_16;
      MR_Word ll_backend__liveness__Var_17;
      MR_Word ll_backend__liveness__Var_19;
      MR_Word ll_backend__liveness___ConsId_21;
      MR_Word ll_backend__liveness___ArgModes_23;

      ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_13)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__liveness__succeeded)
      {
        ll_backend__liveness__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 0)));
        ll_backend__liveness__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 1)));
        ll_backend__liveness__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 2)));
        ll_backend__liveness__Unification_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 3)));
        ll_backend__liveness__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 4)));
        ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Unification_18)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__LHSVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 0)));
          ll_backend__liveness___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 1)));
          ll_backend__liveness__RHSVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 2)));
          ll_backend__liveness___ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 3)));
          ll_backend__liveness__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 4)));
          ll_backend__liveness__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 5)));
          ll_backend__liveness__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 6)));
          ll_backend__liveness__succeeded = (ll_backend__liveness__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ll_backend__liveness__succeeded)
          {
            ll_backend__liveness__succeeded = (ll_backend__liveness__Var_32 == (MR_Integer) 1);
            if (ll_backend__liveness__succeeded)
              ll_backend__liveness__succeeded = (ll_backend__liveness__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      if (ll_backend__liveness__succeeded)
      {
        MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34;

        ll_backend__liveness__succeeded = parse_tree__set_of_var__remove_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__RHSVars_22, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3, &ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34);
        if (ll_backend__liveness__succeeded)
        {
          MR_Word ll_backend__liveness__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__liveness__PreBirths_24;
          MR_Word ll_backend__liveness__PostBirths_25;
          MR_Word ll_backend__liveness__PreDeaths_26;
          MR_Word ll_backend__liveness__PostDeaths_27;
          MR_Word ll_backend__liveness__GoalInfo_28;

          parse_tree__set_of_var__insert_3_p_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__LHSVar_20, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34, &ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35);
          ll_backend__liveness__PreBirths_24 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__LHSVar_20);
          ll_backend__liveness__PostBirths_25 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_45_45);
          ll_backend__liveness__PreDeaths_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_45_45);
          ll_backend__liveness__PostDeaths_27 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__RHSVars_22);
          hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_24, ll_backend__liveness__PostBirths_25, ll_backend__liveness__PreDeaths_26, ll_backend__liveness__PostDeaths_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__GoalInfo_28);
          {
            ll_backend__liveness__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_10, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_13));
            MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_10, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_28));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct_goal_loop\'/4", (MR_String) "rhs var not live");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_fgt_construct_goal_loop\'/4", (MR_String) "unexpected conjunct");
          return;
        }
      }
      ll_backend__liveness__detect_liveness_in_fgt_construct_goal_loop_4_p_0(ll_backend__liveness__Goals0_9, &ll_backend__liveness__Goals_11, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__liveness__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_9,
  MR_String ll_backend__liveness__Message_10,
  MR_Integer ll_backend__liveness__DebugLiveness_11,
  MR_Integer ll_backend__liveness__PredIdInt_12,
  MR_Word ll_backend__liveness__VarSet_13,
  MR_Word ll_backend__liveness__Goal_14)
{
  {
    MR_bool ll_backend__liveness__succeeded = (ll_backend__liveness__DebugLiveness_11 == ll_backend__liveness__PredIdInt_12);

    if (ll_backend__liveness__succeeded)
    {
      MR_Word ll_backend__liveness__Globals_16;
      MR_Word ll_backend__liveness__OutInfo_17;

      mercury__io__write_string_3_p_0(ll_backend__liveness__Message_10);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_9, &ll_backend__liveness__Globals_16);
      ll_backend__liveness__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(ll_backend__liveness__Globals_16, (MR_Integer) 1);
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__liveness__OutInfo_17, ll_backend__liveness__ModuleInfo_9, ll_backend__liveness__VarSet_13, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n", ll_backend__liveness__Goal_14);
    }
    else
    {
    }
  }
}

void MR_CALL 
ll_backend__liveness__initial_liveness_4_p_0(
  MR_Word ll_backend__liveness__ModuleInfo_5,
  MR_Word ll_backend__liveness__PredInfo_6,
  MR_Word ll_backend__liveness__ProcInfo_7,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_20)
{
  {
    MR_bool ll_backend__liveness__succeeded;
    MR_Word ll_backend__liveness__TypeCtorInfo_29_29;
    MR_Word ll_backend__liveness__Vars_9;
    MR_Word ll_backend__liveness__Modes_10;
    MR_Word ll_backend__liveness__VarTypes_11;
    MR_Word ll_backend__liveness__Types_12;
    MR_Word ll_backend__liveness__Globals_13;
    MR_Word ll_backend__liveness__GoalInfo_15;
    MR_Word ll_backend__liveness__NonLocals0_16;
    MR_Word ll_backend__liveness__RttiVarMaps_17;
    MR_Word ll_backend__liveness__TypeinfoLiveness_18;
    MR_Word ll_backend__liveness__NonLocals_19;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_26_26;
    MR_Word ll_backend__liveness__Var_27;
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
    MR_Word ll_backend__liveness___Goal_14;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__liveness__ProcInfo_7, &ll_backend__liveness__Vars_9);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__liveness__ProcInfo_7, &ll_backend__liveness__Modes_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__ProcInfo_7, &ll_backend__liveness__VarTypes_11);
    hlds__vartypes__lookup_var_types_3_p_0(ll_backend__liveness__VarTypes_11, ll_backend__liveness__Vars_9, &ll_backend__liveness__Types_12);
    ll_backend__liveness__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    ll_backend__liveness__STATE_VARIABLE_Liveness_21_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_29_29);
    ll_backend__liveness__succeeded = ll_backend__liveness__initial_liveness_2_6_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__Vars_9, ll_backend__liveness__Types_12, ll_backend__liveness__Modes_10, ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, &ll_backend__liveness__STATE_VARIABLE_Liveness_22_22);
    if (ll_backend__liveness__succeeded)
      ll_backend__liveness__STATE_VARIABLE_Liveness_26_26 = ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.initial_liveness\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Globals_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__liveness__ProcInfo_7, &ll_backend__liveness__Var_27);
    ll_backend__liveness___Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_27, (MR_Integer) 0)));
    ll_backend__liveness__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Var_27, (MR_Integer) 1)));
    ll_backend__liveness__NonLocals0_16 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_15);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__ProcInfo_7, &ll_backend__liveness__RttiVarMaps_17);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__liveness__PredInfo_6, ll_backend__liveness__Globals_13, &ll_backend__liveness__TypeinfoLiveness_18);
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__NonLocals0_16, ll_backend__liveness__TypeinfoLiveness_18, ll_backend__liveness__VarTypes_11, ll_backend__liveness__RttiVarMaps_17, &ll_backend__liveness__NonLocals_19);
    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_29_29, ll_backend__liveness__STATE_VARIABLE_Liveness_26_26, ll_backend__liveness__NonLocals_19, ll_backend__liveness__STATE_VARIABLE_Liveness_20);
  }
}

static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
  MR_Word ll_backend__liveness__HeadVar__1_1,
  MR_Word ll_backend__liveness__HeadVar__2_2,
  MR_Word ll_backend__liveness__HeadVar__3_3,
  MR_Word ll_backend__liveness__HeadVar__4_4,
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_5,
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__liveness__succeeded;

      if ((ll_backend__liveness__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__liveness__succeeded = (ll_backend__liveness__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__succeeded = (ll_backend__liveness__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ll_backend__liveness__succeeded)
          {
            *ll_backend__liveness__STATE_VARIABLE_Liveness_6 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_5;
            ll_backend__liveness__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word ll_backend__liveness__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__liveness__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__liveness__Type_14;
        MR_Word ll_backend__liveness__Types_15;
        MR_Word ll_backend__liveness__Mode_16;
        MR_Word ll_backend__liveness__Modes_17;
        MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
        MR_Word ll_backend__liveness__Var_21;
        MR_Word ll_backend__liveness__Var_25;

        ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__liveness__succeeded)
        {
          ll_backend__liveness__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 0)));
          ll_backend__liveness__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 1)));
          ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__liveness__succeeded)
          {
            ll_backend__liveness__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__4_4, (MR_Integer) 0)));
            ll_backend__liveness__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__4_4, (MR_Integer) 1)));
            ll_backend__liveness__Var_21 = (MR_Integer) 0;
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ll_backend__liveness__HeadVar__1_1, ll_backend__liveness__Mode_16, ll_backend__liveness__Type_14, &ll_backend__liveness__Var_25);
            ll_backend__liveness__succeeded = (ll_backend__liveness__Var_21 == ll_backend__liveness__Var_25);
            if (ll_backend__liveness__succeeded)
            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Var_12, ll_backend__liveness__STATE_VARIABLE_Liveness_0_5, &ll_backend__liveness__STATE_VARIABLE_Liveness_22_22);
            }
            else
              ll_backend__liveness__STATE_VARIABLE_Liveness_22_22 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__liveness__next_value_of_HeadVar__2_2 = ll_backend__liveness__Vars_13;
              MR_Word ll_backend__liveness__next_value_of_HeadVar__3_3 = ll_backend__liveness__Types_15;
              MR_Word ll_backend__liveness__next_value_of_HeadVar__4_4 = ll_backend__liveness__Modes_17;
              MR_Word ll_backend__liveness__next_value_of_STATE_VARIABLE_Liveness_0_5 = ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;

              ll_backend__liveness__HeadVar__2_2 = ll_backend__liveness__next_value_of_HeadVar__2_2;
              ll_backend__liveness__HeadVar__3_3 = ll_backend__liveness__next_value_of_HeadVar__3_3;
              ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__next_value_of_HeadVar__4_4;
              ll_backend__liveness__STATE_VARIABLE_Liveness_0_5 = ll_backend__liveness__next_value_of_STATE_VARIABLE_Liveness_0_5;
            }
            continue;
          }
        }
      }
      return ll_backend__liveness__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
  MR_Box ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2)
{
  {
    MR_bool ll_backend__liveness__succeeded;

    ll_backend__liveness__succeeded = ll_backend__liveness____Unify____live_info_0_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2));
    return ll_backend__liveness__succeeded;
  }
}

static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
  MR_Box * ll_backend__liveness__wrapper_arg_1,
  MR_Box ll_backend__liveness__wrapper_arg_2,
  MR_Box ll_backend__liveness__wrapper_arg_3)
{
  {
    MR_Word ll_backend__liveness__conv0_HeadVar__1_1;

    ll_backend__liveness____Compare____live_info_0_0(&ll_backend__liveness__conv0_HeadVar__1_1, ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3));
    *ll_backend__liveness__wrapper_arg_1 = ((MR_Box) (ll_backend__liveness__conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__liveness__init(void)
{
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0);
}

void mercury__ll_backend__liveness__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__liveness__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.liveness. */
