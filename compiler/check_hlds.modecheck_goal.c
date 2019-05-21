/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version rotd-2018-01-12
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.modecheck_goal.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_goal__init
ENDINIT
*/

#include "check_hlds.modecheck_goal.mih"


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
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_conj.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "std_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0;

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
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1489__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1487__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1482__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__998__1_2_p_0(
  MR_Word PolySpecs_23,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__829__1_2_p_0(
  MR_Word Kind1_42,
  MR_Word HeadVar__2_75);

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
check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(
  MR_Word MultiModeMap0_1,
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
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30);

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box closure_arg);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_48,
  MR_Word * STATE_VARIABLE_ModeInfo_49);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(
  MR_Word SubGoal0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
  MR_Word Vars_9,
  MR_Word Cond0_10,
  MR_Word Then0_11,
  MR_Word Else0_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_31,
  MR_Word * STATE_VARIABLE_ModeInfo_32);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_9_p_0(
  MR_Word MultiModeMap0_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
  MR_Word Var_8,
  MR_Word CanFail_9,
  MR_Word Cases0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * STATE_VARIABLE_ModeInfo_25);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_8_p_0(
  MR_Word MultiModeMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_5,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * STATE_VARIABLE_ModeInfo_8);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23);

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId0_14,
  MR_Word Args0_15,
  MR_Word ExtraArgs_16,
  MR_Word MaybeTraceRuntimeCond_17,
  MR_Word PragmaCode_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
  MR_Word LHS0_9,
  MR_Word RHS0_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
  MR_Word GenericCall_8,
  MR_Word Args0_9,
  MR_Word Modes0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_63,
  MR_Word * STATE_VARIABLE_ModeInfo_64);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId0_11,
  MR_Word Args0_12,
  MR_Word MaybeCallUnifyContext_13,
  MR_Word PredName_14,
  MR_Word GoalInfo0_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
  MR_Word TermVar_8,
  MR_Word ConjGoals0_9,
  MR_Word STATE_VARIABLE_SubGoalInfo_0_23,
  MR_Word * SubGoal_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * STATE_VARIABLE_ModeInfo_25);

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocalVarMap_5);

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

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

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


static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[4][5];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[1][1];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_7[1][4];




