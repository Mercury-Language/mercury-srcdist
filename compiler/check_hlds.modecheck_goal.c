/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version rotd-2024-05-02
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



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
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1488__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1486__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1481__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1030__1_2_p_0(
  MR_Word Kind1_43,
  MR_Word HeadVar__2_90);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_49,
  MR_Word * STATE_VARIABLE_ModeInfo_50);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_63,
  MR_Word * STATE_VARIABLE_ModeInfo_64);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28);

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

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[2][7];

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

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[3][6] = {
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[2][7] = {
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
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1488__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_62)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerUOType_34, HeadVar__2_62);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1486__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerDIType_33, HeadVar__2_58);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1481__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, OuterUOType_29);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1030__1_2_p_0(
  MR_Word Kind1_43,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded = (Kind1_43 == HeadVar__2_90);

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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 0))));
  MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 1))));
  MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 2))));
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
    MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);

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
            MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));

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
                switch (((MR_Integer) ((MR_hl_field(3, Reason_43, (MR_Integer) 0))))) {
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
                      MR_Word Var_104 = ((MR_Unsigned) ((MR_hl_field(3, Reason_43, (MR_Integer) 2))) & (MR_Integer) 3);
                      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(3, Reason_43, (MR_Integer) 1))));

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
                              SubGoalExpr0_49 = ((MR_Word) ((MR_hl_field(0, SubGoal0_44, (MR_Integer) 0))));
                              SubGoalInfo0_50 = ((MR_Word) ((MR_hl_field(0, SubGoal0_44, (MR_Integer) 1))));
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
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, ArmInstMap0_7, (MR_Integer) 0))));
  MR_Word InstMap0_10 = ((MR_Word) ((MR_hl_field(0, ArmInstMap0_7, (MR_Integer) 1))));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__modecheck_goal__modecheck_goal_generic_call_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word PredId_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Integer ProcId0_62 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Args0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 4))));
            MR_Word ExtraArgs_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 6))));
            MR_Word PragmaCode_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 7))));
            MR_Word InstMap0_67;
            MR_Word ArgVars0_69;
            MR_Integer ProcId_70;
            MR_Word ArgVars_71;
            MR_Word ExtraGoals_72;
            MR_Word Pragma_73;
            MR_Word STATE_VARIABLE_ModeInfo_28_76;
            MR_Word Var_77;
            MR_Word STATE_VARIABLE_ModeInfo_30_78;
            MR_Word Var_79;
            MR_Word STATE_VARIABLE_ModeInfo_33_81;
            MR_Word STATE_VARIABLE_ModeInfo_34_82;
            MR_Word STATE_VARIABLE_ModeInfo_35_83;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_28_76);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_28_76, &InstMap0_67);
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (PredId_61));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_79));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_77, STATE_VARIABLE_ModeInfo_28_76, &STATE_VARIABLE_ModeInfo_30_78);
            ArgVars0_69 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_2[2]), Args0_63);
            check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_61, (MR_Word) ((MR_Unsigned) 0U), ProcId0_62, &ProcId_70, ArgVars0_69, &ArgVars_71, GoalInfo0_7, &ExtraGoals_72, STATE_VARIABLE_ModeInfo_30_78, &STATE_VARIABLE_ModeInfo_33_81);
            {
              Pragma_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Pragma_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Pragma_73, 1) = ((MR_Box) (Attributes_60));
              MR_hl_field(3, Pragma_73, 2) = ((MR_Box) (PredId_61));
              MR_hl_field(3, Pragma_73, 3) = ((MR_Box) (ProcId_70));
              MR_hl_field(3, Pragma_73, 4) = ((MR_Box) (Args0_63));
              MR_hl_field(3, Pragma_73, 5) = ((MR_Box) (ExtraArgs_64));
              MR_hl_field(3, Pragma_73, 6) = ((MR_Box) (MaybeTraceRuntimeCond_65));
              MR_hl_field(3, Pragma_73, 7) = ((MR_Box) (PragmaCode_66));
            }
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(Pragma_73, ExtraGoals_72, GoalInfo0_7, ArgVars0_69, ArgVars_71, InstMap0_67, GoalExpr_8, STATE_VARIABLE_ModeInfo_33_81, &STATE_VARIABLE_ModeInfo_34_82);
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_34_82, &STATE_VARIABLE_ModeInfo_35_83);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_35_83, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));

            switch (ConjType_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Goal_92;
                  MR_Word STATE_VARIABLE_ModeInfo_31_104;
                  MR_Word STATE_VARIABLE_ModeInfo_32_105;
                  MR_Word Goals_109;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "par_conj", STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_31_104);
                  check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_33, Goals_34, &Goals_109, STATE_VARIABLE_ModeInfo_31_104, &STATE_VARIABLE_ModeInfo_32_105);
                  hlds__hlds_goal__par_conj_list_to_goal_3_p_0(Goals_109, GoalInfo0_7, &Goal_92);
                  *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_92, (MR_Integer) 0))));
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "par_conj", STATE_VARIABLE_ModeInfo_32_105, STATE_VARIABLE_ModeInfo_46);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_21_95;
                  MR_Word STATE_VARIABLE_ModeInfo_24_98;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_21_95);
                  if ((Goals_34 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *GoalExpr_8 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                    STATE_VARIABLE_ModeInfo_24_98 = STATE_VARIABLE_ModeInfo_21_95;
                  }
                  else
                  {
                    MR_Word Goals_90;
                    MR_Word Var_99;

                    check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_33, Goals_34, &Goals_90, STATE_VARIABLE_ModeInfo_21_95, &STATE_VARIABLE_ModeInfo_24_98);
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_90, GoalInfo0_7, &Var_99);
                    *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 0))));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", STATE_VARIABLE_ModeInfo_24_98, STATE_VARIABLE_ModeInfo_46);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));

            check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(Goals_58, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 4:
          check_hlds__modecheck_goal__modecheck_goal_switch_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word SubGoal0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));

            check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(Reason_43, SubGoal0_59, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          }
          break;
        case (MR_Integer) 6:
          check_hlds__modecheck_goal__modecheck_goal_if_then_else_5_p_0(GoalExpr0_6, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));

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
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word InstMap0_19;
    MR_Word STATE_VARIABLE_ModeInfo_22_22;
    MR_Word STATE_VARIABLE_ModeInfo_23_23;
    MR_Word STATE_VARIABLE_ModeInfo_24_24;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &InstMap0_19);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_23_23);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_23_23, &InstMap_16);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_ModeInfo_23_23, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeErrorMap0_1, Goals0_13, &Goals_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_24_24, STATE_VARIABLE_ModeInfo_6);
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

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1488__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1486__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1481__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
        MR_Word Outer_11 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 1))));
        MR_Word Inner_12 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 2))));
        MR_Word MaybeOutputVars_13 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 3))));
        MR_Word MainGoal0_14 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 4))));
        MR_Word OrElseGoals0_15 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 5))));
        MR_Word OrElseInners_16 = ((MR_Word) ((MR_hl_field(1, ShortHand0_6, (MR_Integer) 6))));
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
        MR_Word STATE_VARIABLE_ModeInfo_46_46;
        MR_Word STATE_VARIABLE_ModeInfo_47_47;
        MR_Word STATE_VARIABLE_ModeInfo_49_49;
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
        MR_Word STATE_VARIABLE_ModeInfo_22_101;
        MR_Word STATE_VARIABLE_ModeInfo_23_102;
        MR_Word STATE_VARIABLE_ModeInfo_24_103;
        MR_Box conv0_MainGoal_23;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic", STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_46_46);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_46_46, &MultiModeErrorMap0_17);
        {
          AtomicGoalList0_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AtomicGoalList0_18, 0) = ((MR_Box) (MainGoal0_14));
          MR_hl_field(1, AtomicGoalList0_18, 1) = ((MR_Box) (OrElseGoals0_15));
        }
        NonLocals_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        Goal0_92 = ((MR_Word) ((MR_hl_field(1, AtomicGoalList0_18, (MR_Integer) 0))));
        Goals0_93 = ((MR_Word) ((MR_hl_field(1, AtomicGoalList0_18, (MR_Integer) 1))));
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_17, STATE_VARIABLE_ModeInfo_46_46, &STATE_VARIABLE_ModeInfo_22_101);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_101, &InstMap0_98);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_92, &Goal_94, STATE_VARIABLE_ModeInfo_22_101, &STATE_VARIABLE_ModeInfo_23_102);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_23_102, &InstMap_96);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_98, STATE_VARIABLE_ModeInfo_23_102, &STATE_VARIABLE_ModeInfo_24_103);
        check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeErrorMap0_17, Goals0_93, &Goals_95, &InstMaps_97, STATE_VARIABLE_ModeInfo_24_103, &STATE_VARIABLE_ModeInfo_47_47);
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
        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_47_47, &VarTable_22);
        conv0_MainGoal_23 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AtomicGoalList_20);
        MainGoal_23 = ((MR_Word) (conv0_MainGoal_23));
        OrElseGoals_24 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AtomicGoalList_20);
        hlds__instmap__make_arm_instmaps_for_goals_3_p_0(AtomicGoalList_20, InstMapList_21, &ArmInstMaps_25);
        hlds__instmap__instmap_merge_5_p_0(NonLocals_19, ArmInstMaps_25, (MR_Integer) 2, STATE_VARIABLE_ModeInfo_47_47, &STATE_VARIABLE_ModeInfo_49_49);
        OuterDI_26 = ((MR_Word) ((MR_hl_field(0, Outer_11, (MR_Integer) 0))));
        OuterUO_27 = ((MR_Word) ((MR_hl_field(0, Outer_11, (MR_Integer) 1))));
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
        InnerDI_31 = ((MR_Word) ((MR_hl_field(0, Inner_12, (MR_Integer) 0))));
        InnerUO_32 = ((MR_Word) ((MR_hl_field(0, Inner_12, (MR_Integer) 1))));
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
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic", STATE_VARIABLE_ModeInfo_49_49, STATE_VARIABLE_ModeInfo_43);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_36 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, (MR_Integer) 0))));
        MR_Word ResultVar_37 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, (MR_Integer) 1))));
        MR_Word SubGoal0_38 = ((MR_Word) ((MR_hl_field(2, ShortHand0_6, (MR_Integer) 2))));
        MR_Word SubGoal_39;
        MR_Word STATE_VARIABLE_ModeInfo_68_68;
        MR_Word STATE_VARIABLE_ModeInfo_69_69;
        MR_Word STATE_VARIABLE_ModeInfo_70_70;
        MR_Word MultiModeErrorMap0_76;
        MR_Word ShortHand_77;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_68_68);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_68_68, &MultiModeErrorMap0_76);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_38, &SubGoal_39, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_69_69);
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_76, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
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
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_43);
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
    MR_Word STATE_VARIABLE_ModeInfo_43_43;
    MR_Word STATE_VARIABLE_ModeInfo_44_44;
    MR_Word Var_48;
    MR_Word SubGoal_53;
    MR_Word SubGoalConjuncts0_24;
    MR_Word SubGoalInfo0_49;
    MR_Word SubGoalExpr0_23;
    MR_Word Var_34;

    succeeded = (TermVarInst_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalExpr0_23 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, (MR_Integer) 0))));
      SubGoalInfo0_49 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_34 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_23, (MR_Integer) 1))) & (MR_Integer) 1);
        SubGoalConjuncts0_24 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_23, (MR_Integer) 2))));
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
      hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[4])), (MR_Integer) 0, SubGoal1_22, &SubGoal2_27);
    else
      SubGoal2_27 = SubGoal1_22;
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_28, &STATE_VARIABLE_ModeInfo_43_43);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_27, &SubGoal_53, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_44_44);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_44_44, STATE_VARIABLE_ModeInfo_29);
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
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, MaybeGroundTermMode_14, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_98)) == (MR_Integer) 0))
    {
      MR_Word RevConj0_15 = ((MR_Word) ((MR_hl_field(0, Var_98, (MR_Integer) 0))));
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
            MR_Word SubGoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, (MR_Integer) 1))));
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
      MR_Word STATE_VARIABLE_ModeInfo_43_75;
      MR_Word STATE_VARIABLE_ModeInfo_44_76;
      MR_Word Var_79;
      MR_Word SubGoal_80;

      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 1);
      if (succeeded)
        hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) (MR_mkword(1, &check_hlds__modecheck_goal_scalar_common_1[4])), (MR_Integer) 0, SubGoal0_8, &SubGoal2_67);
      else
        SubGoal2_67 = SubGoal0_8;
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_28, &STATE_VARIABLE_ModeInfo_43_75);
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_67, &SubGoal_80, STATE_VARIABLE_ModeInfo_43_75, &STATE_VARIABLE_ModeInfo_44_76);
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_44_76, STATE_VARIABLE_ModeInfo_29);
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
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__1030__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_49,
  MR_Word * STATE_VARIABLE_ModeInfo_50)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Reason_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_ModeInfo_71_140;
        MR_Word STATE_VARIABLE_ModeInfo_72_141;
        MR_Word SubGoal_144;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_140);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_144, STATE_VARIABLE_ModeInfo_71_140, &STATE_VARIABLE_ModeInfo_72_141);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_144));
        }
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_141, STATE_VARIABLE_ModeInfo_50);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ModeInfo_71_133;
        MR_Word STATE_VARIABLE_ModeInfo_72_134;
        MR_Word SubGoal_137;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_133);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_137, STATE_VARIABLE_ModeInfo_71_133, &STATE_VARIABLE_ModeInfo_72_134);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_137));
        }
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_134, STATE_VARIABLE_ModeInfo_50);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_ModeInfo_71_154;
        MR_Word STATE_VARIABLE_ModeInfo_72_155;
        MR_Word SubGoal_158;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_154);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_158, STATE_VARIABLE_ModeInfo_71_154, &STATE_VARIABLE_ModeInfo_72_155);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_158));
        }
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_155, STATE_VARIABLE_ModeInfo_50);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InPPScope_48;
            MR_Word STATE_VARIABLE_ModeInfo_99_99;
            MR_Word STATE_VARIABLE_ModeInfo_102_102;
            MR_Word STATE_VARIABLE_ModeInfo_103_103;
            MR_Word STATE_VARIABLE_ModeInfo_106_106;
            MR_Word SubGoal_122;

            check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &InPPScope_48);
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_99_99);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "promise_purity scope", STATE_VARIABLE_ModeInfo_99_99, &STATE_VARIABLE_ModeInfo_102_102);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_122, STATE_VARIABLE_ModeInfo_102_102, &STATE_VARIABLE_ModeInfo_103_103);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_122));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "promise_purity scope", STATE_VARIABLE_ModeInfo_103_103, &STATE_VARIABLE_ModeInfo_106_106);
            check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(InPPScope_48, STATE_VARIABLE_ModeInfo_106_106, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_ModeInfo_71_168;
            MR_Word STATE_VARIABLE_ModeInfo_72_169;
            MR_Word SubGoal_172;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_168);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_172, STATE_VARIABLE_ModeInfo_71_168, &STATE_VARIABLE_ModeInfo_72_169);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_172));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_169, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_ModeInfo_71_161;
            MR_Word STATE_VARIABLE_ModeInfo_72_162;
            MR_Word SubGoal_165;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_161);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_165, STATE_VARIABLE_ModeInfo_71_161, &STATE_VARIABLE_ModeInfo_72_162);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_165));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_162, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_ModeInfo_71_175;
            MR_Word STATE_VARIABLE_ModeInfo_72_176;
            MR_Word SubGoal_179;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_175);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_179, STATE_VARIABLE_ModeInfo_71_175, &STATE_VARIABLE_ModeInfo_72_176);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_179));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_176, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_ModeInfo_71_126;
            MR_Word STATE_VARIABLE_ModeInfo_72_127;
            MR_Word SubGoal_130;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_126);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_130, STATE_VARIABLE_ModeInfo_71_126, &STATE_VARIABLE_ModeInfo_72_127);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_130));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_127, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_ModeInfo_71_71;
            MR_Word STATE_VARIABLE_ModeInfo_72_72;
            MR_Word SubGoal_108;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_71);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_108, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_72_72);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_108));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_72, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TermVar_37 = ((MR_Word) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
            MR_Word OldKind_38 = ((MR_Unsigned) ((MR_hl_field(3, Reason_7, (MR_Integer) 2))) & (MR_Integer) 3);

            switch (OldKind_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word IsLive_39;

                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_49, TermVar_37, &IsLive_39);
                  switch (IsLive_39) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        *GoalExpr_10 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                        *STATE_VARIABLE_ModeInfo_50 = STATE_VARIABLE_ModeInfo_0_49;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word InstMapDelta0_40;
                        MR_Word TermVarInst_41;
                        MR_Word InstMap0_109;
                        MR_Word InstMap_110;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_10 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
                          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal0_8));
                        }
                        InstMapDelta0_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_9);
                        hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta0_40, TermVar_37, &TermVarInst_41);
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &InstMap0_109);
                        hlds__instmap__instmap_set_var_4_p_0(TermVar_37, TermVarInst_41, InstMap0_109, &InstMap_110);
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_110, STATE_VARIABLE_ModeInfo_0_49, STATE_VARIABLE_ModeInfo_50);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
              case (MR_Integer) 3:
                {
                  MR_Word MaybeKind1AndSubGoal1_42;
                  MR_Word STATE_VARIABLE_ModeInfo_81_81;
                  MR_Word STATE_VARIABLE_ModeInfo_82_82;
                  MR_Word STATE_VARIABLE_ModeInfo_85_85;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_81_81);
                  check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(TermVar_37, SubGoal0_8, GoalInfo0_9, &MaybeKind1AndSubGoal1_42, STATE_VARIABLE_ModeInfo_81_81, &STATE_VARIABLE_ModeInfo_82_82);
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term scope", STATE_VARIABLE_ModeInfo_82_82, &STATE_VARIABLE_ModeInfo_85_85);
                  if ((MaybeKind1AndSubGoal1_42 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *GoalExpr_10 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_goal_scalar_common_2[1]));
                    *STATE_VARIABLE_ModeInfo_50 = STATE_VARIABLE_ModeInfo_85_85;
                  }
                  else
                  {
                    MR_Word Kind1_43;
                    MR_Word SubGoal1_44;
                    MR_Word MakeGroundTermsUnique_45;
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, MaybeKind1AndSubGoal1_42, (MR_Integer) 0))));
                    MR_Word Var_87;
                    MR_Word STATE_VARIABLE_ModeInfo_92_92;

                    Kind1_43 = ((MR_Word) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
                    SubGoal1_44 = ((MR_Word) ((MR_hl_field(0, Var_86, (MR_Integer) 1))));
                    {
                      Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
                      MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1));
                      MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_87, 3) = ((MR_Box) (Kind1_43));
                      MR_hl_field(0, Var_87, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_not_3_p_0(Var_87, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                    check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_85_85, &STATE_VARIABLE_ModeInfo_92_92);
                    check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(STATE_VARIABLE_ModeInfo_92_92, &MakeGroundTermsUnique_45);
                    switch (MakeGroundTermsUnique_45) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word UpdatedReason1_46;

                          {
                            UpdatedReason1_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, UpdatedReason1_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, UpdatedReason1_46, 1) = ((MR_Box) (TermVar_37));
                            MR_hl_field(3, UpdatedReason1_46, 2) = (MR_Box) ((MR_Unsigned) (Kind1_43));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_10 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (UpdatedReason1_46));
                            MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal1_44));
                          }
                          *STATE_VARIABLE_ModeInfo_50 = STATE_VARIABLE_ModeInfo_92_92;
                        }
                        break;
                      case (MR_Integer) 0:
                        switch (Kind1_43) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(TermVar_37, SubGoal1_44, GoalInfo0_9, GoalExpr_10, STATE_VARIABLE_ModeInfo_92_92, STATE_VARIABLE_ModeInfo_50);
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word UpdatedReason1_115;

                              {
                                UpdatedReason1_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, UpdatedReason1_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                MR_hl_field(3, UpdatedReason1_115, 1) = ((MR_Box) (TermVar_37));
                                MR_hl_field(3, UpdatedReason1_115, 2) = (MR_Box) ((MR_Unsigned) (Kind1_43));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_10 = base;
                                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(3, base, 1) = ((MR_Box) (UpdatedReason1_115));
                                MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal1_44));
                              }
                              *STATE_VARIABLE_ModeInfo_50 = STATE_VARIABLE_ModeInfo_92_92;
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
            MR_Word InstMap0_17;
            MR_Word NonLocals_18;
            MR_Word SubGoal_19;
            MR_Word STATE_VARIABLE_ModeInfo_53_53;
            MR_Word STATE_VARIABLE_ModeInfo_55_55;
            MR_Word STATE_VARIABLE_ModeInfo_56_56;
            MR_Word STATE_VARIABLE_ModeInfo_58_58;
            MR_Word STATE_VARIABLE_ModeInfo_59_59;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_53_53);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_53_53, &InstMap0_17);
            NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_18, STATE_VARIABLE_ModeInfo_53_53, &STATE_VARIABLE_ModeInfo_55_55);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_19, STATE_VARIABLE_ModeInfo_55_55, &STATE_VARIABLE_ModeInfo_56_56);
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_18, STATE_VARIABLE_ModeInfo_56_56, &STATE_VARIABLE_ModeInfo_58_58);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_58_58, &STATE_VARIABLE_ModeInfo_59_59);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_19));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_59_59, STATE_VARIABLE_ModeInfo_50);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_32 = ((MR_Word) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
            MR_Word LCSVar_33 = ((MR_Word) ((MR_hl_field(3, Reason_7, (MR_Integer) 2))));
            MR_Word InstMap_35;
            MR_Word ModuleInfo_36;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word STATE_VARIABLE_ModeInfo_71_147;
            MR_Word STATE_VARIABLE_ModeInfo_72_148;
            MR_Word SubGoal_151;

            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &InstMap_35);
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &ModuleInfo_36);
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (ModuleInfo_36));
              MR_hl_field(0, Var_63, 4) = ((MR_Box) (InstMap_35));
              MR_hl_field(0, Var_63, 5) = ((MR_Box) (LCVar_32));
            }
            mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control variable is not ground");
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_4[2]));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3));
              MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_66, 3) = ((MR_Box) (ModuleInfo_36));
              MR_hl_field(0, Var_66, 4) = ((MR_Box) (InstMap_35));
              MR_hl_field(0, Var_66, 5) = ((MR_Box) (LCSVar_33));
            }
            mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control slot variable is not ground");
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_71_147);
            check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_151, STATE_VARIABLE_ModeInfo_71_147, &STATE_VARIABLE_ModeInfo_72_148);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_151));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_72_148, STATE_VARIABLE_ModeInfo_50);
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
  MR_Word STATE_VARIABLE_ModeInfo_22_22;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_ModeInfo_24_24;
  MR_Word STATE_VARIABLE_ModeInfo_26_26;
  MR_Word STATE_VARIABLE_ModeInfo_27_27;
  MR_Word STATE_VARIABLE_ModeInfo_28_28;
  MR_Word STATE_VARIABLE_ModeInfo_30_30;
  MR_Word STATE_VARIABLE_ModeInfo_31_31;
  MR_Word STATE_VARIABLE_ModeInfo_34_34;
  MR_Word STATE_VARIABLE_ModeInfo_35_35;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_18, &STATE_VARIABLE_ModeInfo_22_22);
  check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &MultiModeErrorMap0_10);
  NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &InstMap0_12);
  check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &LiveVars0_13);
  Var_23 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]));
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_23, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_24_24);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_26_26);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_6, &SubGoal_14, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_27_27);
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_13, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_28_28);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_30_30);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_12, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_31_31);
  check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_31_31, &InPromisePurityScope_15);
  switch (InPromisePurityScope_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModeInfo_34_34 = STATE_VARIABLE_ModeInfo_31_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NegNonLocals_16;
        MR_Word Unreachable_17;
        MR_Word Var_33;

        NegNonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        hlds__instmap__init_unreachable_1_p_0(&Unreachable_17);
        Var_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NegNonLocals_16);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 1, Var_33, InstMap0_12, Unreachable_17, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_34_34);
      }
      break;
  }
  *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_14));
  check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_10, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_35_35);
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_35_35, STATE_VARIABLE_ModeInfo_19);
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
  MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
  MR_Word Cond0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
  MR_Word Then0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
  MR_Word Else0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_ModeInfo_33_33;
  MR_Word STATE_VARIABLE_ModeInfo_35_35;
  MR_Word STATE_VARIABLE_ModeInfo_36_36;
  MR_Word STATE_VARIABLE_ModeInfo_37_37;
  MR_Word STATE_VARIABLE_ModeInfo_38_38;
  MR_Word STATE_VARIABLE_ModeInfo_40_40;
  MR_Word STATE_VARIABLE_ModeInfo_41_41;
  MR_Word STATE_VARIABLE_ModeInfo_42_42;
  MR_Word STATE_VARIABLE_ModeInfo_43_43;
  MR_Word STATE_VARIABLE_ModeInfo_44_44;
  MR_Word STATE_VARIABLE_ModeInfo_45_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_ModeInfo_53_53;
  MR_Word STATE_VARIABLE_ModeInfo_56_56;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_33_33);
  check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &MultiModeErrorMap0_14);
  NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
  ThenVars_16 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_12);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &InstMap0_17);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_15, STATE_VARIABLE_ModeInfo_33_33, &STATE_VARIABLE_ModeInfo_35_35);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_16, STATE_VARIABLE_ModeInfo_35_35, &STATE_VARIABLE_ModeInfo_36_36);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(Cond0_11, &Cond_18, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_37_37);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_37_37, &InstMapCond_19);
  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_16, STATE_VARIABLE_ModeInfo_37_37, &STATE_VARIABLE_ModeInfo_38_38);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_15, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_40_40);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_19);
  if (succeeded)
  {
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Then0_12, &Then_20, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &InstMapThen_21);
  }
  else
  {
    Then_20 = hlds__make_goal__true_goal_0_f_0();
    InstMapThen_21 = InstMapCond_19;
    STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_40_40;
  }
  check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_14, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_42_42);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_43_43);
  check_hlds__modecheck_goal__modecheck_goal_4_p_0(Else0_13, &Else_22, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_44_44);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_44_44, &InstMapElse_23);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_45_45);
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
  hlds__instmap__instmap_merge_5_p_0(NonLocals_15, ThenElseArgInfos_24, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_53_53);
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
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_53_53, &InstMap_25);
  check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_53_53, &InPromisePurityScope_26);
  switch (InPromisePurityScope_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModeInfo_56_56 = STATE_VARIABLE_ModeInfo_53_53;
      break;
    case (MR_Integer) 1:
      {
        MR_Word CondNonLocals0_27;
        MR_Word CondNonLocals_28;
        MR_Word Var_54;

        CondNonLocals0_27 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond_18);
        Var_54 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondNonLocals0_27, NonLocals_15);
        CondNonLocals_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 0, CondNonLocals_28, InstMap0_17, InstMap_25, STATE_VARIABLE_ModeInfo_53_53, &STATE_VARIABLE_ModeInfo_56_56);
      }
      break;
  }
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_56_56, STATE_VARIABLE_ModeInfo_30);
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
    MR_Word Case0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word STATE_VARIABLE_ModeInfo_41_41;
    MR_Word STATE_VARIABLE_LargeFlatConstructs_42_42;
    MR_Word STATE_VARIABLE_ModeInfo_43_43;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_39_39);
    MainConsId_28 = ((MR_Word) ((MR_hl_field(0, Case0_20, (MR_Integer) 0))));
    OtherConsIds_29 = ((MR_Word) ((MR_hl_field(0, Case0_20, (MR_Integer) 1))));
    Goal0_30 = ((MR_Word) ((MR_hl_field(0, Case0_20, (MR_Integer) 2))));
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &InstMap0_31);
    check_hlds__modecheck_util__modecheck_functors_test_5_p_0(Var_2, MainConsId_28, OtherConsIds_29, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &InstMap1_32);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_32);
    if (succeeded)
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_30, &Goal1_33, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &InstMap_24);
    }
    else
    {
      Goal1_33 = hlds__make_goal__true_goal_0_f_0();
      InstMap_24 = InstMap1_32;
      STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_40_40;
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
      STATE_VARIABLE_LargeFlatConstructs_42_42 = STATE_VARIABLE_LargeFlatConstructs_0_6;
    else
    {
      MR_Word GoalLargeFlatConstructs_44;

      GoalLargeFlatConstructs_44 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_34);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_44, STATE_VARIABLE_LargeFlatConstructs_0_6, &STATE_VARIABLE_LargeFlatConstructs_42_42);
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_31, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_43_43);
    check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeErrorMap0_1, Var_2, Cases0_21, &Cases_23, &InstMaps_25, STATE_VARIABLE_LargeFlatConstructs_42_42, STATE_VARIABLE_LargeFlatConstructs_7, STATE_VARIABLE_ModeInfo_43_43, STATE_VARIABLE_ModeInfo_9);
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

  hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
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

  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Case_6);
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
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
  MR_Word CanFail_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
  MR_Word Cases_13;
  MR_Word STATE_VARIABLE_ModeInfo_27_27;
  MR_Word STATE_VARIABLE_ModeInfo_28_28;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_27_27);
  if ((Cases0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMap_14;

    Cases_13 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__instmap__init_unreachable_1_p_0(&InstMap_14);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_14, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_28_28);
  }
  else
  {
    MR_Word MultiModeErrorMap0_17;
    MR_Word LargeFlatConstructs0_19;
    MR_Word Cases1_20;
    MR_Word InstMaps_21;
    MR_Word LargeFlatConstructs_22;
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word InstMaps_33;
    MR_Word ArmInstMaps_35;

    check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_27_27, &MultiModeErrorMap0_17);
    LargeFlatConstructs0_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeErrorMap0_17, Var_10, Cases0_12, &Cases1_20, &InstMaps_21, LargeFlatConstructs0_19, &LargeFlatConstructs_22, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_29_29);
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
    hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_19, ArmInstMaps_35, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_28_28);
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
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_28_28, STATE_VARIABLE_ModeInfo_24);
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
    MR_Word Disjunct0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Disjunct_22;
    MR_Word Disjuncts_23;
    MR_Word ArmInstMap_24;
    MR_Word ArmInstMaps_25;
    MR_Word InstMap_28;
    MR_Word Context_29;
    MR_Word STATE_VARIABLE_ModeInfo_34_34;
    MR_Word STATE_VARIABLE_ModeInfo_35_35;
    MR_Word STATE_VARIABLE_ModeInfo_36_36;
    MR_Word STATE_VARIABLE_LargeFlatConstructs_37_37;
    MR_Word Var_38;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap0_1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_34_34);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_2, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_35_35);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Disjunct0_20, &Disjunct_22, STATE_VARIABLE_ModeInfo_35_35, &STATE_VARIABLE_ModeInfo_36_36);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LargeFlatConstructs_0_6);
    if (succeeded)
      STATE_VARIABLE_LargeFlatConstructs_37_37 = STATE_VARIABLE_LargeFlatConstructs_0_6;
    else
    {
      MR_Word GoalLargeFlatConstructs_40;

      GoalLargeFlatConstructs_40 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Disjunct_22);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_40, STATE_VARIABLE_LargeFlatConstructs_0_6, &STATE_VARIABLE_LargeFlatConstructs_37_37);
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_36_36, &InstMap_28);
    Var_38 = ((MR_Word) ((MR_hl_field(0, Disjunct_22, (MR_Integer) 1))));
    Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_38);
    {
      ArmInstMap_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArmInstMap_24, 0) = ((MR_Box) (Context_29));
      MR_hl_field(0, ArmInstMap_24, 1) = ((MR_Box) (InstMap_28));
    }
    check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(MultiModeErrorMap0_1, InstMap0_2, Disjuncts0_21, &Disjuncts_23, &ArmInstMaps_25, STATE_VARIABLE_LargeFlatConstructs_37_37, STATE_VARIABLE_LargeFlatConstructs_7, STATE_VARIABLE_ModeInfo_36_36, STATE_VARIABLE_ModeInfo_9);
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

  check_hlds__modecheck_goal__arm_instmap_set_vars_same_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ArmInstMap_8);
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

  check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
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
  MR_Word STATE_VARIABLE_ModeInfo_27_27;
  MR_Word STATE_VARIABLE_ModeInfo_28_28;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_27_27);
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
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_10, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_28_28);
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
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;
    MR_Word Var_32;
    MR_Word ArmInstMaps_35;

    check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_27_27, &MultiModeErrorMap0_13);
    LargeFlatConstructs0_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_27_27, &InstMap0_16);
    check_hlds__modecheck_goal__modecheck_disjuncts_9_p_0(MultiModeErrorMap0_13, InstMap0_16, Disjuncts0_6, &Disjuncts1_17, &ArmInstMaps_18, LargeFlatConstructs0_15, &LargeFlatConstructs_19, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_29_29);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
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
    hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_15, ArmInstMaps_35, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_28_28);
    hlds__goal_util__flatten_disj_2_p_0(Disjuncts2_20, &Disjuncts_21);
    hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_21, GoalInfo0_7, &Var_32);
    *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
  }
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_28_28, STATE_VARIABLE_ModeInfo_24);
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word Context_10;
  MR_Word STATE_VARIABLE_ModeInfo_14_14;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_10);
  if (succeeded)
    STATE_VARIABLE_ModeInfo_14_14 = STATE_VARIABLE_ModeInfo_0_12;
  else
    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_14_14);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 16);
  if (succeeded)
  {
    MR_Word InDuplForSwitch_11;
    MR_Word STATE_VARIABLE_ModeInfo_17_17;
    MR_Word STATE_VARIABLE_ModeInfo_18_18;
    MR_Word InstMap0_19;
    MR_Word GoalExpr_20;
    MR_Word GoalInfo_21;
    MR_Word STATE_VARIABLE_ModeInfo_15_22;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InDuplForSwitch_11);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_17_17);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &InstMap0_19);
    check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_20, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_15_22);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_19, GoalExpr_20, GoalInfo0_9, &GoalInfo_21, STATE_VARIABLE_ModeInfo_15_22, &STATE_VARIABLE_ModeInfo_18_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
    }
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_13);
  }
  else
  {
    MR_Word InstMap0_23;
    MR_Word GoalExpr_24;
    MR_Word GoalInfo_25;
    MR_Word STATE_VARIABLE_ModeInfo_15_26;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InstMap0_23);
    check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_24, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_15_26);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_23, GoalExpr_24, GoalInfo0_9, &GoalInfo_25, STATE_VARIABLE_ModeInfo_15_26, STATE_VARIABLE_ModeInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_25));
    }
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
  MR_Word STATE_VARIABLE_SubGoalInfo_27_27;
  MR_Word STATE_VARIABLE_SubGoalInfo_29_29;
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
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_17, STATE_VARIABLE_SubGoalInfo_0_21, &STATE_VARIABLE_SubGoalInfo_27_27);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_SubGoalInfo_27_27, &STATE_VARIABLE_SubGoalInfo_29_29);
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
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_SubGoalInfo_29_29));
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_LocalVarMap_52_52;
    MR_Word LHSVar_15;
    MR_Word RHS_16;
    MR_Word UnifyContext_19;
    MR_Word ConsId_20;
    MR_Word RHSVars_21;
    MR_Word Var_37;

    succeeded = ((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      LHSVar_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 0))));
      RHS_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 1))));
      UnifyContext_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_13, (MR_Integer) 4))));
      succeeded = ((MR_tag((MR_Word) RHS_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        ConsId_20 = ((MR_Word) ((MR_hl_field(1, RHS_16, (MR_Integer) 0))));
        Var_37 = ((MR_Unsigned) ((MR_hl_field(1, RHS_16, (MR_Integer) 1))) & (MR_Integer) 1);
        RHSVars_21 = ((MR_Word) ((MR_hl_field(1, RHS_16, (MR_Integer) 2))));
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
      MR_Word STATE_VARIABLE_LocalVarMap_38_38;
      MR_Word Var_41;
      MR_Word Var_48;
      MR_Word Var_49;

      check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(RHSVars_21, &ArgInsts_22, &ArgModes_23, STATE_VARIABLE_LocalVarMap_0_3, &STATE_VARIABLE_LocalVarMap_38_38);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), ((MR_Box) (LHSVar_15)), ((MR_Box) (LHSVarInfo_34)), STATE_VARIABLE_LocalVarMap_38_38, &STATE_VARIABLE_LocalVarMap_52_52);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/4", (MR_String) "not rhs_functor unify");
        return;
      }
    check_hlds__modecheck_goal__modecheck_ground_term_construct_goal_loop_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_LocalVarMap_52_52, STATE_VARIABLE_LocalVarMap_4);
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
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarInst_11;
    MR_Word VarInsts_12;
    MR_Word ArgMode_13;
    MR_Word ArgModes_14;
    MR_Word VarInfo_16;
    MR_Word STATE_VARIABLE_LocalVarMap_19_19;
    MR_Box conv0_VarInfo_16;

    mercury__map__det_remove_4_p_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0), ((MR_Box) (Var_9)), &conv0_VarInfo_16, STATE_VARIABLE_LocalVarMap_0_4, &STATE_VARIABLE_LocalVarMap_19_19);
    VarInfo_16 = ((MR_Word) (conv0_VarInfo_16));
    VarInst_11 = (MR_Word) (VarInfo_16);
    {
      ArgMode_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgMode_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ArgMode_13, 1) = ((MR_Box) (VarInst_11));
      MR_hl_field(0, ArgMode_13, 2) = ((MR_Box) (VarInst_11));
      MR_hl_field(0, ArgMode_13, 3) = ((MR_Box) (VarInst_11));
    }
    check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(Vars_10, &VarInsts_12, &ArgModes_14, STATE_VARIABLE_LocalVarMap_19_19, STATE_VARIABLE_LocalVarMap_5);
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
  MR_Word SubGoalExpr_9 = ((MR_Word) ((MR_hl_field(0, SubGoal_5, (MR_Integer) 0))));
  MR_Word SubGoalInfo_10 = ((MR_Word) ((MR_hl_field(0, SubGoal_5, (MR_Integer) 1))));
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
        succeeded = ((((MR_tag((MR_Word) SubGoalExpr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_21 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_22 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_9, (MR_Integer) 2))));
          succeeded = (Var_21 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UnifyTermGoal_12 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(0, UnifyTermGoal_12, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_34 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
                TypeInfo_36_36 = (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (TermVar_6)), ((MR_Box) (Var_34)));
                if (succeeded)
                {
                  Goal_37 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
                  Goals_38 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 1))));
                  GoalExpr_39 = ((MR_Word) ((MR_hl_field(0, Goal_37, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) GoalExpr_39)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RHS_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr_39, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) RHS_42)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(1, RHS_42, (MR_Integer) 1))) & (MR_Integer) 1);
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
        Var_27 = ((MR_Unsigned) ((MR_hl_field(1, TermVarInst_7, (MR_Integer) 0))) & (MR_Integer) 7);
        Var_28 = ((MR_Word) ((MR_hl_field(1, TermVarInst_7, (MR_Integer) 1))));
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));
      MR_Word RHS_7;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 1);
      if (succeeded)
      {
        RHS_7 = ((MR_Word) ((MR_hl_field(1, GoalExpr_4, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) RHS_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_13 = ((MR_Unsigned) ((MR_hl_field(1, RHS_7, (MR_Integer) 1))) & (MR_Integer) 1);
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
  MR_Word STATE_VARIABLE_ModeInfo_41_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_ModeInfo_49_49;
  MR_Word STATE_VARIABLE_ModeInfo_50_50;
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
  MR_Word STATE_VARIABLE_ModeInfo_26_92;
  MR_Word Var_74;
  MR_Word Var_75;

  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &VarTable0_12);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_12, TermVar_7, &TermVarEntry_13);
  Var_74 = ((MR_Word) ((MR_hl_field(0, TermVarEntry_13, (MR_Integer) 1))));
  Var_75 = ((MR_Unsigned) ((MR_hl_field(0, TermVarEntry_13, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    CloneVarEntry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CloneVarEntry_14, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CloneVarEntry_14, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, CloneVarEntry_14, 2) = (MR_Box) ((MR_Unsigned) (Var_75));
  }
  parse_tree__var_table__add_var_entry_4_p_0(CloneVarEntry_14, &CloneVar_15, VarTable0_12, &VarTable_16);
  check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_16, STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_41_41);
  Rename_17 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), (MR_Word) (&check_hlds__modecheck_goal_scalar_common_1[0]), ((MR_Box) (TermVar_7)), ((MR_Box) (CloneVar_15)));
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Rename_17, SubGoal0_8, &SubGoal_18);
  hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Rename_17, GoalInfo0_9, &ScopeGoalInfo1_19);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &InstMap0_20);
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
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_28, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_49_49);
  Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  TermVarType_30 = ((MR_Word) ((MR_hl_field(0, TermVarEntry_13, (MR_Integer) 1))));
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_49_49, &ModuleInfo0_80);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_49_49, &PredId_81);
  check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_49_49, &ProcId_82);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_80, PredId_81, ProcId_82, &PredInfo0_83, &ProcInfo0_84);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_49_49, &VarTable0_85);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable0_85, ProcInfo0_84, &ProcInfo1_86);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(TermVarType_30, Context_29, &TypeInfoVar_31, &TypeInfoGoals_32, ModuleInfo0_80, &ModuleInfo1_87, PredInfo0_83, &PredInfo_88, ProcInfo1_86, &ProcInfo_89);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_81, ProcId_82, PredInfo_88, ProcInfo_89, ModuleInfo1_87, &ModuleInfo_90);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_89, &VarTable_91);
  check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_91, STATE_VARIABLE_ModeInfo_49_49, &STATE_VARIABLE_ModeInfo_26_92);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_90, STATE_VARIABLE_ModeInfo_26_92, &STATE_VARIABLE_ModeInfo_50_50);
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
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &ModuleInfo_34);
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
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap2_36);
  hlds__instmap__instmap_set_var_4_p_0(TermVar_7, TermVarUniqueInst_27, InstMap2_36, &InstMap_37);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_37, STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_39);
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

      (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      NonLocals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(&env);
      if ((env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
      {
        MR_Word WaitingVars_21;
        MR_Word ModeError_22;

        WaitingVars_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14);
        {
          ModeError_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_22, 0) = ((MR_Box) ((MR_Unsigned) 17U));
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
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
            MR_Word Var_102 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))) & (MR_Integer) 1);

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
            MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

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
                switch (((MR_Integer) ((MR_hl_field(3, Reason_41, (MR_Integer) 0))))) {
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
                      MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(3, Reason_41, (MR_Integer) 2))) & (MR_Integer) 3);
                      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(3, Reason_41, (MR_Integer) 1))));

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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalLargeFlatConstructs_10;
      MR_Word STATE_VARIABLE_LargeFlatConstructs_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2;

      GoalLargeFlatConstructs_10 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLargeFlatConstructs_10, STATE_VARIABLE_LargeFlatConstructs_0_2, &STATE_VARIABLE_LargeFlatConstructs_13_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2 = STATE_VARIABLE_LargeFlatConstructs_13_13;
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
  MR_Word STATE_VARIABLE_ModeInfo_0_63,
  MR_Word * STATE_VARIABLE_ModeInfo_64)
{
  MR_bool succeeded;
  MR_Word GenericCall_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
  MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
  MR_Word Modes0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
  MR_Word InstMap0_15;
  MR_Word GenericCallId_16;
  MR_Word CallId_17;
  MR_Word STATE_VARIABLE_ModeInfo_67_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_ModeInfo_69_69;
  MR_Word STATE_VARIABLE_ModeInfo_72_72;
  MR_Word STATE_VARIABLE_ModeInfo_107_107;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_63, &STATE_VARIABLE_ModeInfo_67_67);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_67_67, &InstMap0_15);
  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_10, &GenericCallId_16);
  {
    CallId_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallId_17, 0) = ((MR_Box) (GenericCallId_16));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (CallId_17));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_68, STATE_VARIABLE_ModeInfo_67_67, &STATE_VARIABLE_ModeInfo_69_69);
  switch (MR_tag((MR_Word) GenericCall_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_18 = ((MR_Word) ((MR_hl_field(0, GenericCall_10, (MR_Integer) 0))));
        MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_10, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Args_22;
        MR_Word Modes_23;
        MR_Word Det_24;
        MR_Word ExtraGoals_25;
        MR_Word GoalExpr1_26;
        MR_Word AllArgs0_27;
        MR_Word AllArgs_28;
        MR_Word STATE_VARIABLE_ModeInfo_70_70;

        check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(PredOrFunc_20, PredVar_18, Args0_11, &Args_22, &Modes_23, &Det_24, &ExtraGoals_25, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
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
          MR_hl_field(1, AllArgs0_27, 0) = ((MR_Box) (PredVar_18));
          MR_hl_field(1, AllArgs0_27, 1) = ((MR_Box) (Args0_11));
        }
        {
          AllArgs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AllArgs_28, 0) = ((MR_Box) (PredVar_18));
          MR_hl_field(1, AllArgs_28, 1) = ((MR_Box) (Args_22));
        }
        check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_26, ExtraGoals_25, GoalInfo0_7, AllArgs0_27, AllArgs_28, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_72_72);
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
        MR_String EventName_33 = ((MR_String) ((MR_hl_field(2, GenericCall_10, (MR_Integer) 0))));
        MR_Word ModuleInfo_34;
        MR_Word EventSet_35;
        MR_Word EventSpecMap_36;
        MR_Word Args_111;
        MR_Word Modes_112;
        MR_Word ModesPrime_37;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_34);
        hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_34, &EventSet_35);
        EventSpecMap_36 = ((MR_Word) ((MR_hl_field(0, EventSet_35, (MR_Integer) 1))));
        succeeded = parse_tree__prog_event__event_arg_modes_3_p_0(EventSpecMap_36, EventName_33, &ModesPrime_37);
        if (succeeded)
          Modes_112 = ModesPrime_37;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "unknown event");
            return;
          }
        check_hlds__modecheck_call__modecheck_event_call_5_p_0(Modes_112, Args0_11, &Args_111, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_72_72);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (GenericCall_10));
          MR_hl_field(3, base, 2) = ((MR_Box) (Args_111));
          MR_hl_field(3, base, 3) = ((MR_Box) (Modes_112));
          MR_hl_field(3, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_135 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_10, (MR_Integer) 0))) & (MR_Integer) 7);

        switch (Var_135) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_ModeInfo_100_100;
              MR_Word Args_115;
              MR_Word Modes_116;
              MR_Word Det_117;
              MR_Word ExtraGoals_118;
              MR_Word GoalExpr1_119;
              MR_Word Mode1_45;
              MR_Word Unique_48;
              MR_Word LocalSectag_53;
              MR_Word InstMap_39;
              MR_Word Arg1_44;
              MR_Word Mode2_46;
              MR_Word Inst1_47;
              MR_Word ConsId_50;
              MR_Word ConsRepn_51;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word ModuleInfo_113;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Arg1Prime_40;
              MR_Word Mode1Prime_42;
              MR_Word Mode2Prime_43;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap_39);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_40 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 0))));
                  Var_81 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 1))));
                  succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_82 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 1))));
                    succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_42 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 0))));
                        Var_83 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 1))));
                        succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_43 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 0))));
                          Var_84 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 1))));
                          succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
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
                Var_133 = parse_tree__prog_mode__in_mode_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode1_45, Var_133);
                if (succeeded)
                {
                  Var_134 = parse_tree__prog_mode__out_mode_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode2_46, Var_134);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_39, Arg1_44, &Inst1_47);
                    succeeded = ((MR_tag((MR_Word) Inst1_47)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_48 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_47, (MR_Integer) 0))) & (MR_Integer) 7);
                      Var_87 = ((MR_Word) ((MR_hl_field(2, Inst1_47, (MR_Integer) 2))));
                      succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_88 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
                        Var_90 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
                        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_50 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
                          Var_89 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 1))));
                          succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_113);
                            succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_113, ConsId_50, &ConsRepn_51);
                            if (succeeded)
                            {
                              Var_91 = ((MR_Word) ((MR_hl_field(0, ConsRepn_51, (MR_Integer) 3))));
                              succeeded = ((((MR_tag((MR_Word) Var_91)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_91, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (succeeded)
                                LocalSectag_53 = ((MR_Word) ((MR_hl_field(3, Var_91, (MR_Integer) 2))));
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
                MR_Unsigned PrimSec_56 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_53, (MR_Integer) 1))));
                MR_Integer SectagWholeWord_58;
                MR_Word SectagConsId_59;
                MR_Word BoundFunctor_60;
                MR_Word BoundInst_61;
                MR_Word NewMode2_62;
                MR_Word Var_92;
                MR_Word Var_95;
                MR_Word Var_98;

                SectagWholeWord_58 = mercury__uint__cast_to_int_1_f_0(PrimSec_56);
                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_92, 0) = ((MR_Box) (SectagWholeWord_58));
                }
                {
                  SectagConsId_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_59, 1) = ((MR_Box) (Var_92));
                }
                {
                  BoundFunctor_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_60, 0) = ((MR_Box) (SectagConsId_59));
                  MR_hl_field(0, BoundFunctor_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_95, 0) = ((MR_Box) (BoundFunctor_60));
                  MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_61, 0) = (MR_Box) ((MR_Unsigned) (Unique_48));
                  MR_hl_field(2, BoundInst_61, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_61, 2) = ((MR_Box) (Var_95));
                }
                {
                  NewMode2_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_62, 1) = ((MR_Box) (BoundInst_61));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (NewMode2_62));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_116, 0) = ((MR_Box) (Mode1_45));
                  MR_hl_field(1, Modes_116, 1) = ((MR_Box) (Var_98));
                }
              }
              else
                Modes_116 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_116, Args0_11, &Args_115, &Det_117, &ExtraGoals_118, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_100_100);
              {
                GoalExpr1_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_119, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_119, 2) = ((MR_Box) (Args_115));
                MR_hl_field(3, GoalExpr1_119, 3) = ((MR_Box) (Modes_116));
                MR_hl_field(3, GoalExpr1_119, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_119, 5) = (MR_Box) ((MR_Unsigned) (Det_117));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_119, ExtraGoals_118, GoalInfo0_7, Args0_11, Args_115, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_100_100, &STATE_VARIABLE_ModeInfo_72_72);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_ModeInfo_100_313;
              MR_Word Args_316;
              MR_Word Modes_317;
              MR_Word Det_318;
              MR_Word ExtraGoals_319;
              MR_Word GoalExpr1_320;
              MR_Word Mode1_221;
              MR_Word Unique_224;
              MR_Word LocalSectag_229;
              MR_Word InstMap_163;
              MR_Word Arg1_168;
              MR_Word Mode2_169;
              MR_Word Inst1_170;
              MR_Word ConsId_172;
              MR_Word ConsRepn_173;
              MR_Word Var_183;
              MR_Word Var_184;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word Var_187;
              MR_Word ModuleInfo_188;
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Arg1Prime_144;
              MR_Word Mode1Prime_146;
              MR_Word Mode2Prime_147;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap_163);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_144 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 0))));
                  Var_138 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 1))));
                  succeeded = (Var_138 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_139 = ((MR_Word) ((MR_hl_field(1, Var_138, (MR_Integer) 1))));
                    succeeded = (Var_139 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_146 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 0))));
                        Var_140 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 1))));
                        succeeded = (Var_140 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_147 = ((MR_Word) ((MR_hl_field(1, Var_140, (MR_Integer) 0))));
                          Var_141 = ((MR_Word) ((MR_hl_field(1, Var_140, (MR_Integer) 1))));
                          succeeded = (Var_141 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_168 = Arg1Prime_144;
                  Mode1_221 = Mode1Prime_146;
                  Mode2_169 = Mode2Prime_147;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                Var_195 = parse_tree__prog_mode__in_mode_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode1_221, Var_195);
                if (succeeded)
                {
                  Var_196 = parse_tree__prog_mode__out_mode_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode2_169, Var_196);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_163, Arg1_168, &Inst1_170);
                    succeeded = ((MR_tag((MR_Word) Inst1_170)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_224 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_170, (MR_Integer) 0))) & (MR_Integer) 7);
                      Var_183 = ((MR_Word) ((MR_hl_field(2, Inst1_170, (MR_Integer) 2))));
                      succeeded = (Var_183 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_184 = ((MR_Word) ((MR_hl_field(1, Var_183, (MR_Integer) 0))));
                        Var_186 = ((MR_Word) ((MR_hl_field(1, Var_183, (MR_Integer) 1))));
                        succeeded = (Var_186 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_172 = ((MR_Word) ((MR_hl_field(0, Var_184, (MR_Integer) 0))));
                          Var_185 = ((MR_Word) ((MR_hl_field(0, Var_184, (MR_Integer) 1))));
                          succeeded = (Var_185 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_188);
                            succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_188, ConsId_172, &ConsRepn_173);
                            if (succeeded)
                            {
                              Var_187 = ((MR_Word) ((MR_hl_field(0, ConsRepn_173, (MR_Integer) 3))));
                              succeeded = ((((MR_tag((MR_Word) Var_187)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_187, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (succeeded)
                                LocalSectag_229 = ((MR_Word) ((MR_hl_field(3, Var_187, (MR_Integer) 2))));
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
                MR_Unsigned PrimSec_200 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_229, (MR_Integer) 1))));
                MR_Integer SectagWholeWord_202;
                MR_Word SectagConsId_203;
                MR_Word BoundFunctor_204;
                MR_Word BoundInst_205;
                MR_Word NewMode2_206;
                MR_Word Var_207;
                MR_Word Var_210;
                MR_Word Var_213;

                SectagWholeWord_202 = mercury__uint__cast_to_int_1_f_0(PrimSec_200);
                {
                  Var_207 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_207, 0) = ((MR_Box) (SectagWholeWord_202));
                }
                {
                  SectagConsId_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_203, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_203, 1) = ((MR_Box) (Var_207));
                }
                {
                  BoundFunctor_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_204, 0) = ((MR_Box) (SectagConsId_203));
                  MR_hl_field(0, BoundFunctor_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_210, 0) = ((MR_Box) (BoundFunctor_204));
                  MR_hl_field(1, Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_205 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_205, 0) = (MR_Box) ((MR_Unsigned) (Unique_224));
                  MR_hl_field(2, BoundInst_205, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_205, 2) = ((MR_Box) (Var_210));
                }
                {
                  NewMode2_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_206, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_206, 1) = ((MR_Box) (BoundInst_205));
                }
                {
                  Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_213, 0) = ((MR_Box) (NewMode2_206));
                  MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_317 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_317, 0) = ((MR_Box) (Mode1_221));
                  MR_hl_field(1, Modes_317, 1) = ((MR_Box) (Var_213));
                }
              }
              else
                Modes_317 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_317, Args0_11, &Args_316, &Det_318, &ExtraGoals_319, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_100_313);
              {
                GoalExpr1_320 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_320, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_320, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_320, 2) = ((MR_Box) (Args_316));
                MR_hl_field(3, GoalExpr1_320, 3) = ((MR_Box) (Modes_317));
                MR_hl_field(3, GoalExpr1_320, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_320, 5) = (MR_Box) ((MR_Unsigned) (Det_318));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_320, ExtraGoals_319, GoalInfo0_7, Args0_11, Args_316, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_100_313, &STATE_VARIABLE_ModeInfo_72_72);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word STATE_VARIABLE_ModeInfo_104_104;
              MR_Word Args_121;
              MR_Word Modes_122;
              MR_Word Det_123;
              MR_Word ExtraGoals_124;
              MR_Word GoalExpr1_125;

              check_hlds__modecheck_coerce__modecheck_coerce_8_p_0(Args0_11, &Args_121, Modes0_12, &Modes_122, &Det_123, &ExtraGoals_124, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_104_104);
              {
                GoalExpr1_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_125, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_125, 2) = ((MR_Box) (Args_121));
                MR_hl_field(3, GoalExpr1_125, 3) = ((MR_Box) (Modes_122));
                MR_hl_field(3, GoalExpr1_125, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_125, 5) = (MR_Box) ((MR_Unsigned) (Det_123));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_125, ExtraGoals_124, GoalInfo0_7, Args0_11, Args_121, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_104_104, &STATE_VARIABLE_ModeInfo_72_72);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_ModeInfo_100_506;
              MR_Word Args_509;
              MR_Word Modes_510;
              MR_Word Det_511;
              MR_Word ExtraGoals_512;
              MR_Word GoalExpr1_513;
              MR_Word Mode1_414;
              MR_Word Unique_417;
              MR_Word LocalSectag_422;
              MR_Word InstMap_356;
              MR_Word Arg1_361;
              MR_Word Mode2_362;
              MR_Word Inst1_363;
              MR_Word ConsId_365;
              MR_Word ConsRepn_366;
              MR_Word Var_376;
              MR_Word Var_377;
              MR_Word Var_378;
              MR_Word Var_379;
              MR_Word Var_380;
              MR_Word ModuleInfo_381;
              MR_Word Var_388;
              MR_Word Var_389;
              MR_Word Arg1Prime_337;
              MR_Word Mode1Prime_339;
              MR_Word Mode2Prime_340;
              MR_Word Var_331;
              MR_Word Var_332;
              MR_Word Var_333;
              MR_Word Var_334;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap_356);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_337 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 0))));
                  Var_331 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 1))));
                  succeeded = (Var_331 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_332 = ((MR_Word) ((MR_hl_field(1, Var_331, (MR_Integer) 1))));
                    succeeded = (Var_332 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_339 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 0))));
                        Var_333 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 1))));
                        succeeded = (Var_333 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_340 = ((MR_Word) ((MR_hl_field(1, Var_333, (MR_Integer) 0))));
                          Var_334 = ((MR_Word) ((MR_hl_field(1, Var_333, (MR_Integer) 1))));
                          succeeded = (Var_334 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_361 = Arg1Prime_337;
                  Mode1_414 = Mode1Prime_339;
                  Mode2_362 = Mode2Prime_340;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                Var_388 = parse_tree__prog_mode__in_mode_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode1_414, Var_388);
                if (succeeded)
                {
                  Var_389 = parse_tree__prog_mode__out_mode_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode2_362, Var_389);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_356, Arg1_361, &Inst1_363);
                    succeeded = ((MR_tag((MR_Word) Inst1_363)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_417 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_363, (MR_Integer) 0))) & (MR_Integer) 7);
                      Var_376 = ((MR_Word) ((MR_hl_field(2, Inst1_363, (MR_Integer) 2))));
                      succeeded = (Var_376 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_377 = ((MR_Word) ((MR_hl_field(1, Var_376, (MR_Integer) 0))));
                        Var_379 = ((MR_Word) ((MR_hl_field(1, Var_376, (MR_Integer) 1))));
                        succeeded = (Var_379 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_365 = ((MR_Word) ((MR_hl_field(0, Var_377, (MR_Integer) 0))));
                          Var_378 = ((MR_Word) ((MR_hl_field(0, Var_377, (MR_Integer) 1))));
                          succeeded = (Var_378 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_381);
                            succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_381, ConsId_365, &ConsRepn_366);
                            if (succeeded)
                            {
                              Var_380 = ((MR_Word) ((MR_hl_field(0, ConsRepn_366, (MR_Integer) 3))));
                              succeeded = ((((MR_tag((MR_Word) Var_380)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_380, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (succeeded)
                                LocalSectag_422 = ((MR_Word) ((MR_hl_field(3, Var_380, (MR_Integer) 2))));
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
                MR_Unsigned PrimSec_393 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_422, (MR_Integer) 1))));
                MR_Integer SectagWholeWord_395;
                MR_Word SectagConsId_396;
                MR_Word BoundFunctor_397;
                MR_Word BoundInst_398;
                MR_Word NewMode2_399;
                MR_Word Var_400;
                MR_Word Var_403;
                MR_Word Var_406;

                SectagWholeWord_395 = mercury__uint__cast_to_int_1_f_0(PrimSec_393);
                {
                  Var_400 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_400, 0) = ((MR_Box) (SectagWholeWord_395));
                }
                {
                  SectagConsId_396 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_396, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_396, 1) = ((MR_Box) (Var_400));
                }
                {
                  BoundFunctor_397 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_397, 0) = ((MR_Box) (SectagConsId_396));
                  MR_hl_field(0, BoundFunctor_397, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_403 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_403, 0) = ((MR_Box) (BoundFunctor_397));
                  MR_hl_field(1, Var_403, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_398 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_398, 0) = (MR_Box) ((MR_Unsigned) (Unique_417));
                  MR_hl_field(2, BoundInst_398, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_398, 2) = ((MR_Box) (Var_403));
                }
                {
                  NewMode2_399 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_399, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_399, 1) = ((MR_Box) (BoundInst_398));
                }
                {
                  Var_406 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_406, 0) = ((MR_Box) (NewMode2_399));
                  MR_hl_field(1, Var_406, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_510 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_510, 0) = ((MR_Box) (Mode1_414));
                  MR_hl_field(1, Modes_510, 1) = ((MR_Box) (Var_406));
                }
              }
              else
                Modes_510 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_510, Args0_11, &Args_509, &Det_511, &ExtraGoals_512, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_100_506);
              {
                GoalExpr1_513 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_513, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_513, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_513, 2) = ((MR_Box) (Args_509));
                MR_hl_field(3, GoalExpr1_513, 3) = ((MR_Box) (Modes_510));
                MR_hl_field(3, GoalExpr1_513, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_513, 5) = (MR_Box) ((MR_Unsigned) (Det_511));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_513, ExtraGoals_512, GoalInfo0_7, Args0_11, Args_509, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_100_506, &STATE_VARIABLE_ModeInfo_72_72);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_ModeInfo_100_699;
              MR_Word Args_702;
              MR_Word Modes_703;
              MR_Word Det_704;
              MR_Word ExtraGoals_705;
              MR_Word GoalExpr1_706;
              MR_Word Mode1_607;
              MR_Word Unique_610;
              MR_Word LocalSectag_615;
              MR_Word InstMap_549;
              MR_Word Arg1_554;
              MR_Word Mode2_555;
              MR_Word Inst1_556;
              MR_Word ConsId_558;
              MR_Word ConsRepn_559;
              MR_Word Var_569;
              MR_Word Var_570;
              MR_Word Var_571;
              MR_Word Var_572;
              MR_Word Var_573;
              MR_Word ModuleInfo_574;
              MR_Word Var_581;
              MR_Word Var_582;
              MR_Word Arg1Prime_530;
              MR_Word Mode1Prime_532;
              MR_Word Mode2Prime_533;
              MR_Word Var_524;
              MR_Word Var_525;
              MR_Word Var_526;
              MR_Word Var_527;

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, (MR_Integer) 13);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap_549);
                succeeded = (Args0_11 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Arg1Prime_530 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 0))));
                  Var_524 = ((MR_Word) ((MR_hl_field(1, Args0_11, (MR_Integer) 1))));
                  succeeded = (Var_524 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_525 = ((MR_Word) ((MR_hl_field(1, Var_524, (MR_Integer) 1))));
                    succeeded = (Var_525 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Modes0_12 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Mode1Prime_532 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 0))));
                        Var_526 = ((MR_Word) ((MR_hl_field(1, Modes0_12, (MR_Integer) 1))));
                        succeeded = (Var_526 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Mode2Prime_533 = ((MR_Word) ((MR_hl_field(1, Var_526, (MR_Integer) 0))));
                          Var_527 = ((MR_Word) ((MR_hl_field(1, Var_526, (MR_Integer) 1))));
                          succeeded = (Var_527 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  Arg1_554 = Arg1Prime_530;
                  Mode1_607 = Mode1Prime_532;
                  Mode2_555 = Mode2Prime_533;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/5", (MR_String) "bad cast");
                    return;
                  }
                Var_581 = parse_tree__prog_mode__in_mode_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode1_607, Var_581);
                if (succeeded)
                {
                  Var_582 = parse_tree__prog_mode__out_mode_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode2_555, Var_582);
                  if (succeeded)
                  {
                    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_549, Arg1_554, &Inst1_556);
                    succeeded = ((MR_tag((MR_Word) Inst1_556)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Unique_610 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_556, (MR_Integer) 0))) & (MR_Integer) 7);
                      Var_569 = ((MR_Word) ((MR_hl_field(2, Inst1_556, (MR_Integer) 2))));
                      succeeded = (Var_569 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_570 = ((MR_Word) ((MR_hl_field(1, Var_569, (MR_Integer) 0))));
                        Var_572 = ((MR_Word) ((MR_hl_field(1, Var_569, (MR_Integer) 1))));
                        succeeded = (Var_572 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConsId_558 = ((MR_Word) ((MR_hl_field(0, Var_570, (MR_Integer) 0))));
                          Var_571 = ((MR_Word) ((MR_hl_field(0, Var_570, (MR_Integer) 1))));
                          succeeded = (Var_571 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_574);
                            succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_574, ConsId_558, &ConsRepn_559);
                            if (succeeded)
                            {
                              Var_573 = ((MR_Word) ((MR_hl_field(0, ConsRepn_559, (MR_Integer) 3))));
                              succeeded = ((((MR_tag((MR_Word) Var_573)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_573, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (succeeded)
                                LocalSectag_615 = ((MR_Word) ((MR_hl_field(3, Var_573, (MR_Integer) 2))));
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
                MR_Unsigned PrimSec_586 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_615, (MR_Integer) 1))));
                MR_Integer SectagWholeWord_588;
                MR_Word SectagConsId_589;
                MR_Word BoundFunctor_590;
                MR_Word BoundInst_591;
                MR_Word NewMode2_592;
                MR_Word Var_593;
                MR_Word Var_596;
                MR_Word Var_599;

                SectagWholeWord_588 = mercury__uint__cast_to_int_1_f_0(PrimSec_586);
                {
                  Var_593 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_593, 0) = ((MR_Box) (SectagWholeWord_588));
                }
                {
                  SectagConsId_589 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SectagConsId_589, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, SectagConsId_589, 1) = ((MR_Box) (Var_593));
                }
                {
                  BoundFunctor_590 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_590, 0) = ((MR_Box) (SectagConsId_589));
                  MR_hl_field(0, BoundFunctor_590, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_596 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_596, 0) = ((MR_Box) (BoundFunctor_590));
                  MR_hl_field(1, Var_596, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BoundInst_591 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, BoundInst_591, 0) = (MR_Box) ((MR_Unsigned) (Unique_610));
                  MR_hl_field(2, BoundInst_591, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, BoundInst_591, 2) = ((MR_Box) (Var_596));
                }
                {
                  NewMode2_592 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewMode2_592, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, NewMode2_592, 1) = ((MR_Box) (BoundInst_591));
                }
                {
                  Var_599 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_599, 0) = ((MR_Box) (NewMode2_592));
                  MR_hl_field(1, Var_599, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Modes_703 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Modes_703, 0) = ((MR_Box) (Mode1_607));
                  MR_hl_field(1, Modes_703, 1) = ((MR_Box) (Var_599));
                }
              }
              else
                Modes_703 = Modes0_12;
              check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_703, Args0_11, &Args_702, &Det_704, &ExtraGoals_705, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_100_699);
              {
                GoalExpr1_706 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr1_706, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_706, 1) = ((MR_Box) (GenericCall_10));
                MR_hl_field(3, GoalExpr1_706, 2) = ((MR_Box) (Args_702));
                MR_hl_field(3, GoalExpr1_706, 3) = ((MR_Box) (Modes_703));
                MR_hl_field(3, GoalExpr1_706, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr1_706, 5) = (MR_Box) ((MR_Unsigned) (Det_704));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_706, ExtraGoals_705, GoalInfo0_7, Args0_11, Args_702, InstMap0_15, GoalExpr_8, STATE_VARIABLE_ModeInfo_100_699, &STATE_VARIABLE_ModeInfo_72_72);
            }
            break;
        }
      }
      break;
  }
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_107_107);
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_107_107, STATE_VARIABLE_ModeInfo_64);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 0))));
  MR_Integer ProcId0_11 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 1))));
  MR_Word ArgVars0_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 2))));
  MR_Word MaybeCallUnifyContext_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 4))));
  MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 5))));
  MR_String PredNameString_16;
  MR_String CallString_17;
  MR_Word InstMap0_18;
  MR_Integer ProcId_20;
  MR_Word ArgVars_21;
  MR_Word ExtraGoals_22;
  MR_Word ModuleInfo_23;
  MR_Word CallerPredId_24;
  MR_Word Builtin_25;
  MR_Word Call_26;
  MR_Word STATE_VARIABLE_ModeInfo_31_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_ModeInfo_33_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_ModeInfo_35_35;
  MR_Word STATE_VARIABLE_ModeInfo_36_36;
  MR_Word STATE_VARIABLE_ModeInfo_37_37;

  PredNameString_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_15);
  CallString_17 = mercury__string__f_43_43_2_f_0((MR_String) "call ", PredNameString_16);
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_17, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_31_31);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (PredId_10));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_34));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_32, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_33_33);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_33_33, &InstMap0_18);
  check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_10, (MR_Word) ((MR_Unsigned) 0U), ProcId0_11, &ProcId_20, ArgVars0_12, &ArgVars_21, GoalInfo0_7, &ExtraGoals_22, STATE_VARIABLE_ModeInfo_33_33, &STATE_VARIABLE_ModeInfo_35_35);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_35_35, &ModuleInfo_23);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_35_35, &CallerPredId_24);
  Builtin_25 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_23, CallerPredId_24, PredId_10, ProcId_20);
  {
    Call_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Call_26, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(2, Call_26, 1) = ((MR_Box) (ProcId_20));
    MR_hl_field(2, Call_26, 2) = ((MR_Box) (ArgVars_21));
    MR_hl_field(2, Call_26, 3) = (MR_Box) ((MR_Unsigned) (Builtin_25));
    MR_hl_field(2, Call_26, 4) = ((MR_Box) (MaybeCallUnifyContext_14));
    MR_hl_field(2, Call_26, 5) = ((MR_Box) (PredSymName_15));
  }
  check_hlds__modecheck_util__handle_extra_goals_9_p_0(Call_26, ExtraGoals_22, GoalInfo0_7, ArgVars0_12, ArgVars_21, InstMap0_18, GoalExpr_8, STATE_VARIABLE_ModeInfo_35_35, &STATE_VARIABLE_ModeInfo_36_36);
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_37_37);
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CallString_17, STATE_VARIABLE_ModeInfo_37_37, STATE_VARIABLE_ModeInfo_28);
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word LHS0_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 0))));
  MR_Word RHS0_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 1))));
  MR_Word Unification0_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 3))));
  MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_ModeInfo_19_19;
  MR_Word Var_20;
  MR_Word STATE_VARIABLE_ModeInfo_21_21;
  MR_Word STATE_VARIABLE_ModeInfo_22_22;
  MR_Word STATE_VARIABLE_ModeInfo_23_23;

  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_19_19);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (UnifyContext_14));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_20, STATE_VARIABLE_ModeInfo_19_19, &STATE_VARIABLE_ModeInfo_21_21);
  check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_21_21, &STATE_VARIABLE_ModeInfo_22_22);
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_23_23);
  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_23_23, STATE_VARIABLE_ModeInfo_16);
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
