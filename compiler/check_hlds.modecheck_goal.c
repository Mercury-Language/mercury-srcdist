/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version rotd-2025-07-22
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


// :- module check_hlds.modecheck_goal.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_goal__init
ENDINIT
*/

#include "check_hlds.modecheck_goal.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_coerce.mih"
#include "check_hlds.modecheck_conj.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
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



struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s {
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
  MR_bool check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14;
  jmp_buf check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19;
  MR_Word check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1];

static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2];

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1571__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1569__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1564__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1002__1_4_p_0(
  MR_Word VarTable_17,
  MR_Word InstMap0_18,
  MR_Word ModuleInfo_21,
  MR_Word LambdaHeadVar__1_64);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1113__1_2_p_0(
  MR_Word Kind1_53,
  MR_Word HeadVar__2_103);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Case0_5,
  MR_Word * Case_6);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
  MR_Word LargeFlatConstructs_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
check_hlds__modecheck_goal__arm_instmap_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word ArmInstMap0_7,
  MR_Word * ArmInstMap_8);

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
  MR_Word ShortHand0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
  MR_Word TermVar_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * MaybeKindAndSubGoal_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_28,
  MR_Word * STATE_VARIABLE_ModeInfo_29);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_59,
  MR_Word * STATE_VARIABLE_ModeInfo_60);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
  MR_Word SubGoal0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_9_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
  MR_Word Disjuncts0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_6_p_0(
  MR_Word TermVar_7,
  MR_Word ConjGoals0_8,
  MR_Word STATE_VARIABLE_SubGoalInfo_0_21,
  MR_Word * SubGoal_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarMap_4);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocalVarMap_5);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
  MR_Word SubGoal_5,
  MR_Word TermVar_6,
  MR_Word TermVarInst_7,
  MR_Word * MaybeGroundTermMode_8);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
  MR_Word TermVar_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
  MR_Word NegCtxtDesc_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word InstMap_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
  MR_Word Goal_3);

static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_2,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_3);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * STATE_VARIABLE_ModeInfo_67);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[4][7];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[3][5];