static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[1])),
    ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_from_ground_term_kind_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_goal_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__modecheck_goal____vpti_pred_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_goal__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 check_hlds__modecheck_goal____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_Integer check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 = {
  (MR_String) "construct_var_info",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info",
  {     &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  {     &check_hlds__modecheck_goal__check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_construct_var_info_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "construct_var_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0 = {
  (MR_String) "construct_ground_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_goal__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1 = {
  (MR_String) "deconstruct_ground_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__field_types_ground_term_mode_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[1] = {
  &check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001)),
  (MR_String) "check_hlds.modecheck_goal",
  (MR_String) "ground_term_mode",
  {     check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0 },
  {     check_hlds__modecheck_goal__check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_goal__check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0
};

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1489__1_2_p_0(
  MR_Word InnerUOType_34,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerUOType_34, HeadVar__2_77);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1487__1_2_p_0(
  MR_Word InnerDIType_33,
  MR_Word HeadVar__2_72)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InnerDIType_33, HeadVar__2_72);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1482__1_2_p_0(
  MR_Word OuterDIType_28,
  MR_Word OuterUOType_29)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, OuterUOType_29);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__998__1_2_p_0(
  MR_Word PolySpecs_23,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[1], ((MR_Box) (PolySpecs_23)), ((MR_Box) (HeadVar__2_36)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__829__1_2_p_0(
  MR_Word Kind1_42,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (Kind1_42 == HeadVar__2_75);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_10_10 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  {
    MR_Word MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0)));
    MR_Word OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1)));
    MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2)));
    MR_Word Goal_10;

    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(LargeFlatConstructs_4, Goal0_9, &Goal_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_10));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(
  MR_Word LargeFlatConstructs_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Goal0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_8;
    MR_Word Goals_9;

    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(LargeFlatConstructs_1, Goal0_6, &Goal_8);
    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(LargeFlatConstructs_1, Goals0_7, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(
  MR_Word LargeFlatConstructs_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));

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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Goal_6 = Goal0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));

              switch (Var_102) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Goal_6 = Goal0_5;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeCtorInfo_100_100;
                    MR_Word Conjuncts_78;
                    MR_Word ChangedVars_79;
                    MR_Word GroundVars_80;
                    MR_Word Var_84;
                    MR_Word InstMapDelta0_95;
                    MR_Word InstMapDelta_96;
                    MR_Word GoalInfo_97;
                    MR_Word GoalExpr_98;

                    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_p_0(LargeFlatConstructs_4, Var_101, &Conjuncts_78);
                    {
                      GoalExpr_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 2) = ((MR_Box) (Conjuncts_78));
                    }
                    InstMapDelta0_95 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_8);
                    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta0_95, &ChangedVars_79);
                    TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_100_100, ChangedVars_79, LargeFlatConstructs_4, &GroundVars_80);
                    Var_84 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_100_100, GroundVars_80);
                    hlds__instmap__instmap_delta_set_vars_same_4_p_0((MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3]), Var_84, InstMapDelta0_95, &InstMapDelta_96);
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_96, GoalInfo0_8, &GoalInfo_97);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_98));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_97));
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
              MR_Word Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));

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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_43, (MR_Integer) 0)))) {
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
                        MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_43, (MR_Integer) 2)));
                        MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_43, (MR_Integer) 1)));

                        switch (Var_103) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LargeFlatConstructs_4, Var_104);
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
                                hlds__instmap__instmap_delta_set_var_4_p_0(Var_104, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3]), InstMapDelta0_46, &InstMapDelta_47);
                                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_47, GoalInfo0_8, &GoalInfo_48);
                                SubGoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_44, (MR_Integer) 0)));
                                SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_44, (MR_Integer) 1)));
                                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_47, SubGoalInfo0_50, &SubGoalInfo_51);
                                {
                                  SubGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), SubGoal_52, 0) = ((MR_Box) (SubGoalExpr0_49));
                                  MR_hl_field(MR_mktag(0), SubGoal_52, 1) = ((MR_Box) (SubGoalInfo_51));
                                }
                                {
                                  GoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), GoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                  MR_hl_field(MR_mktag(3), GoalExpr_53, 1) = ((MR_Box) (Reason_43));
                                  MR_hl_field(MR_mktag(3), GoalExpr_53, 2) = ((MR_Box) (SubGoal_52));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *Goal_6 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_53));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_48));
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
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * STATE_VARIABLE_ModeInfo_42)
{
  switch (MR_tag((MR_Word) GoalExpr0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_38 = (MR_Word) MR_body(((MR_Word) GoalExpr0_6), (MR_Integer) 0);

        check_hlds__modecheck_goal__modecheck_goal_negation_5_p_0(SubGoal0_38, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0)));
        MR_Word RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1)));
        MR_Word Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3)));
        MR_Word UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4)));
        MR_Word _UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 2)));

        check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0)));
        MR_Integer ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1)));
        MR_Word Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2)));
        MR_Word MaybeCallUnifyContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4)));
        MR_Word PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5)));
        MR_Word _Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3)));

        check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(PredId_15, ProcId0_16, Args0_17, MaybeCallUnifyContext_19, PredName_20, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Args0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word _MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
            MR_Word _Detism_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));

            check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(GenericCall_21, Args0_54, Modes0_22, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word ExtraArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));
            MR_Word MaybeTraceRuntimeCond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6)));
            MR_Word PragmaCode_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7)));
            MR_Word PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Integer ProcId0_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Args0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));

            check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(Attributes_25, PredId_55, ProcId0_56, Args0_57, ExtraArgs_26, MaybeTraceRuntimeCond_27, PragmaCode_28, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Goals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));

            switch (ConjType_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Goal_71;
                  MR_Word STATE_VARIABLE_ModeInfo_21_74;
                  MR_Word STATE_VARIABLE_ModeInfo_22_75;
                  MR_Word Goals_90;
                  MR_Word _GoalInfo_89;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "par_conj", STATE_VARIABLE_ModeInfo_0_41, &STATE_VARIABLE_ModeInfo_21_74);
                  check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_29, Goals_30, &Goals_90, STATE_VARIABLE_ModeInfo_21_74, &STATE_VARIABLE_ModeInfo_22_75);
                  hlds__hlds_goal__par_conj_list_to_goal_3_p_0(Goals_90, GoalInfo0_7, &Goal_71);
                  *GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_71, (MR_Integer) 0)));
                  _GoalInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_71, (MR_Integer) 1)));
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "par_conj", STATE_VARIABLE_ModeInfo_22_75, STATE_VARIABLE_ModeInfo_42);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_28_81;
                  MR_Word STATE_VARIABLE_ModeInfo_29_82;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", STATE_VARIABLE_ModeInfo_0_41, &STATE_VARIABLE_ModeInfo_28_81);
                  if ((Goals_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[4]);
                    STATE_VARIABLE_ModeInfo_29_82 = STATE_VARIABLE_ModeInfo_28_81;
                  }
                  else
                  {
                    MR_Word Goals_69;
                    MR_Word Var_83;
                    MR_Word _GoalInfo_70;

                    check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(ConjType_29, Goals_30, &Goals_69, STATE_VARIABLE_ModeInfo_28_81, &STATE_VARIABLE_ModeInfo_29_82);
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_69, GoalInfo0_7, &Var_83);
                    *GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_83, (MR_Integer) 0)));
                    _GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_83, (MR_Integer) 1)));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", STATE_VARIABLE_ModeInfo_29_82, STATE_VARIABLE_ModeInfo_42);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

            check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(Goals_58, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));

            check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(Var_31, CanFail_32, Cases0_33, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));

            check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(Reason_39, SubGoal0_59, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));

            check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(Vars_34, Cond0_35, Then0_36, Else0_37, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

            check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(ShortHand0_40, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(
  MR_Word MultiModeMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word InstMap0_19;
    MR_Word STATE_VARIABLE_ModeInfo_22_22;
    MR_Word STATE_VARIABLE_ModeInfo_23_23;
    MR_Word STATE_VARIABLE_ModeInfo_24_24;

    check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_1, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &InstMap0_19);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_23_23);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_23_23, &InstMap_16);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_ModeInfo_23_23, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeMap0_1, Goals0_13, &Goals_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_24_24, STATE_VARIABLE_ModeInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMap_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_17));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1489__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0(
  MR_Word ShortHand0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ShortHand0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "bi_implication");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_83_83;
          MR_Word Outer_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 1)));
          MR_Word Inner_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 2)));
          MR_Word MaybeOutputVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 3)));
          MR_Word MainGoal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 4)));
          MR_Word OrElseGoals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 5)));
          MR_Word OrElseInners_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 6)));
          MR_Word MultiModeMap0_17;
          MR_Word AtomicGoalList0_18;
          MR_Word NonLocals_19;
          MR_Word AtomicGoalList_20;
          MR_Word InstMapList_21;
          MR_Word VarTypes_22;
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
          MR_Word STATE_VARIABLE_ModeInfo_57_57;
          MR_Word STATE_VARIABLE_ModeInfo_58_58;
          MR_Word STATE_VARIABLE_ModeInfo_60_60;
          MR_Word Var_64;
          MR_Word Var_68;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_77;
          MR_Word Goal0_98;
          MR_Word Goals0_99;
          MR_Word Goal_100;
          MR_Word Goals_101;
          MR_Word InstMap_102;
          MR_Word InstMaps_103;
          MR_Word InstMap0_105;
          MR_Word STATE_VARIABLE_ModeInfo_22_108;
          MR_Word STATE_VARIABLE_ModeInfo_23_109;
          MR_Word STATE_VARIABLE_ModeInfo_24_110;
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_6, (MR_Integer) 0)));
          MR_Box conv0_MainGoal_23;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic", STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_57_57);
          check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_57_57, &MultiModeMap0_17);
          {
            AtomicGoalList0_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AtomicGoalList0_18, 0) = ((MR_Box) (MainGoal0_14));
            MR_hl_field(MR_mktag(1), AtomicGoalList0_18, 1) = ((MR_Box) (OrElseGoals0_15));
          }
          NonLocals_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
          Goal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), AtomicGoalList0_18, (MR_Integer) 0)));
          Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), AtomicGoalList0_18, (MR_Integer) 1)));
          check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_17, STATE_VARIABLE_ModeInfo_57_57, &STATE_VARIABLE_ModeInfo_22_108);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_108, &InstMap0_105);
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_98, &Goal_100, STATE_VARIABLE_ModeInfo_22_108, &STATE_VARIABLE_ModeInfo_23_109);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_23_109, &InstMap_102);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_105, STATE_VARIABLE_ModeInfo_23_109, &STATE_VARIABLE_ModeInfo_24_110);
          check_hlds__modecheck_goal__modecheck_orelse_list_6_p_0(MultiModeMap0_17, Goals0_99, &Goals_101, &InstMaps_103, STATE_VARIABLE_ModeInfo_24_110, &STATE_VARIABLE_ModeInfo_58_58);
          {
            AtomicGoalList_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AtomicGoalList_20, 0) = ((MR_Box) (Goal_100));
            MR_hl_field(MR_mktag(1), AtomicGoalList_20, 1) = ((MR_Box) (Goals_101));
          }
          {
            InstMapList_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), InstMapList_21, 0) = ((MR_Box) (InstMap_102));
            MR_hl_field(MR_mktag(1), InstMapList_21, 1) = ((MR_Box) (InstMaps_103));
          }
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_58_58, &VarTypes_22);
          TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          conv0_MainGoal_23 = mercury__list__det_head_1_f_0(TypeCtorInfo_83_83, AtomicGoalList_20);
          MainGoal_23 = ((MR_Word) conv0_MainGoal_23);
          OrElseGoals_24 = mercury__list__det_tail_1_f_0(TypeCtorInfo_83_83, AtomicGoalList_20);
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(AtomicGoalList_20, InstMapList_21, &ArmInstMaps_25);
          hlds__instmap__instmap_merge_5_p_0(NonLocals_19, ArmInstMaps_25, (MR_Integer) 2, STATE_VARIABLE_ModeInfo_58_58, &STATE_VARIABLE_ModeInfo_60_60);
          OuterDI_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_11, (MR_Integer) 0)));
          OuterUO_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_11, (MR_Integer) 1)));
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_22, OuterDI_26, &OuterDIType_28);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_22, OuterUO_27, &OuterUOType_29);
          {
            MR_Word Var_87;

            Var_87 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_87);
          }
          if (!(succeeded))
          {
            MR_Word Var_88;

            Var_88 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_88);
          }
          if (succeeded)
            GoalType_30 = (MR_Integer) 1;
          else
          {
            MR_Word Var_89;

            Var_89 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OuterDIType_28, Var_89);
            if (succeeded)
              GoalType_30 = (MR_Integer) 2;
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid outer var type");
                return;
              }
            }
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (OuterDIType_28));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (OuterUOType_29));
          }
          mercury__require__expect_4_p_0(Var_64, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: mismatched outer var type");
          InnerDI_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_12, (MR_Integer) 0)));
          InnerUO_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_12, (MR_Integer) 1)));
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_22, InnerDI_31, &InnerDIType_33);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_22, InnerUO_32, &InnerUOType_34);
          Var_72 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (InnerDIType_33));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Var_72));
          }
          mercury__require__expect_4_p_0(Var_68, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          Var_77 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_shorthand_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (InnerUOType_34));
            MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Var_77));
          }
          mercury__require__expect_4_p_0(Var_73, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", (MR_String) "atomic_goal: invalid inner var type");
          {
            ShortHand_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ShortHand_35, 0) = ((MR_Box) (GoalType_30));
            MR_hl_field(MR_mktag(1), ShortHand_35, 1) = ((MR_Box) (Outer_11));
            MR_hl_field(MR_mktag(1), ShortHand_35, 2) = ((MR_Box) (Inner_12));
            MR_hl_field(MR_mktag(1), ShortHand_35, 3) = ((MR_Box) (MaybeOutputVars_13));
            MR_hl_field(MR_mktag(1), ShortHand_35, 4) = ((MR_Box) (MainGoal_23));
            MR_hl_field(MR_mktag(1), ShortHand_35, 5) = ((MR_Box) (OrElseGoals_24));
            MR_hl_field(MR_mktag(1), ShortHand_35, 6) = ((MR_Box) (OrElseInners_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_35));
          }
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic", STATE_VARIABLE_ModeInfo_60_60, STATE_VARIABLE_ModeInfo_43);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeIO_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_6, (MR_Integer) 0)));
          MR_Word ResultVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_6, (MR_Integer) 1)));
          MR_Word SubGoal0_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_6, (MR_Integer) 2)));
          MR_Word SubGoal_39;
          MR_Word STATE_VARIABLE_ModeInfo_49_49;
          MR_Word STATE_VARIABLE_ModeInfo_50_50;
          MR_Word STATE_VARIABLE_ModeInfo_51_51;
          MR_Word MultiModeMap0_81;
          MR_Word ShortHand_82;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_49_49);
          check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_49_49, &MultiModeMap0_81);
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_38, &SubGoal_39, STATE_VARIABLE_ModeInfo_49_49, &STATE_VARIABLE_ModeInfo_50_50);
          check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_81, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_51_51);
          {
            ShortHand_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ShortHand_82, 0) = ((MR_Box) (MaybeIO_36));
            MR_hl_field(MR_mktag(2), ShortHand_82, 1) = ((MR_Box) (ResultVar_37));
            MR_hl_field(MR_mktag(2), ShortHand_82, 2) = ((MR_Box) (SubGoal_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_82));
          }
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_51_51, STATE_VARIABLE_ModeInfo_43);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(
  MR_Word TermVar_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * MaybeKindAndSubGoal_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_12;
    MR_Word TermVarInst_13;
    MR_Word MaybeGroundTermMode_15;
    MR_Word VarSet_14;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &InstMap0_12);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, TermVar_7, &TermVarInst_13);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &VarSet_14);
    check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_p_0(SubGoal0_8, TermVar_7, TermVarInst_13, &MaybeGroundTermMode_15);
    if ((MaybeGroundTermMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word SubGoal1_23;
      MR_Word SubGoal2_28;
      MR_Word STATE_VARIABLE_ModeInfo_41_41;
      MR_Word STATE_VARIABLE_ModeInfo_42_42;
      MR_Word Var_46;
      MR_Word SubGoal_54;
      MR_Word SubGoalConjuncts0_25;
      MR_Word SubGoalInfo0_50;
      MR_Word SubGoalExpr0_24;
      MR_Word Var_31;

      succeeded = (TermVarInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        SubGoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_8, (MR_Integer) 0)));
        SubGoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_8, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_24, (MR_Integer) 1)));
          SubGoalConjuncts0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr0_24, (MR_Integer) 2)));
          succeeded = (Var_31 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word SubGoalConjuncts1_26;
        MR_Word SubGoalExpr1_27;

        mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, SubGoalConjuncts0_25, &SubGoalConjuncts1_26);
        {
          SubGoalExpr1_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_27, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_27, 2) = ((MR_Box) (SubGoalConjuncts1_26));
        }
        {
          SubGoal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubGoal1_23, 0) = ((MR_Box) (SubGoalExpr1_27));
          MR_hl_field(MR_mktag(0), SubGoal1_23, 1) = ((MR_Box) (SubGoalInfo0_50));
        }
      }
      else
        SubGoal1_23 = SubGoal0_8;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 1);
      if (succeeded)
      {
        hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, SubGoal1_23, &SubGoal2_28);
      }
      else
        SubGoal2_28 = SubGoal1_23;
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_41_41);
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_28, &SubGoal_54, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_42_42);
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_42_42, STATE_VARIABLE_ModeInfo_30);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (SubGoal_54));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeKindAndSubGoal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
      }
    }
    else
    {
      MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeGroundTermMode_15, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) Var_99)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word RevConj0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0)));
        MR_Word LiveTermVar_17;

        check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_29, TermVar_7, &LiveTermVar_17);
        switch (LiveTermVar_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              *MaybeKindAndSubGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_ModeInfo_30 = STATE_VARIABLE_ModeInfo_0_29;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_8, (MR_Integer) 1)));
              MR_Word SubGoal_20;
              MR_Word Var_49;
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_8, (MR_Integer) 0)));

              check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(TermVar_7, RevConj0_16, SubGoalInfo0_19, &SubGoal_20, STATE_VARIABLE_ModeInfo_0_29, STATE_VARIABLE_ModeInfo_30);
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (SubGoal_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeKindAndSubGoal_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              }
            }
            break;
        }
      }
      else
      {
        MR_Word SubGoal2_68;
        MR_Word STATE_VARIABLE_ModeInfo_41_76;
        MR_Word STATE_VARIABLE_ModeInfo_42_77;
        MR_Word Var_80;
        MR_Word SubGoal_81;

        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 1);
        if (succeeded)
        {
          hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_1[3]), (MR_Integer) 0, SubGoal0_8, &SubGoal2_68);
        }
        else
          SubGoal2_68 = SubGoal0_8;
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_41_76);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal2_68, &SubGoal_81, STATE_VARIABLE_ModeInfo_41_76, &STATE_VARIABLE_ModeInfo_42_77);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_42_77, STATE_VARIABLE_ModeInfo_30);
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (SubGoal_81));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeKindAndSubGoal_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_scope__829__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_48,
  MR_Word * STATE_VARIABLE_ModeInfo_49)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Reason_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_ModeInfo_95_144;
          MR_Word STATE_VARIABLE_ModeInfo_96_145;
          MR_Word SubGoal_148;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_144);
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_148, STATE_VARIABLE_ModeInfo_95_144, &STATE_VARIABLE_ModeInfo_96_145);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_148));
          }
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_145, STATE_VARIABLE_ModeInfo_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ModeInfo_95_137;
          MR_Word STATE_VARIABLE_ModeInfo_96_138;
          MR_Word SubGoal_141;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_137);
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_141, STATE_VARIABLE_ModeInfo_95_137, &STATE_VARIABLE_ModeInfo_96_138);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_141));
          }
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_138, STATE_VARIABLE_ModeInfo_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_ModeInfo_95_158;
          MR_Word STATE_VARIABLE_ModeInfo_96_159;
          MR_Word SubGoal_162;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_158);
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_162, STATE_VARIABLE_ModeInfo_95_158, &STATE_VARIABLE_ModeInfo_96_159);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_162));
          }
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_159, STATE_VARIABLE_ModeInfo_49);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InPPScope_47;
              MR_Word STATE_VARIABLE_ModeInfo_51_51;
              MR_Word STATE_VARIABLE_ModeInfo_54_54;
              MR_Word STATE_VARIABLE_ModeInfo_55_55;
              MR_Word STATE_VARIABLE_ModeInfo_58_58;
              MR_Word SubGoal_126;

              check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_0_48, &InPPScope_47);
              check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_51_51);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "promise_purity scope", STATE_VARIABLE_ModeInfo_51_51, &STATE_VARIABLE_ModeInfo_54_54);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_126, STATE_VARIABLE_ModeInfo_54_54, &STATE_VARIABLE_ModeInfo_55_55);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_126));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "promise_purity scope", STATE_VARIABLE_ModeInfo_55_55, &STATE_VARIABLE_ModeInfo_58_58);
              check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(InPPScope_47, STATE_VARIABLE_ModeInfo_58_58, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_ModeInfo_95_172;
              MR_Word STATE_VARIABLE_ModeInfo_96_173;
              MR_Word SubGoal_176;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_172);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_176, STATE_VARIABLE_ModeInfo_95_172, &STATE_VARIABLE_ModeInfo_96_173);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_176));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_173, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_ModeInfo_95_165;
              MR_Word STATE_VARIABLE_ModeInfo_96_166;
              MR_Word SubGoal_169;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_165);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_169, STATE_VARIABLE_ModeInfo_95_165, &STATE_VARIABLE_ModeInfo_96_166);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_169));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_166, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_ModeInfo_95_179;
              MR_Word STATE_VARIABLE_ModeInfo_96_180;
              MR_Word SubGoal_183;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_179);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_183, STATE_VARIABLE_ModeInfo_95_179, &STATE_VARIABLE_ModeInfo_96_180);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_183));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_180, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word STATE_VARIABLE_ModeInfo_95_130;
              MR_Word STATE_VARIABLE_ModeInfo_96_131;
              MR_Word SubGoal_134;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_130);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_134, STATE_VARIABLE_ModeInfo_95_130, &STATE_VARIABLE_ModeInfo_96_131);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_134));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_131, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_ModeInfo_95_95;
              MR_Word STATE_VARIABLE_ModeInfo_96_96;
              MR_Word SubGoal_112;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_95);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_112, STATE_VARIABLE_ModeInfo_95_95, &STATE_VARIABLE_ModeInfo_96_96);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_112));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_96, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TermVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));
              MR_Word OldKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2)));

              switch (OldKind_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word IsLive_38;

                    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_48, TermVar_36, &IsLive_38);
                    switch (IsLive_38) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          *GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[4]);
                          *STATE_VARIABLE_ModeInfo_49 = STATE_VARIABLE_ModeInfo_0_48;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word InstMapDelta0_39;
                          MR_Word TermVarInst_40;
                          MR_Word InstMap0_113;
                          MR_Word InstMap_114;

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal0_8));
                          }
                          InstMapDelta0_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_9);
                          hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta0_39, TermVar_36, &TermVarInst_40);
                          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_48, &InstMap0_113);
                          hlds__instmap__instmap_set_var_4_p_0(TermVar_36, TermVarInst_40, InstMap0_113, &InstMap_114);
                          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_114, STATE_VARIABLE_ModeInfo_0_48, STATE_VARIABLE_ModeInfo_49);
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                  {
                    MR_Word MaybeKind1AndSubGoal1_41;
                    MR_Word STATE_VARIABLE_ModeInfo_62_62;
                    MR_Word STATE_VARIABLE_ModeInfo_63_63;
                    MR_Word STATE_VARIABLE_ModeInfo_66_66;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_62_62);
                    check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_p_0(TermVar_36, SubGoal0_8, GoalInfo0_9, &MaybeKind1AndSubGoal1_41, STATE_VARIABLE_ModeInfo_62_62, &STATE_VARIABLE_ModeInfo_63_63);
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term scope", STATE_VARIABLE_ModeInfo_63_63, &STATE_VARIABLE_ModeInfo_66_66);
                    if ((MaybeKind1AndSubGoal1_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[4]);
                      *STATE_VARIABLE_ModeInfo_49 = STATE_VARIABLE_ModeInfo_66_66;
                    }
                    else
                    {
                      MR_Word Kind1_42;
                      MR_Word SubGoal1_43;
                      MR_Word MakeGroundTermsUnique_44;
                      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeKind1AndSubGoal1_41, (MR_Integer) 0)));
                      MR_Word Var_70;
                      MR_Word Var_74;
                      MR_Word STATE_VARIABLE_ModeInfo_77_77;

                      Kind1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                      SubGoal1_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                      {
                        Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[2]));
                        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Kind1_42));
                        MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_7[0]));
                        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Var_74));
                      }
                      mercury__require__expect_4_p_0(Var_70, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                      check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_66_66, &STATE_VARIABLE_ModeInfo_77_77);
                      check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(STATE_VARIABLE_ModeInfo_77_77, &MakeGroundTermsUnique_44);
                      switch (MakeGroundTermsUnique_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word UpdatedReason1_45;

                            {
                              UpdatedReason1_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), UpdatedReason1_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), UpdatedReason1_45, 1) = ((MR_Box) (TermVar_36));
                              MR_hl_field(MR_mktag(3), UpdatedReason1_45, 2) = ((MR_Box) (Kind1_42));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UpdatedReason1_45));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal1_43));
                            }
                            *STATE_VARIABLE_ModeInfo_49 = STATE_VARIABLE_ModeInfo_77_77;
                          }
                          break;
                        case (MR_Integer) 0:
                          switch (Kind1_42) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_p_0(TermVar_36, SubGoal1_43, GoalInfo0_9, GoalExpr_10, STATE_VARIABLE_ModeInfo_77_77, STATE_VARIABLE_ModeInfo_49);
                              break;
                            case (MR_Integer) 2:
                            case (MR_Integer) 3:
                              {
                                MR_Word UpdatedReason1_119;

                                {
                                  UpdatedReason1_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), UpdatedReason1_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                  MR_hl_field(MR_mktag(3), UpdatedReason1_119, 1) = ((MR_Box) (TermVar_36));
                                  MR_hl_field(MR_mktag(3), UpdatedReason1_119, 2) = ((MR_Box) (Kind1_42));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  *GoalExpr_10 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UpdatedReason1_119));
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal1_43));
                                }
                                *STATE_VARIABLE_ModeInfo_49 = STATE_VARIABLE_ModeInfo_77_77;
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                                  return;
                                }
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
              MR_Word STATE_VARIABLE_ModeInfo_102_102;
              MR_Word STATE_VARIABLE_ModeInfo_104_104;
              MR_Word STATE_VARIABLE_ModeInfo_105_105;
              MR_Word STATE_VARIABLE_ModeInfo_107_107;
              MR_Word STATE_VARIABLE_ModeInfo_108_108;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_102_102);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_102_102, &InstMap0_17);
              NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
              check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), NonLocals_18, STATE_VARIABLE_ModeInfo_102_102, &STATE_VARIABLE_ModeInfo_104_104);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_19, STATE_VARIABLE_ModeInfo_104_104, &STATE_VARIABLE_ModeInfo_105_105);
              check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), NonLocals_18, STATE_VARIABLE_ModeInfo_105_105, &STATE_VARIABLE_ModeInfo_107_107);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_107_107, &STATE_VARIABLE_ModeInfo_108_108);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_19));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_108_108, STATE_VARIABLE_ModeInfo_49);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word LCVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));
              MR_Word LCSVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2)));
              MR_Word InstMap_34;
              MR_Word ModuleInfo_35;
              MR_Word Var_85;
              MR_Word Var_89;
              MR_Word STATE_VARIABLE_ModeInfo_95_151;
              MR_Word STATE_VARIABLE_ModeInfo_96_152;
              MR_Word SubGoal_155;
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 3)));

              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_48, &InstMap_34);
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_48, &ModuleInfo_35);
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_35));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (InstMap_34));
                MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (LCVar_31));
              }
              mercury__require__expect_4_p_0(Var_85, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control variable is not ground");
              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_scope_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (ModuleInfo_35));
                MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (InstMap_34));
                MR_hl_field(MR_mktag(0), Var_89, 5) = ((MR_Box) (LCSVar_32));
              }
              mercury__require__expect_4_p_0(Var_89, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_scope\'/6", (MR_String) "Loop control slot variable is not ground");
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_48, &STATE_VARIABLE_ModeInfo_95_151);
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_8, &SubGoal_155, STATE_VARIABLE_ModeInfo_95_151, &STATE_VARIABLE_ModeInfo_96_152);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_155));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_96_152, STATE_VARIABLE_ModeInfo_49);
            }
            break;
        }
        break;
    }
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
  {
    MR_Word MultiModeMap0_10;
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
    check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &MultiModeMap0_10);
    NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &InstMap0_12);
    check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_22_22, &LiveVars0_13);
    Var_23 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0]);
    check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_23, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), NonLocals_11, STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_26_26);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(SubGoal0_6, &SubGoal_14, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_27_27);
    check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_13, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_28_28);
    check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), NonLocals_11, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_30_30);
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
          Var_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NegNonLocals_16);
          check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 1, Var_33, InstMap0_12, Unreachable_17, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_34_34);
        }
        break;
    }
    *GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_14);
    check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_10, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_35_35);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_35_35, STATE_VARIABLE_ModeInfo_19);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_p_0(
  MR_Word Vars_9,
  MR_Word Cond0_10,
  MR_Word Then0_11,
  MR_Word Else0_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_31,
  MR_Word * STATE_VARIABLE_ModeInfo_32)
{
  {
    MR_bool succeeded;
    MR_Word MultiModeMap0_16;
    MR_Word NonLocals_17;
    MR_Word ThenVars_18;
    MR_Word InstMap0_19;
    MR_Word Cond_20;
    MR_Word InstMapCond_21;
    MR_Word Then_22;
    MR_Word InstMapThen_23;
    MR_Word Else_24;
    MR_Word InstMapElse_25;
    MR_Word ThenElseArgInfos_26;
    MR_Word InstMap_27;
    MR_Word InPromisePurityScope_28;
    MR_Word STATE_VARIABLE_ModeInfo_35_35;
    MR_Word STATE_VARIABLE_ModeInfo_37_37;
    MR_Word STATE_VARIABLE_ModeInfo_38_38;
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word STATE_VARIABLE_ModeInfo_42_42;
    MR_Word STATE_VARIABLE_ModeInfo_43_43;
    MR_Word STATE_VARIABLE_ModeInfo_44_44;
    MR_Word STATE_VARIABLE_ModeInfo_45_45;
    MR_Word STATE_VARIABLE_ModeInfo_46_46;
    MR_Word STATE_VARIABLE_ModeInfo_47_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_ModeInfo_55_55;
    MR_Word STATE_VARIABLE_ModeInfo_58_58;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_31, &STATE_VARIABLE_ModeInfo_35_35);
    check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_35_35, &MultiModeMap0_16);
    NonLocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
    ThenVars_18 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_11);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_35_35, &InstMap0_19);
    check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), NonLocals_17, STATE_VARIABLE_ModeInfo_35_35, &STATE_VARIABLE_ModeInfo_37_37);
    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_18, STATE_VARIABLE_ModeInfo_37_37, &STATE_VARIABLE_ModeInfo_38_38);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Cond0_10, &Cond_20, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_39_39);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &InstMapCond_21);
    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_18, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), NonLocals_17, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_42_42);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_21);
    if (succeeded)
    {
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Then0_11, &Then_22, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_43_43);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_43_43, &InstMapThen_23);
    }
    else
    {
      Then_22 = hlds__make_goal__true_goal_0_f_0();
      InstMapThen_23 = InstMapCond_21;
      STATE_VARIABLE_ModeInfo_43_43 = STATE_VARIABLE_ModeInfo_42_42;
    }
    check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_16, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_44_44);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_45_45);
    check_hlds__modecheck_goal__modecheck_goal_4_p_0(Else0_12, &Else_24, STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_46_46);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_46_46, &InstMapElse_25);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_ModeInfo_46_46, &STATE_VARIABLE_ModeInfo_47_47);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Else_24));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Then_22));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (InstMapElse_25));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (InstMapThen_23));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_48, Var_49, &ThenElseArgInfos_26);
    hlds__instmap__instmap_merge_5_p_0(NonLocals_17, ThenElseArgInfos_26, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_47_47, &STATE_VARIABLE_ModeInfo_55_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_9));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_20));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_22));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_24));
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_55_55, &InstMap_27);
    check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(STATE_VARIABLE_ModeInfo_55_55, &InPromisePurityScope_28);
    switch (InPromisePurityScope_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_55_55;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_62_62;
          MR_Word CondNonLocals0_29;
          MR_Word CondNonLocals_30;
          MR_Word Var_56;

          CondNonLocals0_29 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond_20);
          TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          Var_56 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_62_62, CondNonLocals0_29, NonLocals_17);
          CondNonLocals_30 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_62_62, Var_56);
          check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0((MR_Integer) 0, CondNonLocals_30, InstMap0_19, InstMap_27, STATE_VARIABLE_ModeInfo_55_55, &STATE_VARIABLE_ModeInfo_58_58);
        }
        break;
    }
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_58_58, STATE_VARIABLE_ModeInfo_32);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_case_list_9_p_0(
  MR_Word MultiModeMap0_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_6,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_7,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ModeInfo_9 = STATE_VARIABLE_ModeInfo_0_8;
      *STATE_VARIABLE_LargeFlatConstructs_7 = STATE_VARIABLE_LargeFlatConstructs_0_6;
    }
    else
    {
      MR_Word Case0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
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

      check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_1, STATE_VARIABLE_ModeInfo_0_8, &STATE_VARIABLE_ModeInfo_39_39);
      MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 0)));
      OtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 1)));
      Goal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_20, (MR_Integer) 2)));
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
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(Var_2, InstMap0_31, InstMap_24, Goal1_33, &Goal_34);
      {
        Case_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_22, 0) = ((MR_Box) (MainConsId_28));
        MR_hl_field(MR_mktag(0), Case_22, 1) = ((MR_Box) (OtherConsIds_29));
        MR_hl_field(MR_mktag(0), Case_22, 2) = ((MR_Box) (Goal_34));
      }
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, STATE_VARIABLE_LargeFlatConstructs_0_6);
      if (succeeded)
        STATE_VARIABLE_LargeFlatConstructs_42_42 = STATE_VARIABLE_LargeFlatConstructs_0_6;
      else
      {
        MR_Word GoalLargeFlatConstructs_50;

        GoalLargeFlatConstructs_50 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_34);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, GoalLargeFlatConstructs_50, STATE_VARIABLE_LargeFlatConstructs_0_6, &STATE_VARIABLE_LargeFlatConstructs_42_42);
      }
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_31, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_43_43);
      check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeMap0_1, Var_2, Cases0_21, &Cases_23, &InstMaps_25, STATE_VARIABLE_LargeFlatConstructs_42_42, STATE_VARIABLE_LargeFlatConstructs_7, STATE_VARIABLE_ModeInfo_43_43, STATE_VARIABLE_ModeInfo_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_23));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMap_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_25));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Case_6;

    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Case_6));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0(
  MR_Word Var_8,
  MR_Word CanFail_9,
  MR_Word Cases0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * STATE_VARIABLE_ModeInfo_25)
{
  {
    MR_bool succeeded;
    MR_Word Cases_14;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_24, &STATE_VARIABLE_ModeInfo_28_28);
    if ((Cases0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word InstMap_15;

      Cases_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      hlds__instmap__init_unreachable_1_p_0(&InstMap_15);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_15, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_31_31);
    }
    else
    {
      MR_Word MultiModeMap0_18;
      MR_Word LargeFlatConstructs0_20;
      MR_Word Cases1_21;
      MR_Word InstMaps_22;
      MR_Word LargeFlatConstructs_23;
      MR_Word STATE_VARIABLE_ModeInfo_29_29;
      MR_Word InstMaps_43;
      MR_Word ArmInstMaps_45;

      check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_28_28, &MultiModeMap0_18);
      LargeFlatConstructs0_20 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_11);
      check_hlds__modecheck_goal__modecheck_case_list_9_p_0(MultiModeMap0_18, Var_8, Cases0_10, &Cases1_21, &InstMaps_22, LargeFlatConstructs0_20, &LargeFlatConstructs_23, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_29_29);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LargeFlatConstructs_23);
      if (succeeded)
      {
        Cases_14 = Cases1_21;
        InstMaps_43 = InstMaps_22;
      }
      else
      {
        MR_Word TypeCtorInfo_29_56;
        MR_Word TypeCtorInfo_33_60;
        MR_Word LargeFlatConstructList_44;
        MR_Word Var_46;
        MR_Word Var_47;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (LargeFlatConstructs_23));
        }
        TypeCtorInfo_29_56 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
        mercury__list__map_3_p_0(TypeCtorInfo_29_56, TypeCtorInfo_29_56, Var_46, Cases1_21, &Cases_14);
        LargeFlatConstructList_44 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LargeFlatConstructs_23);
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_switch_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3])));
          MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (LargeFlatConstructList_44));
        }
        TypeCtorInfo_33_60 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
        mercury__list__map_3_p_0(TypeCtorInfo_33_60, TypeCtorInfo_33_60, Var_47, InstMaps_22, &InstMaps_43);
      }
      hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_14, InstMaps_43, &ArmInstMaps_45);
      hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_20, ArmInstMaps_45, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_31_31);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_14));
    }
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_31_31, STATE_VARIABLE_ModeInfo_25);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_disj_list_8_p_0(
  MR_Word MultiModeMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LargeFlatConstructs_0_5,
  MR_Word * STATE_VARIABLE_LargeFlatConstructs_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * STATE_VARIABLE_ModeInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ModeInfo_8 = STATE_VARIABLE_ModeInfo_0_7;
      *STATE_VARIABLE_LargeFlatConstructs_6 = STATE_VARIABLE_LargeFlatConstructs_0_5;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Goal_19;
      MR_Word Goals_20;
      MR_Word InstMap_21;
      MR_Word InstMaps_22;
      MR_Word InstMap0_25;
      MR_Word STATE_VARIABLE_ModeInfo_30_30;
      MR_Word STATE_VARIABLE_ModeInfo_31_31;
      MR_Word STATE_VARIABLE_LargeFlatConstructs_32_32;
      MR_Word STATE_VARIABLE_ModeInfo_33_33;

      check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap0_1, STATE_VARIABLE_ModeInfo_0_7, &STATE_VARIABLE_ModeInfo_30_30);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_30_30, &InstMap0_25);
      check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_17, &Goal_19, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_31_31);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, STATE_VARIABLE_LargeFlatConstructs_0_5);
      if (succeeded)
        STATE_VARIABLE_LargeFlatConstructs_32_32 = STATE_VARIABLE_LargeFlatConstructs_0_5;
      else
      {
        MR_Word GoalLargeFlatConstructs_40;

        GoalLargeFlatConstructs_40 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_19);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, GoalLargeFlatConstructs_40, STATE_VARIABLE_LargeFlatConstructs_0_5, &STATE_VARIABLE_LargeFlatConstructs_32_32);
      }
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_31_31, &InstMap_21);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_25, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_33_33);
      check_hlds__modecheck_goal__modecheck_disj_list_8_p_0(MultiModeMap0_1, Goals0_18, &Goals_20, &InstMaps_22, STATE_VARIABLE_LargeFlatConstructs_32_32, STATE_VARIABLE_LargeFlatConstructs_6, STATE_VARIABLE_ModeInfo_33_33, STATE_VARIABLE_ModeInfo_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMap_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_22));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    hlds__instmap__instmap_set_vars_same_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_6;

    check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0(
  MR_Word Disjuncts0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_ModeInfo_26_26;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_26_26);
    if ((Disjuncts0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word InstMap_10;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_8 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjuncts0_6));
      }
      hlds__instmap__init_unreachable_1_p_0(&InstMap_10);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_10, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_30_30);
    }
    else
    {
      MR_Word MultiModeMap0_13;
      MR_Word LargeFlatConstructs0_15;
      MR_Word Disjuncts1_16;
      MR_Word InstMaps_17;
      MR_Word LargeFlatConstructs_18;
      MR_Word Disjuncts2_19;
      MR_Word Disjuncts_20;
      MR_Word STATE_VARIABLE_ModeInfo_27_27;
      MR_Word Var_29;
      MR_Word InstMaps_42;
      MR_Word ArmInstMaps_44;
      MR_Word _GoalInfo_21;

      check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_26_26, &MultiModeMap0_13);
      LargeFlatConstructs0_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
      check_hlds__modecheck_goal__modecheck_disj_list_8_p_0(MultiModeMap0_13, Disjuncts0_6, &Disjuncts1_16, &InstMaps_17, LargeFlatConstructs0_15, &LargeFlatConstructs_18, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_27_27);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LargeFlatConstructs_18);
      if (succeeded)
      {
        Disjuncts2_19 = Disjuncts1_16;
        InstMaps_42 = InstMaps_17;
      }
      else
      {
        MR_Word TypeCtorInfo_29_55;
        MR_Word TypeCtorInfo_33_59;
        MR_Word LargeFlatConstructList_43;
        MR_Word Var_45;
        MR_Word Var_46;

        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (LargeFlatConstructs_18));
        }
        TypeCtorInfo_29_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        mercury__list__map_3_p_0(TypeCtorInfo_29_55, TypeCtorInfo_29_55, Var_45, Disjuncts1_16, &Disjuncts2_19);
        LargeFlatConstructList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LargeFlatConstructs_18);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_goal_disj_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[3])));
          MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (LargeFlatConstructList_43));
        }
        TypeCtorInfo_33_59 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
        mercury__list__map_3_p_0(TypeCtorInfo_33_59, TypeCtorInfo_33_59, Var_46, InstMaps_17, &InstMaps_42);
      }
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Disjuncts2_19, InstMaps_42, &ArmInstMaps_44);
      hlds__instmap__instmap_merge_5_p_0(LargeFlatConstructs0_15, ArmInstMaps_44, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_27_27, &STATE_VARIABLE_ModeInfo_30_30);
      hlds__goal_util__flatten_disj_2_p_0(Disjuncts2_19, &Disjuncts_20);
      hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_20, GoalInfo0_7, &Var_29);
      *GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
      _GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1)));
    }
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_30_30, STATE_VARIABLE_ModeInfo_23);
  }
}

void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));
    MR_Word Context_10;
    MR_Word STATE_VARIABLE_ModeInfo_14_14;

    Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
    succeeded = mercury__term__is_dummy_context_1_p_0(Context_10);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_14_14 = STATE_VARIABLE_ModeInfo_0_12;
    else
      check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_14_14);
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 15);
    if (succeeded)
    {
      MR_Word InDuplForSwitch_11;
      MR_Word STATE_VARIABLE_ModeInfo_17_17;
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word InstMap0_27;
      MR_Word GoalExpr_28;
      MR_Word GoalInfo_29;
      MR_Word STATE_VARIABLE_ModeInfo_15_30;

      check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InDuplForSwitch_11);
      check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_17_17);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &InstMap0_27);
      check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_28, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_15_30);
      check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_27, GoalExpr_28, GoalInfo0_9, &GoalInfo_29, STATE_VARIABLE_ModeInfo_15_30, &STATE_VARIABLE_ModeInfo_18_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_28));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
      }
      check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_13);
    }
    else
    {
      MR_Word InstMap0_38;
      MR_Word GoalExpr_39;
      MR_Word GoalInfo_40;
      MR_Word STATE_VARIABLE_ModeInfo_15_41;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InstMap0_38);
      check_hlds__modecheck_goal__modecheck_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_39, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_15_41);
      check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_38, GoalExpr_39, GoalInfo0_9, &GoalInfo_40, STATE_VARIABLE_ModeInfo_15_41, STATE_VARIABLE_ModeInfo_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_39));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_40));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_p_0(
  MR_Word Attributes_12,
  MR_Word PredId_13,
  MR_Integer ProcId0_14,
  MR_Word Args0_15,
  MR_Word ExtraArgs_16,
  MR_Word MaybeTraceRuntimeCond_17,
  MR_Word PragmaCode_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_Word CallId_22;
    MR_Word InstMap0_23;
    MR_Word ArgVars0_25;
    MR_Integer ProcId_26;
    MR_Word ArgVars_27;
    MR_Word ExtraGoals_28;
    MR_Word Pragma_29;
    MR_Word STATE_VARIABLE_ModeInfo_34_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_ModeInfo_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word STATE_VARIABLE_ModeInfo_41_41;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "pragma_foreign_code", STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_34_34);
    check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_34_34, PredId_13, &CallId_22);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_34_34, &InstMap0_23);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (CallId_22));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_37));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_35, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_36_36);
    ArgVars0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal_scalar_common_2[2], Args0_15);
    check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ProcId0_14, &ProcId_26, ArgVars0_25, &ArgVars_27, GoalInfo0_19, &ExtraGoals_28, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_39_39);
    {
      Pragma_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Pragma_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Pragma_29, 1) = ((MR_Box) (Attributes_12));
      MR_hl_field(MR_mktag(3), Pragma_29, 2) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(3), Pragma_29, 3) = ((MR_Box) (ProcId_26));
      MR_hl_field(MR_mktag(3), Pragma_29, 4) = ((MR_Box) (Args0_15));
      MR_hl_field(MR_mktag(3), Pragma_29, 5) = ((MR_Box) (ExtraArgs_16));
      MR_hl_field(MR_mktag(3), Pragma_29, 6) = ((MR_Box) (MaybeTraceRuntimeCond_17));
      MR_hl_field(MR_mktag(3), Pragma_29, 7) = ((MR_Box) (PragmaCode_18));
    }
    check_hlds__modecheck_util__handle_extra_goals_9_p_0(Pragma_29, ExtraGoals_28, GoalInfo0_19, ArgVars0_25, ArgVars_27, InstMap0_23, GoalExpr_20, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "pragma_foreign_code", STATE_VARIABLE_ModeInfo_41_41, STATE_VARIABLE_ModeInfo_31);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_unify_8_p_0(
  MR_Word LHS0_9,
  MR_Word RHS0_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17)
{
  {
    MR_Word STATE_VARIABLE_ModeInfo_20_20;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_ModeInfo_22_22;
    MR_Word STATE_VARIABLE_ModeInfo_23_23;
    MR_Word STATE_VARIABLE_ModeInfo_24_24;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_16, &STATE_VARIABLE_ModeInfo_20_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (UnifyContext_12));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_21, STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_9, RHS0_10, Unification0_11, UnifyContext_12, GoalInfo0_13, GoalExpr_14, STATE_VARIABLE_ModeInfo_22_22, &STATE_VARIABLE_ModeInfo_23_23);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_23_23, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_24_24, STATE_VARIABLE_ModeInfo_17);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_generic_call_7_p_0(
  MR_Word GenericCall_8,
  MR_Word Args0_9,
  MR_Word Modes0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_63,
  MR_Word * STATE_VARIABLE_ModeInfo_64)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_14;
    MR_Word GenericCallId_15;
    MR_Word CallId_16;
    MR_Word STATE_VARIABLE_ModeInfo_67_67;
    MR_Word Var_68;
    MR_Word STATE_VARIABLE_ModeInfo_69_69;
    MR_Word STATE_VARIABLE_ModeInfo_104_104;
    MR_Word STATE_VARIABLE_ModeInfo_105_105;

    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_63, &STATE_VARIABLE_ModeInfo_67_67);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_67_67, &InstMap0_14);
    hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_8, &GenericCallId_15);
    {
      CallId_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallId_16, 0) = ((MR_Box) (GenericCallId_15));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (CallId_16));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_68, STATE_VARIABLE_ModeInfo_67_67, &STATE_VARIABLE_ModeInfo_69_69);
    switch (MR_tag((MR_Word) GenericCall_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_8, (MR_Integer) 0)));
          MR_Word PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_8, (MR_Integer) 2)));
          MR_Word Args_21;
          MR_Word Modes_22;
          MR_Word Det_23;
          MR_Word ExtraGoals_24;
          MR_Word GoalExpr1_25;
          MR_Word AllArgs0_26;
          MR_Word AllArgs_27;
          MR_Word STATE_VARIABLE_ModeInfo_102_102;
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_8, (MR_Integer) 1)));
          MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_8, (MR_Integer) 3)));

          check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(PredOrFunc_19, PredVar_17, Args0_9, &Args_21, &Modes_22, &Det_23, &ExtraGoals_24, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_102_102);
          {
            GoalExpr1_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 1) = ((MR_Box) (GenericCall_8));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 2) = ((MR_Box) (Args_21));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 3) = ((MR_Box) (Modes_22));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), GoalExpr1_25, 5) = ((MR_Box) (Det_23));
          }
          {
            AllArgs0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AllArgs0_26, 0) = ((MR_Box) (PredVar_17));
            MR_hl_field(MR_mktag(1), AllArgs0_26, 1) = ((MR_Box) (Args0_9));
          }
          {
            AllArgs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AllArgs_27, 0) = ((MR_Box) (PredVar_17));
            MR_hl_field(MR_mktag(1), AllArgs_27, 1) = ((MR_Box) (Args_21));
          }
          check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_25, ExtraGoals_24, GoalInfo0_11, AllArgs0_26, AllArgs_27, InstMap0_14, GoalExpr_12, STATE_VARIABLE_ModeInfo_102_102, &STATE_VARIABLE_ModeInfo_104_104);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "class_method_call");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String EventName_32 = ((MR_String) (MR_hl_field(MR_mktag(2), GenericCall_8, (MR_Integer) 0)));
          MR_Word ModuleInfo_33;
          MR_Word EventSet_34;
          MR_Word EventSpecMap_35;
          MR_Word Args_109;
          MR_Word Modes_110;
          MR_String Var_119;
          MR_Word ModesPrime_36;

          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_33);
          hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_33, &EventSet_34);
          Var_119 = ((MR_String) (MR_hl_field(MR_mktag(0), EventSet_34, (MR_Integer) 0)));
          EventSpecMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), EventSet_34, (MR_Integer) 1)));
          succeeded = parse_tree__prog_event__event_arg_modes_3_p_0(EventSpecMap_35, EventName_32, &ModesPrime_36);
          if (succeeded)
            Modes_110 = ModesPrime_36;
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "unknown event");
              return;
            }
          }
          check_hlds__modecheck_call__modecheck_event_call_5_p_0(Modes_110, Args0_9, &Args_109, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_104_104);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GenericCall_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_109));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Modes_110));
            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_ModeInfo_90_90;
          MR_Word Args_113;
          MR_Word Modes_114;
          MR_Word Det_115;
          MR_Word ExtraGoals_116;
          MR_Word GoalExpr1_117;
          MR_Word Mode1_44;
          MR_Word Unique_47;
          MR_Integer LocalTag_59;
          MR_Word TypeCtorInfo_128_128;
          MR_Word TypeCtorInfo_129_129;
          MR_Word InstMap_38;
          MR_Word Arg1_43;
          MR_Word Mode2_45;
          MR_Word Inst1_46;
          MR_Word ConsId_49;
          MR_Word TypeTable_50;
          MR_Word VarTypes_51;
          MR_Word ArgType1_52;
          MR_Word ArgTypeCtor1_53;
          MR_Word CtorDefn_54;
          MR_Word Body_55;
          MR_Word ConsTagValues_56;
          MR_Word ConsTag_57;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word ModuleInfo_111;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Arg1Prime_39;
          MR_Word Mode1Prime_41;
          MR_Word Mode2Prime_42;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word _Arg2Prime_40;
          MR_Word Var_48;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Box conv0_ConsTag_57;
          MR_Integer Var_58;

          succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_11, (MR_Integer) 13);
          if (succeeded)
          {
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap_38);
            succeeded = ((MR_tag((MR_Word) Args0_9)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg1Prime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 0)));
              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                _Arg2Prime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0)));
                Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1)));
                succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes0_10)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode1Prime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes0_10, (MR_Integer) 0)));
                    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes0_10, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Mode2Prime_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0)));
                      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1)));
                      succeeded = (Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              Arg1_43 = Arg1Prime_39;
              Mode1_44 = Mode1Prime_41;
              Mode2_45 = Mode2Prime_42;
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", (MR_String) "bad cast");
                return;
              }
            }
            Var_130 = parse_tree__prog_mode__in_mode_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode1_44, Var_130);
            if (succeeded)
            {
              Var_131 = parse_tree__prog_mode__out_mode_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode2_45, Var_131);
              if (succeeded)
              {
                hlds__instmap__instmap_lookup_var_3_p_0(InstMap_38, Arg1_43, &Inst1_46);
                succeeded = ((((MR_tag((MR_Word) Inst1_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst1_46, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Unique_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_46, (MR_Integer) 1)));
                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_46, (MR_Integer) 2)));
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_46, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0)));
                    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 1)));
                    succeeded = (Var_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0)));
                      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 1)));
                      succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo_111);
                        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_111, &TypeTable_50);
                        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &VarTypes_51);
                        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_51, Arg1_43, &ArgType1_52);
                        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType1_52, &ArgTypeCtor1_53);
                        if (succeeded)
                        {
                          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_50, ArgTypeCtor1_53, &CtorDefn_54);
                          hlds__hlds_data__get_type_defn_body_2_p_0(CtorDefn_54, &Body_55);
                          succeeded = ((MR_tag((MR_Word) Body_55)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 0)));
                            ConsTagValues_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 1)));
                            Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 2)));
                            Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 3)));
                            Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 4)));
                            Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 5)));
                            Var_125 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 6)))) & (MR_Integer) 1);
                            Var_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                            Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_55, (MR_Integer) 7)));
                            TypeCtorInfo_128_128 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                            TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                            mercury__map__lookup_3_p_0(TypeCtorInfo_128_128, TypeCtorInfo_129_129, ConsTagValues_56, ((MR_Box) (ConsId_49)), &conv0_ConsTag_57);
                            ConsTag_57 = ((MR_Word) conv0_ConsTag_57);
                            succeeded = ((((MR_tag((MR_Word) ConsTag_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_57, (MR_Integer) 0)))) == (MR_Integer) 14)));
                            if (succeeded)
                            {
                              Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_57, (MR_Integer) 1)));
                              LocalTag_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_57, (MR_Integer) 2)));
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
            MR_Word BoundFunctor_60;
            MR_Word BoundInst_61;
            MR_Word NewMode2_62;
            MR_Word Var_82;
            MR_Word Var_85;
            MR_Word Var_88;

            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (LocalTag_59));
            }
            {
              BoundFunctor_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BoundFunctor_60, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), BoundFunctor_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (BoundFunctor_60));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              BoundInst_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), BoundInst_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), BoundInst_61, 1) = ((MR_Box) (Unique_47));
              MR_hl_field(MR_mktag(3), BoundInst_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(3), BoundInst_61, 3) = ((MR_Box) (Var_85));
            }
            {
              NewMode2_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewMode2_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), NewMode2_62, 1) = ((MR_Box) (BoundInst_61));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (NewMode2_62));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Modes_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Modes_114, 0) = ((MR_Box) (Mode1_44));
              MR_hl_field(MR_mktag(1), Modes_114, 1) = ((MR_Box) (Var_88));
            }
          }
          else
            Modes_114 = Modes0_10;
          check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(Modes_114, Args0_9, &Args_113, &Det_115, &ExtraGoals_116, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_90_90);
          {
            GoalExpr1_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 1) = ((MR_Box) (GenericCall_8));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 2) = ((MR_Box) (Args_113));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 3) = ((MR_Box) (Modes_114));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), GoalExpr1_117, 5) = ((MR_Box) (Det_115));
          }
          check_hlds__modecheck_util__handle_extra_goals_9_p_0(GoalExpr1_117, ExtraGoals_116, GoalInfo0_11, Args0_9, Args_113, InstMap0_14, GoalExpr_12, STATE_VARIABLE_ModeInfo_90_90, &STATE_VARIABLE_ModeInfo_104_104);
        }
        break;
    }
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_104_104, &STATE_VARIABLE_ModeInfo_105_105);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_105_105, STATE_VARIABLE_ModeInfo_64);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_goal_plain_call_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId0_11,
  MR_Word Args0_12,
  MR_Word MaybeCallUnifyContext_13,
  MR_Word PredName_14,
  MR_Word GoalInfo0_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_String PredNameString_18;
    MR_String CallString_19;
    MR_Word CallId_20;
    MR_Word InstMap0_21;
    MR_Integer ProcId_23;
    MR_Word Args_24;
    MR_Word ExtraGoals_25;
    MR_Word ModuleInfo_26;
    MR_Word CallerPredId_27;
    MR_Word Builtin_28;
    MR_Word Call_29;
    MR_Word STATE_VARIABLE_ModeInfo_34_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_ModeInfo_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ModeInfo_38_38;
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;

    PredNameString_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredName_14);
    CallString_19 = mercury__string__f_43_43_2_f_0((MR_String) "call ", PredNameString_18);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_19, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_34_34);
    check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_34_34, PredId_10, &CallId_20);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (CallId_20));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_37));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_35, STATE_VARIABLE_ModeInfo_34_34, &STATE_VARIABLE_ModeInfo_36_36);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_36_36, &InstMap0_21);
    check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ProcId0_11, &ProcId_23, Args0_12, &Args_24, GoalInfo0_15, &ExtraGoals_25, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_38_38);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_38_38, &ModuleInfo_26);
    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_38_38, &CallerPredId_27);
    Builtin_28 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_26, CallerPredId_27, PredId_10, ProcId_23);
    {
      Call_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Call_29, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(2), Call_29, 1) = ((MR_Box) (ProcId_23));
      MR_hl_field(MR_mktag(2), Call_29, 2) = ((MR_Box) (Args_24));
      MR_hl_field(MR_mktag(2), Call_29, 3) = ((MR_Box) (Builtin_28));
      MR_hl_field(MR_mktag(2), Call_29, 4) = ((MR_Box) (MaybeCallUnifyContext_13));
      MR_hl_field(MR_mktag(2), Call_29, 5) = ((MR_Box) (PredName_14));
    }
    check_hlds__modecheck_util__handle_extra_goals_9_p_0(Call_29, ExtraGoals_25, GoalInfo0_15, Args0_12, Args_24, InstMap0_21, GoalExpr_16, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_39_39);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, CallString_19, STATE_VARIABLE_ModeInfo_40_40, STATE_VARIABLE_ModeInfo_31);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_p_0(
  MR_Word TermVar_8,
  MR_Word ConjGoals0_9,
  MR_Word STATE_VARIABLE_SubGoalInfo_0_23,
  MR_Word * SubGoal_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_24,
  MR_Word * STATE_VARIABLE_ModeInfo_25)
{
  {
    MR_Word TypeInfo_34_34 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
    MR_Word TypeCtorInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;
    MR_Word LocalVarMap0_14;
    MR_Word ConjGoals_15;
    MR_Word LocalVarMap_16;
    MR_Word TermVarInfo_17;
    MR_Word TermVarInst_18;
    MR_Word InstMapDelta_19;
    MR_Word SubGoalExpr_20;
    MR_Word InstMap0_21;
    MR_Word InstMap_22;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_SubGoalInfo_29_29;
    MR_Word STATE_VARIABLE_SubGoalInfo_31_31;
    MR_Box conv0_TermVarInfo_17;

    mercury__map__init_1_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, &LocalVarMap0_14);
    check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(ConjGoals0_9, &ConjGoals_15, LocalVarMap0_14, &LocalVarMap_16);
    mercury__map__lookup_3_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, LocalVarMap_16, ((MR_Box) (TermVar_8)), &conv0_TermVarInfo_17);
    TermVarInfo_17 = ((MR_Word) conv0_TermVarInfo_17);
    TermVarInst_18 = (MR_Word) TermVarInfo_17;
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (TermVar_8));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (TermVarInst_18));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    InstMapDelta_19 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_26);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_19, STATE_VARIABLE_SubGoalInfo_0_23, &STATE_VARIABLE_SubGoalInfo_29_29);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, STATE_VARIABLE_SubGoalInfo_29_29, &STATE_VARIABLE_SubGoalInfo_31_31);
    {
      SubGoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SubGoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), SubGoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), SubGoalExpr_20, 2) = ((MR_Box) (ConjGoals_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *SubGoal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubGoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_SubGoalInfo_31_31));
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_24, &InstMap0_21);
    hlds__instmap__instmap_set_var_4_p_0(TermVar_8, TermVarInst_18, InstMap0_21, &InstMap_22);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_22, STATE_VARIABLE_ModeInfo_0_24, STATE_VARIABLE_ModeInfo_25);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocalVarMap_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_LocalVarMap_5 = STATE_VARIABLE_LocalVarMap_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Goal_13;
      MR_Word Goals_14;
      MR_Word GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
      MR_Word GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_LocalVarMap_55_55;
      MR_Word LHSVar_18;
      MR_Word RHS_19;
      MR_Word UnifyContext_22;
      MR_Word ConsId_23;
      MR_Word RHSVars_24;
      MR_Word Var_42;
      MR_Word Var_20;
      MR_Word Var_21;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_16)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        LHSVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 0)));
        RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 1)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 2)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 3)));
        UnifyContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_16, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) RHS_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_19, (MR_Integer) 0)));
          Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_19, (MR_Integer) 1)));
          RHSVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_19, (MR_Integer) 2)));
          succeeded = (Var_42 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word ArgInsts_25;
        MR_Word ArgModes_26;
        MR_Word BoundInst_27;
        MR_Word TermInst_28;
        MR_Word LHSFromToInsts_29;
        MR_Word RHSFromToInsts_30;
        MR_Word UnifyMode_31;
        MR_Word Unification_34;
        MR_Word GoalExpr_35;
        MR_Word InstMapDelta_36;
        MR_Word GoalInfo1_37;
        MR_Word GoalInfo_38;
        MR_Word LHSVarInfo_39;
        MR_Word STATE_VARIABLE_LocalVarMap_43_43;
        MR_Word Var_46;
        MR_Word Var_51;
        MR_Word Var_52;

        check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(RHSVars_24, &ArgInsts_25, &ArgModes_26, STATE_VARIABLE_LocalVarMap_0_4, &STATE_VARIABLE_LocalVarMap_43_43);
        {
          BoundInst_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_27, 0) = ((MR_Box) (ConsId_23));
          MR_hl_field(MR_mktag(0), BoundInst_27, 1) = ((MR_Box) (ArgInsts_25));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (BoundInst_27));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          TermInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TermInst_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), TermInst_28, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), TermInst_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), TermInst_28, 3) = ((MR_Box) (Var_46));
        }
        {
          LHSFromToInsts_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LHSFromToInsts_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), LHSFromToInsts_29, 1) = ((MR_Box) (TermInst_28));
        }
        {
          RHSFromToInsts_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RHSFromToInsts_30, 0) = ((MR_Box) (TermInst_28));
          MR_hl_field(MR_mktag(0), RHSFromToInsts_30, 1) = ((MR_Box) (TermInst_28));
        }
        {
          UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnifyMode_31, 0) = ((MR_Box) (LHSFromToInsts_29));
          MR_hl_field(MR_mktag(0), UnifyMode_31, 1) = ((MR_Box) (RHSFromToInsts_30));
        }
        {
          Unification_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_34, 0) = ((MR_Box) (LHSVar_18));
          MR_hl_field(MR_mktag(0), Unification_34, 1) = ((MR_Box) (ConsId_23));
          MR_hl_field(MR_mktag(0), Unification_34, 2) = ((MR_Box) (RHSVars_24));
          MR_hl_field(MR_mktag(0), Unification_34, 3) = ((MR_Box) (ArgModes_26));
          MR_hl_field(MR_mktag(0), Unification_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Unification_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_35, 0) = ((MR_Box) (LHSVar_18));
          MR_hl_field(MR_mktag(1), GoalExpr_35, 1) = ((MR_Box) (RHS_19));
          MR_hl_field(MR_mktag(1), GoalExpr_35, 2) = ((MR_Box) (UnifyMode_31));
          MR_hl_field(MR_mktag(1), GoalExpr_35, 3) = ((MR_Box) (Unification_34));
          MR_hl_field(MR_mktag(1), GoalExpr_35, 4) = ((MR_Box) (UnifyContext_22));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (LHSVar_18));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (TermInst_28));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        InstMapDelta_36 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_51);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_36, GoalInfo0_17, &GoalInfo1_37);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo1_37, &GoalInfo_38);
        {
          Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_13, 0) = ((MR_Box) (GoalExpr_35));
          MR_hl_field(MR_mktag(0), Goal_13, 1) = ((MR_Box) (GoalInfo_38));
        }
        LHSVarInfo_39 = (MR_Word) TermInst_28;
        mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (LHSVar_18)), ((MR_Box) (LHSVarInfo_39)), STATE_VARIABLE_LocalVarMap_43_43, &STATE_VARIABLE_LocalVarMap_55_55);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/5", (MR_String) "not rhs_functor unify");
          return;
        }
      }
      check_hlds__modecheck_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Goals0_12, &Goals_14, STATE_VARIABLE_LocalVarMap_55_55, STATE_VARIABLE_LocalVarMap_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
      }
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_LocalVarMap_5 = STATE_VARIABLE_LocalVarMap_0_4;
  }
  else
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word VarInst_11;
    MR_Word VarInsts_12;
    MR_Word ArgMode_13;
    MR_Word ArgModes_14;
    MR_Word VarInfo_16;
    MR_Word LHSFromToInsts_17;
    MR_Word RHSFromToInsts_18;
    MR_Word STATE_VARIABLE_LocalVarMap_21_21;
    MR_Box conv0_VarInfo_16;

    mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_goal__check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0, ((MR_Box) (Var_9)), &conv0_VarInfo_16, STATE_VARIABLE_LocalVarMap_0_4, &STATE_VARIABLE_LocalVarMap_21_21);
    VarInfo_16 = ((MR_Word) conv0_VarInfo_16);
    VarInst_11 = (MR_Word) VarInfo_16;
    {
      LHSFromToInsts_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHSFromToInsts_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LHSFromToInsts_17, 1) = ((MR_Box) (VarInst_11));
    }
    {
      RHSFromToInsts_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSFromToInsts_18, 0) = ((MR_Box) (VarInst_11));
      MR_hl_field(MR_mktag(0), RHSFromToInsts_18, 1) = ((MR_Box) (VarInst_11));
    }
    {
      ArgMode_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgMode_13, 0) = ((MR_Box) (LHSFromToInsts_17));
      MR_hl_field(MR_mktag(0), ArgMode_13, 1) = ((MR_Box) (RHSFromToInsts_18));
    }
    check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_p_0(Vars_10, &VarInsts_12, &ArgModes_14, STATE_VARIABLE_LocalVarMap_21_21, STATE_VARIABLE_LocalVarMap_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarInst_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarInsts_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgModes_14));
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
  {
    MR_bool succeeded;
    MR_Word SubGoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_5, (MR_Integer) 0)));
    MR_Word SubGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_5, (MR_Integer) 1)));
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
    MR_Word UnifyArgGoals_13;
    MR_Word Var_30;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_40;
    MR_Word _LHSVar_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word _ConsId_46;
    MR_Word _RHSVars_47;

    NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(SubGoalInfo_10);
    succeeded = parse_tree__set_of_var__is_singleton_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_11, &Var_33);
    if (succeeded)
    {
      TypeInfo_35_35 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (TermVar_6)), ((MR_Box) (Var_33)));
      if (succeeded)
      {
        Var_20 = hlds__hlds_goal__goal_info_get_purity_1_f_0(SubGoalInfo_10);
        succeeded = (Var_20 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) SubGoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr_9, (MR_Integer) 1)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubGoalExpr_9, (MR_Integer) 2)));
            succeeded = (Var_21 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                UnifyTermGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
                UnifyArgGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1)));
                Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyTermGoal_12, (MR_Integer) 0)));
                Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyTermGoal_12, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
                  Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 2)));
                  Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 3)));
                  Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 4)));
                  TypeInfo_36_36 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (TermVar_6)), ((MR_Box) (Var_34)));
                  if (succeeded)
                  {
                    Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
                    Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1)));
                    GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_37, (MR_Integer) 0)));
                    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_37, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      _LHSVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 0)));
                      RHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 1)));
                      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 2)));
                      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 3)));
                      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 4)));
                      succeeded = ((MR_tag((MR_Word) RHS_42)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        _ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_42, (MR_Integer) 0)));
                        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_42, (MR_Integer) 1)));
                        _RHSVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_42, (MR_Integer) 2)));
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
      succeeded = (TermVarInst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        MR_Word RevConj_18;
        MR_Word Var_26;

        mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Var_22, &RevConj_18);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (RevConj_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGroundTermMode_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
        }
      }
      else
      {
        MR_Word Var_27;
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) TermVarInst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TermVarInst_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), TermVarInst_7, (MR_Integer) 1)));
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), TermVarInst_7, (MR_Integer) 2)));
          succeeded = (Var_27 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGroundTermMode_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
          }
        }
        else
          *MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      *MaybeGroundTermMode_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__all_plain_construct_unifies_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0)));
      MR_Word RHS_7;
      MR_Word Var_13;
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 1)));
      MR_Word _LHSVar_6;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word _ConsId_11;
      MR_Word _RHSVars_12;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) GoalExpr_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        _LHSVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 0)));
        RHS_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 1)));
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 2)));
        Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 3)));
        Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) RHS_7)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          _ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_7, (MR_Integer) 0)));
          Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_7, (MR_Integer) 1)));
          _RHSVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_7, (MR_Integer) 2)));
          succeeded = (Var_13 == (MR_Integer) 0);
          if (succeeded)
          {
            // direct tailcall eliminated
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
  {
    MR_Word TypeInfo_73_73;
    MR_Word VarTypes0_12;
    MR_Word VarSet0_13;
    MR_Word CloneVar_14;
    MR_Word VarSet_15;
    MR_Word TermVarType_16;
    MR_Word VarTypes_17;
    MR_Word Rename_18;
    MR_Word SubGoal_19;
    MR_Word ScopeGoalInfo1_20;
    MR_Word InstMap0_21;
    MR_Word TermVarOldInst_22;
    MR_Word ScopeInstMapDelta_23;
    MR_Word ScopeGoalInfo_24;
    MR_Word Reason_25;
    MR_Word ScopeGoalExpr_26;
    MR_Word ScopeGoal_27;
    MR_Word TermVarUniqueInst_28;
    MR_Word InstMap1_29;
    MR_Word Context_30;
    MR_Word TypeInfoVar_31;
    MR_Word TypeInfoGoals_32;
    MR_Word InstMapDelta_33;
    MR_Word ModuleInfo_34;
    MR_Word CopyGoal_35;
    MR_Word InstMap2_36;
    MR_Word InstMap_37;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word STATE_VARIABLE_ModeInfo_41_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_ModeInfo_49_49;
    MR_Word STATE_VARIABLE_ModeInfo_50_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &VarTypes0_12);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &VarSet0_13);
    mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &CloneVar_14, VarSet0_13, &VarSet_15);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_12, TermVar_7, &TermVarType_16);
    hlds__vartypes__add_var_type_4_p_0(CloneVar_14, TermVarType_16, VarTypes0_12, &VarTypes_17);
    check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_15, STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_17, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
    TypeInfo_73_73 = (MR_Word) &check_hlds__modecheck_goal_scalar_common_1[0];
    Rename_18 = mercury__map__singleton_2_f_0(TypeInfo_73_73, TypeInfo_73_73, ((MR_Box) (TermVar_7)), ((MR_Box) (CloneVar_14)));
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Rename_18, SubGoal0_8, &SubGoal_19);
    hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Rename_18, GoalInfo0_9, &ScopeGoalInfo1_20);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &InstMap0_21);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_21, TermVar_7, &TermVarOldInst_22);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (CloneVar_14));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (TermVarOldInst_22));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ScopeInstMapDelta_23 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_43);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ScopeInstMapDelta_23, ScopeGoalInfo1_20, &ScopeGoalInfo_24);
    {
      Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Reason_25, 1) = ((MR_Box) (CloneVar_14));
      MR_hl_field(MR_mktag(3), Reason_25, 2) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ScopeGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_26, 1) = ((MR_Box) (Reason_25));
      MR_hl_field(MR_mktag(3), ScopeGoalExpr_26, 2) = ((MR_Box) (SubGoal_19));
    }
    {
      ScopeGoal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ScopeGoal_27, 0) = ((MR_Box) (ScopeGoalExpr_26));
      MR_hl_field(MR_mktag(0), ScopeGoal_27, 1) = ((MR_Box) (ScopeGoalInfo_24));
    }
    TermVarUniqueInst_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_goal_scalar_common_2[1]);
    hlds__instmap__instmap_set_var_4_p_0(CloneVar_14, TermVarOldInst_22, InstMap0_21, &InstMap1_29);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_29, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_49_49);
    Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
    check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(TermVarType_16, Context_30, &TypeInfoVar_31, &TypeInfoGoals_32, STATE_VARIABLE_ModeInfo_49_49, &STATE_VARIABLE_ModeInfo_50_50);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (TermVar_7));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (TermVarUniqueInst_28));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    InstMapDelta_33 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_51);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &ModuleInfo_34);
    Var_54 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TermVar_7));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CloneVar_14));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TypeInfoVar_31));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
    }
    hlds__goal_util__generate_simple_call_12_p_0(Var_54, (MR_String) "copy", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__modecheck_goal_scalar_common_4[0]), (MR_Integer) 0, (MR_Integer) 0, Var_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InstMapDelta_33, ModuleInfo_34, Context_30, &CopyGoal_35);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &InstMap2_36);
    hlds__instmap__instmap_set_var_4_p_0(TermVar_7, TermVarUniqueInst_28, InstMap2_36, &InstMap_37);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_37, STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_39);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (ScopeGoal_27));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (TypeInfoGoals_32));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CopyGoal_35));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Var_69, Var_70);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_68));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_make_type_info_var_for_type__998__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_12;
    MR_Word PredId_13;
    MR_Integer ProcId_14;
    MR_Word PredInfo0_15;
    MR_Word ProcInfo0_16;
    MR_Word VarTypes0_17;
    MR_Word VarSet0_18;
    MR_Word ProcInfo1_19;
    MR_Word ProcInfo2_20;
    MR_Word PolyInfo0_21;
    MR_Word PolyInfo_22;
    MR_Word PolySpecs_23;
    MR_Word PredInfo_24;
    MR_Word ProcInfo_25;
    MR_Word ModuleInfo1_26;
    MR_Word ModuleInfo_27;
    MR_Word VarSet_28;
    MR_Word VarTypes_29;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModeInfo_37_37;
    MR_Word STATE_VARIABLE_ModeInfo_38_38;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &ModuleInfo0_12);
    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &PredId_13);
    check_hlds__mode_info__mode_info_get_proc_id_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &ProcId_14);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_12, PredId_13, ProcId_14, &PredInfo0_15, &ProcInfo0_16);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &VarTypes0_17);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &VarSet0_18);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet0_18, ProcInfo0_16, &ProcInfo1_19);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes0_17, ProcInfo1_19, &ProcInfo2_20);
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_12, PredInfo0_15, ProcInfo2_20, &PolyInfo0_21);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Type_7, Context_8, TypeInfoVar_9, TypeInfoGoals_10, PolyInfo0_21, &PolyInfo_22);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_22, &PolySpecs_23, PredInfo0_15, &PredInfo_24, ProcInfo2_20, &ProcInfo_25, &ModuleInfo1_26);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__modecheck_goal_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (PolySpecs_23));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_32, (MR_String) "check_hlds.modecheck_goal", (MR_String) "predicate \140check_hlds.modecheck_goal.modecheck_make_type_info_var_for_type\'/6", (MR_String) "got errors while making type_info_var");
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_13, ProcId_14, PredInfo_24, ProcInfo_25, ModuleInfo1_26, &ModuleInfo_27);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_25, &VarSet_28);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_25, &VarTypes_29);
    check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_28, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_37_37);
    check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_29, STATE_VARIABLE_ModeInfo_37_37, &STATE_VARIABLE_ModeInfo_38_38);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_27, STATE_VARIABLE_ModeInfo_38_38, STATE_VARIABLE_ModeInfo_31);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) env_ptr_arg;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, &(env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20);
    (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__ModuleInfo_20, (env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__Inst_19);
    if ((env_ptr)->check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
      check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s *) env_ptr_arg;

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
  {
    struct check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0_s env;

    (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap0_3 = InstMap0_3;
    (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__InstMap_4 = InstMap_4;
    (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5 = STATE_VARIABLE_ModeInfo_0_5;
    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_ModeInfo_6 = (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5;
      else
      {
        MR_Word NonLocals_15;

        (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_3(&env);
        if ((env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__succeeded)
        {
          MR_Word WaitingVars_21;
          MR_Word ModeError_22;

          WaitingVars_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14);
          {
            ModeError_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), ModeError_22, 1) = ((MR_Box) (NegCtxtDesc_1));
            MR_hl_field(MR_mktag(3), ModeError_22, 2) = ((MR_Box) ((env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__NonLocal_14));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_21, ModeError_22, (env).check_hlds__modecheck_goal__check_no_inst_any_vars_6_p_0_env_0__STATE_VARIABLE_ModeInfo_0_5, STATE_VARIABLE_ModeInfo_6);
        }
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = NonLocals_15;

          // direct tailcall eliminated
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
      break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(
  MR_Word Goal_3)
{
  {
    MR_Word LargeFlatConstructs_4;
    MR_Word GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        break;
      case (MR_Integer) 1:
        {
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        break;
      case (MR_Integer) 2:
        {
          LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));

              switch (Var_101) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_69;

                    Var_69 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    check_hlds__modecheck_goal__goals_large_flat_constructs_3_p_0(Var_100, Var_69, &LargeFlatConstructs_4);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            break;
          case (MR_Integer) 4:
            {
              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));
              MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Reason_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_41, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_41, (MR_Integer) 2)));
                        MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_41, (MR_Integer) 1)));

                        switch (Var_102) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              LargeFlatConstructs_4 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_103);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            break;
          case (MR_Integer) 7:
            {
              LargeFlatConstructs_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            break;
        }
        break;
    }
    return LargeFlatConstructs_4;
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_LargeFlatConstructs_3 = STATE_VARIABLE_LargeFlatConstructs_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalLargeFlatConstructs_10;
      MR_Word STATE_VARIABLE_LargeFlatConstructs_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2;

      GoalLargeFlatConstructs_10 = check_hlds__modecheck_goal__goal_large_flat_constructs_1_f_0(Goal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, GoalLargeFlatConstructs_10, STATE_VARIABLE_LargeFlatConstructs_0_2, &STATE_VARIABLE_LargeFlatConstructs_13_13);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2 = STATE_VARIABLE_LargeFlatConstructs_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LargeFlatConstructs_0_2 = next_value_of_STATE_VARIABLE_LargeFlatConstructs_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_goal____Compare____construct_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_goal____Unify____construct_var_info_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_goal____Compare____construct_var_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_goal____Unify____ground_term_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_goal____Unify____ground_term_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_goal____Compare____ground_term_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_goal____Compare____ground_term_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