static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[2])),
    ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 = {
  (MR_String) "construct_var_info",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info",
  { &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  { &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0 = {
  (MR_String) "construct_ground_term",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1 = {
  (MR_String) "deconstruct_ground_term",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1] = { &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1] = { &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[2] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0,
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "ground_term_mode",
  { check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0 },
  { check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0,

};

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1571__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_62)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerUOType_34, HeadVar__2_62);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1569__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerDIType_33, HeadVar__2_58);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1564__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, OuterUOType_29);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1002__1_4_p_0(
  MR_Word VarTable_17,
  MR_Word InstMap0_18,
  MR_Word ModuleInfo_21,
  MR_Word LambdaHeadVar__1_64)
{
  MR_bool succeeded;
  MR_Word VarType_24;
  MR_Word VarInst_25;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_17, LambdaHeadVar__1_64, &VarType_24);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, LambdaHeadVar__1_64, &VarInst_25);
  succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_21, VarType_24, VarInst_25);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1113__1_2_p_0(
  MR_Word Kind1_53,
  MR_Word HeadVar__2_103)
{
  MR_bool succeeded = (Kind1_53 == HeadVar__2_103);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(0, Case0_5, 0))));
  MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, Case0_5, 1))));
  MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(0, Case0_5, 2))));
  MR_Word Goal_10;

  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(LargeFlatConstructs_4, Goal0_9, &Goal_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_10));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
  MR_Word LargeFlatConstructs_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;

    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(LargeFlatConstructs_1, Goal0_6, &Goal_8);
    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(LargeFlatConstructs_1, Goals0_7, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Goal_6 = Goal0_5;
      break;
    case (MR_Integer) 1:
      *Goal_6 = Goal0_5;
      break;
    case (MR_Integer) 2:
      *Goal_6 = Goal0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 1))) & (MR_Integer) 1);

            switch (Var_103) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Goal_6 = Goal0_5;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Conjuncts_79;
                  MR_Word ChangedVars_80;
                  MR_Word GroundVars_81;
                  MR_Word Var_93;
                  MR_Word InstMapDelta0_96;
                  MR_Word InstMapDelta_97;
                  MR_Word GoalInfo_98;
                  MR_Word GoalExpr_99;

                  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(LargeFlatConstructs_4, Var_102, &Conjuncts_79);
                  {
                    GoalExpr_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_99, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, GoalExpr_99, 2) = ((MR_Box) (Conjuncts_79));
                  }
                  InstMapDelta0_96 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_8);
                  hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta0_96, &ChangedVars_80);
                  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_80, LargeFlatConstructs_4, &GroundVars_81);
                  Var_93 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GroundVars_81);
                  hlds__instmap__instmap_delta_set_vars_same_4_p_0((MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[2])), Var_93, InstMapDelta0_96, &InstMapDelta_97);
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_97, GoalInfo0_8, &GoalInfo_98);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_99));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_98));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 4:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word SubGoal0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));

            switch (MR_tag((MR_Word) Reason_43)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Goal_6 = Goal0_5;
                break;
              case (MR_Integer) 1:
                *Goal_6 = Goal0_5;
                break;
              case (MR_Integer) 2:
                *Goal_6 = Goal0_5;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_43, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 1:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 2:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 3:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 4:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 5:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_104 = ((MR_Unsigned) ((MR_hl_field(3, Reason_43, 2))) & (MR_Integer) 3);
                      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(3, Reason_43, 1))));

                      switch (Var_104) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LargeFlatConstructs_4, Var_105);
                            if (succeeded)
                            {
                              MR_Word InstMapDelta0_46;
                              MR_Word InstMapDelta_47;
                              MR_Word GoalInfo_48;
                              MR_Word SubGoalExpr0_49;
                              MR_Word SubGoalInfo0_50;
                              MR_Word SubGoalInfo_51;
                              MR_Word SubGoal_52;
                              MR_Word GoalExpr_53;

                              InstMapDelta0_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_8);
                              hlds__instmap__instmap_delta_set_var_4_p_0(Var_105, (MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[2])), InstMapDelta0_46, &InstMapDelta_47);
                              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_47, GoalInfo0_8, &GoalInfo_48);
                              SubGoalExpr0_49 = ((MR_Word) ((MR_hl_field(0, SubGoal0_44, 0))));
                              SubGoalInfo0_50 = ((MR_Word) ((MR_hl_field(0, SubGoal0_44, 1))));
                              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_47, SubGoalInfo0_50, &SubGoalInfo_51);
                              {
                                SubGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, SubGoal_52, 0) = ((MR_Box) (SubGoalExpr0_49));
                                MR_hl_field(0, SubGoal_52, 1) = ((MR_Box) (SubGoalInfo_51));
                              }
                              {
                                GoalExpr_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, GoalExpr_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(3, GoalExpr_53, 1) = ((MR_Box) (Reason_43));
                                MR_hl_field(3, GoalExpr_53, 2) = ((MR_Box) (SubGoal_52));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *Goal_6 = base;
                                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_53));
                                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_48));
                              }
                            }
                            else
                              *Goal_6 = Goal0_5;
                          }
                          break;
                        case (MR_Integer) 2:
                          *Goal_6 = Goal0_5;
                          break;
                        case (MR_Integer) 0:
                          *Goal_6 = Goal0_5;
                          break;
                        case (MR_Integer) 3:
                          *Goal_6 = Goal0_5;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 8:
                    *Goal_6 = Goal0_5;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 7:
          *Goal_6 = Goal0_5;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__arm_instmap_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word ArmInstMap0_7,
  MR_Word * ArmInstMap_8)
{
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, ArmInstMap0_7, 0))));
  MR_Word InstMap0_10 = ((MR_Word) ((MR_hl_field(0, ArmInstMap0_7, 1))));
  MR_Word InstMap_11;

  hlds__instmap__instmap_set_vars_same_4_p_0(Inst_5, Vars_6, InstMap0_10, &InstMap_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ArmInstMap_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstMap_11));
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0_1(
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

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_45,
  MR_Word * STATE_VARIABLE_ModeInfo_46)
{
  switch (MR_tag((MR_Word) GoalExpr0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_42 = (MR_Word) ((MR_Word) (GoalExpr0_6));

        check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(SubGoal0_42, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
      }
      break;
    case (MR_Integer) 1:
      check_hlds__modecheck_goal__modecheck_goal_unify_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
      break;
    case (MR_Integer) 2:
      check_hlds__modecheck_goal__modecheck_goal_plain_call_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__modecheck_goal__modecheck_goal_generic_call_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
            MR_Word PredId_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
            MR_Integer ProcId0_62 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, 3))));
            MR_Word Args0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 4))));
            MR_Word ExtraArgs_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 5))));
            MR_Word MaybeTraceRuntimeCond_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 6))));
            MR_Word PragmaCode_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 7))));
            MR_Word CallId_67;
            MR_Word InstMap0_68;
            MR_Word ArgVars0_70;
            MR_Integer ProcId_71;
            MR_Word ArgVars_72;
            MR_Word ExtraGoals_73;
            MR_Word GoalExpr1_74;
            MR_Word STATE_VARIABLE_ModeInfo_1_77;
            MR_Word Var_78;
            MR_Word STATE_VARIABLE_ModeInfo_2_79;
            MR_Word STATE_VARIABLE_ModeInfo_3_81;
            MR_Word STATE_VARIABLE_ModeInfo_4_82;
            MR_Word STATE_VARIABLE_ModeInfo_5_83;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "foreign_proc", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_1_77);
            {
              CallId_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CallId_67, 0) = ((MR_Box) (PredId_61));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (CallId_67));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_78, STATE_VARIABLE_ModeInfo_1_77, &STATE_VARIABLE_ModeInfo_2_79);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_79, &InstMap0_68);
            ArgVars0_70 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_2[2]), Args0_63);
            check_hlds__modecheck_call__modecheck_plain_or_foreign_call_10_p_0(PredId_61, (MR_Word) ((MR_Unsigned) 0U), ProcId0_62, &ProcId_71, ArgVars0_70, &ArgVars_72, GoalInfo0_7, &ExtraGoals_73, STATE_VARIABLE_ModeInfo_2_79, &STATE_VARIABLE_ModeInfo_3_81);
            {
              GoalExpr1_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, GoalExpr1_74, 1) = ((MR_Box) (Attributes_60));
              MR_hl_field(3, GoalExpr1_74, 2) = ((MR_Box) (PredId_61));
              MR_hl_field(3, GoalExpr1_74, 3) = ((MR_Box) (ProcId_71));
              MR_hl_field(3, GoalExpr1_74, 4) = ((MR_Box) (Args0_63));
              MR_hl_field(3, GoalExpr1_74, 5) = ((MR_Box) (ExtraArgs_64));
              MR_hl_field(3, GoalExpr1_74, 6) = ((MR_Box) (MaybeTraceRuntimeCond_65));
              MR_hl_field(3, GoalExpr1_74, 7) = ((MR_Box) (PragmaCode_66));
            }
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_74, ExtraGoals_73, GoalInfo0_7, ArgVars0_70, ArgVars_72, InstMap0_68, GoalExpr_8, STATE_VARIABLE_ModeInfo_3_81, &STATE_VARIABLE_ModeInfo_4_82);
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_4_82, &STATE_VARIABLE_ModeInfo_5_83);
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "foreign_proc", GoalInfo0_7, STATE_VARIABLE_ModeInfo_5_83, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 1))) & (MR_Integer) 1);
            MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));

            switch (ConjType_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Goal_92;
                  MR_Word STATE_VARIABLE_ModeInfo_4_104;
                  MR_Word STATE_VARIABLE_ModeInfo_5_105;
                  MR_Word Goals_109;

                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "par_conj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_4_104);
                  check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_33, Goals_34, &Goals_109, STATE_VARIABLE_ModeInfo_4_104, &STATE_VARIABLE_ModeInfo_5_105);
                  hlds__hlds_goal__par_conj_list_to_goal_3_p_0(Goals_109, GoalInfo0_7, &Goal_92);
                  *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_92, 0))));
                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "par_conj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_5_105, STATE_VARIABLE_ModeInfo_46);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_1_95;
                  MR_Word STATE_VARIABLE_ModeInfo_2_98;

                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "conj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_1_95);
                  if ((Goals_34 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *GoalExpr_8 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                    STATE_VARIABLE_ModeInfo_2_98 = STATE_VARIABLE_ModeInfo_1_95;
                  }
                  else
                  {
                    MR_Word Goals_90;
                    MR_Word Var_99;

                    check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_33, Goals_34, &Goals_90, STATE_VARIABLE_ModeInfo_1_95, &STATE_VARIABLE_ModeInfo_2_98);
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_90, GoalInfo0_7, &Var_99);
                    *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Var_99, 0))));
                  }
                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "conj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_2_98, STATE_VARIABLE_ModeInfo_46);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));

            check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(Goals_58, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 4:
          check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
            MR_Word SubGoal0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));

            check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(Reason_43, SubGoal0_59, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 6:
          check_hlds__modecheck_goal__modecheck_goal_if_then_else_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));

            check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(ShortHand0_44, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word InstMap0_19;
    MR_Word STATE_VARIABLE_ModeInfo_1_22;
    MR_Word STATE_VARIABLE_ModeInfo_2_23;
    MR_Word STATE_VARIABLE_ModeInfo_3_24;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_1_22);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_22, &InstMap0_19);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_ModeInfo_1_22, &STATE_VARIABLE_ModeInfo_2_23);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_23, &InstMap_16);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_3_24);
    check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeErrorMap0_1, Goals0_13, &Goals_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_3_24, STATE_VARIABLE_ModeInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_17));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1571__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1569__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1564__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
  MR_Word ShortHand0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ShortHand0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "bi_implication");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Outer_11 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 1))));
        MR_Word Inner_12 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 2))));
        MR_Word MaybeOutputVars_13 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 3))));
        MR_Word MainGoal0_14 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 4))));
        MR_Word OrElseGoals0_15 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 5))));
        MR_Word OrElseInners_16 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, 6))));
        MR_Word MultiModeErrorMap0_17;
        MR_Word AtomicGoalList0_18;
        MR_Word NonLocals_19;
        MR_Word AtomicGoalList_20;
        MR_Word InstMapList_21;
        MR_Word VarTable_22;
        MR_Word MainGoal_23;
        MR_Word OrElseGoals_24;
        MR_Word ArmInstMaps_25;
        MR_Word OuterDI_26;
        MR_Word OuterUO_27;
        MR_Word OuterDIType_28;
        MR_Word OuterUOType_29;
        MR_Word GoalType_30;
        MR_Word InnerDI_31;
        MR_Word InnerUO_32;
        MR_Word InnerDIType_33;
        MR_Word InnerUOType_34;
        MR_Word ShortHand_35;
        MR_Word STATE_VARIABLE_ModeInfo_1_46;
        MR_Word STATE_VARIABLE_ModeInfo_2_47;
        MR_Word STATE_VARIABLE_ModeInfo_3_49;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Goal0_92;
        MR_Word Goals0_93;
        MR_Word Goal_94;
        MR_Word Goals_95;
        MR_Word InstMap_96;
        MR_Word InstMaps_97;
        MR_Word InstMap0_98;
        MR_Word STATE_VARIABLE_ModeInfo_1_101;
        MR_Word STATE_VARIABLE_ModeInfo_2_102;
        MR_Word STATE_VARIABLE_ModeInfo_3_103;
        MR_Box conv0_MainGoal_23;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "atomic", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_1_46);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_1_46, &MultiModeErrorMap0_17);
        {
          AtomicGoalList0_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AtomicGoalList0_18, 0) = ((MR_Box) (MainGoal0_14));
          MR_hl_field(1, AtomicGoalList0_18, 1) = ((MR_Box) (OrElseGoals0_15));
        }
        NonLocals_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        Goal0_92 = ((MR_Word) ((MR_hl_field(1, AtomicGoalList0_18, 0))));
        Goals0_93 = ((MR_Word) ((MR_hl_field(1, AtomicGoalList0_18, 1))));
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_17, STATE_VARIABLE_ModeInfo_1_46, &STATE_VARIABLE_ModeInfo_1_101);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_101, &InstMap0_98);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_92, &Goal_94, STATE_VARIABLE_ModeInfo_1_101, &STATE_VARIABLE_ModeInfo_2_102);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_102, &InstMap_96);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_98, STATE_VARIABLE_ModeInfo_2_102, &STATE_VARIABLE_ModeInfo_3_103);
        check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeErrorMap0_17, Goals0_93, &Goals_95, &InstMaps_97, STATE_VARIABLE_ModeInfo_3_103, &STATE_VARIABLE_ModeInfo_2_47);
        {
          AtomicGoalList_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AtomicGoalList_20, 0) = ((MR_Box) (Goal_94));
          MR_hl_field(1, AtomicGoalList_20, 1) = ((MR_Box) (Goals_95));
        }
        {
          InstMapList_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, InstMapList_21, 0) = ((MR_Box) (InstMap_96));
          MR_hl_field(1, InstMapList_21, 1) = ((MR_Box) (InstMaps_97));
        }
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_2_47, &VarTable_22);
        conv0_MainGoal_23 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AtomicGoalList_20);
        MainGoal_23 = ((MR_Word) (conv0_MainGoal_23));
        OrElseGoals_24 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AtomicGoalList_20);
        hlds__instmap__make_arm_instmaps_for_goals_3_p_0(AtomicGoalList_20, InstMapList_21, &ArmInstMaps_25);
        hlds__instmap__instmap_merge_5_p_0(NonLocals_19, ArmInstMaps_25, (MR_Integer) 2, STATE_VARIABLE_ModeInfo_2_47, &STATE_VARIABLE_ModeInfo_3_49);
        OuterDI_26 = ((MR_Word) ((MR_hl_field(0, Outer_11, 0))));
        OuterUO_27 = ((MR_Word) ((MR_hl_field(0, Outer_11, 1))));
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, OuterDI_26, &OuterDIType_28);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, OuterUO_27, &OuterUOType_29);
        {
          MR_Word Var_82;

          Var_82 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_82);
        }
        if (!(succeeded))
        {
          MR_Word Var_83;

          Var_83 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_83);
        }
        if (succeeded)
          GoalType_30 = (MR_Integer) 1;
        else
        {
          MR_Word Var_84;

          Var_84 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_84);
          if (succeeded)
            GoalType_30 = (MR_Integer) 2;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid outer var type");
              return;
            }
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[1]));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1));
          MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_52, 3) = ((MR_Box) (OuterDIType_28));
          MR_hl_field(0, Var_52, 4) = ((MR_Box) (OuterUOType_29));
        }
        mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: mismatched outer var type");
        InnerDI_31 = ((MR_Word) ((MR_hl_field(0, Inner_12, 0))));
        InnerUO_32 = ((MR_Word) ((MR_hl_field(0, Inner_12, 1))));
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, InnerDI_31, &InnerDIType_33);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, InnerUO_32, &InnerUOType_34);
        Var_58 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[1]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (InnerDIType_33));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) (Var_58));
        }
        mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
        Var_62 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[1]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (InnerUOType_34));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) (Var_62));
        }
        mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
        {
          ShortHand_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ShortHand_35, 0) = (MR_Box) ((MR_Unsigned) (GoalType_30));
          MR_hl_field(1, ShortHand_35, 1) = ((MR_Box) (Outer_11));
          MR_hl_field(1, ShortHand_35, 2) = ((MR_Box) (Inner_12));
          MR_hl_field(1, ShortHand_35, 3) = ((MR_Box) (MaybeOutputVars_13));
          MR_hl_field(1, ShortHand_35, 4) = ((MR_Box) (MainGoal_23));
          MR_hl_field(1, ShortHand_35, 5) = ((MR_Box) (OrElseGoals_24));
          MR_hl_field(1, ShortHand_35, 6) = ((MR_Box) (OrElseInners_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_35));
        }
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "atomic", GoalInfo0_7, STATE_VARIABLE_ModeInfo_3_49, STATE_VARIABLE_ModeInfo_43);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_36 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, 0))));
        MR_Word ResultVar_37 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, 1))));
        MR_Word SubGoal0_38 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, 2))));
        MR_Word SubGoal_39;
        MR_Word STATE_VARIABLE_ModeInfo_5_68;
        MR_Word STATE_VARIABLE_ModeInfo_6_69;
        MR_Word STATE_VARIABLE_ModeInfo_7_70;
        MR_Word MultiModeErrorMap0_76;
        MR_Word ShortHand_77;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "try", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_5_68);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_5_68, &MultiModeErrorMap0_76);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_38, &SubGoal_39, STATE_VARIABLE_ModeInfo_5_68, &STATE_VARIABLE_ModeInfo_6_69);
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_76, STATE_VARIABLE_ModeInfo_6_69, &STATE_VARIABLE_ModeInfo_7_70);
        {
          ShortHand_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ShortHand_77, 0) = ((MR_Box) (MaybeIO_36));
          MR_hl_field(2, ShortHand_77, 1) = ((MR_Box) (ResultVar_37));
          MR_hl_field(2, ShortHand_77, 2) = ((MR_Box) (SubGoal_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_77));
        }
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "try", GoalInfo0_7, STATE_VARIABLE_ModeInfo_7_70, STATE_VARIABLE_ModeInfo_43);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
  MR_Word TermVar_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * MaybeKindAndSubGoal_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_28,
  MR_Word * STATE_VARIABLE_ModeInfo_29)
{
  MR_bool succeeded;
  MR_Word InstMap0_12;
  MR_Word TermVarInst_13;
  MR_Word MaybeGroundTermMode_14;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_28, &InstMap0_12);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, TermVar_7, &TermVarInst_13);
  check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(SubGoal0_8, TermVar_7, TermVarInst_13, &MaybeGroundTermMode_14);
  if ((MaybeGroundTermMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SubGoal1_22;
    MR_Word SubGoal2_27;
    MR_Word STATE_VARIABLE_ModeInfo_2_43;
    MR_Word STATE_VARIABLE_ModeInfo_3_44;
    MR_Word Var_48;
    MR_Word SubGoal_53;
    MR_Word SubGoalConjuncts0_24;
    MR_Word SubGoalInfo0_49;
    MR_Word SubGoalExpr0_23;
    MR_Word Var_34;

    succeeded = (TermVarInst_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalExpr0_23 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, 0))));
      SubGoalInfo0_49 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, 1))));
      succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_23, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_34 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_23, 1))) & (MR_Integer) 1);
        SubGoalConjuncts0_24 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_23, 2))));
        succeeded = (Var_34 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word SubGoalConjuncts1_25;
      MR_Word SubGoalExpr1_26;

      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoalConjuncts0_24, &SubGoalConjuncts1_25);
      {
        SubGoalExpr1_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SubGoalExpr1_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, SubGoalExpr1_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, SubGoalExpr1_26, 2) = ((MR_Box) (SubGoalConjuncts1_25));
      }
      {
        SubGoal1_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SubGoal1_22, 0) = ((MR_Box) (SubGoalExpr1_26));
        MR_hl_field(0, SubGoal1_22, 1) = ((MR_Box) (SubGoalInfo0_49));
      }
    }
    else
      SubGoal1_22 = SubGoal0_8;
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 1);
    if (succeeded)
      hlds__goal_transform__attach_features_to_all_goals_4_p_0((MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[4])), (MR_Integer) 0, SubGoal1_22, &SubGoal2_27);
    else
      SubGoal2_27 = SubGoal1_22;
    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "fgt scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_28, &STATE_VARIABLE_ModeInfo_2_43);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_27, &SubGoal_53, STATE_VARIABLE_ModeInfo_2_43, &STATE_VARIABLE_ModeInfo_3_44);
    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "fgt scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_3_44, STATE_VARIABLE_ModeInfo_29);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (SubGoal_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeKindAndSubGoal_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
    }
  }
  else
  {
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, MaybeGroundTermMode_14, 0))));

    if (((MR_tag((MR_Word) Var_98)) == (MR_Integer) 0))
    {
      MR_Word RevConj0_15 = ((MR_Word) ((MR_hl_field(0, Var_98, 0))));
      MR_Word LiveTermVar_16;

      check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_28, TermVar_7, &LiveTermVar_16);
      switch (LiveTermVar_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *MaybeKindAndSubGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ModeInfo_29 = STATE_VARIABLE_ModeInfo_0_28;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, 1))));
            MR_Word SubGoal_19;
            MR_Word Var_32;

            check_hlds__modecheck_goal__modecheck_ground_term_construct_6_p_0(TermVar_7, RevConj0_15, SubGoalInfo0_18, &SubGoal_19, STATE_VARIABLE_ModeInfo_0_28, STATE_VARIABLE_ModeInfo_29);
            {
              Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_32, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_32, 1) = ((MR_Box) (SubGoal_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeKindAndSubGoal_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word SubGoal2_67;
      MR_Word STATE_VARIABLE_ModeInfo_2_75;
      MR_Word STATE_VARIABLE_ModeInfo_3_76;
      MR_Word Var_79;
      MR_Word SubGoal_80;

      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 1);
      if (succeeded)
        hlds__goal_transform__attach_features_to_all_goals_4_p_0((MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[4])), (MR_Integer) 0, SubGoal0_8, &SubGoal2_67);
      else
        SubGoal2_67 = SubGoal0_8;
      check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "fgt scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_28, &STATE_VARIABLE_ModeInfo_2_75);
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_67, &SubGoal_80, STATE_VARIABLE_ModeInfo_2_75, &STATE_VARIABLE_ModeInfo_3_76);
      check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "fgt scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_3_76, STATE_VARIABLE_ModeInfo_29);
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_79, 0) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_79, 1) = ((MR_Box) (SubGoal_80));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeKindAndSubGoal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_79));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1002__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1113__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_59,
  MR_Word * STATE_VARIABLE_ModeInfo_60)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Reason_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_ModeInfo_8_162;
        MR_Word STATE_VARIABLE_ModeInfo_9_163;
        MR_Word SubGoal_166;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_162);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_166, STATE_VARIABLE_ModeInfo_8_162, &STATE_VARIABLE_ModeInfo_9_163);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_166));
        }
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_163, STATE_VARIABLE_ModeInfo_60);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ModeInfo_8_155;
        MR_Word STATE_VARIABLE_ModeInfo_9_156;
        MR_Word SubGoal_159;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_155);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_159, STATE_VARIABLE_ModeInfo_8_155, &STATE_VARIABLE_ModeInfo_9_156);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_159));
        }
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_156, STATE_VARIABLE_ModeInfo_60);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_ModeInfo_8_176;
        MR_Word STATE_VARIABLE_ModeInfo_9_177;
        MR_Word SubGoal_180;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_176);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_180, STATE_VARIABLE_ModeInfo_8_176, &STATE_VARIABLE_ModeInfo_9_177);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_180));
        }
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_177, STATE_VARIABLE_ModeInfo_60);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InPPScope_58;
            MR_Word STATE_VARIABLE_ModeInfo_17_112;
            MR_Word STATE_VARIABLE_ModeInfo_18_115;
            MR_Word STATE_VARIABLE_ModeInfo_19_116;
            MR_Word STATE_VARIABLE_ModeInfo_20_119;
            MR_Word SubGoal_142;

            check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_0_59, &InPPScope_58);
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_17_112);
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "promise_purity scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_17_112, &STATE_VARIABLE_ModeInfo_18_115);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_142, STATE_VARIABLE_ModeInfo_18_115, &STATE_VARIABLE_ModeInfo_19_116);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_142));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "promise_purity scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_19_116, &STATE_VARIABLE_ModeInfo_20_119);
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(InPPScope_58, STATE_VARIABLE_ModeInfo_20_119, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_ModeInfo_8_190;
            MR_Word STATE_VARIABLE_ModeInfo_9_191;
            MR_Word SubGoal_194;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_190);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_194, STATE_VARIABLE_ModeInfo_8_190, &STATE_VARIABLE_ModeInfo_9_191);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_194));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_191, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_ModeInfo_8_183;
            MR_Word STATE_VARIABLE_ModeInfo_9_184;
            MR_Word SubGoal_187;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_183);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_187, STATE_VARIABLE_ModeInfo_8_183, &STATE_VARIABLE_ModeInfo_9_184);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_187));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_184, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_ModeInfo_8_197;
            MR_Word STATE_VARIABLE_ModeInfo_9_198;
            MR_Word SubGoal_201;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_197);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_201, STATE_VARIABLE_ModeInfo_8_197, &STATE_VARIABLE_ModeInfo_9_198);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_201));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_198, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_ModeInfo_8_148;
            MR_Word STATE_VARIABLE_ModeInfo_9_149;
            MR_Word SubGoal_152;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_148);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_152, STATE_VARIABLE_ModeInfo_8_148, &STATE_VARIABLE_ModeInfo_9_149);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_152));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_149, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_ModeInfo_8_84;
            MR_Word STATE_VARIABLE_ModeInfo_9_85;
            MR_Word SubGoal_128;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_84);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_128, STATE_VARIABLE_ModeInfo_8_84, &STATE_VARIABLE_ModeInfo_9_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_128));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_85, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TermVar_47 = ((MR_Word) ((MR_hl_field(3, Reason_7, 1))));
            MR_Word OldKind_48 = ((MR_Unsigned) ((MR_hl_field(3, Reason_7, 2))) & (MR_Integer) 3);

            switch (OldKind_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word IsLive_49;

                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_59, TermVar_47, &IsLive_49);
                  switch (IsLive_49) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        *GoalExpr_10 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                        *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_0_59;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word InstMapDelta0_50;
                        MR_Word TermVarInst_51;
                        MR_Word InstMap0_129;
                        MR_Word InstMap_130;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_10 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
                          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal0_8));
                        }
                        InstMapDelta0_50 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_9);
                        hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta0_50, TermVar_47, &TermVarInst_51);
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_59, &InstMap0_129);
                        hlds__instmap__instmap_set_var_4_p_0(TermVar_47, TermVarInst_51, InstMap0_129, &InstMap_130);
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_130, STATE_VARIABLE_ModeInfo_0_59, STATE_VARIABLE_ModeInfo_60);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
              case (MR_Integer) 3:
                {
                  MR_Word MaybeKind1AndSubGoal1_52;
                  MR_Word STATE_VARIABLE_ModeInfo_12_94;
                  MR_Word STATE_VARIABLE_ModeInfo_13_95;
                  MR_Word STATE_VARIABLE_ModeInfo_14_98;

                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "from_ground_term scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_12_94);
                  check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(TermVar_47, SubGoal0_8, GoalInfo0_9, &MaybeKind1AndSubGoal1_52, STATE_VARIABLE_ModeInfo_12_94, &STATE_VARIABLE_ModeInfo_13_95);
                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "from_ground_term scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_13_95, &STATE_VARIABLE_ModeInfo_14_98);
                  if ((MaybeKind1AndSubGoal1_52 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *GoalExpr_10 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                    *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_14_98;
                  }
                  else
                  {
                    MR_Word Kind1_53;
                    MR_Word SubGoal1_54;
                    MR_Word MakeGroundTermsUnique_55;
                    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, MaybeKind1AndSubGoal1_52, 0))));
                    MR_Word Var_100;
                    MR_Word STATE_VARIABLE_ModeInfo_15_105;

                    Kind1_53 = ((MR_Word) ((MR_hl_field(0, Var_99, 0))));
                    SubGoal1_54 = ((MR_Word) ((MR_hl_field(0, Var_99, 1))));
                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
                      MR_hl_field(0, Var_100, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1));
                      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_100, 3) = ((MR_Box) (Kind1_53));
                      MR_hl_field(0, Var_100, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_not_3_p_0(Var_100, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                    check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_98, &STATE_VARIABLE_ModeInfo_15_105);
                    check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(STATE_VARIABLE_ModeInfo_15_105, &MakeGroundTermsUnique_55);
                    switch (MakeGroundTermsUnique_55) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word UpdatedReason1_56;

                          {
                            UpdatedReason1_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, UpdatedReason1_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, UpdatedReason1_56, 1) = ((MR_Box) (TermVar_47));
                            MR_hl_field(3, UpdatedReason1_56, 2) = (MR_Box) ((MR_Unsigned) (Kind1_53));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_10 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (UpdatedReason1_56));
                            MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal1_54));
                          }
                          *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_15_105;
                        }
                        break;
                      case (MR_Integer) 0:
                        switch (Kind1_53) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(TermVar_47, SubGoal1_54, GoalInfo0_9, GoalExpr_10, STATE_VARIABLE_ModeInfo_15_105, STATE_VARIABLE_ModeInfo_60);
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word UpdatedReason1_135;

                              {
                                UpdatedReason1_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, UpdatedReason1_135, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                MR_hl_field(3, UpdatedReason1_135, 1) = ((MR_Box) (TermVar_47));
                                MR_hl_field(3, UpdatedReason1_135, 2) = (MR_Box) ((MR_Unsigned) (Kind1_53));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_10 = base;
                                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(3, base, 1) = ((MR_Box) (UpdatedReason1_135));
                                MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal1_54));
                              }
                              *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_15_105;
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                              return;
                            }
                            break;
                        }
                        break;
                    }
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word VarTable_17;
            MR_Word InstMap0_18;
            MR_Word NonLocals_19;
            MR_Word NonLocalVars_20;
            MR_Word ModuleInfo_21;
            MR_Word VarIsNonGround_22;
            MR_Word NonGroundNonLocalVars_26;
            MR_Word SubGoal_27;
            MR_Word STATE_VARIABLE_ModeInfo_1_63;
            MR_Word STATE_VARIABLE_ModeInfo_5_70;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "trace scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_1_63);
            check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_1_63, &VarTable_17);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_63, &InstMap0_18);
            NonLocals_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_19, &NonLocalVars_20);
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_1_63, &ModuleInfo_21);
            {
              VarIsNonGround_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarIsNonGround_22, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[3]));
              MR_hl_field(0, VarIsNonGround_22, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4));
              MR_hl_field(0, VarIsNonGround_22, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, VarIsNonGround_22, 3) = ((MR_Box) (VarTable_17));
              MR_hl_field(0, VarIsNonGround_22, 4) = ((MR_Box) (InstMap0_18));
              MR_hl_field(0, VarIsNonGround_22, 5) = ((MR_Box) (ModuleInfo_21));
            }
            mercury__list__filter_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), VarIsNonGround_22, NonLocalVars_20, &NonGroundNonLocalVars_26);
            if ((NonGroundNonLocalVars_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_ModeInfo_2_66;
              MR_Word STATE_VARIABLE_ModeInfo_3_67;
              MR_Word STATE_VARIABLE_ModeInfo_4_69;

              check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_19, STATE_VARIABLE_ModeInfo_1_63, &STATE_VARIABLE_ModeInfo_2_66);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_27, STATE_VARIABLE_ModeInfo_2_66, &STATE_VARIABLE_ModeInfo_3_67);
              check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_19, STATE_VARIABLE_ModeInfo_3_67, &STATE_VARIABLE_ModeInfo_4_69);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_18, STATE_VARIABLE_ModeInfo_4_69, &STATE_VARIABLE_ModeInfo_5_70);
            }
            else
            {
              MR_Word HeadNGVar_28 = ((MR_Word) ((MR_hl_field(1, NonGroundNonLocalVars_26, 0))));
              MR_Word TailNGVars_29 = ((MR_Word) ((MR_hl_field(1, NonGroundNonLocalVars_26, 1))));
              MR_Word Error_30;
              MR_Word Var_71;

              {
                Error_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Error_30, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(3, Error_30, 1) = ((MR_Box) (HeadNGVar_28));
                MR_hl_field(3, Error_30, 2) = ((MR_Box) (TailNGVars_29));
              }
              Var_71 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonGroundNonLocalVars_26);
              check_hlds__mode_info__mode_info_error_4_p_0(Var_71, Error_30, STATE_VARIABLE_ModeInfo_1_63, &STATE_VARIABLE_ModeInfo_5_70);
              SubGoal_27 = SubGoal0_8;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_27));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "trace scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_5_70, STATE_VARIABLE_ModeInfo_60);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_43 = ((MR_Word) ((MR_hl_field(3, Reason_7, 1))));
            MR_Word LCSVar_44 = ((MR_Word) ((MR_hl_field(3, Reason_7, 2))));
            MR_Word InstMap_46;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Word VarTable_122;
            MR_Word ModuleInfo_123;
            MR_Word STATE_VARIABLE_ModeInfo_8_169;
            MR_Word STATE_VARIABLE_ModeInfo_9_170;
            MR_Word SubGoal_173;

            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_59, &InstMap_46);
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_59, &ModuleInfo_123);
            check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_59, &VarTable_122);
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_76, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[2]));
              MR_hl_field(0, Var_76, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2));
              MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_76, 3) = ((MR_Box) (ModuleInfo_123));
              MR_hl_field(0, Var_76, 4) = ((MR_Box) (VarTable_122));
              MR_hl_field(0, Var_76, 5) = ((MR_Box) (InstMap_46));
              MR_hl_field(0, Var_76, 6) = ((MR_Box) (LCVar_43));
            }
            mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control variable is not ground");
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[2]));
              MR_hl_field(0, Var_79, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3));
              MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_79, 3) = ((MR_Box) (ModuleInfo_123));
              MR_hl_field(0, Var_79, 4) = ((MR_Box) (VarTable_122));
              MR_hl_field(0, Var_79, 5) = ((MR_Box) (InstMap_46));
              MR_hl_field(0, Var_79, 6) = ((MR_Box) (LCSVar_44));
            }
            mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control slot variable is not ground");
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_8_169);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_173, STATE_VARIABLE_ModeInfo_8_169, &STATE_VARIABLE_ModeInfo_9_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_173));
            }
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_9_170, STATE_VARIABLE_ModeInfo_60);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
  MR_Word SubGoal0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19)
{
  MR_Word MultiModeErrorMap0_10;
  MR_Word NonLocals_11;
  MR_Word InstMap0_12;
  MR_Word LiveVars0_13;
  MR_Word SubGoal_14;
  MR_Word InPromisePurityScope_15;
  MR_Word STATE_VARIABLE_ModeInfo_1_22;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_ModeInfo_2_24;
  MR_Word STATE_VARIABLE_ModeInfo_3_26;
  MR_Word STATE_VARIABLE_ModeInfo_4_27;
  MR_Word STATE_VARIABLE_ModeInfo_5_28;
  MR_Word STATE_VARIABLE_ModeInfo_6_30;
  MR_Word STATE_VARIABLE_ModeInfo_7_31;
  MR_Word STATE_VARIABLE_ModeInfo_8_34;
  MR_Word STATE_VARIABLE_ModeInfo_9_35;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "not", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_18, &STATE_VARIABLE_ModeInfo_1_22);
  check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_1_22, &MultiModeErrorMap0_10);
  NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_22, &InstMap0_12);
  check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_1_22, &LiveVars0_13);
  Var_23 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]));
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_23, STATE_VARIABLE_ModeInfo_1_22, &STATE_VARIABLE_ModeInfo_2_24);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_2_24, &STATE_VARIABLE_ModeInfo_3_26);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_6, &SubGoal_14, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_13, STATE_VARIABLE_ModeInfo_4_27, &STATE_VARIABLE_ModeInfo_5_28);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_5_28, &STATE_VARIABLE_ModeInfo_6_30);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_6_30, &STATE_VARIABLE_ModeInfo_7_31);
  check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_7_31, &InPromisePurityScope_15);
  switch (InPromisePurityScope_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModeInfo_8_34 = STATE_VARIABLE_ModeInfo_7_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NegNonLocals_16;
        MR_Word Unreachable_17;
        MR_Word Var_33;

        NegNonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        hlds__instmap__init_unreachable_1_p_0(&Unreachable_17);
        Var_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NegNonLocals_16);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 1, Var_33, InstMap0_12, Unreachable_17, STATE_VARIABLE_ModeInfo_7_31, &STATE_VARIABLE_ModeInfo_8_34);
      }
      break;
  }
  *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_14));
  check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_10, STATE_VARIABLE_ModeInfo_8_34, &STATE_VARIABLE_ModeInfo_9_35);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "not", GoalInfo0_7, STATE_VARIABLE_ModeInfo_9_35, STATE_VARIABLE_ModeInfo_19);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30)
{
  MR_bool succeeded;
  MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
  MR_Word Cond0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
  MR_Word Then0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
  MR_Word Else0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 4))));
  MR_Word MultiModeErrorMap0_14;
  MR_Word NonLocals_15;
  MR_Word ThenVars_16;
  MR_Word InstMap0_17;
  MR_Word Cond_18;
  MR_Word InstMapCond_19;
  MR_Word Then_20;
  MR_Word InstMapThen_21;
  MR_Word Else_22;
  MR_Word InstMapElse_23;
  MR_Word ThenElseArgInfos_24;
  MR_Word InstMap_25;
  MR_Word InPromisePurityScope_26;
  MR_Word STATE_VARIABLE_ModeInfo_1_33;
  MR_Word STATE_VARIABLE_ModeInfo_2_35;
  MR_Word STATE_VARIABLE_ModeInfo_3_36;
  MR_Word STATE_VARIABLE_ModeInfo_4_37;
  MR_Word STATE_VARIABLE_ModeInfo_5_38;
  MR_Word STATE_VARIABLE_ModeInfo_6_40;
  MR_Word STATE_VARIABLE_ModeInfo_7_41;
  MR_Word STATE_VARIABLE_ModeInfo_8_42;
  MR_Word STATE_VARIABLE_ModeInfo_9_43;
  MR_Word STATE_VARIABLE_ModeInfo_10_44;
  MR_Word STATE_VARIABLE_ModeInfo_11_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_ModeInfo_12_53;
  MR_Word STATE_VARIABLE_ModeInfo_13_56;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "if-then-else", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_1_33);
  check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_1_33, &MultiModeErrorMap0_14);
  NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
  ThenVars_16 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_12);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_33, &InstMap0_17);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_15, STATE_VARIABLE_ModeInfo_1_33, &STATE_VARIABLE_ModeInfo_2_35);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_16, STATE_VARIABLE_ModeInfo_2_35, &STATE_VARIABLE_ModeInfo_3_36);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(Cond0_11, &Cond_18, STATE_VARIABLE_ModeInfo_3_36, &STATE_VARIABLE_ModeInfo_4_37);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_4_37, &InstMapCond_19);
  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_16, STATE_VARIABLE_ModeInfo_4_37, &STATE_VARIABLE_ModeInfo_5_38);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_15, STATE_VARIABLE_ModeInfo_5_38, &STATE_VARIABLE_ModeInfo_6_40);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_19);
  if (succeeded)
  {
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Then0_12, &Then_20, STATE_VARIABLE_ModeInfo_6_40, &STATE_VARIABLE_ModeInfo_7_41);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_7_41, &InstMapThen_21);
  }
  else
  {
    Then_20 = hlds__make_goal__true_goal_0_f_0();
    InstMapThen_21 = InstMapCond_19;
    STATE_VARIABLE_ModeInfo_7_41 = STATE_VARIABLE_ModeInfo_6_40;
  }
  check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_14, STATE_VARIABLE_ModeInfo_7_41, &STATE_VARIABLE_ModeInfo_8_42);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_8_42, &STATE_VARIABLE_ModeInfo_9_43);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(Else0_13, &Else_22, STATE_VARIABLE_ModeInfo_9_43, &STATE_VARIABLE_ModeInfo_10_44);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_10_44, &InstMapElse_23);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_10_44, &STATE_VARIABLE_ModeInfo_11_45);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Else_22));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Then_20));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (InstMapElse_23));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (InstMapThen_21));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
  }
  hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_46, Var_47, &ThenElseArgInfos_24);
  hlds__instmap__instmap_merge_5_p_0(NonLocals_15, ThenElseArgInfos_24, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_11_45, &STATE_VARIABLE_ModeInfo_12_53);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Vars_10));
    MR_hl_field(3, base, 2) = ((MR_Box) (Cond_18));
    MR_hl_field(3, base, 3) = ((MR_Box) (Then_20));
    MR_hl_field(3, base, 4) = ((MR_Box) (Else_22));
  }
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_12_53, &InstMap_25);
  check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_12_53, &InPromisePurityScope_26);
  switch (InPromisePurityScope_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModeInfo_13_56 = STATE_VARIABLE_ModeInfo_12_53;
      break;
    case (MR_Integer) 1:
      {
        MR_Word CondNonLocals0_27;
        MR_Word CondNonLocals_28;
        MR_Word Var_54;

        CondNonLocals0_27 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond_18);
        Var_54 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondNonLocals0_27, NonLocals_15);
        CondNonLocals_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 0, CondNonLocals_28, InstMap0_17, InstMap_25, STATE_VARIABLE_ModeInfo_12_53, &STATE_VARIABLE_ModeInfo_13_56);
      }
      break;
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "if-then-else", GoalInfo0_7, STATE_VARIABLE_ModeInfo_13_56, STATE_VARIABLE_ModeInfo_30);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_9_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
    *STATE_VARIABLE_LargeFlatConstructs_7 = STATE_VARIABLE_LargeFlatConstructs_0_6;
  }
  else
  {
    MR_Word Case0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_22;
    MR_Word Cases_23;
    MR_Word InstMap_24;
    MR_Word InstMaps_25;
    MR_Word MainConsId_28;
    MR_Word OtherConsIds_29;
    MR_Word Goal0_30;
    MR_Word InstMap0_31;
    MR_Word InstMap1_32;
    MR_Word Goal1_33;
    MR_Word Goal_34;
    MR_Word STATE_VARIABLE_ModeInfo_1_39;
    MR_Word STATE_VARIABLE_ModeInfo_2_40;
    MR_Word STATE_VARIABLE_ModeInfo_3_41;
    MR_Word STATE_VARIABLE_LargeFlatConstructs_1_42;
    MR_Word STATE_VARIABLE_ModeInfo_4_43;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_1_39);
    MainConsId_28 = ((MR_Word) ((MR_hl_field(0, Case0_20, 0))));
    OtherConsIds_29 = ((MR_Word) ((MR_hl_field(0, Case0_20, 1))));
    Goal0_30 = ((MR_Word) ((MR_hl_field(0, Case0_20, 2))));
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_39, &InstMap0_31);
    check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0(Var_2, MainConsId_28, OtherConsIds_29, STATE_VARIABLE_ModeInfo_1_39, &STATE_VARIABLE_ModeInfo_2_40);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_40, &InstMap1_32);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_32);
    if (succeeded)
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_30, &Goal1_33, STATE_VARIABLE_ModeInfo_2_40, &STATE_VARIABLE_ModeInfo_3_41);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_41, &InstMap_24);
    }
    else
    {
      Goal1_33 = hlds__make_goal__true_goal_0_f_0();
      InstMap_24 = InstMap1_32;
      STATE_VARIABLE_ModeInfo_3_41 = STATE_VARIABLE_ModeInfo_2_40;
    }
    check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(Var_2, InstMap0_31, InstMap_24, Goal1_33, &Goal_34);
    {
      Case_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_22, 0) = ((MR_Box) (MainConsId_28));
      MR_hl_field(0, Case_22, 1) = ((MR_Box) (OtherConsIds_29));
      MR_hl_field(0, Case_22, 2) = ((MR_Box) (Goal_34));
    }
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LargeFlatConstructs_0_6);
    if (succeeded)
      STATE_VARIABLE_LargeFlatConstructs_1_42 = STATE_VARIABLE_LargeFlatConstructs_0_6;
    else
    {
      MR_Word GoalLargeFlatConstructs_44;

      GoalLargeFlatConstructs_44 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_34);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_44, STATE_VARIABLE_LargeFlatConstructs_0_6, &STATE_VARIABLE_LargeFlatConstructs_1_42);
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_31, STATE_VARIABLE_ModeInfo_3_41, &STATE_VARIABLE_ModeInfo_4_43);
    check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeErrorMap0_1, Var_2, Cases0_21, &Cases_23, &InstMaps_25, STATE_VARIABLE_LargeFlatConstructs_1_42, STATE_VARIABLE_LargeFlatConstructs_7, STATE_VARIABLE_ModeInfo_4_43, STATE_VARIABLE_ModeInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_25));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Case_6;

  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Case_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Case_6));
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24)
{
  MR_bool succeeded;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
  MR_Word CanFail_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 2))) & (MR_Integer) 1);
  MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
  MR_Word Cases_13;
  MR_Word STATE_VARIABLE_ModeInfo_1_27;
  MR_Word STATE_VARIABLE_ModeInfo_2_28;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "switch", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_1_27);
  if ((Cases0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMap_14;

    Cases_13 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__instmap__init_unreachable_1_p_0(&InstMap_14);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_14, STATE_VARIABLE_ModeInfo_1_27, &STATE_VARIABLE_ModeInfo_2_28);
  }
  else
  {
    MR_Word MultiModeErrorMap0_17;
    MR_Word LargeFlatConstructs0_19;
    MR_Word Cases1_20;
    MR_Word InstMaps_21;
    MR_Word LargeFlatConstructs_22;
    MR_Word STATE_VARIABLE_ModeInfo_3_29;
    MR_Word InstMaps_33;
    MR_Word ArmInstMaps_35;

    check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_1_27, &MultiModeErrorMap0_17);
    LargeFlatConstructs0_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeErrorMap0_17, Var_10, Cases0_12, &Cases1_20, &InstMaps_21, LargeFlatConstructs0_19, &LargeFlatConstructs_22, STATE_VARIABLE_ModeInfo_1_27, &STATE_VARIABLE_ModeInfo_3_29);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LargeFlatConstructs_22);
    if (succeeded)
    {
      Cases_13 = Cases1_20;
      InstMaps_33 = InstMaps_21;
    }
    else
    {
      MR_Word LargeFlatConstructList_34;
      MR_Word Var_36;
      MR_Word Var_37;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[1]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_1));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (LargeFlatConstructs_22));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_36, Cases1_20, &Cases_13);
      LargeFlatConstructList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LargeFlatConstructs_22);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[1]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0_2));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[2])));
        MR_hl_field(0, Var_37, 4) = ((MR_Box) (LargeFlatConstructList_34));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), Var_37, InstMaps_21, &InstMaps_33);
    }
    hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_13, InstMaps_33, &ArmInstMaps_35);
    hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_19, ArmInstMaps_35, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_3_29, &STATE_VARIABLE_ModeInfo_2_28);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_11));
    MR_hl_field(3, base, 3) = ((MR_Box) (Cases_13));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "switch", GoalInfo0_7, STATE_VARIABLE_ModeInfo_2_28, STATE_VARIABLE_ModeInfo_24);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(
  MR_Word MultiModeErrorMap0_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
    *STATE_VARIABLE_LargeFlatConstructs_7 = STATE_VARIABLE_LargeFlatConstructs_0_6;
  }
  else
  {
    MR_Word Disjunct0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Disjunct_22;
    MR_Word Disjuncts_23;
    MR_Word ArmInstMap_24;
    MR_Word ArmInstMaps_25;
    MR_Word InstMap_28;
    MR_Word Context_29;
    MR_Word STATE_VARIABLE_ModeInfo_1_34;
    MR_Word STATE_VARIABLE_ModeInfo_2_35;
    MR_Word STATE_VARIABLE_ModeInfo_3_36;
    MR_Word STATE_VARIABLE_LargeFlatConstructs_1_37;
    MR_Word Var_38;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_1_34);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_2, STATE_VARIABLE_ModeInfo_1_34, &STATE_VARIABLE_ModeInfo_2_35);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Disjunct0_20, &Disjunct_22, STATE_VARIABLE_ModeInfo_2_35, &STATE_VARIABLE_ModeInfo_3_36);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LargeFlatConstructs_0_6);
    if (succeeded)
      STATE_VARIABLE_LargeFlatConstructs_1_37 = STATE_VARIABLE_LargeFlatConstructs_0_6;
    else
    {
      MR_Word GoalLargeFlatConstructs_40;

      GoalLargeFlatConstructs_40 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Disjunct_22);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_40, STATE_VARIABLE_LargeFlatConstructs_0_6, &STATE_VARIABLE_LargeFlatConstructs_1_37);
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_36, &InstMap_28);
    Var_38 = ((MR_Word) ((MR_hl_field(0, Disjunct_22, 1))));
    Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_38);
    {
      ArmInstMap_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArmInstMap_24, 0) = ((MR_Box) (Context_29));
      MR_hl_field(0, ArmInstMap_24, 1) = ((MR_Box) (InstMap_28));
    }
    check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(MultiModeErrorMap0_1, InstMap0_2, Disjuncts0_21, &Disjuncts_23, &ArmInstMaps_25, STATE_VARIABLE_LargeFlatConstructs_1_37, STATE_VARIABLE_LargeFlatConstructs_7, STATE_VARIABLE_ModeInfo_3_36, STATE_VARIABLE_ModeInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArmInstMap_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArmInstMaps_25));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ArmInstMap_8;

  check_hlds__modecheck_goal__arm_instmap_set_vars_same_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ArmInstMap_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_ArmInstMap_8));
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_6;

  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
  MR_Word Disjuncts0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ModeInfo_1_27;
  MR_Word STATE_VARIABLE_ModeInfo_2_28;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "disj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_1_27);
  if ((Disjuncts0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMap_10;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_8 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts0_6));
    }
    hlds__instmap__init_unreachable_1_p_0(&InstMap_10);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_10, STATE_VARIABLE_ModeInfo_1_27, &STATE_VARIABLE_ModeInfo_2_28);
  }
  else
  {
    MR_Word MultiModeErrorMap0_13;
    MR_Word LargeFlatConstructs0_15;
    MR_Word InstMap0_16;
    MR_Word Disjuncts1_17;
    MR_Word ArmInstMaps_18;
    MR_Word LargeFlatConstructs_19;
    MR_Word Disjuncts2_20;
    MR_Word Disjuncts_21;
    MR_Word STATE_VARIABLE_ModeInfo_3_29;
    MR_Word STATE_VARIABLE_ModeInfo_4_30;
    MR_Word Var_32;
    MR_Word ArmInstMaps_35;

    check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_1_27, &MultiModeErrorMap0_13);
    LargeFlatConstructs0_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_27, &InstMap0_16);
    check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(MultiModeErrorMap0_13, InstMap0_16, Disjuncts0_6, &Disjuncts1_17, &ArmInstMaps_18, LargeFlatConstructs0_15, &LargeFlatConstructs_19, STATE_VARIABLE_ModeInfo_1_27, &STATE_VARIABLE_ModeInfo_3_29);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_ModeInfo_3_29, &STATE_VARIABLE_ModeInfo_4_30);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LargeFlatConstructs_19);
    if (succeeded)
    {
      Disjuncts2_20 = Disjuncts1_17;
      ArmInstMaps_35 = ArmInstMaps_18;
    }
    else
    {
      MR_Word LargeFlatConstructList_36;
      MR_Word Var_37;
      MR_Word Var_38;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[0]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (LargeFlatConstructs_19));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_37, Disjuncts1_17, &Disjuncts2_20);
      LargeFlatConstructList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LargeFlatConstructs_19);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[2])));
        MR_hl_field(0, Var_38, 4) = ((MR_Box) (LargeFlatConstructList_36));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0), Var_38, ArmInstMaps_18, &ArmInstMaps_35);
    }
    hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_15, ArmInstMaps_35, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_4_30, &STATE_VARIABLE_ModeInfo_2_28);
    hlds__goal_transform__flatten_disj_2_p_0(Disjuncts2_20, &Disjuncts_21);
    hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_21, GoalInfo0_7, &Var_32);
    *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Var_32, 0))));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "disj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_2_28, STATE_VARIABLE_ModeInfo_24);
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word Context_10;
  MR_Word InstMap0_11;
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;
  MR_Word STATE_VARIABLE_ModeInfo_1_17;
  MR_Word STATE_VARIABLE_ModeInfo_4_22;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_10);
  if (succeeded)
    STATE_VARIABLE_ModeInfo_1_17 = STATE_VARIABLE_ModeInfo_0_15;
  else
    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_1_17);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_17, &InstMap0_11);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 16);
  if (succeeded)
  {
    MR_Word InDuplForSwitch_12;
    MR_Word STATE_VARIABLE_ModeInfo_2_20;
    MR_Word STATE_VARIABLE_ModeInfo_3_21;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_1_17, &InDuplForSwitch_12);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_1_17, &STATE_VARIABLE_ModeInfo_2_20);
    check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_13, STATE_VARIABLE_ModeInfo_2_20, &STATE_VARIABLE_ModeInfo_3_21);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_12, STATE_VARIABLE_ModeInfo_3_21, &STATE_VARIABLE_ModeInfo_4_22);
  }
  else
    check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_13, STATE_VARIABLE_ModeInfo_1_17, &STATE_VARIABLE_ModeInfo_4_22);
  check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_11, GoalExpr_13, GoalInfo0_9, &GoalInfo_14, STATE_VARIABLE_ModeInfo_4_22, STATE_VARIABLE_ModeInfo_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_6_p_0(
  MR_Word TermVar_7,
  MR_Word ConjGoals0_8,
  MR_Word STATE_VARIABLE_SubGoalInfo_0_21,
  MR_Word * SubGoal_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23)
{
  MR_Word LocalVarMap0_12;
  MR_Word ConjGoals_13;
  MR_Word LocalVarMap_14;
  MR_Word TermVarInfo_15;
  MR_Word TermVarInst_16;
  MR_Word InstMapDelta_17;
  MR_Word SubGoalExpr_18;
  MR_Word InstMap0_19;
  MR_Word InstMap_20;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_SubGoalInfo_1_27;
  MR_Word STATE_VARIABLE_SubGoalInfo_2_29;
  MR_Box conv0_TermVarInfo_15;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), &LocalVarMap0_12);
  check_hlds__modecheck_goal__modecheck_ground_term_construct_goal_loop_4_p_0(ConjGoals0_8, &ConjGoals_13, LocalVarMap0_12, &LocalVarMap_14);
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), LocalVarMap_14, ((MR_Box) (TermVar_7)), &conv0_TermVarInfo_15);
  TermVarInfo_15 = ((MR_Word) (conv0_TermVarInfo_15));
  TermVarInst_16 = (MR_Word) (TermVarInfo_15);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (TermVar_7));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (TermVarInst_16));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_17 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_24);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_17, STATE_VARIABLE_SubGoalInfo_0_21, &STATE_VARIABLE_SubGoalInfo_1_27);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_SubGoalInfo_1_27, &STATE_VARIABLE_SubGoalInfo_2_29);
  {
    SubGoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SubGoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, SubGoalExpr_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, SubGoalExpr_18, 2) = ((MR_Box) (ConjGoals_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SubGoal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SubGoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_SubGoalInfo_2_29));
  }
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &InstMap0_19);
  hlds__instmap__instmap_set_var_4_p_0(TermVar_7, TermVarInst_16, InstMap0_19, &InstMap_20);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_20, STATE_VARIABLE_ModeInfo_0_22, STATE_VARIABLE_ModeInfo_23);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_ground_term_construct_goal_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarMap_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalVarMap_4 = STATE_VARIABLE_LocalVarMap_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 1))));
    MR_Word STATE_VARIABLE_LocalVarMap_2_52;
    MR_Word LHSVar_15;
    MR_Word RHS_16;
    MR_Word UnifyContext_19;
    MR_Word ConsId_20;
    MR_Word RHSVars_21;
    MR_Word Var_37;

    succeeded = ((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      LHSVar_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 0))));
      RHS_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 1))));
      UnifyContext_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, 4))));
      succeeded = ((MR_tag((MR_Word) RHS_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        ConsId_20 = ((MR_Word) ((MR_hl_field(1, RHS_16, 0))));
        Var_37 = ((MR_Unsigned) ((MR_hl_field(1, RHS_16, 1))) & (MR_Integer) 1);
        RHSVars_21 = ((MR_Word) ((MR_hl_field(1, RHS_16, 2))));
        succeeded = (Var_37 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word ArgInsts_22;
      MR_Word ArgModes_23;
      MR_Word BoundInst_24;
      MR_Word TermInst_25;
      MR_Word UnifyMode_26;
      MR_Word Unification_29;
      MR_Word GoalExpr_30;
      MR_Word InstMapDelta_31;
      MR_Word GoalInfo1_32;
      MR_Word GoalInfo_33;
      MR_Word LHSVarInfo_34;
      MR_Word STATE_VARIABLE_LocalVarMap_1_38;
      MR_Word Var_41;
      MR_Word Var_48;
      MR_Word Var_49;

      check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(RHSVars_21, &ArgInsts_22, &ArgModes_23, STATE_VARIABLE_LocalVarMap_0_3, &STATE_VARIABLE_LocalVarMap_1_38);
      {
        BoundInst_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_24, 0) = ((MR_Box) (ConsId_20));
        MR_hl_field(0, BoundInst_24, 1) = ((MR_Box) (ArgInsts_22));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (BoundInst_24));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TermInst_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, TermInst_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(2, TermInst_25, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(2, TermInst_25, 2) = ((MR_Box) (Var_41));
      }
      {
        UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_26, 1) = ((MR_Box) (TermInst_25));
        MR_hl_field(0, UnifyMode_26, 2) = ((MR_Box) (TermInst_25));
        MR_hl_field(0, UnifyMode_26, 3) = ((MR_Box) (TermInst_25));
      }
      {
        Unification_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unification_29, 0) = ((MR_Box) (LHSVar_15));
        MR_hl_field(0, Unification_29, 1) = ((MR_Box) (ConsId_20));
        MR_hl_field(0, Unification_29, 2) = ((MR_Box) (RHSVars_21));
        MR_hl_field(0, Unification_29, 3) = ((MR_Box) (ArgModes_23));
        MR_hl_field(0, Unification_29, 4) = ((MR_Box) (MR_mkword(2, &check_hlds__modecheck_goal_scalar_common_3[1])));
        MR_hl_field(0, Unification_29, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, Unification_29, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_30, 0) = ((MR_Box) (LHSVar_15));
        MR_hl_field(1, GoalExpr_30, 1) = ((MR_Box) (RHS_16));
        MR_hl_field(1, GoalExpr_30, 2) = ((MR_Box) (UnifyMode_26));
        MR_hl_field(1, GoalExpr_30, 3) = ((MR_Box) (Unification_29));
        MR_hl_field(1, GoalExpr_30, 4) = ((MR_Box) (UnifyContext_19));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (LHSVar_15));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (TermInst_25));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_31 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_48);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_31, GoalInfo0_14, &GoalInfo1_32);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo1_32, &GoalInfo_33);
      {
        Goal_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_10, 0) = ((MR_Box) (GoalExpr_30));
        MR_hl_field(0, Goal_10, 1) = ((MR_Box) (GoalInfo_33));
      }
      LHSVarInfo_34 = (MR_Word) (TermInst_25);
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), ((MR_Box) (LHSVar_15)), ((MR_Box) (LHSVarInfo_34)), STATE_VARIABLE_LocalVarMap_1_38, &STATE_VARIABLE_LocalVarMap_2_52);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/4", (MR_String) "not rhs_functor unify");
        return;
      }
    check_hlds__modecheck_goal__modecheck_ground_term_construct_goal_loop_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_LocalVarMap_2_52, STATE_VARIABLE_LocalVarMap_4);
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
check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocalVarMap_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalVarMap_5 = STATE_VARIABLE_LocalVarMap_0_4;
  }
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word VarInst_11;
    MR_Word VarInsts_12;
    MR_Word ArgMode_13;
    MR_Word ArgModes_14;
    MR_Word VarInfo_16;
    MR_Word STATE_VARIABLE_LocalVarMap_1_19;
    MR_Box conv0_VarInfo_16;

    mercury__map__det_remove_4_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), ((MR_Box) (Var_9)), &conv0_VarInfo_16, STATE_VARIABLE_LocalVarMap_0_4, &STATE_VARIABLE_LocalVarMap_1_19);
    VarInfo_16 = ((MR_Word) (conv0_VarInfo_16));
    VarInst_11 = (MR_Word) (VarInfo_16);
    {
      ArgMode_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgMode_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ArgMode_13, 1) = ((MR_Box) (VarInst_11));
      MR_hl_field(0, ArgMode_13, 2) = ((MR_Box) (VarInst_11));
      MR_hl_field(0, ArgMode_13, 3) = ((MR_Box) (VarInst_11));
    }
    check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(Vars_10, &VarInsts_12, &ArgModes_14, STATE_VARIABLE_LocalVarMap_1_19, STATE_VARIABLE_LocalVarMap_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VarInst_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarInsts_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgModes_14));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(
  MR_Word SubGoal_5,
  MR_Word TermVar_6,
  MR_Word TermVarInst_7,
  MR_Word * MaybeGroundTermMode_8)
{
  MR_bool succeeded;
  MR_Word SubGoalExpr_9 = ((MR_Word) ((MR_hl_field(0, SubGoal_5, 0))));
  MR_Word SubGoalInfo_10 = ((MR_Word) ((MR_hl_field(0, SubGoal_5, 1))));
  MR_Word Var_22;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_36_36;
  MR_Word NonLocals_11;
  MR_Word UnifyTermGoal_12;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Goal_37;
  MR_Word Goals_38;
  MR_Word GoalExpr_39;
  MR_Word RHS_42;
  MR_Word Var_48;

  NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(SubGoalInfo_10);
  succeeded = parse_tree__set_of_var__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_11, &Var_33);
  if (succeeded)
  {
    TypeInfo_35_35 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (TermVar_6)), ((MR_Box) (Var_33)));
    if (succeeded)
    {
      Var_20 = hlds__hlds_goal__goal_info_get_purity_1_f_0(SubGoalInfo_10);
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) SubGoalExpr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_9, 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_21 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_9, 1))) & (MR_Integer) 1);
          Var_22 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_9, 2))));
          succeeded = (Var_21 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UnifyTermGoal_12 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(0, UnifyTermGoal_12, 0))));
              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_34 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
                TypeInfo_36_36 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (TermVar_6)), ((MR_Box) (Var_34)));
                if (succeeded)
                {
                  Goal_37 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
                  Goals_38 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
                  GoalExpr_39 = ((MR_Word) ((MR_hl_field(0, Goal_37, 0))));
                  succeeded = ((MR_tag((MR_Word) GoalExpr_39)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RHS_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr_39, 1))));
                    succeeded = ((MR_tag((MR_Word) RHS_42)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(1, RHS_42, 1))) & (MR_Integer) 1);
                      succeeded = (Var_48 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(Goals_38);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    succeeded = (TermVarInst_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word RevConj_18;
      MR_Word Var_26;

      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_22, &RevConj_18);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (RevConj_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGroundTermMode_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word Var_28;

      succeeded = ((MR_tag((MR_Word) TermVarInst_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_27 = ((MR_Unsigned) ((MR_hl_field(1, TermVarInst_7, 0))) & (MR_Integer) 7);
        Var_28 = ((MR_Word) ((MR_hl_field(1, TermVarInst_7, 1))));
        succeeded = (Var_27 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGroundTermMode_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
        }
      }
      else
        *MaybeGroundTermMode_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
    *MaybeGroundTermMode_8 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(0, Goal_2, 0))));
      MR_Word RHS_7;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 1);
      if (succeeded)
      {
        RHS_7 = ((MR_Word) ((MR_hl_field(1, GoalExpr_4, 1))));
        succeeded = ((MR_tag((MR_Word) RHS_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_13 = ((MR_Unsigned) ((MR_hl_field(1, RHS_7, 1))) & (MR_Integer) 1);
          succeeded = (Var_13 == (MR_Integer) 0);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Goals_3;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(
  MR_Word TermVar_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39)
{
  MR_Word VarTable0_12;
  MR_Word TermVarEntry_13;
  MR_Word CloneVarEntry_14;
  MR_Word CloneVar_15;
  MR_Word VarTable_16;
  MR_Word Rename_17;
  MR_Word SubGoal_18;
  MR_Word ScopeGoalInfo1_19;
  MR_Word InstMap0_20;
  MR_Word TermVarOldInst_21;
  MR_Word ScopeInstMapDelta_22;
  MR_Word ScopeGoalInfo_23;
  MR_Word Reason_24;
  MR_Word ScopeGoalExpr_25;
  MR_Word ScopeGoal_26;
  MR_Word TermVarUniqueInst_27;
  MR_Word InstMap1_28;
  MR_Word Context_29;
  MR_Word TermVarType_30;
  MR_Word TypeInfoVar_31;
  MR_Word TypeInfoGoals_32;
  MR_Word InstMapDelta_33;
  MR_Word ModuleInfo_34;
  MR_Word CopyGoal_35;
  MR_Word InstMap2_36;
  MR_Word InstMap_37;
  MR_Word STATE_VARIABLE_ModeInfo_1_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_ModeInfo_2_49;
  MR_Word STATE_VARIABLE_ModeInfo_3_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word ModuleInfo0_80;
  MR_Word PredId_81;
  MR_Integer ProcId_82;
  MR_Word PredInfo0_83;
  MR_Word ProcInfo0_84;
  MR_Word VarTable0_85;
  MR_Word ProcInfo1_86;
  MR_Word ModuleInfo1_87;
  MR_Word PredInfo_88;
  MR_Word ProcInfo_89;
  MR_Word ModuleInfo_90;
  MR_Word VarTable_91;
  MR_Word STATE_VARIABLE_ModeInfo_1_92;
  MR_Word Var_74;
  MR_Word Var_75;

  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &VarTable0_12);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_12, TermVar_7, &TermVarEntry_13);
  Var_74 = ((MR_Word) ((MR_hl_field(0, TermVarEntry_13, 1))));
  Var_75 = ((MR_Unsigned) ((MR_hl_field(0, TermVarEntry_13, 2))) & (MR_Integer) 1);
  {
    CloneVarEntry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CloneVarEntry_14, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CloneVarEntry_14, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, CloneVarEntry_14, 2) = (MR_Box) ((MR_Unsigned) (Var_75));
  }
  parse_tree__var_table__add_var_entry_4_p_0(CloneVarEntry_14, &CloneVar_15, VarTable0_12, &VarTable_16);
  check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_16, STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_1_41);
  Rename_17 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), ((MR_Box) (TermVar_7)), ((MR_Box) (CloneVar_15)));
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Rename_17, SubGoal0_8, &SubGoal_18);
  hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Rename_17, GoalInfo0_9, &ScopeGoalInfo1_19);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_41, &InstMap0_20);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_20, TermVar_7, &TermVarOldInst_21);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (CloneVar_15));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (TermVarOldInst_21));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ScopeInstMapDelta_22 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_43);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ScopeInstMapDelta_22, ScopeGoalInfo1_19, &ScopeGoalInfo_23);
  {
    Reason_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Reason_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Reason_24, 1) = ((MR_Box) (CloneVar_15));
    MR_hl_field(3, Reason_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    ScopeGoalExpr_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopeGoalExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ScopeGoalExpr_25, 1) = ((MR_Box) (Reason_24));
    MR_hl_field(3, ScopeGoalExpr_25, 2) = ((MR_Box) (SubGoal_18));
  }
  {
    ScopeGoal_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ScopeGoal_26, 0) = ((MR_Box) (ScopeGoalExpr_25));
    MR_hl_field(0, ScopeGoal_26, 1) = ((MR_Box) (ScopeGoalInfo_23));
  }
  TermVarUniqueInst_27 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[3]));
  hlds__instmap__instmap_set_var_4_p_0(CloneVar_15, TermVarOldInst_21, InstMap0_20, &InstMap1_28);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_28, STATE_VARIABLE_ModeInfo_1_41, &STATE_VARIABLE_ModeInfo_2_49);
  Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  TermVarType_30 = ((MR_Word) ((MR_hl_field(0, TermVarEntry_13, 1))));
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_49, &ModuleInfo0_80);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_2_49, &PredId_81);
  check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_2_49, &ProcId_82);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_80, PredId_81, ProcId_82, &PredInfo0_83, &ProcInfo0_84);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_2_49, &VarTable0_85);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable0_85, ProcInfo0_84, &ProcInfo1_86);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(TermVarType_30, Context_29, &TypeInfoVar_31, &TypeInfoGoals_32, ModuleInfo0_80, &ModuleInfo1_87, PredInfo0_83, &PredInfo_88, ProcInfo1_86, &ProcInfo_89);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_81, ProcId_82, PredInfo_88, ProcInfo_89, ModuleInfo1_87, &ModuleInfo_90);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_89, &VarTable_91);
  check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_91, STATE_VARIABLE_ModeInfo_2_49, &STATE_VARIABLE_ModeInfo_1_92);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_90, STATE_VARIABLE_ModeInfo_1_92, &STATE_VARIABLE_ModeInfo_3_50);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (TermVar_7));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (TermVarUniqueInst_27));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_51);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_3_50, &ModuleInfo_34);
  Var_55 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (TypeInfoVar_31));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (TermVar_7));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (CloneVar_15));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_64));
  }
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_34, (MR_Integer) 0, Var_55, (MR_String) "copy", Var_57, Var_58, InstMapDelta_33, (MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_3[0])), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_29, &CopyGoal_35);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_50, &InstMap2_36);
  hlds__instmap__instmap_set_var_4_p_0(TermVar_7, TermVarUniqueInst_27, InstMap2_36, &InstMap_37);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_37, STATE_VARIABLE_ModeInfo_3_50, STATE_VARIABLE_ModeInfo_39);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (ScopeGoal_26));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (TypeInfoGoals_32));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (CopyGoal_35));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_70, Var_71);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_69));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) (env_ptr_arg);

  check_hlds__mode_info__mode_info_get_module_info_2_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, &(env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20);
  (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = check_hlds__inst_test__inst_contains_any_2_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20, (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
  if ((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
    check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0) == 0)
    {
      {
        hlds__instmap__instmap_lookup_var_3_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3, (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(env_ptr);
      }
      {
        hlds__instmap__instmap_lookup_var_3_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4, (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14, &(env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(env_ptr);
      }
      (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0(
  MR_Word NegCtxtDesc_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word InstMap_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s env;

  (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3 = InstMap0_3;
  (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4 = InstMap_4;
  (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5 = STATE_VARIABLE_ModeInfo_0_5;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_6 = (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
    else
    {
      MR_Word NonLocals_15;

      (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      NonLocals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(&env);
      if ((env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
      {
        MR_Word WaitingVars_21;
        MR_Word ModeError_22;

        WaitingVars_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14);
        {
          ModeError_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_22, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, ModeError_22, 1) = (MR_Box) ((MR_Unsigned) (NegCtxtDesc_1));
          MR_hl_field(3, ModeError_22, 2) = ((MR_Box) ((env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_21, ModeError_22, (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, STATE_VARIABLE_ModeInfo_6);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = NonLocals_15;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
  MR_Word Goal_3)
{
  MR_Word LargeFlatConstructs_4;
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

  switch (MR_tag((MR_Word) GoalExpr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 2:
      LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
            MR_Word Var_102 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_5, 1))) & (MR_Integer) 1);

            switch (Var_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_75;

                  Var_75 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                  check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(Var_101, Var_75, &LargeFlatConstructs_4);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
        case (MR_Integer) 4:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

            switch (MR_tag((MR_Word) Reason_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                break;
              case (MR_Integer) 1:
                LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                break;
              case (MR_Integer) 2:
                LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_41, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 1:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 2:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 3:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 4:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 5:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(3, Reason_41, 2))) & (MR_Integer) 3);
                      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(3, Reason_41, 1))));

                      switch (Var_103) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LargeFlatConstructs_4 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_104);
                          break;
                        case (MR_Integer) 2:
                          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                          break;
                        case (MR_Integer) 0:
                          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                          break;
                        case (MR_Integer) 3:
                          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                  case (MR_Integer) 8:
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
        case (MR_Integer) 7:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
      }
      break;
  }
  return LargeFlatConstructs_4;
}

static void MR_CALL 
check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_2,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LargeFlatConstructs_3 = STATE_VARIABLE_LargeFlatConstructs_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalLargeFlatConstructs_10;
      MR_Word STATE_VARIABLE_LargeFlatConstructs_1_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2;

      GoalLargeFlatConstructs_10 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_10, STATE_VARIABLE_LargeFlatConstructs_0_2, &STATE_VARIABLE_LargeFlatConstructs_1_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2 = STATE_VARIABLE_LargeFlatConstructs_1_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LargeFlatConstructs_0_2 = next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * STATE_VARIABLE_ModeInfo_67)
{
  MR_bool succeeded;
  MR_Word GenericCall_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
  MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
  MR_Word Modes0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
  MR_Word CallId_15;
  MR_Word InstMap0_16;
  MR_Word STATE_VARIABLE_ModeInfo_1_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_ModeInfo_2_72;
  MR_Word STATE_VARIABLE_ModeInfo_4_75;
  MR_Word STATE_VARIABLE_ModeInfo_10_110;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "generic_call", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_66, &STATE_VARIABLE_ModeInfo_1_70);
  {
    CallId_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallId_15, 0) = ((MR_Box) (GenericCall_10));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (CallId_15));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_71, STATE_VARIABLE_ModeInfo_1_70, &STATE_VARIABLE_ModeInfo_2_72);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &InstMap0_16);
  switch (MR_tag((MR_Word) GenericCall_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_17 = ((MR_Word) ((MR_hl_field(0, GenericCall_10, 0))));
        MR_Word Args_22;
        MR_Word Modes_23;
        MR_Word Det_24;
        MR_Word ExtraGoals_25;
        MR_Word GoalExpr1_26;
        MR_Word AllArgs0_27;
        MR_Word AllArgs_28;
        MR_Word STATE_VARIABLE_ModeInfo_3_73;

        check_hlds__modecheck_call__modecheck_higher_order_call_8_p_0(GenericCall_10, Args0_11, &Args_22, &Modes_23, &Det_24, &ExtraGoals_25, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_3_73);
        {
          GoalExpr1_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr1_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, GoalExpr1_26, 1) = ((MR_Box) (GenericCall_10));
          MR_hl_field(3, GoalExpr1_26, 2) = ((MR_Box) (Args_22));
          MR_hl_field(3, GoalExpr1_26, 3) = ((MR_Box) (Modes_23));
          MR_hl_field(3, GoalExpr1_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, GoalExpr1_26, 5) = (MR_Box) ((MR_Unsigned) (Det_24));
        }
        {
          AllArgs0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllArgs0_27, 0) = ((MR_Box) (PredVar_17));
          MR_hl_field(1, AllArgs0_27, 1) = ((MR_Box) (Args0_11));
        }
        {
          AllArgs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllArgs_28, 0) = ((MR_Box) (PredVar_17));
          MR_hl_field(1, AllArgs_28, 1) = ((MR_Box) (Args_22));
        }
        check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_26, ExtraGoals_25, GoalInfo0_7, AllArgs0_27, AllArgs_28, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_3_73, &STATE_VARIABLE_ModeInfo_4_75);
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "class_method_call");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_33 = ((MR_String) ((MR_hl_field(2, GenericCall_10, 0))));
        MR_Word ModuleInfo_34;
        MR_Word EventSet_35;
        MR_Word EventSpecMap_36;
        MR_Word Args_114;
        MR_Word Modes_115;
        MR_Word ModesPrime_37;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &ModuleInfo_34);
        hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_34, &EventSet_35);
        EventSpecMap_36 = ((MR_Word) ((MR_hl_field(0, EventSet_35, 1))));
        succeeded = parse_tree__prog_event__event_arg_modes_3_p_0(EventSpecMap_36, EventName_33, &ModesPrime_37);
        if (succeeded)
          Modes_115 = ModesPrime_37;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "unknown event");
            return;
          }
        check_hlds__modecheck_call__modecheck_event_call_5_p_0(Modes_115, Args0_11, &Args_114, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_4_75);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (GenericCall_10));
          MR_hl_field(3, base, 2) = ((MR_Box) (Args_114));
          MR_hl_field(3, base, 3) = ((MR_Box) (Modes_115));
          MR_hl_field(3, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_136 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_10, 0))) & (MR_Integer) 7);

        switch (Var_136) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_ModeInfo_6_103;
              MR_Word Args_118;
              MR_Word Modes_119;
              MR_Word Det_120;
              MR_Word ExtraGoals_121;
              MR_Word GoalExpr1_122;
              MR_Word Mode1_45;
              MR_Word Unique_50;
              MR_Word LocalSectag_56;
              MR_Word InstMap_39;
              MR_Word Arg1_44;
              MR_Word Mode2_46;
              MR_Word Inst1_49;
              MR_Word ConsId_52;
              MR_Word DuCtor_53;
              MR_Word ConsRepn_54;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word ModuleInfo_116;
              MR_Word Arg1Prime_40;
              MR_Word Mode1Prime_42;
              MR_Word Mode2Prime_43;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word _Mode1ArgInsts_47;
              MR_Word _Mode2ArgInsts_48;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &InstMap_39);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_40 = ((MR_Word) ((MR_hl_field(1, Args0_11, 0))));
                  Var_84 = ((MR_Word) ((MR_hl_field(1, Args0_11, 1))));
                  succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, 1))));
                    succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_42 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 0))));
                        Var_86 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 1))));
                        succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_43 = ((MR_Word) ((MR_hl_field(1, Var_86, 0))));
                          Var_87 = ((MR_Word) ((MR_hl_field(1, Var_86, 1))));
                          succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_44 = Arg1Prime_40;
                  Mode1_45 = Mode1Prime_42;
                  Mode2_46 = Mode2Prime_43;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                succeeded = parse_tree__prog_mode__is_in_mode_2_p_0(Mode1_45, &_Mode1ArgInsts_47);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_mode__is_out_mode_2_p_0(Mode2_46, &_Mode2ArgInsts_48);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_39, Arg1_44, &Inst1_49);
                    succeeded = ((MR_tag((MR_Word) Inst1_49)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_50 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_49, 0))) & (MR_Integer) 7);
                      Var_90 = ((MR_Word) ((MR_hl_field(2, Inst1_49, 2))));
                      succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_91 = ((MR_Word) ((MR_hl_field(1, Var_90, 0))));
                        Var_93 = ((MR_Word) ((MR_hl_field(1, Var_90, 1))));
                        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_52 = ((MR_Word) ((MR_hl_field(0, Var_91, 0))));
                          Var_92 = ((MR_Word) ((MR_hl_field(0, Var_91, 1))));
                          succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &ModuleInfo_116);
                            succeeded = ((MR_tag((MR_Word) ConsId_52)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              DuCtor_53 = (MR_Word) (MR_body((MR_Word) (ConsId_52), (MR_Integer) 1));
                              succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_116, DuCtor_53, &ConsRepn_54);
                              if (succeeded)
                              {
                                Var_94 = ((MR_Word) ((MR_hl_field(0, ConsRepn_54, 3))));
                                succeeded = ((((MR_tag((MR_Word) Var_94)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_94, 0)))) == (MR_Integer) 2)));
                                if (succeeded)
                                  LocalSectag_56 = ((MR_Word) ((MR_hl_field(3, Var_94, 2))));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Unsigned PrimSec_59 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_56, 1))));
                MR_Integer SectagWholeWord_61;
                MR_Word SectagConsId_62;
                MR_Word BoundFunctor_63;
                MR_Word BoundInst_64;
                MR_Word NewMode2_65;
                MR_Word Var_95;
                MR_Word Var_98;
                MR_Word Var_101;

                SectagWholeWord_61 = mercury__uint__cast_to_int_1_f_0(PrimSec_59);
                {
                  Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_95, 0) = ((MR_Box) (SectagWholeWord_61));
                }
                {
                  SectagConsId_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_62, 1) = ((MR_Box) (Var_95));
                }
                {
                  BoundFunctor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_63, 0) = ((MR_Box) (SectagConsId_62));
                  MR_hl_field(0, BoundFunctor_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (BoundFunctor_63));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_64, 0) = (MR_Box) ((MR_Unsigned) (Unique_50));
                  MR_hl_field(2, BoundInst_64, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_64, 2) = ((MR_Box) (Var_98));
                }
                {
                  NewMode2_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_65, 1) = ((MR_Box) (BoundInst_64));
                }
                {
                  Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_101, 0) = ((MR_Box) (NewMode2_65));
                  MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_119, 0) = ((MR_Box) (Mode1_45));
                  MR_hl_field(1, Modes_119, 1) = ((MR_Box) (Var_101));
                }
              }
              else
                Modes_119 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_119, Args0_11, &Args_118, &Det_120, &ExtraGoals_121, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_6_103);
              {
                GoalExpr1_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_122, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_122, 2) = ((MR_Box) (Args_118));
                MR_hl_field(3, GoalExpr1_122, 3) = ((MR_Box) (Modes_119));
                MR_hl_field(3, GoalExpr1_122, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_122, 5) = (MR_Box) ((MR_Unsigned) (Det_120));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_122, ExtraGoals_121, GoalInfo0_7, Args0_11, Args_118, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_6_103, &STATE_VARIABLE_ModeInfo_4_75);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_ModeInfo_6_321;
              MR_Word Args_324;
              MR_Word Modes_325;
              MR_Word Det_326;
              MR_Word ExtraGoals_327;
              MR_Word GoalExpr1_328;
              MR_Word Mode1_225;
              MR_Word Unique_230;
              MR_Word LocalSectag_236;
              MR_Word InstMap_166;
              MR_Word Arg1_171;
              MR_Word Mode2_172;
              MR_Word Inst1_175;
              MR_Word ConsId_177;
              MR_Word DuCtor_178;
              MR_Word ConsRepn_179;
              MR_Word Var_189;
              MR_Word Var_190;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_Word ModuleInfo_194;
              MR_Word Arg1Prime_145;
              MR_Word Mode1Prime_147;
              MR_Word Mode2Prime_148;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word _Mode1ArgInsts_155;
              MR_Word _Mode2ArgInsts_156;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &InstMap_166);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_145 = ((MR_Word) ((MR_hl_field(1, Args0_11, 0))));
                  Var_139 = ((MR_Word) ((MR_hl_field(1, Args0_11, 1))));
                  succeeded = (Var_139 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_140 = ((MR_Word) ((MR_hl_field(1, Var_139, 1))));
                    succeeded = (Var_140 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_147 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 0))));
                        Var_141 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 1))));
                        succeeded = (Var_141 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_148 = ((MR_Word) ((MR_hl_field(1, Var_141, 0))));
                          Var_142 = ((MR_Word) ((MR_hl_field(1, Var_141, 1))));
                          succeeded = (Var_142 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_171 = Arg1Prime_145;
                  Mode1_225 = Mode1Prime_147;
                  Mode2_172 = Mode2Prime_148;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                succeeded = parse_tree__prog_mode__is_in_mode_2_p_0(Mode1_225, &_Mode1ArgInsts_155);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_mode__is_out_mode_2_p_0(Mode2_172, &_Mode2ArgInsts_156);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_166, Arg1_171, &Inst1_175);
                    succeeded = ((MR_tag((MR_Word) Inst1_175)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_230 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_175, 0))) & (MR_Integer) 7);
                      Var_189 = ((MR_Word) ((MR_hl_field(2, Inst1_175, 2))));
                      succeeded = (Var_189 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_190 = ((MR_Word) ((MR_hl_field(1, Var_189, 0))));
                        Var_192 = ((MR_Word) ((MR_hl_field(1, Var_189, 1))));
                        succeeded = (Var_192 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_177 = ((MR_Word) ((MR_hl_field(0, Var_190, 0))));
                          Var_191 = ((MR_Word) ((MR_hl_field(0, Var_190, 1))));
                          succeeded = (Var_191 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &ModuleInfo_194);
                            succeeded = ((MR_tag((MR_Word) ConsId_177)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              DuCtor_178 = (MR_Word) (MR_body((MR_Word) (ConsId_177), (MR_Integer) 1));
                              succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_194, DuCtor_178, &ConsRepn_179);
                              if (succeeded)
                              {
                                Var_193 = ((MR_Word) ((MR_hl_field(0, ConsRepn_179, 3))));
                                succeeded = ((((MR_tag((MR_Word) Var_193)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_193, 0)))) == (MR_Integer) 2)));
                                if (succeeded)
                                  LocalSectag_236 = ((MR_Word) ((MR_hl_field(3, Var_193, 2))));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Unsigned PrimSec_204 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_236, 1))));
                MR_Integer SectagWholeWord_206;
                MR_Word SectagConsId_207;
                MR_Word BoundFunctor_208;
                MR_Word BoundInst_209;
                MR_Word NewMode2_210;
                MR_Word Var_211;
                MR_Word Var_214;
                MR_Word Var_217;

                SectagWholeWord_206 = mercury__uint__cast_to_int_1_f_0(PrimSec_204);
                {
                  Var_211 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_211, 0) = ((MR_Box) (SectagWholeWord_206));
                }
                {
                  SectagConsId_207 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_207, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_207, 1) = ((MR_Box) (Var_211));
                }
                {
                  BoundFunctor_208 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_208, 0) = ((MR_Box) (SectagConsId_207));
                  MR_hl_field(0, BoundFunctor_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_214, 0) = ((MR_Box) (BoundFunctor_208));
                  MR_hl_field(1, Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_209 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_209, 0) = (MR_Box) ((MR_Unsigned) (Unique_230));
                  MR_hl_field(2, BoundInst_209, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_209, 2) = ((MR_Box) (Var_214));
                }
                {
                  NewMode2_210 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_210, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_210, 1) = ((MR_Box) (BoundInst_209));
                }
                {
                  Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_217, 0) = ((MR_Box) (NewMode2_210));
                  MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_325 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_325, 0) = ((MR_Box) (Mode1_225));
                  MR_hl_field(1, Modes_325, 1) = ((MR_Box) (Var_217));
                }
              }
              else
                Modes_325 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_325, Args0_11, &Args_324, &Det_326, &ExtraGoals_327, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_6_321);
              {
                GoalExpr1_328 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_328, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_328, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_328, 2) = ((MR_Box) (Args_324));
                MR_hl_field(3, GoalExpr1_328, 3) = ((MR_Box) (Modes_325));
                MR_hl_field(3, GoalExpr1_328, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_328, 5) = (MR_Box) ((MR_Unsigned) (Det_326));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_328, ExtraGoals_327, GoalInfo0_7, Args0_11, Args_324, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_6_321, &STATE_VARIABLE_ModeInfo_4_75);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word STATE_VARIABLE_ModeInfo_8_107;
              MR_Word Args_124;
              MR_Word Modes_125;
              MR_Word Det_126;
              MR_Word ExtraGoals_127;
              MR_Word GoalExpr1_128;

              check_hlds__modecheck_coerce__modecheck_coerce_8_p_0(Args0_11, &Args_124, Modes0_12, &Modes_125, &Det_126, &ExtraGoals_127, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_8_107);
              {
                GoalExpr1_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_128, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_128, 2) = ((MR_Box) (Args_124));
                MR_hl_field(3, GoalExpr1_128, 3) = ((MR_Box) (Modes_125));
                MR_hl_field(3, GoalExpr1_128, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_128, 5) = (MR_Box) ((MR_Unsigned) (Det_126));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_128, ExtraGoals_127, GoalInfo0_7, Args0_11, Args_124, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_8_107, &STATE_VARIABLE_ModeInfo_4_75);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_ModeInfo_6_519;
              MR_Word Args_522;
              MR_Word Modes_523;
              MR_Word Det_524;
              MR_Word ExtraGoals_525;
              MR_Word GoalExpr1_526;
              MR_Word Mode1_423;
              MR_Word Unique_428;
              MR_Word LocalSectag_434;
              MR_Word InstMap_364;
              MR_Word Arg1_369;
              MR_Word Mode2_370;
              MR_Word Inst1_373;
              MR_Word ConsId_375;
              MR_Word DuCtor_376;
              MR_Word ConsRepn_377;
              MR_Word Var_387;
              MR_Word Var_388;
              MR_Word Var_389;
              MR_Word Var_390;
              MR_Word Var_391;
              MR_Word ModuleInfo_392;
              MR_Word Arg1Prime_343;
              MR_Word Mode1Prime_345;
              MR_Word Mode2Prime_346;
              MR_Word Var_337;
              MR_Word Var_338;
              MR_Word Var_339;
              MR_Word Var_340;
              MR_Word _Mode1ArgInsts_353;
              MR_Word _Mode2ArgInsts_354;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &InstMap_364);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_343 = ((MR_Word) ((MR_hl_field(1, Args0_11, 0))));
                  Var_337 = ((MR_Word) ((MR_hl_field(1, Args0_11, 1))));
                  succeeded = (Var_337 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_338 = ((MR_Word) ((MR_hl_field(1, Var_337, 1))));
                    succeeded = (Var_338 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_345 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 0))));
                        Var_339 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 1))));
                        succeeded = (Var_339 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_346 = ((MR_Word) ((MR_hl_field(1, Var_339, 0))));
                          Var_340 = ((MR_Word) ((MR_hl_field(1, Var_339, 1))));
                          succeeded = (Var_340 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_369 = Arg1Prime_343;
                  Mode1_423 = Mode1Prime_345;
                  Mode2_370 = Mode2Prime_346;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                succeeded = parse_tree__prog_mode__is_in_mode_2_p_0(Mode1_423, &_Mode1ArgInsts_353);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_mode__is_out_mode_2_p_0(Mode2_370, &_Mode2ArgInsts_354);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_364, Arg1_369, &Inst1_373);
                    succeeded = ((MR_tag((MR_Word) Inst1_373)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_428 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_373, 0))) & (MR_Integer) 7);
                      Var_387 = ((MR_Word) ((MR_hl_field(2, Inst1_373, 2))));
                      succeeded = (Var_387 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_388 = ((MR_Word) ((MR_hl_field(1, Var_387, 0))));
                        Var_390 = ((MR_Word) ((MR_hl_field(1, Var_387, 1))));
                        succeeded = (Var_390 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_375 = ((MR_Word) ((MR_hl_field(0, Var_388, 0))));
                          Var_389 = ((MR_Word) ((MR_hl_field(0, Var_388, 1))));
                          succeeded = (Var_389 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &ModuleInfo_392);
                            succeeded = ((MR_tag((MR_Word) ConsId_375)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              DuCtor_376 = (MR_Word) (MR_body((MR_Word) (ConsId_375), (MR_Integer) 1));
                              succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_392, DuCtor_376, &ConsRepn_377);
                              if (succeeded)
                              {
                                Var_391 = ((MR_Word) ((MR_hl_field(0, ConsRepn_377, 3))));
                                succeeded = ((((MR_tag((MR_Word) Var_391)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_391, 0)))) == (MR_Integer) 2)));
                                if (succeeded)
                                  LocalSectag_434 = ((MR_Word) ((MR_hl_field(3, Var_391, 2))));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Unsigned PrimSec_402 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_434, 1))));
                MR_Integer SectagWholeWord_404;
                MR_Word SectagConsId_405;
                MR_Word BoundFunctor_406;
                MR_Word BoundInst_407;
                MR_Word NewMode2_408;
                MR_Word Var_409;
                MR_Word Var_412;
                MR_Word Var_415;

                SectagWholeWord_404 = mercury__uint__cast_to_int_1_f_0(PrimSec_402);
                {
                  Var_409 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_409, 0) = ((MR_Box) (SectagWholeWord_404));
                }
                {
                  SectagConsId_405 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_405, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_405, 1) = ((MR_Box) (Var_409));
                }
                {
                  BoundFunctor_406 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_406, 0) = ((MR_Box) (SectagConsId_405));
                  MR_hl_field(0, BoundFunctor_406, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_412 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_412, 0) = ((MR_Box) (BoundFunctor_406));
                  MR_hl_field(1, Var_412, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_407 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_407, 0) = (MR_Box) ((MR_Unsigned) (Unique_428));
                  MR_hl_field(2, BoundInst_407, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_407, 2) = ((MR_Box) (Var_412));
                }
                {
                  NewMode2_408 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_408, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_408, 1) = ((MR_Box) (BoundInst_407));
                }
                {
                  Var_415 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_415, 0) = ((MR_Box) (NewMode2_408));
                  MR_hl_field(1, Var_415, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_523 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_523, 0) = ((MR_Box) (Mode1_423));
                  MR_hl_field(1, Modes_523, 1) = ((MR_Box) (Var_415));
                }
              }
              else
                Modes_523 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_523, Args0_11, &Args_522, &Det_524, &ExtraGoals_525, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_6_519);
              {
                GoalExpr1_526 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_526, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_526, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_526, 2) = ((MR_Box) (Args_522));
                MR_hl_field(3, GoalExpr1_526, 3) = ((MR_Box) (Modes_523));
                MR_hl_field(3, GoalExpr1_526, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_526, 5) = (MR_Box) ((MR_Unsigned) (Det_524));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_526, ExtraGoals_525, GoalInfo0_7, Args0_11, Args_522, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_6_519, &STATE_VARIABLE_ModeInfo_4_75);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_ModeInfo_6_717;
              MR_Word Args_720;
              MR_Word Modes_721;
              MR_Word Det_722;
              MR_Word ExtraGoals_723;
              MR_Word GoalExpr1_724;
              MR_Word Mode1_621;
              MR_Word Unique_626;
              MR_Word LocalSectag_632;
              MR_Word InstMap_562;
              MR_Word Arg1_567;
              MR_Word Mode2_568;
              MR_Word Inst1_571;
              MR_Word ConsId_573;
              MR_Word DuCtor_574;
              MR_Word ConsRepn_575;
              MR_Word Var_585;
              MR_Word Var_586;
              MR_Word Var_587;
              MR_Word Var_588;
              MR_Word Var_589;
              MR_Word ModuleInfo_590;
              MR_Word Arg1Prime_541;
              MR_Word Mode1Prime_543;
              MR_Word Mode2Prime_544;
              MR_Word Var_535;
              MR_Word Var_536;
              MR_Word Var_537;
              MR_Word Var_538;
              MR_Word _Mode1ArgInsts_551;
              MR_Word _Mode2ArgInsts_552;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &InstMap_562);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_541 = ((MR_Word) ((MR_hl_field(1, Args0_11, 0))));
                  Var_535 = ((MR_Word) ((MR_hl_field(1, Args0_11, 1))));
                  succeeded = (Var_535 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_536 = ((MR_Word) ((MR_hl_field(1, Var_535, 1))));
                    succeeded = (Var_536 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_543 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 0))));
                        Var_537 = ((MR_Word) ((MR_hl_field(1, Modes0_12, 1))));
                        succeeded = (Var_537 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_544 = ((MR_Word) ((MR_hl_field(1, Var_537, 0))));
                          Var_538 = ((MR_Word) ((MR_hl_field(1, Var_537, 1))));
                          succeeded = (Var_538 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_567 = Arg1Prime_541;
                  Mode1_621 = Mode1Prime_543;
                  Mode2_568 = Mode2Prime_544;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                succeeded = parse_tree__prog_mode__is_in_mode_2_p_0(Mode1_621, &_Mode1ArgInsts_551);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_mode__is_out_mode_2_p_0(Mode2_568, &_Mode2ArgInsts_552);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_562, Arg1_567, &Inst1_571);
                    succeeded = ((MR_tag((MR_Word) Inst1_571)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_626 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_571, 0))) & (MR_Integer) 7);
                      Var_585 = ((MR_Word) ((MR_hl_field(2, Inst1_571, 2))));
                      succeeded = (Var_585 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_586 = ((MR_Word) ((MR_hl_field(1, Var_585, 0))));
                        Var_588 = ((MR_Word) ((MR_hl_field(1, Var_585, 1))));
                        succeeded = (Var_588 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_573 = ((MR_Word) ((MR_hl_field(0, Var_586, 0))));
                          Var_587 = ((MR_Word) ((MR_hl_field(0, Var_586, 1))));
                          succeeded = (Var_587 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_72, &ModuleInfo_590);
                            succeeded = ((MR_tag((MR_Word) ConsId_573)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              DuCtor_574 = (MR_Word) (MR_body((MR_Word) (ConsId_573), (MR_Integer) 1));
                              succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_590, DuCtor_574, &ConsRepn_575);
                              if (succeeded)
                              {
                                Var_589 = ((MR_Word) ((MR_hl_field(0, ConsRepn_575, 3))));
                                succeeded = ((((MR_tag((MR_Word) Var_589)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_589, 0)))) == (MR_Integer) 2)));
                                if (succeeded)
                                  LocalSectag_632 = ((MR_Word) ((MR_hl_field(3, Var_589, 2))));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Unsigned PrimSec_600 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_632, 1))));
                MR_Integer SectagWholeWord_602;
                MR_Word SectagConsId_603;
                MR_Word BoundFunctor_604;
                MR_Word BoundInst_605;
                MR_Word NewMode2_606;
                MR_Word Var_607;
                MR_Word Var_610;
                MR_Word Var_613;

                SectagWholeWord_602 = mercury__uint__cast_to_int_1_f_0(PrimSec_600);
                {
                  Var_607 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_607, 0) = ((MR_Box) (SectagWholeWord_602));
                }
                {
                  SectagConsId_603 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_603, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_603, 1) = ((MR_Box) (Var_607));
                }
                {
                  BoundFunctor_604 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_604, 0) = ((MR_Box) (SectagConsId_603));
                  MR_hl_field(0, BoundFunctor_604, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_610 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_610, 0) = ((MR_Box) (BoundFunctor_604));
                  MR_hl_field(1, Var_610, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_605 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_605, 0) = (MR_Box) ((MR_Unsigned) (Unique_626));
                  MR_hl_field(2, BoundInst_605, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_605, 2) = ((MR_Box) (Var_610));
                }
                {
                  NewMode2_606 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_606, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_606, 1) = ((MR_Box) (BoundInst_605));
                }
                {
                  Var_613 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_613, 0) = ((MR_Box) (NewMode2_606));
                  MR_hl_field(1, Var_613, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_721 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_721, 0) = ((MR_Box) (Mode1_621));
                  MR_hl_field(1, Modes_721, 1) = ((MR_Box) (Var_613));
                }
              }
              else
                Modes_721 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_721, Args0_11, &Args_720, &Det_722, &ExtraGoals_723, STATE_VARIABLE_ModeInfo_2_72, &STATE_VARIABLE_ModeInfo_6_717);
              {
                GoalExpr1_724 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_724, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_724, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_724, 2) = ((MR_Box) (Args_720));
                MR_hl_field(3, GoalExpr1_724, 3) = ((MR_Box) (Modes_721));
                MR_hl_field(3, GoalExpr1_724, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_724, 5) = (MR_Box) ((MR_Unsigned) (Det_722));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_724, ExtraGoals_723, GoalInfo0_7, Args0_11, Args_720, InstMap0_16, GoalExpr_8, STATE_VARIABLE_ModeInfo_6_717, &STATE_VARIABLE_ModeInfo_4_75);
            }
            break;
        }
      }
      break;
  }
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_4_75, &STATE_VARIABLE_ModeInfo_10_110);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "generic_call", GoalInfo0_7, STATE_VARIABLE_ModeInfo_10_110, STATE_VARIABLE_ModeInfo_67);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word * STATE_VARIABLE_ModeInfo_27)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 0))));
  MR_Integer ProcId0_11 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, 1))));
  MR_Word ArgVars0_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 2))));
  MR_Word MaybeCallUnifyContext_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 4))));
  MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 5))));
  MR_Word CallId_16;
  MR_Word InstMap0_17;
  MR_Integer ProcId_19;
  MR_Word ArgVars_20;
  MR_Word ExtraGoals_21;
  MR_Word ModuleInfo_22;
  MR_Word CallerPredId_23;
  MR_Word Builtin_24;
  MR_Word GoalExpr1_25;
  MR_Word STATE_VARIABLE_ModeInfo_1_30;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_ModeInfo_2_32;
  MR_Word STATE_VARIABLE_ModeInfo_3_33;
  MR_Word STATE_VARIABLE_ModeInfo_4_34;
  MR_Word STATE_VARIABLE_ModeInfo_5_35;

  check_hlds__mode_debug__mode_checkpoint_sn_6_p_0((MR_Integer) 0, (MR_String) "call", PredSymName_15, GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_26, &STATE_VARIABLE_ModeInfo_1_30);
  {
    CallId_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallId_16, 0) = ((MR_Box) (PredId_10));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (CallId_16));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_31, STATE_VARIABLE_ModeInfo_1_30, &STATE_VARIABLE_ModeInfo_2_32);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_32, &InstMap0_17);
  check_hlds__modecheck_call__modecheck_plain_or_foreign_call_10_p_0(PredId_10, (MR_Word) ((MR_Unsigned) 0U), ProcId0_11, &ProcId_19, ArgVars0_12, &ArgVars_20, GoalInfo0_7, &ExtraGoals_21, STATE_VARIABLE_ModeInfo_2_32, &STATE_VARIABLE_ModeInfo_3_33);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_3_33, &ModuleInfo_22);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_3_33, &CallerPredId_23);
  Builtin_24 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_22, CallerPredId_23, PredId_10, ProcId_19);
  {
    GoalExpr1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr1_25, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(2, GoalExpr1_25, 1) = ((MR_Box) (ProcId_19));
    MR_hl_field(2, GoalExpr1_25, 2) = ((MR_Box) (ArgVars_20));
    MR_hl_field(2, GoalExpr1_25, 3) = (MR_Box) ((MR_Unsigned) (Builtin_24));
    MR_hl_field(2, GoalExpr1_25, 4) = ((MR_Box) (MaybeCallUnifyContext_14));
    MR_hl_field(2, GoalExpr1_25, 5) = ((MR_Box) (PredSymName_15));
  }
  check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_25, ExtraGoals_21, GoalInfo0_7, ArgVars0_12, ArgVars_20, InstMap0_17, GoalExpr_8, STATE_VARIABLE_ModeInfo_3_33, &STATE_VARIABLE_ModeInfo_4_34);
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_4_34, &STATE_VARIABLE_ModeInfo_5_35);
  check_hlds__mode_debug__mode_checkpoint_sn_6_p_0((MR_Integer) 1, (MR_String) "call", PredSymName_15, GoalInfo0_7, STATE_VARIABLE_ModeInfo_5_35, STATE_VARIABLE_ModeInfo_27);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word LHS0_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 0))));
  MR_Word RHS0_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 1))));
  MR_Word Unification0_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 3))));
  MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 4))));
  MR_Word STATE_VARIABLE_ModeInfo_1_19;
  MR_Word Var_20;
  MR_Word STATE_VARIABLE_ModeInfo_2_21;
  MR_Word STATE_VARIABLE_ModeInfo_3_22;
  MR_Word STATE_VARIABLE_ModeInfo_4_23;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "unify", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_1_19);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (UnifyContext_14));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_20, STATE_VARIABLE_ModeInfo_1_19, &STATE_VARIABLE_ModeInfo_2_21);
  check_hlds__modecheck_unify__modecheck_unify_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_2_21, &STATE_VARIABLE_ModeInfo_3_22);
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_3_22, &STATE_VARIABLE_ModeInfo_4_23);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "unify", GoalInfo0_7, STATE_VARIABLE_ModeInfo_4_23, STATE_VARIABLE_ModeInfo_16);
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_goal____Compare____construct_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modecheck_goal__init(void)
{
}

void mercury__check_hlds__modecheck_goal__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0);
  MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0);
  MR_register_type_ctor_info(&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0);
}

void mercury__check_hlds__modecheck_goal__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_goal__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_goal.
