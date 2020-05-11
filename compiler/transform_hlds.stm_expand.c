/*
** Automatically generated from `stm_expand.m'
** by the Mercury compiler,
** version rotd-2020-05-11
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


// :- module transform_hlds.stm_expand.
// :- implementation.

/*
INIT mercury__transform_hlds__stm_expand__init
ENDINIT
*/

#include "transform_hlds.stm_expand.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1];

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7];

static const MR_DuArgLocn transform_hlds__stm_expand__transform_hlds__stm_expand__field_locns_stm_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1];

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2661__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2660__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14);

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_27);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2149__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1847__1_4_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_55_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1027__1_5_p_0(
  MR_Word IsValidConstVar_17,
  MR_Word LambdaHeadVar__1_81,
  MR_Word * LambdaHeadVar__2_82,
  MR_Word LambdaHeadVar__3_83,
  MR_Word * LambdaHeadVar__4_84);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1010__1_5_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word * LambdaHeadVar__2_53,
  MR_Word * LambdaHeadVar__3_54,
  MR_Word LambdaHeadVar__4_55,
  MR_Word * LambdaHeadVar__5_56);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__599__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
  MR_Word ProgVar_12,
  MR_Word STATE_VARIABLE_NewPredVarSet_0_20,
  MR_Word * STATE_VARIABLE_NewPredVarSet_21,
  MR_Word STATE_VARIABLE_NewPredVarTypes_0_22,
  MR_Word * STATE_VARIABLE_NewPredVarTypes_23,
  MR_Word STATE_VARIABLE_OldPredVarSet_0_24,
  MR_Word * STATE_VARIABLE_OldPredVarSet_25,
  MR_Word STATE_VARIABLE_OldPredVarTypes_0_26,
  MR_Word * STATE_VARIABLE_OldPredVarTypes_27,
  MR_Word STATE_VARIABLE_VarMapping_0_28,
  MR_Word * STATE_VARIABLE_VarMapping_29);

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0(
  MR_Word GoalVar_4,
  MR_Word STATE_VARIABLE_GoalList_0_9,
  MR_Word * STATE_VARIABLE_GoalList_10);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
  MR_Word Instmap0_10,
  MR_Word Cond0_11,
  MR_Word Then0_12,
  MR_Word Else0_13,
  MR_Word * Cond_14,
  MR_Word * Then_15,
  MR_Word * Else_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
  MR_Word Instmap_6,
  MR_Word GoalList0_7,
  MR_Word * GoalList_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
  MR_Word Instmap0_6,
  MR_Word GoalList0_7,
  MR_Word * GoalList_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_99,
  MR_Word * STATE_VARIABLE_Info_100);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0(
  MR_Word Context_12,
  MR_Word GoalType_13,
  MR_Word InitInstmap_14,
  MR_Word FinalInstmap_15,
  MR_Word Outer_16,
  MR_Word MainGoal_18,
  MR_Word OrElseGoals_19,
  MR_Word * FinalGoal_20,
  MR_Word STATE_VARIABLE_StmInfo_0_27,
  MR_Word * STATE_VARIABLE_StmInfo_28);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0(
  MR_Word Context_13,
  MR_Word InitInstmap_14,
  MR_Word FinalInstmap_15,
  MR_Word OuterDI_16,
  MR_Word OuterUO_17,
  MR_Word AtomicGoal0_20,
  MR_Word OrElseGoals0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_StmInfo_0_57,
  MR_Word * STATE_VARIABLE_StmInfo_58);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__811__1_8_p_0(
  MR_Word Context_13,
  MR_Word ResultType_46,
  MR_Word ResultVar_47,
  MR_Word LambdaHeadVar__1_96,
  MR_Word LambdaHeadVar__2_97,
  MR_Word * LambdaHeadVar__3_98,
  MR_Word LambdaHeadVar__4_99,
  MR_Word * LambdaHeadVar__5_100);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word ResultType_12,
  MR_Word ResultVar0_13,
  MR_Word AtomicGoal_14,
  MR_Word * PredProcId_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_19,
  MR_Word * STATE_VARIABLE_StmInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_StmInfo_0_29,
  MR_Word * STATE_VARIABLE_StmInfo_30);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_StmInfo_0_14,
  MR_Word * STATE_VARIABLE_StmInfo_15);

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word Types_3,
  MR_Word * ReturnType_4);

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word OuterDI_12,
  MR_Word OuterUO_13,
  MR_Word AtomicGoal_14,
  MR_Word OrElseGoals_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0(
  MR_Word Context_8,
  MR_Word AtomicGoalVarList_9,
  MR_Word * CallGoal_10,
  MR_Word AtomicGoal_11,
  MR_Word OrElseGoals_12,
  MR_Word STATE_VARIABLE_StmInfo_0_23,
  MR_Word * STATE_VARIABLE_StmInfo_24);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word RecCallGoal_12,
  MR_Word AtomicGoal_13,
  MR_Word OrElseGoals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29,
  MR_Word STATE_VARIABLE_StmInfo_0_30,
  MR_Word * STATE_VARIABLE_StmInfo_31);

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word StmInfo_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * STATE_VARIABLE_NewPredInfo_8);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word ResultType_12,
  MR_Word ResultVar_13,
  MR_Word GoalList_14,
  MR_Word * PredProcId_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_35,
  MR_Word * STATE_VARIABLE_StmInfo_36);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1386__1_8_p_0(
  MR_Word Context_10,
  MR_Word ResultType_12,
  MR_Word ResultVar_13,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Word LambdaHeadVar__4_41,
  MR_Word * LambdaHeadVar__5_42);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_10_p_0(
  MR_Word Context_11,
  MR_Word AtomicGoalVars_12,
  MR_Word ResultType_13,
  MR_Word ResultVar0_14,
  MR_Word STATE_VARIABLE_AtomicGoal_0_32,
  MR_Word * PredProcId_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_33,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_34,
  MR_Word * STATE_VARIABLE_StmInfo_35);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_12_p_0(
  MR_Word Context_13,
  MR_Word AtomicGoalVars_14,
  MR_Word AtomicGoal_15,
  MR_Word ResultType_16,
  MR_Word ResultVar_17,
  MR_Word StmDI_18,
  MR_Word StmUO_19,
  MR_Word CopySTM_20,
  MR_Word * Goal_21,
  MR_Word StmInfo_22,
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word BranchGoalVars_12,
  MR_Word Closures_13,
  MR_Word StmDI_14,
  MR_Word StmUO_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word Closures_12,
  MR_Word StmDI_13,
  MR_Word StmUO_14,
  MR_Word ReturnType_15,
  MR_Word StmInfo_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_8_p_0(
  MR_Word Context_9,
  MR_Word StmVars_10,
  MR_Word OuterSTMDI_11,
  MR_Word OuterSTMUO_12,
  MR_Word ExceptionRttiVar_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * STATE_VARIABLE_NewPredInfo_42);

static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
  MR_Word Src1_9,
  MR_Word Src2_10,
  MR_Word Src3_11,
  MR_Word * Dest_12,
  MR_Word STATE_VARIABLE_Accum_0_22,
  MR_Word * STATE_VARIABLE_Accum_23);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1861__1_6_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word LambdaHeadVar__3_55,
  MR_Word * LambdaHeadVar__4_56,
  MR_Word LambdaHeadVar__5_57,
  MR_Word * LambdaHeadVar__6_58);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0(
  MR_Word Context_9,
  MR_Word StmVars_10,
  MR_Word UnlockAfterwards_11,
  MR_Word ValidGoal_12,
  MR_Word InvalidGoal_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_35,
  MR_Word * STATE_VARIABLE_NewPredInfo_36);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer Count_5,
  MR_Word * Vars_6,
  MR_Word STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * STATE_VARIABLE_NewPredInfo_12);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_14_p_0(
  MR_Word Context_15,
  MR_Word AtomicGoalVars_16,
  MR_Word ReturnType_17,
  MR_Word OuterStmDIVar_18,
  MR_Word OuterStmUOVar_19,
  MR_Word InnerSTMVars_20,
  MR_Word RttiVar_21,
  MR_Word RollbackExceptionRttiVar_22,
  MR_Word WrapperIDs_23,
  MR_Word EndBranch_24,
  MR_Word * Goal_25,
  MR_Word StmInfo_26,
  MR_Word STATE_VARIABLE_NewPredInfo_0_35,
  MR_Word * STATE_VARIABLE_NewPredInfo_36);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_14_p_0(
  MR_Word Context_15,
  MR_Word AtomicGoalVars_16,
  MR_Word ReturnType_17,
  MR_Word OuterStmDIVar_18,
  MR_Word OuterStmUOVar_19,
  MR_Word InnerSTMVar_20,
  MR_Word RttiVar_21,
  MR_Word RollbackExceptionRttiVar_22,
  MR_Word WrapperID_23,
  MR_Word RetryBranch_24,
  MR_Word * Goal_25,
  MR_Word StmInfo_26,
  MR_Word STATE_VARIABLE_NewPredInfo_0_51,
  MR_Word * STATE_VARIABLE_NewPredInfo_52);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
  MR_Word AtomicGoalVars_10,
  MR_Word ResultType_11,
  MR_Word ResultVar0_12,
  MR_Word STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * PredProcId_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_31,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_32,
  MR_Word * STATE_VARIABLE_StmInfo_33);

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word NewPredInfo0_3,
  MR_Word * PredProcId_4);

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17);

static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
  MR_Word STATE_VARIABLE_NewPredInfo_0_9,
  MR_Word * STATE_VARIABLE_NewPredInfo_10);

static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
  MR_Word NewPred_4,
  MR_Word StmInfo0_5,
  MR_Word * StmInfo_6);

static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
  MR_Word NewHeadVars_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_8,
  MR_Word * STATE_VARIABLE_NewPredInfo_9);

static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
  MR_Word ProcHeadVars_11,
  MR_Word PredArgTypes_12,
  MR_Word ProcHeadModes_13,
  MR_String Prefix_14,
  MR_Word OrigGoal_15,
  MR_Word MaybeDetism_16,
  MR_Word * NewStmPredInfo_17,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_66,
  MR_Word * STATE_VARIABLE_StmInfo_67);

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
  MR_String Name_9,
  MR_Word ResultVar0_10,
  MR_Word ResultType_11,
  MR_Word * ResultVar_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_31,
  MR_Word * STATE_VARIABLE_NewPredInfo_32,
  MR_Word STATE_VARIABLE_Goal_0_33,
  MR_Word * STATE_VARIABLE_Goal_34);

static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
  MR_Word AtomicGoalVars_12,
  MR_Word AtomicGoal_13,
  MR_Word ResultType_14,
  MR_Word ResultVar_15,
  MR_Word StmDI_16,
  MR_Word StmUO_17,
  MR_Word CopySTM_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_50,
  MR_Word * STATE_VARIABLE_NewPredInfo_51);

static void MR_CALL 
transform_hlds__stm_expand__construct_output_8_p_0(
  MR_Word Context_9,
  MR_Word AtomicGoalVars_10,
  MR_Word ResultType_11,
  MR_Word ResultVar_12,
  MR_Word StmInfo_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_29,
  MR_Word * STATE_VARIABLE_NewPredInfo_30);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word AtomicGoal0_10,
  MR_Word * AtomicGoal_11,
  MR_Word AtomicGoalVars_12,
  MR_Word InnerDI_13,
  MR_Word InnerUO_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * STATE_VARIABLE_NewPredInfo_42,
  MR_Word STATE_VARIABLE_StmInfo_0_43,
  MR_Word * STATE_VARIABLE_StmInfo_44);

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
  MR_Word GoalList_3,
  MR_Word * GoalVar_4);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_11_p_0(
  MR_Word Context_12,
  MR_Word AtomicGoalVars_13,
  MR_Word ReturnType_14,
  MR_Word StmVarDI_15,
  MR_Word StmVarUO_16,
  MR_Word WrapperID_17,
  MR_Word RecCall_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_42,
  MR_Word * STATE_VARIABLE_NewPredInfo_43);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * InputModes_5,
  MR_Word * OutputModes_6);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
  MR_Word StmGoalVars_5,
  MR_Word StmInfo_6,
  MR_Word * InputTypes_7,
  MR_Word * OutputTypes_8);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * Input_5,
  MR_Word * Output_6);

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word GoalIn_4,
  MR_Word ScopePurity_5,
  MR_Word * GoalOut_6);

static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
  MR_Word PredProcID_9,
  MR_Word Args_10,
  MR_Word ArgTypes_11,
  MR_Word ArgModes_12,
  MR_Word * ClosureVar_13,
  MR_Word * ClosureAssignGoal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
  MR_Word AtomicGoalVars_8,
  MR_Word ReturnType_9,
  MR_Word ReturnExceptVar_10,
  MR_Word * Goal_11,
  MR_Word StmInfo_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29);

static MR_bool MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word Type_6,
  MR_Word * Var_7,
  MR_Word * Goals_8,
  MR_Word NewPredInfo0_9,
  MR_Word * NewPredInfo_10);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_8_p_0(
  MR_Word Context_9,
  MR_Word ExceptVar_10,
  MR_Word StmVar_11,
  MR_Word ReturnType_12,
  MR_Word RecCall_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27);

static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
  MR_Word StmVar_6,
  MR_Word RecCall_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_15);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
  MR_Word StmVar_8,
  MR_Word ExceptionVar_9,
  MR_Word ReturnType_10,
  MR_Word RecursiveCall_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_21,
  MR_Word * STATE_VARIABLE_NewPredInfo_22);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
  MR_Word StmVar_8,
  MR_Word UnlockAfterwards_9,
  MR_Word ValidGoal_10,
  MR_Word InvalidGoal_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * STATE_VARIABLE_NewPredInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
  MR_Word ProgVar_8,
  MR_Word Cases_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word * OutGoal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * STATE_VARIABLE_NewPredInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(
  MR_Word Context_10,
  MR_Word RttiVar_11,
  MR_Word ExceptVar_12,
  MR_Word RollbackExceptCons_13,
  MR_Word TrueGoal_14,
  MR_Word FalseGoal_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_27,
  MR_Word * STATE_VARIABLE_NewPredInfo_28);

static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
  MR_Word GoalsInConj_3,
  MR_Word * ConjGoal_4);

static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
  MR_Word ExistVars_10,
  MR_Word Cond_11,
  MR_Word Then_12,
  MR_Word Else_13,
  MR_Word Detism_14,
  MR_Word Purity_15,
  MR_Word * OutGoal_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_23,
  MR_Word * STATE_VARIABLE_NewPredInfo_24);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word ModuleName_13,
  MR_String ProcName_14,
  MR_Word PredOrFunc_15,
  MR_Word Mode_16,
  MR_Word Detism_17,
  MR_Word Purity_18,
  MR_Word ProgVars_19,
  MR_Word GoalFeatures_20,
  MR_Word InstmapDelta_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27);

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_29,
  MR_Word * STATE_VARIABLE_NewPredInfo_30);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(
  MR_Word Context_9,
  MR_Word ConsId_10,
  MR_Word Type_11,
  MR_Word MaybeName_12,
  MR_Word * Goal_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17);

static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word * StmOutDI_9,
  MR_Word * StmOutUO_10,
  MR_Word * StmInDI_11,
  MR_Word * StmInUO_12);

static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
  MR_Word InitInstmap_10,
  MR_Word FinalInstmap_11,
  MR_Word Goals_12,
  MR_Word InnerDIs_13,
  MR_Word InnerUOs_14,
  MR_Word IgnoreVarList0_15,
  MR_Word * StmGoalVarList_16,
  MR_Word STATE_VARIABLE_StmInfo_0_27,
  MR_Word * STATE_VARIABLE_StmInfo_28);

static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word InitInstmap_3,
  MR_Word FinalInstmap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[3][6];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[26][1];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[1][14];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[2][8];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--temp-context--")),
    ((MR_Box) ((MR_Integer) 999))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__stm_expand__stm_process_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__stm_expand__create_or_else_end_branch_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_2_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_top_level_pred_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[26][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "UnivPayload"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "RollbackExcpt"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "ValidResult"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "ExceptUnivVar"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "BoringResult"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "SuccessResult"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "Closure"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "ExceptionResult"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_IsValid"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_Rollback"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "NewUO"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "InnerSTM0"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "ExcptRes"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "InnSTM"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "IsValidConst"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "RetryCons"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "RollbackCons"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "STMDI"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "STMUO"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "ResultVar"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "STM0"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "STM"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "res"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "InterSTM"))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5] = {
  (MR_String) "vars_input",
  (MR_String) "vars_local",
  (MR_String) "vars_output",
  (MR_String) "vars_innerDI",
  (MR_String) "vars_innerUO"
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 = {
  (MR_String) "stm_goal_vars",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_goal_vars",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7] = {
  (MR_String) "stm_info_module_info",
  (MR_String) "stm_info_pred_id",
  (MR_String) "stm_info_proc_id",
  (MR_String) "stm_info_proc_info",
  (MR_String) "stm_info_pred_info",
  (MR_String) "stm_info_requalify",
  (MR_String) "stm_info_expand_id"
};

static const MR_DuArgLocn transform_hlds__stm_expand__transform_hlds__stm_expand__field_locns_stm_info_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 = {
  (MR_String) "stm_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_locns_stm_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7] = {
  (MR_String) "new_pred_module_info",
  (MR_String) "new_pred_pred_id",
  (MR_String) "new_pred_proc_id",
  (MR_String) "new_pred_pred_info",
  (MR_String) "new_pred_proc_info",
  (MR_String) "new_pred_context",
  (MR_String) "new_pred_var_cnt"
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 = {
  (MR_String) "stm_new_pred_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_new_pred_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0
};

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2661__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_49_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_12, HeadVar__3_20);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20)
{
  *HeadVar__3_20 = HeadVar__1_12;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2660__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_10, HeadVar__3_14);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_54_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14)
{
  *HeadVar__3_14 = HeadVar__1_10;
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[4]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_27)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2149__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_35)), ((MR_Box) (ResultVar0_10)));
    if (succeeded)
      *LambdaHeadVar__2_36 = ResultVar_12;
    else
      *LambdaHeadVar__2_36 = LambdaHeadVar__1_35;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1847__1_4_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_55_95_95_49_95_95_91_49_93_95_48_4_p_0(LambdaHeadVar__2_44, LambdaHeadVar__3_45, LambdaHeadVar__4_46);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_55_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46)
{
  {
    MR_Word Var_47;

    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_47, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[25])), LambdaHeadVar__2_44, LambdaHeadVar__3_45, LambdaHeadVar__4_46);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1027__1_5_p_0(
  MR_Word IsValidConstVar_17,
  MR_Word LambdaHeadVar__1_81,
  MR_Word * LambdaHeadVar__2_82,
  MR_Word LambdaHeadVar__3_83,
  MR_Word * LambdaHeadVar__4_84)
{
  {
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    Var_86 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_87 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_88 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_89 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Var_89));
    }
    transform_hlds__stm_expand__create_var_test_6_p_0(LambdaHeadVar__1_81, IsValidConstVar_17, Var_85, LambdaHeadVar__2_82, LambdaHeadVar__3_83, LambdaHeadVar__4_84);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1010__1_5_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word * LambdaHeadVar__2_53,
  MR_Word * LambdaHeadVar__3_54,
  MR_Word LambdaHeadVar__4_55,
  MR_Word * LambdaHeadVar__5_56)
{
  {
    MR_Word NPI1_25;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_77;

    Var_57 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_57, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[3])), LambdaHeadVar__3_54, LambdaHeadVar__4_55, &NPI1_25);
    Var_60 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (*LambdaHeadVar__3_54));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LambdaHeadVar__1_52));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (LambdaHeadVar__1_52));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3])));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (*LambdaHeadVar__3_54));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_76));
    }
    Var_68 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_71);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_60, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_66, (MR_Word) ((MR_Unsigned) 0U), Var_68, LambdaHeadVar__2_53, NPI1_25, LambdaHeadVar__5_56);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__599__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 0))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 3))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  *LambdaHeadVar__2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 0))));
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_pred____Compare____pred_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_pred____Compare____proc_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__term____Compare____context_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = mercury__term____Unify____context_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_pred____Compare____proc_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_pred____Compare____pred_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_33 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_34 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_33 < Var_34);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_33 > Var_34);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
  MR_Word ProgVar_12,
  MR_Word STATE_VARIABLE_NewPredVarSet_0_20,
  MR_Word * STATE_VARIABLE_NewPredVarSet_21,
  MR_Word STATE_VARIABLE_NewPredVarTypes_0_22,
  MR_Word * STATE_VARIABLE_NewPredVarTypes_23,
  MR_Word STATE_VARIABLE_OldPredVarSet_0_24,
  MR_Word * STATE_VARIABLE_OldPredVarSet_25,
  MR_Word STATE_VARIABLE_OldPredVarTypes_0_26,
  MR_Word * STATE_VARIABLE_OldPredVarTypes_27,
  MR_Word STATE_VARIABLE_VarMapping_0_28,
  MR_Word * STATE_VARIABLE_VarMapping_29)
{
  {
    MR_Word ProgType_18;
    MR_Word NewProgVar_19;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_OldPredVarTypes_0_26, ProgVar_12, &ProgType_18);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewProgVar_19, STATE_VARIABLE_NewPredVarSet_0_20, STATE_VARIABLE_NewPredVarSet_21);
    hlds__vartypes__add_var_type_4_p_0(NewProgVar_19, ProgType_18, STATE_VARIABLE_NewPredVarTypes_0_22, STATE_VARIABLE_NewPredVarTypes_23);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (ProgVar_12)), ((MR_Box) (NewProgVar_19)), STATE_VARIABLE_VarMapping_0_28, STATE_VARIABLE_VarMapping_29);
    *STATE_VARIABLE_OldPredVarTypes_27 = STATE_VARIABLE_OldPredVarTypes_0_26;
    *STATE_VARIABLE_OldPredVarSet_25 = STATE_VARIABLE_OldPredVarSet_0_24;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__599__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0(
  MR_Word GoalVar_4,
  MR_Word STATE_VARIABLE_GoalList_0_9,
  MR_Word * STATE_VARIABLE_GoalList_10)
{
  {
    MR_Word CopyInputVarLambda_6;

    {
      CopyInputVarLambda_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 1) = ((MR_Box) (transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 3) = ((MR_Box) (GoalVar_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), CopyInputVarLambda_6, STATE_VARIABLE_GoalList_0_9, STATE_VARIABLE_GoalList_10);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_Word PredTable0_8;
    MR_Word PredInfo0_9;
    MR_Word ProcTable0_10;
    MR_Word ProcInfo0_11;
    MR_Word ProcInfo_12;
    MR_Word PredInfo1_13;
    MR_Word ProcTable1_14;
    MR_Word ProcTable_15;
    MR_Word PredInfo_16;
    MR_Word PredTable1_17;
    MR_Word PredTable_18;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word Goal0_38;
    MR_Word InitInstmap_39;
    MR_Word StmInfo0_40;
    MR_Word Goal_41;
    MR_Word StmInfo_42;
    MR_Word RecalcInfo_45;
    MR_Word STATE_VARIABLE_ModuleInfo_31_49;
    MR_Word STATE_VARIABLE_ProcInfo_32_50;
    MR_Word STATE_VARIABLE_ProcInfo_34_52;
    MR_Box conv0_PredInfo0_9;
    MR_Box conv1_ProcInfo0_11;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &PredTable0_8);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_8, ((MR_Box) (PredId_5)), &conv0_PredInfo0_9);
    PredInfo0_9 = ((MR_Word) (conv0_PredInfo0_9));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &ProcTable0_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_10, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_11);
    ProcInfo0_11 = ((MR_Word) (conv1_ProcInfo0_11));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_11, &Goal0_38);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo0_11, STATE_VARIABLE_ModuleInfo_0_19, &InitInstmap_39);
    {
      StmInfo0_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StmInfo0_40, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 1) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 2) = ((MR_Box) (ProcId_6));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 3) = ((MR_Box) (ProcInfo0_11));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 4) = ((MR_Box) (PredInfo0_9));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__stm_expand__stm_process_goal_5_p_0(InitInstmap_39, Goal0_38, &Goal_41, StmInfo0_40, &StmInfo_42);
    STATE_VARIABLE_ModuleInfo_31_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 0))));
    STATE_VARIABLE_ProcInfo_32_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 3))));
    PredInfo1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 4))));
    RecalcInfo_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 5))) & (MR_Integer) 1);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_41, STATE_VARIABLE_ProcInfo_32_50, &STATE_VARIABLE_ProcInfo_34_52);
    switch (RecalcInfo_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ProcInfo_12 = STATE_VARIABLE_ProcInfo_34_52;
          STATE_VARIABLE_ModuleInfo_21_21 = STATE_VARIABLE_ModuleInfo_31_49;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ProcInfo_36_54;

          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_34_52, &STATE_VARIABLE_ProcInfo_36_54);
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_36_54, &ProcInfo_12, STATE_VARIABLE_ModuleInfo_31_49, &STATE_VARIABLE_ModuleInfo_21_21);
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_13, &ProcTable1_14);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_12)), ProcTable1_14, &ProcTable_15);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo1_13, &PredInfo_16);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &PredTable1_17);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_16)), PredTable1_17, &PredTable_18);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_18, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_20);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(HeadVar__1_1, Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_22_22);
    transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(HeadVar__1_1, Cases0_12, &Cases_14, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_5);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Goal_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
  MR_Word Instmap0_10,
  MR_Word Cond0_11,
  MR_Word Then0_12,
  MR_Word Else0_13,
  MR_Word * Cond_14,
  MR_Word * Then_15,
  MR_Word * Else_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word CondInfo_19;
    MR_Word CondInstmapDelta_20;
    MR_Word InstmapAfterCond_21;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word STATE_VARIABLE_Info_25_25;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_10, Cond0_11, Cond_14, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_24_24);
    CondInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_11, (MR_Integer) 1))));
    CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_19);
    hlds__instmap__apply_instmap_delta_3_p_0(CondInstmapDelta_20, Instmap0_10, &InstmapAfterCond_21);
    transform_hlds__stm_expand__stm_process_goal_5_p_0(InstmapAfterCond_21, Then0_12, Then_15, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_25_25);
    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_10, Else0_13, Else_16, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
  MR_Word Instmap_6,
  MR_Word GoalList0_7,
  MR_Word * GoalList_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  if ((GoalList0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *GoalList_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_16_16;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_10, &Goal_12, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_16_16);
    transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_11, &Goals_13, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalList_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
  MR_Word Instmap0_6,
  MR_Word GoalList0_7,
  MR_Word * GoalList_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  if ((GoalList0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *GoalList_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 1))));
    MR_Word InstmapDelta_12;
    MR_Word GoalInfo_13;
    MR_Word Goal_14;
    MR_Word Instmap_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Info_20_20;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_6, Goal0_10, &Goal_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_20_20);
    GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_12, Instmap0_6, &Instmap_16);
    transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_16, Goals0_11, &Goals_17, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalList_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_99,
  MR_Word * STATE_VARIABLE_Info_100)
{
  {
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_10));
          MR_Word SubGoal_24;
          MR_Word GoalExpr_119;

          transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
          GoalExpr_119 = (MR_Word) ((MR_Word) (SubGoal_24));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_119));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_100 = STATE_VARIABLE_Info_0_99;
        }
        break;
      case (MR_Integer) 2:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_100 = STATE_VARIABLE_Info_0_99;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_Info_100 = STATE_VARIABLE_Info_0_99;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Conjuncts_19;
              MR_Word GoalExpr_20;

              transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_6, Conjuncts0_18, &Conjuncts_19, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Conjuncts_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Disjuncts_22;
              MR_Word GoalExpr_118;

              transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Disjuncts0_21, &Disjuncts_22, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
              {
                GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_118, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_118, 1) = ((MR_Box) (Disjuncts_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_118));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word CanFail_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Cases_28;
              MR_Word GoalExpr_120;

              transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(Instmap_6, Cases0_27, &Cases_28, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
              {
                GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 2) = (MR_Box) ((MR_Unsigned) (CanFail_26));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 3) = ((MR_Box) (Cases_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_120));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word InnerGoal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word GoalExpr_124;
                    MR_Word InnerGoal_125;

                    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_125, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
                    {
                      GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_124, 1) = ((MR_Box) (Reason_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_124, 2) = ((MR_Box) (InnerGoal_125));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      {
                        MR_Word GoalExpr_124;
                        MR_Word InnerGoal_125;

                        transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_125, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
                        {
                          GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_124, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_124, 2) = ((MR_Box) (InnerGoal_125));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                        return;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word FGT_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (FGT_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              *Goal_8 = Goal0_7;
                              *STATE_VARIABLE_Info_100 = STATE_VARIABLE_Info_0_99;
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                              return;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word InnerGoal_33;
                              MR_Word GoalExpr_121;

                              transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_33, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
                              {
                                GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_121, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_121, 1) = ((MR_Box) (Reason_29));
                                MR_hl_field(MR_mktag(3), GoalExpr_121, 2) = ((MR_Box) (InnerGoal_33));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_121));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Cond0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Then0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Else0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;
              MR_Word GoalExpr_128;

              transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(Instmap_6, Cond0_55, Then0_56, Else0_57, &Cond_58, &Then_59, &Else_60, STATE_VARIABLE_Info_0_99, STATE_VARIABLE_Info_100);
              {
                GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 3) = ((MR_Box) (Then_59));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 4) = ((MR_Box) (Else_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_128));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_79)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 1))));
                    MR_Word GoalDisj_88;
                    MR_Word MainGoal_89;
                    MR_Word OrElseGoals_90;
                    MR_Word InstmapDelta_91;
                    MR_Word FinalInstmap_92;
                    MR_Word Context_93;
                    MR_Word STATE_VARIABLE_Info_105_105;
                    MR_Word Goal0_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 4))));
                    MR_Word Goals0_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 5))));
                    MR_Word Goal_138;
                    MR_Word Goals_139;
                    MR_Word STATE_VARIABLE_Info_16_140;
                    MR_Box conv0_MainGoal_89;

                    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_136, &Goal_138, STATE_VARIABLE_Info_0_99, &STATE_VARIABLE_Info_16_140);
                    transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_137, &Goals_139, STATE_VARIABLE_Info_16_140, &STATE_VARIABLE_Info_105_105);
                    {
                      GoalDisj_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), GoalDisj_88, 0) = ((MR_Box) (Goal_138));
                      MR_hl_field(MR_mktag(1), GoalDisj_88, 1) = ((MR_Box) (Goals_139));
                    }
                    conv0_MainGoal_89 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalDisj_88);
                    MainGoal_89 = ((MR_Word) (conv0_MainGoal_89));
                    OrElseGoals_90 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalDisj_88);
                    InstmapDelta_91 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
                    hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_91, Instmap_6, &FinalInstmap_92);
                    Context_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                    transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0(Context_93, GoalType_80, Instmap_6, FinalInstmap_92, Outer_81, MainGoal_89, OrElseGoals_90, Goal_8, STATE_VARIABLE_Info_105_105, STATE_VARIABLE_Info_100);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "try_goal");
                    return;
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
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goal_8;
    MR_Word conv3_StmOutDI_9;
    MR_Word conv2_StmOutUO_10;
    MR_Word conv1_StmInDI_11;
    MR_Word conv0_StmInUO_12;

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Goal_8, &conv3_StmOutDI_9, &conv2_StmOutUO_10, &conv1_StmInDI_11, &conv0_StmInUO_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_8));
    *wrapper_arg_3 = ((MR_Box) (conv3_StmOutDI_9));
    *wrapper_arg_4 = ((MR_Box) (conv2_StmOutUO_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_StmInDI_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0(
  MR_Word Context_12,
  MR_Word GoalType_13,
  MR_Word InitInstmap_14,
  MR_Word FinalInstmap_15,
  MR_Word Outer_16,
  MR_Word MainGoal_18,
  MR_Word OrElseGoals_19,
  MR_Word * FinalGoal_20,
  MR_Word STATE_VARIABLE_StmInfo_0_27,
  MR_Word * STATE_VARIABLE_StmInfo_28)
{
  {
    MR_Word OuterDI_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_16, (MR_Integer) 0))));
    MR_Word OuterUO_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_16, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_StmInfo_35_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Integer Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_44;

    switch (GoalType_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0(Context_12, InitInstmap_14, FinalInstmap_15, OuterDI_22, OuterUO_23, MainGoal_18, OrElseGoals_19, FinalGoal_20, STATE_VARIABLE_StmInfo_0_27, &STATE_VARIABLE_StmInfo_35_35);
        break;
      case (MR_Integer) 1:
        {
          MR_Word AtomicGoal_57;
          MR_Word MainInnerDI_60;
          MR_Word MainInnerUO_61;
          MR_Word OrElseGoals_62;
          MR_Word OrElseInnerDIs_65;
          MR_Word OrElseInnerUOs_66;
          MR_Word AtomicGoalVarList_67;
          MR_Word AtomicGoalInfo_69;
          MR_Word Context_70;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word STATE_VARIABLE_StmInfo_43_76;
          MR_Word Var_77;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_63;
          MR_Word Var_64;

          transform_hlds__stm_expand__strip_goal_calls_6_p_0(MainGoal_18, &AtomicGoal_57, &Var_58, &Var_59, &MainInnerDI_60, &MainInnerUO_61);
          mercury__list__map5_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[13]), OrElseGoals_19, &OrElseGoals_62, &Var_63, &Var_64, &OrElseInnerDIs_65, &OrElseInnerUOs_66);
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MainGoal_18));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (OrElseGoals_19));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MainInnerDI_60));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (OrElseInnerDIs_65));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MainInnerUO_61));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (OrElseInnerUOs_66));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (OuterUO_23));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (OuterDI_22));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
          }
          transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_14, FinalInstmap_15, Var_72, Var_73, Var_74, Var_75, &AtomicGoalVarList_67, STATE_VARIABLE_StmInfo_0_27, &STATE_VARIABLE_StmInfo_43_76);
          AtomicGoalInfo_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoal_57, (MR_Integer) 1))));
          Context_70 = hlds__hlds_goal__goal_info_get_context_1_f_0(AtomicGoalInfo_69);
          transform_hlds__stm_expand__create_top_level_pred_9_p_0(Context_70, AtomicGoalVarList_67, OuterDI_22, OuterUO_23, AtomicGoal_57, OrElseGoals_62, FinalGoal_20, STATE_VARIABLE_StmInfo_43_76, &STATE_VARIABLE_StmInfo_35_35);
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/11", (MR_String) "unknown atomic goal type");
          return;
        }
        break;
    }
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 1))));
    Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 2))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 3))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 4))));
    Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_35_35, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goal_8;
    MR_Word conv3_StmOutDI_9;
    MR_Word conv2_StmOutUO_10;
    MR_Word conv1_StmInDI_11;
    MR_Word conv0_StmInUO_12;

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Goal_8, &conv3_StmOutDI_9, &conv2_StmOutUO_10, &conv1_StmInDI_11, &conv0_StmInUO_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_8));
    *wrapper_arg_3 = ((MR_Box) (conv3_StmOutDI_9));
    *wrapper_arg_4 = ((MR_Box) (conv2_StmOutUO_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_StmInDI_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0(
  MR_Word Context_13,
  MR_Word InitInstmap_14,
  MR_Word FinalInstmap_15,
  MR_Word OuterDI_16,
  MR_Word OuterUO_17,
  MR_Word AtomicGoal0_20,
  MR_Word OrElseGoals0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_StmInfo_0_57,
  MR_Word * STATE_VARIABLE_StmInfo_58)
{
  {
    MR_Word AtomicGoal_24;
    MR_Word MainOuterDI_25;
    MR_Word MainOuterUO_26;
    MR_Word MainInnerDI_27;
    MR_Word MainInnerUO_28;
    MR_Word OrElseGoals_29;
    MR_Word OrElseInnerDIs_32;
    MR_Word OrElseInnerUOs_33;
    MR_Word UnifyModeUoDi_34;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_30;
    MR_Word Var_31;

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(AtomicGoal0_20, &AtomicGoal_24, &MainOuterDI_25, &MainOuterUO_26, &MainInnerDI_27, &MainInnerUO_28);
    mercury__list__map5_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[12]), OrElseGoals0_21, &OrElseGoals_29, &Var_30, &Var_31, &OrElseInnerDIs_32, &OrElseInnerUOs_33);
    Var_61 = parse_tree__prog_mode__unique_inst_0_f_0();
    Var_62 = parse_tree__prog_mode__unique_inst_0_f_0();
    Var_63 = parse_tree__prog_mode__clobbered_inst_0_f_0();
    {
      UnifyModeUoDi_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_34, 1) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_34, 2) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_34, 3) = ((MR_Box) (Var_63));
    }
    if ((OrElseGoals_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word CopyDIVars_35;
      MR_Word CopyUOVars_36;
      MR_Word STATE_VARIABLE_StmInfo_109_109;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;

      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainInnerDI_27, MainOuterDI_25, UnifyModeUoDi_34, &CopyDIVars_35, STATE_VARIABLE_StmInfo_0_57, &STATE_VARIABLE_StmInfo_109_109);
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainOuterUO_26, MainInnerUO_28, UnifyModeUoDi_34, &CopyUOVars_36, STATE_VARIABLE_StmInfo_109_109, STATE_VARIABLE_StmInfo_58);
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (CopyUOVars_36));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (AtomicGoal_24));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (CopyDIVars_35));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
      }
      transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_111, Goal_22);
    }
    else
    {
      MR_Word GoalList_40;
      MR_Word AtomicGoalVars_41;
      MR_Word AtomicGoalVarList1_42;
      MR_Word OutputTypes_45;
      MR_Word ResultType_46;
      MR_Word ResultVar_47;
      MR_Word PPIDList_55;
      MR_Word OrElseCall_56;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word STATE_VARIABLE_StmInfo_68_68;
      MR_Word Var_69;
      MR_Word STATE_VARIABLE_StmInfo_94_94;
      MR_Word STATE_VARIABLE_StmInfo_101_101;
      MR_Word STATE_VARIABLE_StmInfo_102_102;
      MR_Word STATE_VARIABLE_StmInfo_103_103;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word CopyDIVars_120;
      MR_Word CopyUOVars_121;
      MR_Word Var_44;

      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (AtomicGoal0_20));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (OrElseGoals0_21));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MainInnerDI_27));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (OrElseInnerDIs_32));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MainInnerUO_28));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (OrElseInnerUOs_33));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (OuterUO_17));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (OuterDI_16));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_14, FinalInstmap_15, Var_64, Var_65, Var_66, Var_67, &AtomicGoalVarList1_42, STATE_VARIABLE_StmInfo_0_57, &STATE_VARIABLE_StmInfo_68_68);
      {
        GoalList_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_40, 0) = ((MR_Box) (AtomicGoal_24));
        MR_hl_field(MR_mktag(1), GoalList_40, 1) = ((MR_Box) (OrElseGoals_29));
      }
      transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(AtomicGoalVarList1_42, &AtomicGoalVars_41);
      transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_41, STATE_VARIABLE_StmInfo_68_68, &Var_44, &OutputTypes_45);
      transform_hlds__stm_expand__make_return_type_2_p_0(OutputTypes_45, &ResultType_46);
      transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(ResultType_46, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[24])), &ResultVar_47, STATE_VARIABLE_StmInfo_68_68, &STATE_VARIABLE_StmInfo_94_94);
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(Context_13, ResultType_46, ResultVar_47, GoalList_40, AtomicGoalVarList1_42, &PPIDList_55, STATE_VARIABLE_StmInfo_94_94, &STATE_VARIABLE_StmInfo_101_101);
      transform_hlds__stm_expand__create_or_else_pred_9_p_0(Context_13, AtomicGoalVars_41, AtomicGoalVarList1_42, PPIDList_55, MainInnerDI_27, MainInnerUO_28, &OrElseCall_56, STATE_VARIABLE_StmInfo_101_101, &STATE_VARIABLE_StmInfo_102_102);
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainInnerDI_27, MainOuterDI_25, UnifyModeUoDi_34, &CopyDIVars_120, STATE_VARIABLE_StmInfo_102_102, &STATE_VARIABLE_StmInfo_103_103);
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainOuterUO_26, MainInnerUO_28, UnifyModeUoDi_34, &CopyUOVars_121, STATE_VARIABLE_StmInfo_103_103, STATE_VARIABLE_StmInfo_58);
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (CopyUOVars_121));
        MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (OrElseCall_56));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (CopyDIVars_120));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
      }
      transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_105, Goal_22);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19)
{
  {
    MR_bool succeeded = (Src1_8 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      succeeded = (Src2_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *Dest_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Accum_19 = STATE_VARIABLE_Accum_0_18;
    }
    else
    {
      MR_Word S_12;
      MR_Word Ss_13;
      MR_Word T_14;
      MR_Word Ts_15;

      succeeded = (Src1_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        S_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 0))));
        Ss_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 1))));
        succeeded = (Src2_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          T_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 0))));
          Ts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word R_16;
        MR_Word Rs_17;
        MR_Word STATE_VARIABLE_Accum_20_20;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__811__1_8_p_0(Var_28, Var_29, Var_30, S_12, T_14, &R_16, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_20_20);
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(Var_28, Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_20_20, STATE_VARIABLE_Accum_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_17));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__811__1_8_p_0(
  MR_Word Context_13,
  MR_Word ResultType_46,
  MR_Word ResultVar_47,
  MR_Word LambdaHeadVar__1_96,
  MR_Word LambdaHeadVar__2_97,
  MR_Word * LambdaHeadVar__3_98,
  MR_Word LambdaHeadVar__4_99,
  MR_Word * LambdaHeadVar__5_100)
{
  {
    MR_Word Var_54;

    transform_hlds__stm_expand__create_simple_wrapper_pred_9_p_0(Context_13, LambdaHeadVar__2_97, ResultType_46, ResultVar_47, LambdaHeadVar__1_96, LambdaHeadVar__3_98, &Var_54, LambdaHeadVar__4_99, LambdaHeadVar__5_100);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word ResultType_12,
  MR_Word ResultVar0_13,
  MR_Word AtomicGoal_14,
  MR_Word * PredProcId_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_19,
  MR_Word * STATE_VARIABLE_StmInfo_20)
{
  {
    MR_Word Var_18;

    transform_hlds__stm_expand__create_simple_wrapper_pred_2_10_p_0(Context_10, AtomicGoalVars_11, ResultType_12, ResultVar0_13, AtomicGoal_14, PredProcId_15, &Var_18, CallGoal_16, STATE_VARIABLE_StmInfo_0_19, STATE_VARIABLE_StmInfo_20);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_StmInfo_0_29,
  MR_Word * STATE_VARIABLE_StmInfo_30)
{
  {
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_29, (MR_Integer) 0))));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSInitInst_17;
    MR_Word LHSFinalInst_18;
    MR_Word RHSInitInst_19;
    MR_Word RHSFinalInst_20;
    MR_Word LHSTuple_21;
    MR_Word RHSTuple_22;
    MR_Word InstmapDelta_23;
    MR_Word GoalExpr_24;
    MR_Word NonLocals_25;
    MR_Word GoalInfo_28;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyType_14, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(2), UnifyType_14, 1) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSInitInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0))));
    LHSFinalInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1))));
    RHSInitInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 2))));
    RHSFinalInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 3))));
    {
      LHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHSTuple_21, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 1) = ((MR_Box) (LHSInitInst_17));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 2) = ((MR_Box) (LHSFinalInst_18));
    }
    {
      RHSTuple_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSTuple_22, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 1) = ((MR_Box) (RHSInitInst_19));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 2) = ((MR_Box) (RHSFinalInst_20));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (RHSTuple_22));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (LHSTuple_21));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_13, Var_35, &InstmapDelta_23);
    {
      GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_38, &NonLocals_25);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_25, InstmapDelta_23, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[7]), &GoalInfo_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_28));
    }
    *STATE_VARIABLE_StmInfo_30 = STATE_VARIABLE_StmInfo_0_29;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_StmInfo_0_14,
  MR_Word * STATE_VARIABLE_StmInfo_15)
{
  {
    MR_Word ProcInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3))));
    MR_Word MaybeName_11;
    MR_Word ProcInfo_13;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Integer Var_31;

    if ((MaybeName0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeName_11 = MaybeName0_7;
    else
    {
      MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName0_7, (MR_Integer) 0))));
      MR_String Var_16;

      Var_16 = mercury__string__f_43_43_2_f_0(Name_12, (MR_String) "_Aux_STM");
      {
        MaybeName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeName_11, 0) = ((MR_Box) (Var_16));
      }
    }
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Type_6, MaybeName_11, Var_8, ProcInfo0_10, &ProcInfo_13);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1))));
    Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4))));
    Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5))) & (MR_Integer) 1);
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcInfo_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word Types_3,
  MR_Word * ReturnType_4)
{
  if ((Types_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *ReturnType_4 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_3, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_3, (MR_Integer) 0))));

    if ((Var_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *ReturnType_4 = Var_12;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ReturnType_4 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Types_3));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word OuterDI_12,
  MR_Word OuterUO_13,
  MR_Word AtomicGoal_14,
  MR_Word OrElseGoals_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34)
{
  {
    MR_Word WrapperCall_18;
    MR_Word AtomicGoalVars_19;
    MR_Word InputVars_20;
    MR_Word OutputVars_21;
    MR_Word InputTypes_22;
    MR_Word OutputTypes_23;
    MR_Word InputModes_24;
    MR_Word OutputModes_25;
    MR_Word NewPredInfo0_26;
    MR_Word UnifyModeUoDi_27;
    MR_Word CopyIOAssign_28;
    MR_Word NewPredInfo1_29;
    MR_Word TopLevelGoal_30;
    MR_Word NewPredInfo2_31;
    MR_Word NewPredInfo_32;
    MR_Word STATE_VARIABLE_StmInfo_35_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_StmInfo_41_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word InputVarList_74;
    MR_Word InputVars_75;
    MR_Word GoalVar0_76;
    MR_Box conv1_GoalVar0_76;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    transform_hlds__stm_expand__create_rollback_pred_7_p_0(Context_10, AtomicGoalVarList_11, &WrapperCall_18, AtomicGoal_14, OrElseGoals_15, STATE_VARIABLE_StmInfo_0_33, &STATE_VARIABLE_StmInfo_35_35);
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[11]), AtomicGoalVarList_11, &InputVarList_74);
    InputVars_75 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_74);
    conv1_GoalVar0_76 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
    GoalVar0_76 = ((MR_Word) (conv1_GoalVar0_76));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_76, (MR_Integer) 1))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_76, (MR_Integer) 2))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_76, (MR_Integer) 3))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_76, (MR_Integer) 4))));
    {
      AtomicGoalVars_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_19, 0) = ((MR_Box) (InputVars_75));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_19, 1) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_19, 2) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_19, 3) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_19, 4) = ((MR_Box) (Var_89));
    }
    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_19, &InputVars_20, &OutputVars_21);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_19, STATE_VARIABLE_StmInfo_35_35, &InputTypes_22, &OutputTypes_23);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_19, &InputModes_24, &OutputModes_25);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (OuterUO_13));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (OuterDI_12));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_21, Var_43);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_20, Var_42);
    Var_48 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    Var_50 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OutputTypes_23, Var_47);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_22, Var_46);
    Var_54 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutputModes_25, Var_53);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_24, Var_52);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_36, Var_37, Var_38, (MR_String) "toplevel", AtomicGoal_14, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_26, Goal_16, STATE_VARIABLE_StmInfo_35_35, &STATE_VARIABLE_StmInfo_41_41);
    Var_59 = parse_tree__prog_mode__unique_inst_0_f_0();
    Var_60 = parse_tree__prog_mode__unique_inst_0_f_0();
    Var_61 = parse_tree__prog_mode__clobbered_inst_0_f_0();
    {
      UnifyModeUoDi_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_27, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_27, 2) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), UnifyModeUoDi_27, 3) = ((MR_Box) (Var_61));
    }
    transform_hlds__stm_expand__create_var_unify_6_p_0(OuterUO_13, OuterDI_12, UnifyModeUoDi_27, &CopyIOAssign_28, NewPredInfo0_26, &NewPredInfo1_29);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CopyIOAssign_28));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (WrapperCall_18));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_62, &TopLevelGoal_30);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(TopLevelGoal_30, NewPredInfo1_29, &NewPredInfo2_31);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(NewPredInfo2_31, &NewPredInfo_32);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_32, STATE_VARIABLE_StmInfo_41_41, STATE_VARIABLE_StmInfo_34);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0(
  MR_Word Context_8,
  MR_Word AtomicGoalVarList_9,
  MR_Word * CallGoal_10,
  MR_Word AtomicGoal_11,
  MR_Word OrElseGoals_12,
  MR_Word STATE_VARIABLE_StmInfo_0_23,
  MR_Word * STATE_VARIABLE_StmInfo_24)
{
  {
    MR_Word AtomicGoalVars_14;
    MR_Word InputVars_15;
    MR_Word OutputVars_16;
    MR_Word InputTypes_17;
    MR_Word OutputTypes_18;
    MR_Word InputModes_19;
    MR_Word OutputModes_20;
    MR_Word NewPredInfo0_21;
    MR_Word NewPredInfo_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_StmInfo_30_30;
    MR_Word STATE_VARIABLE_StmInfo_31_31;
    MR_Word InputVarList_41;
    MR_Word GoalVar0_43;
    MR_Word InputSet_63;
    MR_Word OutputSet_64;
    MR_Word OrigPredId_78;
    MR_Integer OrigProcId_79;
    MR_Word OrigProcInfo_80;
    MR_Word OrigPredInfo_81;
    MR_Word StmExpanded_82;
    MR_Integer ExpandNum_83;
    MR_Word PredModuleInfo0_84;
    MR_Word NewPredId_85;
    MR_Integer NewProcId_86;
    MR_Word NewPredInfo_87;
    MR_Word NewProcInfo_88;
    MR_Word PredModuleInfo_91;
    MR_Box conv1_GoalVar0_43;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;

    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[10]), AtomicGoalVarList_9, &InputVarList_41);
    InputSet_63 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_41);
    conv1_GoalVar0_43 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_9);
    GoalVar0_43 = ((MR_Word) (conv1_GoalVar0_43));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_43, (MR_Integer) 1))));
    OutputSet_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_43, (MR_Integer) 2))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_43, (MR_Integer) 3))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_43, (MR_Integer) 4))));
    {
      AtomicGoalVars_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_14, 0) = ((MR_Box) (InputSet_63));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_14, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_14, 2) = ((MR_Box) (OutputSet_64));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_14, 3) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_14, 4) = ((MR_Box) (Var_56));
    }
    InputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_63);
    OutputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_64);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_14, STATE_VARIABLE_StmInfo_0_23, &InputTypes_17, &OutputTypes_18);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_14, &InputModes_19, &OutputModes_20);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_15, OutputVars_16);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_17, OutputTypes_18);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_19, OutputModes_20);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_25, Var_26, Var_27, (MR_String) "rollback", AtomicGoal_11, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_21, CallGoal_10, STATE_VARIABLE_StmInfo_0_23, &STATE_VARIABLE_StmInfo_30_30);
    transform_hlds__stm_expand__create_rollback_pred_2_9_p_0(Context_8, AtomicGoalVarList_9, *CallGoal_10, AtomicGoal_11, OrElseGoals_12, NewPredInfo0_21, &NewPredInfo_22, STATE_VARIABLE_StmInfo_30_30, &STATE_VARIABLE_StmInfo_31_31);
    OrigPredId_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 1))));
    OrigProcId_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 2))));
    OrigProcInfo_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 3))));
    OrigPredInfo_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 4))));
    StmExpanded_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 5))) & (MR_Integer) 1);
    ExpandNum_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_31_31, (MR_Integer) 6))));
    PredModuleInfo0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo_22, (MR_Integer) 0))));
    NewPredId_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo_22, (MR_Integer) 1))));
    NewProcId_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredInfo_22, (MR_Integer) 2))));
    NewPredInfo_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo_22, (MR_Integer) 3))));
    NewProcInfo_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo_22, (MR_Integer) 4))));
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_85, NewProcId_86, NewPredInfo_87, NewProcInfo_88, PredModuleInfo0_84, &PredModuleInfo_91);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredModuleInfo_91));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigPredId_78));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OrigProcId_79));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigProcInfo_80));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigPredInfo_81));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (StmExpanded_82));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ExpandNum_83));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word RecCallGoal_12,
  MR_Word AtomicGoal_13,
  MR_Word OrElseGoals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29,
  MR_Word STATE_VARIABLE_StmInfo_0_30,
  MR_Word * STATE_VARIABLE_StmInfo_31)
{
  {
    MR_Word AtomicGoalVars_17;
    MR_Word OutputTypes_19;
    MR_Word ResultType_20;
    MR_Word ResultVar_21;
    MR_Word InnerDI_22;
    MR_Word InnerUO_23;
    MR_Word ProcessGoalList_24;
    MR_Word WrapperID_25;
    MR_Word RollbackGoal_27;
    MR_Word STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_NewPredInfo_37_37;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_NewPredInfo_41_41;
    MR_Word STATE_VARIABLE_StmInfo_43_43;
    MR_Word STATE_VARIABLE_StmInfo_44_44;
    MR_Word STATE_VARIABLE_NewPredInfo_45_45;
    MR_Word STATE_VARIABLE_NewPredInfo_46_46;
    MR_Word STATE_VARIABLE_NewPredInfo_47_47;
    MR_Word InputVarList_55;
    MR_Word InputVars_56;
    MR_Word GoalVar0_57;
    MR_Box conv1_GoalVar0_57;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_18;
    MR_Word Var_26;

    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[9]), AtomicGoalVarList_11, &InputVarList_55);
    InputVars_56 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_55);
    conv1_GoalVar0_57 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
    GoalVar0_57 = ((MR_Word) (conv1_GoalVar0_57));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_57, (MR_Integer) 1))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_57, (MR_Integer) 2))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_57, (MR_Integer) 3))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_57, (MR_Integer) 4))));
    {
      AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 0) = ((MR_Box) (InputVars_56));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 1) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 2) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 4) = ((MR_Box) (Var_70));
    }
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_17, STATE_VARIABLE_StmInfo_0_30, &Var_18, &OutputTypes_19);
    if ((OutputTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      ResultType_20 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
    else
    {
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_19, (MR_Integer) 1))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_19, (MR_Integer) 0))));

      if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
        ResultType_20 = Var_83;
      else
        {
          ResultType_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ResultType_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ResultType_20, 1) = ((MR_Box) (OutputTypes_19));
          MR_hl_field(MR_mktag(3), ResultType_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
    }
    transform_hlds__stm_expand__create_aux_variable_5_p_0(ResultType_20, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[21])), &ResultVar_21, STATE_VARIABLE_NewPredInfo_0_28, &STATE_VARIABLE_NewPredInfo_33_33);
    Var_35 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[22])), &InnerDI_22, STATE_VARIABLE_NewPredInfo_33_33, &STATE_VARIABLE_NewPredInfo_37_37);
    Var_39 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_39, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[23])), &InnerUO_23, STATE_VARIABLE_NewPredInfo_37_37, &STATE_VARIABLE_NewPredInfo_41_41);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(STATE_VARIABLE_NewPredInfo_41_41, STATE_VARIABLE_StmInfo_0_30, &STATE_VARIABLE_StmInfo_43_43);
    {
      ProcessGoalList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcessGoalList_24, 0) = ((MR_Box) (AtomicGoal_13));
      MR_hl_field(MR_mktag(1), ProcessGoalList_24, 1) = ((MR_Box) (OrElseGoals_14));
    }
    transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0(Context_10, AtomicGoalVarList_11, ResultType_20, ResultVar_21, ProcessGoalList_24, &WrapperID_25, &Var_26, STATE_VARIABLE_StmInfo_43_43, &STATE_VARIABLE_StmInfo_44_44);
    transform_hlds__stm_expand__update_new_pred_info_3_p_0(STATE_VARIABLE_StmInfo_44_44, STATE_VARIABLE_NewPredInfo_41_41, &STATE_VARIABLE_NewPredInfo_45_45);
    transform_hlds__stm_expand__create_rollback_handler_goal_11_p_0(Context_10, AtomicGoalVars_17, ResultType_20, InnerDI_22, InnerUO_23, WrapperID_25, RecCallGoal_12, &RollbackGoal_27, STATE_VARIABLE_StmInfo_44_44, STATE_VARIABLE_NewPredInfo_45_45, &STATE_VARIABLE_NewPredInfo_46_46);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(RollbackGoal_27, STATE_VARIABLE_NewPredInfo_46_46, &STATE_VARIABLE_NewPredInfo_47_47);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_47_47, STATE_VARIABLE_NewPredInfo_29);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_29, STATE_VARIABLE_StmInfo_44_44, STATE_VARIABLE_StmInfo_31);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word StmInfo_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * STATE_VARIABLE_NewPredInfo_8)
{
  {
    MR_Word ModuleInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 1))));
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 5))));
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVarList_11,
  MR_Word ResultType_12,
  MR_Word ResultVar_13,
  MR_Word GoalList_14,
  MR_Word * PredProcId_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_35,
  MR_Word * STATE_VARIABLE_StmInfo_36)
{
  if ((GoalList_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.create_wrapper_for_goal_list\'/9", (MR_String) "empty list");
      return;
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_14, (MR_Integer) 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_14, (MR_Integer) 0))));

    if ((Var_69 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AtomicGoalVars_19;
      MR_Box conv0_AtomicGoalVars_19;
      MR_Word Var_80;

      conv0_AtomicGoalVars_19 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
      AtomicGoalVars_19 = ((MR_Word) (conv0_AtomicGoalVars_19));
      transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(AtomicGoalVars_19, ResultType_12, ResultVar_13, Var_70, PredProcId_15, &Var_80, CallGoal_16, STATE_VARIABLE_StmInfo_0_35, STATE_VARIABLE_StmInfo_36);
    }
    else
    {
      MR_Word PPIDList_30;
      MR_Word StmDI_32;
      MR_Word StmUO_33;
      MR_Word NewAtomicGoal_34;
      MR_Word STATE_VARIABLE_StmInfo_43_43;
      MR_Word STATE_VARIABLE_StmInfo_44_44;
      MR_Word AtomicGoalVars_55;
      MR_Word Var_91;

      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(Context_10, ResultType_12, ResultVar_13, GoalList_14, AtomicGoalVarList_11, &PPIDList_30, STATE_VARIABLE_StmInfo_0_35, &STATE_VARIABLE_StmInfo_43_43);
      transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(AtomicGoalVarList_11, &AtomicGoalVars_55);
      StmDI_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_55, (MR_Integer) 3))));
      StmUO_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_55, (MR_Integer) 4))));
      transform_hlds__stm_expand__create_or_else_pred_9_p_0(Context_10, AtomicGoalVars_55, AtomicGoalVarList_11, PPIDList_30, StmDI_32, StmUO_33, &NewAtomicGoal_34, STATE_VARIABLE_StmInfo_43_43, &STATE_VARIABLE_StmInfo_44_44);
      transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(AtomicGoalVars_55, ResultType_12, ResultVar_13, NewAtomicGoal_34, PredProcId_15, &Var_91, CallGoal_16, STATE_VARIABLE_StmInfo_44_44, STATE_VARIABLE_StmInfo_36);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19)
{
  {
    MR_bool succeeded = (Src1_8 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      succeeded = (Src2_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *Dest_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Accum_19 = STATE_VARIABLE_Accum_0_18;
    }
    else
    {
      MR_Word S_12;
      MR_Word Ss_13;
      MR_Word T_14;
      MR_Word Ts_15;

      succeeded = (Src1_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        S_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 0))));
        Ss_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 1))));
        succeeded = (Src2_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          T_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 0))));
          Ts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word R_16;
        MR_Word Rs_17;
        MR_Word STATE_VARIABLE_Accum_20_20;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1386__1_8_p_0(Var_28, Var_29, Var_30, S_12, T_14, &R_16, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_20_20);
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(Var_28, Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_20_20, STATE_VARIABLE_Accum_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_17));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1386__1_8_p_0(
  MR_Word Context_10,
  MR_Word ResultType_12,
  MR_Word ResultVar_13,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Word LambdaHeadVar__4_41,
  MR_Word * LambdaHeadVar__5_42)
{
  {
    MR_Word Var_29;
    MR_Word Var_81;

    transform_hlds__stm_expand__create_simple_wrapper_pred_2_10_p_0(Context_10, LambdaHeadVar__2_39, ResultType_12, ResultVar_13, LambdaHeadVar__1_38, LambdaHeadVar__3_40, &Var_81, &Var_29, LambdaHeadVar__4_41, LambdaHeadVar__5_42);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_10_p_0(
  MR_Word Context_11,
  MR_Word AtomicGoalVars_12,
  MR_Word ResultType_13,
  MR_Word ResultVar0_14,
  MR_Word STATE_VARIABLE_AtomicGoal_0_32,
  MR_Word * PredProcId_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_33,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_34,
  MR_Word * STATE_VARIABLE_StmInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 3))));
    MR_Word InnerUO0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 4))));
    MR_Word InputVars_22;
    MR_Word InputTypes_24;
    MR_Word InputModes_26;
    MR_Word ResultVar_28;
    MR_Word CopyStm_29;
    MR_Word InnerUO_30;
    MR_Word WrapperGoal_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_NewPredInfo_41_41;
    MR_Word STATE_VARIABLE_StmInfo_42_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_NewPredInfo_61_61;
    MR_Word STATE_VARIABLE_AtomicGoal_62_62;
    MR_Word STATE_VARIABLE_AtomicGoal_63_63;
    MR_Word STATE_VARIABLE_NewPredInfo_64_64;
    MR_Word STATE_VARIABLE_StmInfo_65_65;
    MR_Word STATE_VARIABLE_NewPredInfo_68_68;
    MR_Word STATE_VARIABLE_NewPredInfo_70_70;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_NewPredInfo_72_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_NewPredInfo_77_77;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_12, &InputVars_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_12, STATE_VARIABLE_StmInfo_0_34, &InputTypes_24, &Var_25);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_12, &InputModes_26, &Var_27);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (InnerUO0_21));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ResultVar0_14));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_22, Var_43);
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ResultType_13));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_24, Var_47);
    Var_54 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_58 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_26, Var_53);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_36, Var_37, Var_38, (MR_String) "simple_wrapper", STATE_VARIABLE_AtomicGoal_0_32, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_NewPredInfo_41_41, CallGoal_18, STATE_VARIABLE_StmInfo_0_34, &STATE_VARIABLE_StmInfo_42_42);
    transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_14, ResultType_13, &ResultVar_28, STATE_VARIABLE_NewPredInfo_41_41, &STATE_VARIABLE_NewPredInfo_61_61, STATE_VARIABLE_AtomicGoal_0_32, &STATE_VARIABLE_AtomicGoal_62_62);
    transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_62_62, &STATE_VARIABLE_AtomicGoal_63_63, AtomicGoalVars_12, InnerDI_20, InnerUO0_21, STATE_VARIABLE_NewPredInfo_61_61, &STATE_VARIABLE_NewPredInfo_64_64, STATE_VARIABLE_StmInfo_42_42, &STATE_VARIABLE_StmInfo_65_65);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (InnerUO0_21)), ((MR_Box) (InnerDI_20)));
    if (succeeded)
    {
      MR_Word Var_66;

      CopyStm_29 = (MR_Integer) 1;
      Var_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
      transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_66, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[12])), &InnerUO_30, STATE_VARIABLE_NewPredInfo_64_64, &STATE_VARIABLE_NewPredInfo_68_68);
    }
    else
    {
      CopyStm_29 = (MR_Integer) 0;
      InnerUO_30 = InnerUO0_21;
      STATE_VARIABLE_NewPredInfo_68_68 = STATE_VARIABLE_NewPredInfo_64_64;
    }
    transform_hlds__stm_expand__create_simple_post_wrapper_goal_12_p_0(Context_11, AtomicGoalVars_12, STATE_VARIABLE_AtomicGoal_63_63, ResultType_13, ResultVar_28, InnerDI_20, InnerUO_30, CopyStm_29, &WrapperGoal_31, STATE_VARIABLE_StmInfo_65_65, STATE_VARIABLE_NewPredInfo_68_68, &STATE_VARIABLE_NewPredInfo_70_70);
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InnerUO_30));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ResultVar_28));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_22, Var_73);
    transform_hlds__stm_expand__set_head_vars_3_p_0(Var_71, STATE_VARIABLE_NewPredInfo_70_70, &STATE_VARIABLE_NewPredInfo_72_72);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(WrapperGoal_31, STATE_VARIABLE_NewPredInfo_72_72, &STATE_VARIABLE_NewPredInfo_77_77);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_77_77, STATE_VARIABLE_NewPredInfo_33);
    transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*STATE_VARIABLE_NewPredInfo_33, PredProcId_16);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_33, STATE_VARIABLE_StmInfo_65_65, STATE_VARIABLE_StmInfo_35);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_12_p_0(
  MR_Word Context_13,
  MR_Word AtomicGoalVars_14,
  MR_Word AtomicGoal_15,
  MR_Word ResultType_16,
  MR_Word ResultVar_17,
  MR_Word StmDI_18,
  MR_Word StmUO_19,
  MR_Word CopySTM_20,
  MR_Word * Goal_21,
  MR_Word StmInfo_22,
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31)
{
  {
    MR_Word AssignResult_24;
    MR_Word TopLevelGoalList0_28;
    MR_Word TopLevelGoalList_29;
    MR_Word STATE_VARIABLE_NewPredInfo_36_36;

    transform_hlds__stm_expand__construct_output_8_p_0(Context_13, AtomicGoalVars_14, ResultType_16, ResultVar_17, StmInfo_22, &AssignResult_24, STATE_VARIABLE_NewPredInfo_0_30, &STATE_VARIABLE_NewPredInfo_36_36);
    switch (CopySTM_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_40;

          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (AtomicGoal_15));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), AssignResult_24);
          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_38, Var_40);
          TopLevelGoalList0_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), Var_37);
          *STATE_VARIABLE_NewPredInfo_31 = STATE_VARIABLE_NewPredInfo_36_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CopySTMAssign_27;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_51;

          Var_44 = parse_tree__prog_mode__unique_inst_0_f_0();
          Var_45 = parse_tree__prog_mode__unique_inst_0_f_0();
          Var_46 = parse_tree__prog_mode__clobbered_inst_0_f_0();
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Var_46));
          }
          transform_hlds__stm_expand__create_var_unify_6_p_0(StmUO_19, StmDI_18, Var_41, &CopySTMAssign_27, STATE_VARIABLE_NewPredInfo_36_36, STATE_VARIABLE_NewPredInfo_31);
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (AtomicGoal_15));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (CopySTMAssign_27));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
          }
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), AssignResult_24);
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_48, Var_51);
          TopLevelGoalList0_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), Var_47);
        }
        break;
    }
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_28, &TopLevelGoalList_29);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_29, Goal_21);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word BranchGoalVars_12,
  MR_Word Closures_13,
  MR_Word StmDI_14,
  MR_Word StmUO_15,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34)
{
  {
    MR_Word InputVars_18;
    MR_Word OutputVars_19;
    MR_Word InputTypes_20;
    MR_Word OutputTypes_21;
    MR_Word InputModes_22;
    MR_Word OutputModes_23;
    MR_Word ReturnType_25;
    MR_Word NewPredInfo0_26;
    MR_Word NewStmDI_27;
    MR_Word NewPredInfo1_28;
    MR_Word NewStmUO_29;
    MR_Word NewPredInfo2_30;
    MR_Word NewPredInfo3_31;
    MR_Word NewPredInfo_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_StmInfo_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word InputSet_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_11, (MR_Integer) 0))));
    MR_Word OutputSet_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_11, (MR_Integer) 2))));

    InputVars_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_75);
    OutputVars_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_76);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_11, STATE_VARIABLE_StmInfo_0_33, &InputTypes_20, &OutputTypes_21);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_11, &InputModes_22, &OutputModes_23);
    if ((OutputTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnType_25 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
    else
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_21, (MR_Integer) 1))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_21, (MR_Integer) 0))));

      if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
        ReturnType_25 = Var_95;
      else
        {
          ReturnType_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnType_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ReturnType_25, 1) = ((MR_Box) (OutputTypes_21));
          MR_hl_field(MR_mktag(3), ReturnType_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (StmUO_15));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (StmDI_14));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_19, Var_42);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_18, Var_41);
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OutputTypes_21, Var_46);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_20, Var_45);
    Var_53 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_55 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutputModes_23, Var_52);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_22, Var_51);
    Var_39 = hlds__make_goal__true_goal_0_f_0();
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_35, Var_36, Var_37, (MR_String) "or_else", Var_39, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_26, CallGoal_16, STATE_VARIABLE_StmInfo_0_33, &STATE_VARIABLE_StmInfo_40_40);
    Var_57 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_57, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[19])), &NewStmDI_27, NewPredInfo0_26, &NewPredInfo1_28);
    Var_60 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_60, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[20])), &NewStmUO_29, NewPredInfo1_28, &NewPredInfo2_30);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (NewStmUO_29));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (NewStmDI_27));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
    }
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_19, Var_65);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_18, Var_64);
    transform_hlds__stm_expand__set_head_vars_3_p_0(Var_63, NewPredInfo2_30, &NewPredInfo3_31);
    transform_hlds__stm_expand__create_or_else_pred_2_9_p_0(Context_10, BranchGoalVars_12, Closures_13, NewStmDI_27, NewStmUO_29, ReturnType_25, STATE_VARIABLE_StmInfo_40_40, NewPredInfo3_31, &NewPredInfo_32);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_32, STATE_VARIABLE_StmInfo_40_40, STATE_VARIABLE_StmInfo_34);
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_9_p_0(
  MR_Word Context_10,
  MR_Word AtomicGoalVars_11,
  MR_Word Closures_12,
  MR_Word StmDI_13,
  MR_Word StmUO_14,
  MR_Word ReturnType_15,
  MR_Word StmInfo_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31)
{
  {
    MR_bool succeeded;
    MR_Integer ClosureCount_18;
    MR_Word InnerSTMVars_19;
    MR_Word ReturnRttiVar_20;
    MR_Word CreateRetTypeInfo_21;
    MR_Word ExceptRttiVar_22;
    MR_Word CreateExceptTypeInfo_23;
    MR_Word EndBranchGoal_24;
    MR_Word MainGoal0_25;
    MR_Word TopLevelGoalList0_26;
    MR_Word TopLevelGoalList_27;
    MR_Word MainGoal1_28;
    MR_Word MainGoal_29;
    MR_Word STATE_VARIABLE_NewPredInfo_32_32;
    MR_Word STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word STATE_VARIABLE_NewPredInfo_36_36;
    MR_Word STATE_VARIABLE_NewPredInfo_37_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_NewPredInfo_42_42;
    MR_Word ModuleInfo0_51;
    MR_Word PredId_52;
    MR_Integer ProcId_53;
    MR_Word PredInfo0_54;
    MR_Word ProcInfo0_55;
    MR_Word Context_56;
    MR_Integer VarCnt_57;
    MR_Word PolyInfo0_58;
    MR_Word PolyInfo_59;
    MR_Word PolySpecs_60;
    MR_Word PredInfo_61;
    MR_Word ProcInfo_62;
    MR_Word ModuleInfo_63;
    MR_Word Var_64;
    MR_Word ModuleInfo0_74;
    MR_Word PredId_75;
    MR_Integer ProcId_76;
    MR_Word PredInfo0_77;
    MR_Word ProcInfo0_78;
    MR_Word Context_79;
    MR_Integer VarCnt_80;
    MR_Word PolyInfo0_81;
    MR_Word PolyInfo_82;
    MR_Word PolySpecs_83;
    MR_Word PredInfo_84;
    MR_Word ProcInfo_85;
    MR_Word ModuleInfo_86;
    MR_Word Var_87;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Closures_12, &ClosureCount_18);
    transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(ClosureCount_18, &InnerSTMVars_19, STATE_VARIABLE_NewPredInfo_0_30, &STATE_VARIABLE_NewPredInfo_32_32);
    ModuleInfo0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 0))));
    PredId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 1))));
    ProcId_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 2))));
    PredInfo0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 3))));
    ProcInfo0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 4))));
    Context_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 5))));
    VarCnt_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_32_32, (MR_Integer) 6))));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_51, PredInfo0_54, ProcInfo0_55, &PolyInfo0_58);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ReturnType_15, Context_56, &ReturnRttiVar_20, &CreateRetTypeInfo_21, PolyInfo0_58, &PolyInfo_59);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_59, &PolySpecs_60, PredInfo0_54, &PredInfo_61, ProcInfo0_55, &ProcInfo_62, &ModuleInfo_63);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (PolySpecs_60));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 0) = ((MR_Box) (ModuleInfo_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 1) = ((MR_Box) (PredId_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 2) = ((MR_Box) (ProcId_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 3) = ((MR_Box) (PredInfo_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 4) = ((MR_Box) (ProcInfo_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 5) = ((MR_Box) (Context_56));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 6) = ((MR_Box) (VarCnt_57));
    }
    Var_34 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    ModuleInfo0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 0))));
    PredId_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 1))));
    ProcId_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 2))));
    PredInfo0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 3))));
    ProcInfo0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 4))));
    Context_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 5))));
    VarCnt_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, (MR_Integer) 6))));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_74, PredInfo0_77, ProcInfo0_78, &PolyInfo0_81);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Var_34, Context_79, &ExceptRttiVar_22, &CreateExceptTypeInfo_23, PolyInfo0_81, &PolyInfo_82);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_82, &PolySpecs_83, PredInfo0_77, &PredInfo_84, ProcInfo0_78, &ProcInfo_85, &ModuleInfo_86);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (PolySpecs_83));
      MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 0) = ((MR_Box) (ModuleInfo_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 1) = ((MR_Box) (PredId_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 2) = ((MR_Box) (ProcId_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 3) = ((MR_Box) (PredInfo_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 4) = ((MR_Box) (ProcInfo_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 5) = ((MR_Box) (Context_79));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_35_35, 6) = ((MR_Box) (VarCnt_80));
    }
    transform_hlds__stm_expand__create_or_else_end_branch_8_p_0(Context_10, InnerSTMVars_19, StmDI_13, StmUO_14, ExceptRttiVar_22, &EndBranchGoal_24, STATE_VARIABLE_NewPredInfo_35_35, &STATE_VARIABLE_NewPredInfo_36_36);
    transform_hlds__stm_expand__create_or_else_branches_14_p_0(Context_10, AtomicGoalVars_11, ReturnType_15, StmDI_13, StmUO_14, InnerSTMVars_19, ReturnRttiVar_20, ExceptRttiVar_22, Closures_12, EndBranchGoal_24, &MainGoal0_25, StmInfo_16, STATE_VARIABLE_NewPredInfo_36_36, &STATE_VARIABLE_NewPredInfo_37_37);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MainGoal0_25));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateExceptTypeInfo_23, Var_39);
    TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateRetTypeInfo_21, Var_38);
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_26, &TopLevelGoalList_27);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_27, &MainGoal1_28);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(MainGoal1_28, (MR_Integer) 0, &MainGoal_29);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(MainGoal_29, STATE_VARIABLE_NewPredInfo_37_37, &STATE_VARIABLE_NewPredInfo_42_42);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_42_42, STATE_VARIABLE_NewPredInfo_31);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_44;
    MR_Word conv0_LambdaHeadVar__4_46;

    transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1847__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_44, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_46);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_44));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_46));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_8_p_0(
  MR_Word Context_9,
  MR_Word StmVars_10,
  MR_Word OuterSTMDI_11,
  MR_Word OuterSTMUO_12,
  MR_Word ExceptionRttiVar_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * STATE_VARIABLE_NewPredInfo_42)
{
  {
    MR_Word StmVarsMinusHead_21;
    MR_Word IntermediateStmVars_22;
    MR_Word MergeStmVarsIn_23;
    MR_Word MergeStmVarsOut_24;
    MR_Word MergeGoals_30;
    MR_Word UnlockCall_31;
    MR_Word AssignRetryCons_32;
    MR_Word RetryConsVar_33;
    MR_Word RetryCall_34;
    MR_Word ValidGoal_35;
    MR_Word AssignRollbackCons_36;
    MR_Word RollbackConsVar_37;
    MR_Word ThrowCall_38;
    MR_Word InvalidGoal_39;
    MR_Word Goals_40;
    MR_Word STATE_VARIABLE_NewPredInfo_50_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_NewPredInfo_85_85;
    MR_Word Var_86;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_NewPredInfo_95_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_NewPredInfo_99_99;
    MR_Word Var_101;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word STATE_VARIABLE_NewPredInfo_110_110;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word STATE_VARIABLE_NewPredInfo_124_124;
    MR_Word Var_126;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word STATE_VARIABLE_NewPredInfo_135_135;
    MR_Word Var_136;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Box conv2_STATE_VARIABLE_NewPredInfo_50_50;

    StmVarsMinusHead_21 = mercury__list__det_tail_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), StmVars_10);
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[8]), StmVarsMinusHead_21, &IntermediateStmVars_22, ((MR_Box) (STATE_VARIABLE_NewPredInfo_0_41)), &conv2_STATE_VARIABLE_NewPredInfo_50_50);
    STATE_VARIABLE_NewPredInfo_50_50 = ((MR_Word) (conv2_STATE_VARIABLE_NewPredInfo_50_50));
    {
      MergeStmVarsIn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MergeStmVarsIn_23, 0) = ((MR_Box) (OuterSTMDI_11));
      MR_hl_field(MR_mktag(1), MergeStmVarsIn_23, 1) = ((MR_Box) (IntermediateStmVars_22));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (OuterSTMUO_12));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    MergeStmVarsOut_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), IntermediateStmVars_22, Var_51);
    transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(StmVars_10, MergeStmVarsIn_23, MergeStmVarsOut_24, &MergeGoals_30, STATE_VARIABLE_NewPredInfo_50_50, &STATE_VARIABLE_NewPredInfo_85_85);
    Var_86 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_94 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_86, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_94, &UnlockCall_31, STATE_VARIABLE_NewPredInfo_85_85, &STATE_VARIABLE_NewPredInfo_95_95);
    Var_96 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    Var_97 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_9, Var_96, Var_97, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[17])), &AssignRetryCons_32, &RetryConsVar_33, STATE_VARIABLE_NewPredInfo_95_95, &STATE_VARIABLE_NewPredInfo_99_99);
    Var_101 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (RetryConsVar_33));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (ExceptionRttiVar_13));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_111));
    }
    Var_109 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_107);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_101, (MR_String) "throw", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, Var_107, (MR_Word) ((MR_Unsigned) 0U), Var_109, &RetryCall_34, STATE_VARIABLE_NewPredInfo_99_99, &STATE_VARIABLE_NewPredInfo_110_110);
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (RetryCall_34));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (AssignRetryCons_32));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (UnlockCall_31));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MergeGoals_30, Var_117);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_116, &ValidGoal_35);
    Var_121 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    Var_122 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_9, Var_121, Var_122, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[18])), &AssignRollbackCons_36, &RollbackConsVar_37, STATE_VARIABLE_NewPredInfo_110_110, &STATE_VARIABLE_NewPredInfo_124_124);
    Var_126 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (RollbackConsVar_37));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (ExceptionRttiVar_13));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_136));
    }
    Var_134 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_132);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_126, (MR_String) "throw", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, Var_132, (MR_Word) ((MR_Unsigned) 0U), Var_134, &ThrowCall_38, STATE_VARIABLE_NewPredInfo_124_124, &STATE_VARIABLE_NewPredInfo_135_135);
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (ThrowCall_38));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (AssignRollbackCons_36));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (UnlockCall_31));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_142));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_141, &InvalidGoal_39);
    transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0(Context_9, StmVars_10, (MR_Integer) 0, ValidGoal_35, InvalidGoal_39, &Goals_40, STATE_VARIABLE_NewPredInfo_135_135, STATE_VARIABLE_NewPredInfo_42);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Goals_40, Goal_14);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
  MR_Word Src1_9,
  MR_Word Src2_10,
  MR_Word Src3_11,
  MR_Word * Dest_12,
  MR_Word STATE_VARIABLE_Accum_0_22,
  MR_Word * STATE_VARIABLE_Accum_23)
{
  {
    MR_bool succeeded = (Src1_9 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (Src2_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Src3_11 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Dest_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Accum_23 = STATE_VARIABLE_Accum_0_22;
    }
    else
    {
      MR_Word S_14;
      MR_Word Ss_15;
      MR_Word T_16;
      MR_Word Ts_17;
      MR_Word U_18;
      MR_Word Us_19;

      succeeded = (Src1_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        S_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_9, (MR_Integer) 0))));
        Ss_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src1_9, (MR_Integer) 1))));
        succeeded = (Src2_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          T_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_10, (MR_Integer) 0))));
          Ts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src2_10, (MR_Integer) 1))));
          succeeded = (Src3_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            U_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src3_11, (MR_Integer) 0))));
            Us_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Src3_11, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word R_20;
        MR_Word Rs_21;
        MR_Word STATE_VARIABLE_Accum_24_24;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1861__1_6_p_0(S_14, T_16, U_18, &R_20, STATE_VARIABLE_Accum_0_22, &STATE_VARIABLE_Accum_24_24);
        transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(Ss_15, Ts_17, Us_19, &Rs_21, STATE_VARIABLE_Accum_24_24, STATE_VARIABLE_Accum_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_21));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1861__1_6_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word LambdaHeadVar__3_55,
  MR_Word * LambdaHeadVar__4_56,
  MR_Word LambdaHeadVar__5_57,
  MR_Word * LambdaHeadVar__6_58)
{
  {
    MR_Word Var_59;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_80;

    Var_59 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (LambdaHeadVar__3_55));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LambdaHeadVar__2_54));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LambdaHeadVar__1_53));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    Var_73 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]));
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (LambdaHeadVar__1_53));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (LambdaHeadVar__2_54));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (LambdaHeadVar__3_55));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_76));
    }
    Var_67 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_71);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_59, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_65, (MR_Word) ((MR_Unsigned) 0U), Var_67, LambdaHeadVar__4_56, LambdaHeadVar__5_57, LambdaHeadVar__6_58);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_82;
    MR_Word conv4_LambdaHeadVar__4_84;

    transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1027__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_LambdaHeadVar__2_82, ((MR_Word) (wrapper_arg_3)), &conv4_LambdaHeadVar__4_84);
    *wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_82));
    *wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_84));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_53;
    MR_Word conv1_LambdaHeadVar__3_54;
    MR_Word conv0_LambdaHeadVar__5_56;

    transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1010__1_5_p_0(((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_53, &conv1_LambdaHeadVar__3_54, ((MR_Word) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_56);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_53));
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_54));
    *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_56));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0(
  MR_Word Context_9,
  MR_Word StmVars_10,
  MR_Word UnlockAfterwards_11,
  MR_Word ValidGoal_12,
  MR_Word InvalidGoal_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_35,
  MR_Word * STATE_VARIABLE_NewPredInfo_36)
{
  {
    MR_Word AssignValidConst_16;
    MR_Word IsValidConstVar_17;
    MR_Word LockCall_18;
    MR_Word ValidCalls_26;
    MR_Word IsValidVars_27;
    MR_Word CreateValidTests_28;
    MR_Word TestValidGoals_31;
    MR_Word TestValidCond_32;
    MR_Word ITEGoal_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_NewPredInfo_40_40;
    MR_Word Var_42;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_NewPredInfo_51_51;
    MR_Word STATE_VARIABLE_NewPredInfo_80_80;
    MR_Word STATE_VARIABLE_NewPredInfo_90_90;
    MR_Word STATE_VARIABLE_NewPredInfo_94_94;
    MR_Box conv3_STATE_VARIABLE_NewPredInfo_80_80;
    MR_Box conv6_STATE_VARIABLE_NewPredInfo_90_90;

    Var_37 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    Var_38 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_9, Var_37, Var_38, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[16])), &AssignValidConst_16, &IsValidConstVar_17, STATE_VARIABLE_NewPredInfo_0_35, &STATE_VARIABLE_NewPredInfo_40_40);
    Var_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_50 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_42, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_50, &LockCall_18, STATE_VARIABLE_NewPredInfo_40_40, &STATE_VARIABLE_NewPredInfo_51_51);
    mercury__list__map2_foldl_6_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[7]), StmVars_10, &ValidCalls_26, &IsValidVars_27, ((MR_Box) (STATE_VARIABLE_NewPredInfo_51_51)), &conv3_STATE_VARIABLE_NewPredInfo_80_80);
    STATE_VARIABLE_NewPredInfo_80_80 = ((MR_Word) (conv3_STATE_VARIABLE_NewPredInfo_80_80));
    {
      CreateValidTests_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CreateValidTests_28, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), CreateValidTests_28, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_2));
      MR_hl_field(MR_mktag(0), CreateValidTests_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), CreateValidTests_28, 3) = ((MR_Box) (IsValidConstVar_17));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), CreateValidTests_28, IsValidVars_27, &TestValidGoals_31, ((MR_Box) (STATE_VARIABLE_NewPredInfo_80_80)), &conv6_STATE_VARIABLE_NewPredInfo_90_90);
    STATE_VARIABLE_NewPredInfo_90_90 = ((MR_Word) (conv6_STATE_VARIABLE_NewPredInfo_90_90));
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TestValidGoals_31, &TestValidCond_32);
    transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) ((MR_Unsigned) 0U), TestValidCond_32, ValidGoal_12, InvalidGoal_13, (MR_Integer) 4, (MR_Integer) 2, &ITEGoal_33, STATE_VARIABLE_NewPredInfo_90_90, &STATE_VARIABLE_NewPredInfo_94_94);
    switch (UnlockAfterwards_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_97;

          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (LockCall_18));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (ValidCalls_26));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (AssignValidConst_16));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ITEGoal_33));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_95, Var_97);
          *STATE_VARIABLE_NewPredInfo_36 = STATE_VARIABLE_NewPredInfo_94_94;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnlockCall_34;
          MR_Word Var_99;
          MR_Word Var_107;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_112;

          Var_99 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          Var_107 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          transform_hlds__stm_expand__create_simple_call_12_p_0(Var_99, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_107, &UnlockCall_34, STATE_VARIABLE_NewPredInfo_94_94, STATE_VARIABLE_NewPredInfo_36);
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (LockCall_18));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (ValidCalls_26));
          }
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (AssignValidConst_16));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ITEGoal_33));
            MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (UnlockCall_34));
            MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
          }
          *Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_109, Var_111);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer Count_5,
  MR_Word * Vars_6,
  MR_Word STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * STATE_VARIABLE_NewPredInfo_12)
{
  {
    MR_bool succeeded = (Count_5 == (MR_Integer) 0);

    if (succeeded)
    {
      *Vars_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NewPredInfo_12 = STATE_VARIABLE_NewPredInfo_0_11;
    }
    else
    {
      succeeded = (Count_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_8;
        MR_Integer Count1_9;
        MR_Word Vars0_10;
        MR_Word Var_14;
        MR_Word STATE_VARIABLE_NewPredInfo_16_16;

        Var_14 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[15])), &Var_8, STATE_VARIABLE_NewPredInfo_0_11, &STATE_VARIABLE_NewPredInfo_16_16);
        Count1_9 = (MR_Integer) ((MR_Unsigned) Count_5 - (MR_Unsigned) 1);
        transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(Count1_9, &Vars0_10, STATE_VARIABLE_NewPredInfo_16_16, STATE_VARIABLE_NewPredInfo_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars0_10));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_14_p_0(
  MR_Word Context_15,
  MR_Word AtomicGoalVars_16,
  MR_Word ReturnType_17,
  MR_Word OuterStmDIVar_18,
  MR_Word OuterStmUOVar_19,
  MR_Word InnerSTMVars_20,
  MR_Word RttiVar_21,
  MR_Word RollbackExceptionRttiVar_22,
  MR_Word WrapperIDs_23,
  MR_Word EndBranch_24,
  MR_Word * Goal_25,
  MR_Word StmInfo_26,
  MR_Word STATE_VARIABLE_NewPredInfo_0_35,
  MR_Word * STATE_VARIABLE_NewPredInfo_36)
{
  {
    MR_bool succeeded = (InnerSTMVars_20 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (WrapperIDs_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (AtomicGoalVars_16 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Goal_25 = EndBranch_24;
      *STATE_VARIABLE_NewPredInfo_36 = STATE_VARIABLE_NewPredInfo_0_35;
    }
    else
    {
      MR_Word AGV_28;
      MR_Word AGVs_29;
      MR_Word InnerVar_30;
      MR_Word InnerSTMVars0_31;
      MR_Word WrapID_32;
      MR_Word WrapperIDs0_33;

      succeeded = (AtomicGoalVars_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AGV_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoalVars_16, (MR_Integer) 0))));
        AGVs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoalVars_16, (MR_Integer) 1))));
        succeeded = (InnerSTMVars_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InnerVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerSTMVars_20, (MR_Integer) 0))));
          InnerSTMVars0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerSTMVars_20, (MR_Integer) 1))));
          succeeded = (WrapperIDs_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            WrapID_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WrapperIDs_23, (MR_Integer) 0))));
            WrapperIDs0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WrapperIDs_23, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal0_34;
        MR_Word STATE_VARIABLE_NewPredInfo_37_37;

        transform_hlds__stm_expand__create_or_else_branches_14_p_0(Context_15, AGVs_29, ReturnType_17, OuterStmDIVar_18, OuterStmUOVar_19, InnerSTMVars0_31, RttiVar_21, RollbackExceptionRttiVar_22, WrapperIDs0_33, EndBranch_24, &Goal0_34, StmInfo_26, STATE_VARIABLE_NewPredInfo_0_35, &STATE_VARIABLE_NewPredInfo_37_37);
        transform_hlds__stm_expand__create_or_else_branch_14_p_0(Context_15, AGV_28, ReturnType_17, OuterStmDIVar_18, OuterStmUOVar_19, InnerVar_30, RttiVar_21, RollbackExceptionRttiVar_22, WrapID_32, Goal0_34, Goal_25, StmInfo_26, STATE_VARIABLE_NewPredInfo_37_37, STATE_VARIABLE_NewPredInfo_36);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/14", (MR_String) "mismatched lists");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_14_p_0(
  MR_Word Context_15,
  MR_Word AtomicGoalVars_16,
  MR_Word ReturnType_17,
  MR_Word OuterStmDIVar_18,
  MR_Word OuterStmUOVar_19,
  MR_Word InnerSTMVar_20,
  MR_Word RttiVar_21,
  MR_Word RollbackExceptionRttiVar_22,
  MR_Word WrapperID_23,
  MR_Word RetryBranch_24,
  MR_Word * Goal_25,
  MR_Word StmInfo_26,
  MR_Word STATE_VARIABLE_NewPredInfo_0_51,
  MR_Word * STATE_VARIABLE_NewPredInfo_52)
{
  {
    MR_Word InputVars_28;
    MR_Word InputTypes_30;
    MR_Word InputModes_32;
    MR_Word InnerSTM0Var_34;
    MR_Word ReturnExceptVar_35;
    MR_Word AtomicClosureVar_36;
    MR_Word ClosureAssign_37;
    MR_Word CreateNestedLogCall_38;
    MR_Word TryStmCall_39;
    MR_Word DeconstructGoal_40;
    MR_Word MergeNestedLogsCall_41;
    MR_Word SuccessBranch_42;
    MR_Word DiscardCall_43;
    MR_Word RethrowCall_44;
    MR_Word ExceptUnivVar_45;
    MR_Word DeconstructException_46;
    MR_Word NotRetryBranch_47;
    MR_Word IfRetryGoal_48;
    MR_Word ExceptionBranch_49;
    MR_Word DisjGoal_50;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_NewPredInfo_55_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_NewPredInfo_63_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_NewPredInfo_86_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_NewPredInfo_107_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word STATE_VARIABLE_NewPredInfo_136_136;
    MR_Word Var_137;
    MR_Word Var_143;
    MR_Word Var_145;
    MR_Word STATE_VARIABLE_NewPredInfo_146_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_155;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_167;
    MR_Word Var_175;
    MR_Word STATE_VARIABLE_NewPredInfo_176_176;
    MR_Word Var_178;
    MR_Word Var_184;
    MR_Word Var_190;
    MR_Word Var_192;
    MR_Word STATE_VARIABLE_NewPredInfo_193_193;
    MR_Word Var_194;
    MR_Word Var_199;
    MR_Word STATE_VARIABLE_NewPredInfo_201_201;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_209;
    MR_Word STATE_VARIABLE_NewPredInfo_210_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_214;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_228;
    MR_Word Var_229;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_16, &InputVars_28, &Var_29);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_16, StmInfo_26, &InputTypes_30, &Var_31);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_16, &InputModes_32, &Var_33);
    Var_53 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_53, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[13])), &InnerSTM0Var_34, STATE_VARIABLE_NewPredInfo_0_51, &STATE_VARIABLE_NewPredInfo_55_55);
    Var_57 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_17);
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_57, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[14])), &ReturnExceptVar_35, STATE_VARIABLE_NewPredInfo_55_55, &STATE_VARIABLE_NewPredInfo_59_59);
    Var_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_68 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ReturnType_17));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
    }
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_30, Var_64);
    Var_71 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_73 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_75 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
    }
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_32, Var_70);
    transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_23, InputVars_28, Var_61, Var_62, &AtomicClosureVar_36, &ClosureAssign_37, STATE_VARIABLE_NewPredInfo_59_59, &STATE_VARIABLE_NewPredInfo_63_63);
    Var_77 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (InnerSTM0Var_34));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (OuterStmDIVar_18));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_87));
    }
    Var_91 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]));
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (OuterStmDIVar_18));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (InnerSTM0Var_34));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_94));
    }
    Var_85 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_89);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_77, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_83, (MR_Word) ((MR_Unsigned) 0U), Var_85, &CreateNestedLogCall_38, STATE_VARIABLE_NewPredInfo_63_63, &STATE_VARIABLE_NewPredInfo_86_86);
    Var_98 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (InnerSTMVar_20));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (InnerSTM0Var_34));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (ReturnExceptVar_35));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (AtomicClosureVar_36));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (RttiVar_21));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_109));
    }
    Var_116 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[2]));
    {
      Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (RttiVar_21));
      MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (AtomicClosureVar_36));
      MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (ReturnExceptVar_35));
      MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (InnerSTM0Var_34));
      MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (InnerSTMVar_20));
      MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_119));
    }
    Var_106 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_114);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_98, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[9])), (MR_Integer) 4, (MR_Integer) 0, Var_104, (MR_Word) ((MR_Unsigned) 0U), Var_106, &TryStmCall_39, STATE_VARIABLE_NewPredInfo_86_86, &STATE_VARIABLE_NewPredInfo_107_107);
    transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_16, ReturnType_17, ReturnExceptVar_35, &DeconstructGoal_40, StmInfo_26, STATE_VARIABLE_NewPredInfo_107_107, &STATE_VARIABLE_NewPredInfo_136_136);
    Var_137 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (OuterStmUOVar_19));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (OuterStmDIVar_18));
      MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (InnerSTMVar_20));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (InnerSTMVar_20));
      MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (OuterStmUOVar_19));
      MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
      MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_160));
    }
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_155));
    }
    Var_145 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_150);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_137, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_143, (MR_Word) ((MR_Unsigned) 0U), Var_145, &MergeNestedLogsCall_41, STATE_VARIABLE_NewPredInfo_136_136, &STATE_VARIABLE_NewPredInfo_146_146);
    {
      Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MergeNestedLogsCall_41));
      MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (DeconstructGoal_40));
      MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_165));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_164, &SuccessBranch_42);
    Var_167 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_175 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_178);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_167, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_112, (MR_Word) ((MR_Unsigned) 0U), Var_175, &DiscardCall_43, STATE_VARIABLE_NewPredInfo_146_146, &STATE_VARIABLE_NewPredInfo_176_176);
    Var_184 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (ReturnExceptVar_35));
      MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (RttiVar_21));
      MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_194));
    }
    Var_192 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_190);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_184, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, Var_190, (MR_Word) ((MR_Unsigned) 0U), Var_192, &RethrowCall_44, STATE_VARIABLE_NewPredInfo_176_176, &STATE_VARIABLE_NewPredInfo_193_193);
    Var_199 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_199, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[4])), &ExceptUnivVar_45, STATE_VARIABLE_NewPredInfo_193_193, &STATE_VARIABLE_NewPredInfo_201_201);
    Var_203 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (ExceptUnivVar_45));
      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_35, Var_203, Var_204, &DeconstructException_46);
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (RethrowCall_44));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (DiscardCall_43));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_206, &NotRetryBranch_47);
    Var_209 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_15, RollbackExceptionRttiVar_22, ExceptUnivVar_45, Var_209, RetryBranch_24, NotRetryBranch_47, &IfRetryGoal_48, STATE_VARIABLE_NewPredInfo_201_201, &STATE_VARIABLE_NewPredInfo_210_210);
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (IfRetryGoal_48));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (DeconstructException_46));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_211, &ExceptionBranch_49);
    Var_219 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (Var_219));
      MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_218, 2) = ((MR_Box) (ExceptionBranch_49));
    }
    Var_223 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    {
      Var_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_222, 0) = ((MR_Box) (Var_223));
      MR_hl_field(MR_mktag(0), Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_222, 2) = ((MR_Box) (SuccessBranch_42));
    }
    {
      Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_221));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(ReturnExceptVar_35, Var_214, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_50, STATE_VARIABLE_NewPredInfo_210_210, STATE_VARIABLE_NewPredInfo_52);
    {
      Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (DisjGoal_50));
      MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (TryStmCall_39));
      MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) (Var_229));
    }
    {
      Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (ClosureAssign_37));
      MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (Var_228));
    }
    {
      Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (CreateNestedLogCall_38));
      MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) (Var_227));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_226, Goal_25);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
  MR_Word AtomicGoalVars_10,
  MR_Word ResultType_11,
  MR_Word ResultVar0_12,
  MR_Word STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * PredProcId_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_31,
  MR_Word * CallGoal_16,
  MR_Word STATE_VARIABLE_StmInfo_0_32,
  MR_Word * STATE_VARIABLE_StmInfo_33)
{
  {
    MR_bool succeeded;
    MR_Word InnerDI_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 3))));
    MR_Word InnerUO0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 4))));
    MR_Word InputVars_20;
    MR_Word InputTypes_22;
    MR_Word InputModes_24;
    MR_Word ResultVar_26;
    MR_Word CopyStm_27;
    MR_Word InnerUO_28;
    MR_Word WrapperGoal_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_NewPredInfo_39_39;
    MR_Word STATE_VARIABLE_StmInfo_40_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word STATE_VARIABLE_AtomicGoal_60_60;
    MR_Word STATE_VARIABLE_AtomicGoal_61_61;
    MR_Word STATE_VARIABLE_NewPredInfo_62_62;
    MR_Word STATE_VARIABLE_StmInfo_63_63;
    MR_Word STATE_VARIABLE_NewPredInfo_66_66;
    MR_Word STATE_VARIABLE_NewPredInfo_68_68;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_NewPredInfo_70_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_NewPredInfo_75_75;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_25;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_10, &InputVars_20, &Var_21);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_10, STATE_VARIABLE_StmInfo_0_32, &InputTypes_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_10, &InputModes_24, &Var_25);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (InnerUO0_19));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ResultVar0_12));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_20, Var_41);
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ResultType_11));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_22, Var_45);
    Var_52 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_54 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_24, Var_51);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_34, Var_35, Var_36, (MR_String) "wrapper", STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_NewPredInfo_39_39, CallGoal_16, STATE_VARIABLE_StmInfo_0_32, &STATE_VARIABLE_StmInfo_40_40);
    transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_12, ResultType_11, &ResultVar_26, STATE_VARIABLE_NewPredInfo_39_39, &STATE_VARIABLE_NewPredInfo_59_59, STATE_VARIABLE_AtomicGoal_0_30, &STATE_VARIABLE_AtomicGoal_60_60);
    transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_60_60, &STATE_VARIABLE_AtomicGoal_61_61, AtomicGoalVars_10, InnerDI_18, InnerUO0_19, STATE_VARIABLE_NewPredInfo_59_59, &STATE_VARIABLE_NewPredInfo_62_62, STATE_VARIABLE_StmInfo_40_40, &STATE_VARIABLE_StmInfo_63_63);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (InnerUO0_19)), ((MR_Box) (InnerDI_18)));
    if (succeeded)
    {
      MR_Word Var_64;

      CopyStm_27 = (MR_Integer) 1;
      Var_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
      transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_64, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[12])), &InnerUO_28, STATE_VARIABLE_NewPredInfo_62_62, &STATE_VARIABLE_NewPredInfo_66_66);
    }
    else
    {
      CopyStm_27 = (MR_Integer) 0;
      InnerUO_28 = InnerUO0_19;
      STATE_VARIABLE_NewPredInfo_66_66 = STATE_VARIABLE_NewPredInfo_62_62;
    }
    transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(AtomicGoalVars_10, STATE_VARIABLE_AtomicGoal_61_61, ResultType_11, ResultVar_26, InnerDI_18, InnerUO_28, CopyStm_27, &WrapperGoal_29, STATE_VARIABLE_StmInfo_63_63, STATE_VARIABLE_NewPredInfo_66_66, &STATE_VARIABLE_NewPredInfo_68_68);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (InnerUO_28));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ResultVar0_12));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
    }
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_20, Var_71);
    transform_hlds__stm_expand__set_head_vars_3_p_0(Var_69, STATE_VARIABLE_NewPredInfo_68_68, &STATE_VARIABLE_NewPredInfo_70_70);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(WrapperGoal_29, STATE_VARIABLE_NewPredInfo_70_70, &STATE_VARIABLE_NewPredInfo_75_75);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_75_75, STATE_VARIABLE_NewPredInfo_31);
    transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*STATE_VARIABLE_NewPredInfo_31, PredProcId_14);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_31, STATE_VARIABLE_StmInfo_63_63, STATE_VARIABLE_StmInfo_33);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word NewPredInfo0_3,
  MR_Word * PredProcId_4)
{
  {
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 1))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_6));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17)
{
  {
    MR_Word ProcInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4))));
    MR_Word GoalVars_7;
    MR_Word GoalVarsSet_8;
    MR_Word ProcVarSet0_9;
    MR_Word ProcVarTypes0_10;
    MR_Word ProgVarSet_11;
    MR_Word ProcVarTypes_12;
    MR_Word ProcInfo1_13;
    MR_Word ProcInfo2_14;
    MR_Word ProcInfo_15;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Integer Var_31;

    hlds__goal_util__goal_vars_2_p_0(Goal_4, &GoalVars_7);
    GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_7);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_6, &ProcVarSet0_9);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_6, &ProcVarTypes0_10);
    mercury__varset__select_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVarsSet_8, ProcVarSet0_9, &ProgVarSet_11);
    hlds__vartypes__vartypes_select_3_p_0(GoalVarsSet_8, ProcVarTypes0_10, &ProcVarTypes_12);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(ProgVarSet_11, ProcInfo0_6, &ProcInfo1_13);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_4, ProcInfo1_13, &ProcInfo2_14);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ProcVarTypes_12, ProcInfo2_14, &ProcInfo_15);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1))));
    Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5))));
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcInfo_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
  MR_Word STATE_VARIABLE_NewPredInfo_0_9,
  MR_Word * STATE_VARIABLE_NewPredInfo_10)
{
  {
    MR_Word ProcInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4))));
    MR_Word ModuleInfo0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0))));
    MR_Word ProcInfo1_6;
    MR_Word ProcInfo_7;
    MR_Word ModuleInfo_8;
    MR_Word Var_28;
    MR_Integer Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Integer Var_33;

    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_4, &ProcInfo1_6);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ProcInfo1_6, &ProcInfo_7, ModuleInfo0_5, &ModuleInfo_8);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5))));
    Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
  MR_Word NewPred_4,
  MR_Word StmInfo0_5,
  MR_Word * StmInfo_6)
{
  {
    MR_Word OrigPredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 1))));
    MR_Integer OrigProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 2))));
    MR_Word OrigProcInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 3))));
    MR_Word OrigPredInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 4))));
    MR_Word StmExpanded_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Integer ExpandNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 6))));
    MR_Word PredModuleInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 0))));
    MR_Word NewPredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 1))));
    MR_Integer NewProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 2))));
    MR_Word NewPredInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 3))));
    MR_Word NewProcInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 4))));
    MR_Word PredModuleInfo_21;

    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_15, NewProcId_16, NewPredInfo_17, NewProcInfo_18, PredModuleInfo0_14, &PredModuleInfo_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *StmInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredModuleInfo_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigPredId_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OrigProcId_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigProcInfo_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigPredInfo_11));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (StmExpanded_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ExpandNum_13));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
  MR_Word NewHeadVars_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_8,
  MR_Word * STATE_VARIABLE_NewPredInfo_9)
{
  {
    MR_Word ProcInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4))));
    MR_Word ProcInfo_7;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Integer Var_23;

    hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_4, ProcInfo0_6, &ProcInfo_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
  MR_Word ProcHeadVars_11,
  MR_Word PredArgTypes_12,
  MR_Word ProcHeadModes_13,
  MR_String Prefix_14,
  MR_Word OrigGoal_15,
  MR_Word MaybeDetism_16,
  MR_Word * NewStmPredInfo_17,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_66,
  MR_Word * STATE_VARIABLE_StmInfo_67)
{
  {
    MR_Word ModuleInfo0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 0))));
    MR_Word PredInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 4))));
    MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 2))));
    MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 1))));
    MR_Integer ExpansionCnt0_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 6))));
    MR_Integer Arity_25;
    MR_Word GoalInfo0_27;
    MR_Word ProcInfo_28;
    MR_Word ProcContext_29;
    MR_Word ProcVarSet_30;
    MR_Word ProcVarTypes_31;
    MR_Word ProcInstVarSet_32;
    MR_Word ProcGoal_34;
    MR_Word ProcRttiVarMaps_35;
    MR_Word HasParallelConj_36;
    MR_Word VarNameRemap_37;
    MR_Word NewProcInfo_39;
    MR_Word ModuleName_40;
    MR_String OrigPredName_41;
    MR_Word PredOrFunc_42;
    MR_Word PredContext_43;
    MR_Word NewPredName_44;
    MR_Word OrigPredOrigin_45;
    MR_Word NewPredOrigin_46;
    MR_Word PredTypeVarSet_47;
    MR_Word PredExistQVars_48;
    MR_Word PredClassContext_49;
    MR_Word PredAssertions_50;
    MR_Word Markers_51;
    MR_Integer NewProcId_52;
    MR_Word NewPredInfo_53;
    MR_Word PredicateTable0_54;
    MR_Word NewPredId_55;
    MR_Word PredicateTable_56;
    MR_Word ModuleInfo_57;
    MR_Word CallExpr_58;
    MR_Word CallNonLocals_59;
    MR_Word CallInstmapDelta_60;
    MR_Word CallDeterminism_61;
    MR_Word CallPurity_62;
    MR_Word CallContext_63;
    MR_Word GoalInfo_64;
    MR_Integer ExpansionCnt_65;
    MR_String Var_70;
    MR_String Var_72;
    MR_String Var_73;
    MR_String Var_75;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;
    MR_String Var_80;
    MR_String Var_82;
    MR_String Var_83;
    MR_String Var_84;
    MR_String Var_86;
    MR_Word Var_127;
    MR_Integer Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;

    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ProcHeadVars_11, &Arity_25);
    GoalInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_15, (MR_Integer) 1))));
    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_21, ProcId_22, &ProcInfo_28);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_28, &ProcContext_29);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_28, &ProcVarSet_30);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_28, &ProcVarTypes_31);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_28, &ProcInstVarSet_32);
    if ((MaybeDetism_16 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_28, &CallDeterminism_61);
    else
      CallDeterminism_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_16, (MR_Integer) 0))));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_28, &ProcGoal_34);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_28, &ProcRttiVarMaps_35);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_28, &HasParallelConj_36);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_28, &VarNameRemap_37);
    hlds__hlds_pred__proc_info_create_15_p_0(ProcContext_29, (MR_Integer) -1, ProcVarSet_30, ProcVarTypes_31, ProcHeadVars_11, ProcInstVarSet_32, ProcHeadModes_13, (MR_Integer) 2, CallDeterminism_61, ProcGoal_34, ProcRttiVarMaps_35, (MR_Integer) 1, HasParallelConj_36, VarNameRemap_37, &NewProcInfo_39);
    ModuleName_40 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
    OrigPredName_41 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
    PredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_21, &PredContext_43);
    Var_79 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_25)));
    Var_83 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_23)));
    Var_86 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ExpansionCnt0_24)));
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_86);
    Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
    Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_82);
    Var_78 = mercury__string__f_43_43_2_f_0(Var_79, Var_80);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_78);
    Var_75 = mercury__string__f_43_43_2_f_0(OrigPredName_41, Var_76);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_75);
    Var_72 = mercury__string__f_43_43_2_f_0(Prefix_14, Var_73);
    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", Var_72);
    {
      NewPredName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NewPredName_44, 0) = ((MR_Box) (ModuleName_40));
      MR_hl_field(MR_mktag(1), NewPredName_44, 1) = ((MR_Box) (Var_70));
    }
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_21, &OrigPredOrigin_45);
    {
      NewPredOrigin_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NewPredOrigin_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), NewPredOrigin_46, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), NewPredOrigin_46, 2) = ((MR_Box) (OrigPredOrigin_45));
      MR_hl_field(MR_mktag(3), NewPredOrigin_46, 3) = ((MR_Box) (PredId_23));
    }
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &PredTypeVarSet_47);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_21, &PredExistQVars_48);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_21, &PredClassContext_49);
    hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo_21, &PredAssertions_50);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_51);
    hlds__hlds_pred__pred_info_create_16_p_0(ModuleName_40, NewPredName_44, PredOrFunc_42, PredContext_43, NewPredOrigin_46, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_51, PredArgTypes_12, PredTypeVarSet_47, PredExistQVars_48, PredClassContext_49, PredAssertions_50, VarNameRemap_37, NewProcInfo_39, &NewProcId_52, &NewPredInfo_53);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_20, &PredicateTable0_54);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_53, &NewPredId_55, PredicateTable0_54, &PredicateTable_56);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_56, ModuleInfo0_20, &ModuleInfo_57);
    {
      CallExpr_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), CallExpr_58, 0) = ((MR_Box) (NewPredId_55));
      MR_hl_field(MR_mktag(2), CallExpr_58, 1) = ((MR_Box) (NewProcId_52));
      MR_hl_field(MR_mktag(2), CallExpr_58, 2) = ((MR_Box) (ProcHeadVars_11));
      MR_hl_field(MR_mktag(2), CallExpr_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), CallExpr_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), CallExpr_58, 5) = ((MR_Box) (NewPredName_44));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProcHeadVars_11, &CallNonLocals_59);
    hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo0_20, ProcHeadVars_11, ProcHeadModes_13, &CallInstmapDelta_60);
    CallPurity_62 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_27);
    CallContext_63 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_27);
    hlds__hlds_goal__goal_info_init_6_p_0(CallNonLocals_59, CallInstmapDelta_60, CallDeterminism_61, CallPurity_62, CallContext_63, &GoalInfo_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CallGoal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallExpr_58));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_64));
    }
    ExpansionCnt_65 = (MR_Integer) ((MR_Unsigned) ExpansionCnt0_24 + (MR_Unsigned) 1);
    Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 1))));
    Var_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 2))));
    Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 3))));
    Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 4))));
    Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 5))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_67 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_131));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ExpansionCnt_65));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *NewStmPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewPredId_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NewProcId_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NewPredInfo_53));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewProcInfo_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CallContext_63));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_36;

    transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2149__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_36);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
  MR_String Name_9,
  MR_Word ResultVar0_10,
  MR_Word ResultType_11,
  MR_Word * ResultVar_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_31,
  MR_Word * STATE_VARIABLE_NewPredInfo_32,
  MR_Word STATE_VARIABLE_Goal_0_33,
  MR_Word * STATE_VARIABLE_Goal_34)
{
  {
    MR_Word NewProcInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4))));
    MR_Word NewPredVarSet0_16;
    MR_Word NewPredVarTypes0_17;
    MR_Word NewHeadVars0_18;
    MR_Word NewPredVarSet1_19;
    MR_Word NewPredVarTypes1_20;
    MR_Word NewPredVarSet_21;
    MR_Word NewPredVarTypes_22;
    MR_Word VarMapping_23;
    MR_Word MapLambda_24;
    MR_Word NewHeadVars_27;
    MR_Word NewProcInfo1_28;
    MR_Word NewProcInfo2_29;
    MR_Word NewProcInfo_30;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Integer Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Integer Var_53;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(NewProcInfo0_15, &NewPredVarSet0_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(NewProcInfo0_15, &NewPredVarTypes0_17);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(NewProcInfo0_15, &NewHeadVars0_18);
    mercury__varset__delete_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar0_10, NewPredVarSet0_16, &NewPredVarSet1_19);
    hlds__vartypes__delete_var_type_3_p_0(ResultVar0_10, NewPredVarTypes0_17, &NewPredVarTypes1_20);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_9, ResultVar_12, NewPredVarSet1_19, &NewPredVarSet_21);
    hlds__vartypes__add_var_type_4_p_0(*ResultVar_12, ResultType_11, NewPredVarTypes1_20, &NewPredVarTypes_22);
    VarMapping_23 = mercury__map__singleton_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (ResultVar0_10)), ((MR_Box) (*ResultVar_12)));
    {
      MapLambda_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), MapLambda_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), MapLambda_24, 3) = ((MR_Box) (ResultVar0_10));
      MR_hl_field(MR_mktag(0), MapLambda_24, 4) = ((MR_Box) (*ResultVar_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), MapLambda_24, NewHeadVars0_18, &NewHeadVars_27);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_23, STATE_VARIABLE_Goal_0_33, STATE_VARIABLE_Goal_34);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(NewPredVarSet_21, NewProcInfo0_15, &NewProcInfo1_28);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(NewPredVarTypes_22, NewProcInfo1_28, &NewProcInfo2_29);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_27, NewProcInfo2_29, &NewProcInfo_30);
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1))));
    Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5))));
    Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewProcInfo_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
  MR_Word AtomicGoalVars_12,
  MR_Word AtomicGoal_13,
  MR_Word ResultType_14,
  MR_Word ResultVar_15,
  MR_Word StmDI_16,
  MR_Word StmUO_17,
  MR_Word CopySTM_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_50,
  MR_Word * STATE_VARIABLE_NewPredInfo_51)
{
  {
    MR_Word StmModuleName_22;
    MR_Word ExceptionModuleName_23;
    MR_Word AtomicGoalInfo_25;
    MR_Word Context_26;
    MR_Word AssignResult_27;
    MR_Word IsValidVar_28;
    MR_Word ValidTrueFunctor_29;
    MR_Word ValidFalseFunctor_30;
    MR_Word RollbackCons_31;
    MR_Word ConstRollbackGoal_32;
    MR_Word RollbackVar_33;
    MR_Word Goal_StmLock_Call_34;
    MR_Word Goal_StmUnLock_Call_35;
    MR_Word Goal_StmValidate_Call_36;
    MR_Word Goal_StmCommit_Call_37;
    MR_Word TypeInfoVar_38;
    MR_Word CreateTypeInfoGoals_39;
    MR_Word Goal_ExceptionThrow_Call_40;
    MR_Word Goal_ValidBranch_41;
    MR_Word Goal_InvalidBranch_42;
    MR_Word DisjGoal_43;
    MR_Word PostAtomicTopLevelList_44;
    MR_Word PostAtomicGoal0_45;
    MR_Word PostAtomicGoal_46;
    MR_Word TopLevelGoalList0_48;
    MR_Word TopLevelGoalList_49;
    MR_Word STATE_VARIABLE_NewPredInfo_52_52;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_NewPredInfo_55_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word Var_68;
    MR_Word STATE_VARIABLE_NewPredInfo_69_69;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_NewPredInfo_78_78;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_NewPredInfo_87_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word STATE_VARIABLE_NewPredInfo_109_109;
    MR_Word Var_111;
    MR_Word Var_117;
    MR_Word STATE_VARIABLE_NewPredInfo_118_118;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word STATE_VARIABLE_NewPredInfo_127_127;
    MR_Word Var_128;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word STATE_VARIABLE_NewPredInfo_146_146;
    MR_Word Var_147;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_153;
    MR_Word Var_154;

    StmModuleName_22 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    ExceptionModuleName_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    AtomicGoalInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoal_13, (MR_Integer) 1))));
    Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(AtomicGoalInfo_25);
    transform_hlds__stm_expand__construct_output_8_p_0(Context_26, AtomicGoalVars_12, ResultType_14, ResultVar_15, StmInfo_20, &AssignResult_27, STATE_VARIABLE_NewPredInfo_0_50, &STATE_VARIABLE_NewPredInfo_52_52);
    Var_53 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_53, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[10])), &IsValidVar_28, STATE_VARIABLE_NewPredInfo_52_52, &STATE_VARIABLE_NewPredInfo_55_55);
    ValidTrueFunctor_29 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    ValidFalseFunctor_30 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    RollbackCons_31 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    Var_57 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_26, RollbackCons_31, Var_57, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[11])), &ConstRollbackGoal_32, &RollbackVar_33, STATE_VARIABLE_NewPredInfo_55_55, &STATE_VARIABLE_NewPredInfo_59_59);
    Var_68 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_68, &Goal_StmLock_Call_34, STATE_VARIABLE_NewPredInfo_59_59, &STATE_VARIABLE_NewPredInfo_69_69);
    Var_77 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_77, &Goal_StmUnLock_Call_35, STATE_VARIABLE_NewPredInfo_69_69, &STATE_VARIABLE_NewPredInfo_78_78);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (IsValidVar_28));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3])));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (IsValidVar_28));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[2])));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_95));
    }
    Var_86 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_90);
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_84, (MR_Word) ((MR_Unsigned) 0U), Var_86, &Goal_StmValidate_Call_36, STATE_VARIABLE_NewPredInfo_78_78, &STATE_VARIABLE_NewPredInfo_87_87);
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_108 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_111);
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_106, (MR_Word) ((MR_Unsigned) 0U), Var_108, &Goal_StmCommit_Call_37, STATE_VARIABLE_NewPredInfo_87_87, &STATE_VARIABLE_NewPredInfo_109_109);
    Var_117 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__make_type_info_5_p_0(Var_117, &TypeInfoVar_38, &CreateTypeInfoGoals_39, STATE_VARIABLE_NewPredInfo_109_109, &STATE_VARIABLE_NewPredInfo_118_118);
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (RollbackVar_33));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (TypeInfoVar_38));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_128));
    }
    Var_126 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_124);
    transform_hlds__stm_expand__create_simple_call_12_p_0(ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, Var_124, (MR_Word) ((MR_Unsigned) 0U), Var_126, &Goal_ExceptionThrow_Call_40, STATE_VARIABLE_NewPredInfo_118_118, &STATE_VARIABLE_NewPredInfo_127_127);
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Goal_StmUnLock_Call_35));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Goal_StmCommit_Call_37));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_134));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_133, &Goal_ValidBranch_41);
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (ConstRollbackGoal_32));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Goal_StmUnLock_Call_35));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_40));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateTypeInfoGoals_39, Var_141);
    Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_137, Var_140);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_136, &Goal_InvalidBranch_42);
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (ValidTrueFunctor_29));
      MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_147, 2) = ((MR_Box) (Goal_ValidBranch_41));
    }
    {
      Var_150 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (ValidFalseFunctor_30));
      MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) (Goal_InvalidBranch_42));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_149));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(IsValidVar_28, Var_143, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_43, STATE_VARIABLE_NewPredInfo_127_127, &STATE_VARIABLE_NewPredInfo_146_146);
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (DisjGoal_43));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Goal_StmValidate_Call_36));
      MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_154));
    }
    {
      PostAtomicTopLevelList_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PostAtomicTopLevelList_44, 0) = ((MR_Box) (Goal_StmLock_Call_34));
      MR_hl_field(MR_mktag(1), PostAtomicTopLevelList_44, 1) = ((MR_Box) (Var_153));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(PostAtomicTopLevelList_44, &PostAtomicGoal0_45);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(PostAtomicGoal0_45, (MR_Integer) 0, &PostAtomicGoal_46);
    switch (CopySTM_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_157;
          MR_Word Var_159;
          MR_Word Var_160;

          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (PostAtomicGoal_46));
            MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AssignResult_27, Var_160);
          TopLevelGoalList0_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_157, Var_159);
          *STATE_VARIABLE_NewPredInfo_51 = STATE_VARIABLE_NewPredInfo_146_146;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CopySTMAssign_47;
          MR_Word Var_162;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;

          Var_165 = parse_tree__prog_mode__unique_inst_0_f_0();
          Var_166 = parse_tree__prog_mode__unique_inst_0_f_0();
          Var_167 = parse_tree__prog_mode__clobbered_inst_0_f_0();
          {
            Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (Var_167));
          }
          transform_hlds__stm_expand__create_var_unify_6_p_0(StmUO_17, StmDI_16, Var_162, &CopySTMAssign_47, STATE_VARIABLE_NewPredInfo_146_146, STATE_VARIABLE_NewPredInfo_51);
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (PostAtomicGoal_46));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (CopySTMAssign_47));
            MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
          }
          Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AssignResult_27, Var_171);
          TopLevelGoalList0_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_168, Var_170);
        }
        break;
    }
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_48, &TopLevelGoalList_49);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_49, Goal_19);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__construct_output_8_p_0(
  MR_Word Context_9,
  MR_Word AtomicGoalVars_10,
  MR_Word ResultType_11,
  MR_Word ResultVar_12,
  MR_Word StmInfo_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_Word OutputVars_17;
    MR_Word OutputTypes_19;
    MR_Word InputSet_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 0))));
    MR_Word OutputSet_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 2))));
    MR_Word ProcInfo0_65;
    MR_Word VarTypes_66;
    MR_Word InputVars_67;
    MR_Word OutputVars_68;
    MR_Word InputSet_78;
    MR_Word OutputSet_79;
    MR_Word Var_16;
    MR_Word Var_18;

    Var_16 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_50);
    OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_51);
    ProcInfo0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_13, (MR_Integer) 3))));
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_65, &VarTypes_66);
    InputSet_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 0))));
    OutputSet_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 2))));
    InputVars_67 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_78);
    OutputVars_68 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_79);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_66, InputVars_67, &Var_18);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_66, OutputVars_68, &OutputTypes_19);
    if ((OutputTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_20;
      MR_Word Var_40;

      Var_40 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
      hlds__make_goal__make_const_construction_4_p_0(Context_9, ResultVar_12, Var_40, &Goal_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_0_28;
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_19, (MR_Integer) 1))));

      if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OutVar_22;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Goal_42;
        MR_Box conv0_OutVar_22;

        conv0_OutVar_22 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_17);
        OutVar_22 = ((MR_Word) (conv0_OutVar_22));
        Var_36 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_37 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Var_38));
        }
        transform_hlds__stm_expand__create_var_unify_6_p_0(ResultVar_12, OutVar_22, Var_33, &Goal_42, STATE_VARIABLE_NewPredInfo_0_28, STATE_VARIABLE_NewPredInfo_29);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word MakeType_27;
        MR_Word Goal_43;
        MR_Word Var_26;

        transform_hlds__stm_expand__make_type_info_5_p_0(ResultType_11, &Var_26, &MakeType_27, STATE_VARIABLE_NewPredInfo_0_28, STATE_VARIABLE_NewPredInfo_29);
        hlds__make_goal__construct_tuple_3_p_0(ResultVar_12, OutputVars_17, &Goal_43);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MakeType_27));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_29,
  MR_Word * STATE_VARIABLE_NewPredInfo_30)
{
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_29, (MR_Integer) 5))));
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_29, (MR_Integer) 0))));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSInitInst_17;
    MR_Word LHSFinalInst_18;
    MR_Word RHSInitInst_19;
    MR_Word RHSFinalInst_20;
    MR_Word LHSTuple_21;
    MR_Word RHSTuple_22;
    MR_Word InstmapDelta_23;
    MR_Word GoalExpr_24;
    MR_Word NonLocals_25;
    MR_Word GoalInfo_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyType_14, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(2), UnifyType_14, 1) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSInitInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0))));
    LHSFinalInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1))));
    RHSInitInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 2))));
    RHSFinalInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 3))));
    {
      LHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHSTuple_21, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 1) = ((MR_Box) (LHSInitInst_17));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 2) = ((MR_Box) (LHSFinalInst_18));
    }
    {
      RHSTuple_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSTuple_22, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 1) = ((MR_Box) (RHSInitInst_19));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 2) = ((MR_Box) (RHSFinalInst_20));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (RHSTuple_22));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (LHSTuple_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
    }
    hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_13, Var_33, &InstmapDelta_23);
    {
      GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, &NonLocals_25);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_25, InstmapDelta_23, (MR_Integer) 0, (MR_Integer) 0, Context_12, &GoalInfo_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_28));
    }
    *STATE_VARIABLE_NewPredInfo_30 = STATE_VARIABLE_NewPredInfo_0_29;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_NewPredVarSet_21;
    MR_Word conv3_STATE_VARIABLE_NewPredVarTypes_23;
    MR_Word conv2_STATE_VARIABLE_OldPredVarSet_25;
    MR_Word conv1_STATE_VARIABLE_OldPredVarTypes_27;
    MR_Word conv0_STATE_VARIABLE_VarMapping_29;

    transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NewPredVarSet_21, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_NewPredVarTypes_23, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_OldPredVarSet_25, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_OldPredVarTypes_27, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_VarMapping_29);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NewPredVarSet_21));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_NewPredVarTypes_23));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_OldPredVarSet_25));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_OldPredVarTypes_27));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_VarMapping_29));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word AtomicGoal0_10,
  MR_Word * AtomicGoal_11,
  MR_Word AtomicGoalVars_12,
  MR_Word InnerDI_13,
  MR_Word InnerUO_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * STATE_VARIABLE_NewPredInfo_42,
  MR_Word STATE_VARIABLE_StmInfo_0_43,
  MR_Word * STATE_VARIABLE_StmInfo_44)
{
  {
    MR_bool succeeded;
    MR_Word NewProcInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4))));
    MR_Word OldProcInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3))));
    MR_Word NewPredVarSet0_19;
    MR_Word NewPredVarTypes0_20;
    MR_Word OldPredVarSet0_21;
    MR_Word OldPredVarTypes0_22;
    MR_Word LocalVars_24;
    MR_Word OrigInnerDI_26;
    MR_Word OrigInnerUO_27;
    MR_Word LocalVarList_28;
    MR_Word VarMapping0_29;
    MR_Word NewPredVarSet_30;
    MR_Word NewPredVarTypes_31;
    MR_Word OldPredVarSet_32;
    MR_Word OldPredVarTypes_33;
    MR_Word VarMapping1_34;
    MR_Word VarMapping_35;
    MR_Word NewProcInfo1_37;
    MR_Word NewProcInfo_38;
    MR_Word OldProcInfo1_39;
    MR_Word OldProcInfo_40;
    MR_Box conv9_NewPredVarSet_30;
    MR_Box conv8_NewPredVarTypes_31;
    MR_Box conv7_OldPredVarSet_32;
    MR_Box conv6_OldPredVarTypes_33;
    MR_Box conv5_VarMapping1_34;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Integer Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Integer Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Integer Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Integer Var_73;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(NewProcInfo0_17, &NewPredVarSet0_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(NewProcInfo0_17, &NewPredVarTypes0_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(OldProcInfo0_18, &OldPredVarSet0_21);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(OldProcInfo0_18, &OldPredVarTypes0_22);
    LocalVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 1))));
    OrigInnerDI_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 3))));
    OrigInnerUO_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 4))));
    LocalVarList_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LocalVars_24);
    VarMapping0_29 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]));
    mercury__list__foldl5_12_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[3]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[3]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[6]), LocalVarList_28, ((MR_Box) (NewPredVarSet0_19)), &conv9_NewPredVarSet_30, ((MR_Box) (NewPredVarTypes0_20)), &conv8_NewPredVarTypes_31, ((MR_Box) (OldPredVarSet0_21)), &conv7_OldPredVarSet_32, ((MR_Box) (OldPredVarTypes0_22)), &conv6_OldPredVarTypes_33, ((MR_Box) (VarMapping0_29)), &conv5_VarMapping1_34);
    NewPredVarSet_30 = ((MR_Word) (conv9_NewPredVarSet_30));
    NewPredVarTypes_31 = ((MR_Word) (conv8_NewPredVarTypes_31));
    OldPredVarSet_32 = ((MR_Word) (conv7_OldPredVarSet_32));
    OldPredVarTypes_33 = ((MR_Word) (conv6_OldPredVarTypes_33));
    VarMapping1_34 = ((MR_Word) (conv5_VarMapping1_34));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (OrigInnerUO_27)));
    if (succeeded)
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (InnerDI_13)), VarMapping1_34, &VarMapping_35);
    else
    {
      MR_Word VarMapping2_36;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (InnerDI_13)), VarMapping1_34, &VarMapping2_36);
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerUO_27)), ((MR_Box) (InnerUO_14)), VarMapping2_36, &VarMapping_35);
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_35, AtomicGoal0_10, AtomicGoal_11);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(NewPredVarSet_30, NewProcInfo0_17, &NewProcInfo1_37);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(NewPredVarTypes_31, NewProcInfo1_37, &NewProcInfo_38);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(OldPredVarSet_32, OldProcInfo0_18, &OldProcInfo1_39);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(OldPredVarTypes_33, OldProcInfo1_39, &OldProcInfo_40);
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1))));
    Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5))));
    Var_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewProcInfo_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_66));
    }
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1))));
    Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4))));
    Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5))) & (MR_Integer) 1);
    Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OldProcInfo_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_72));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_73));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__587__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
  MR_Word GoalList_3,
  MR_Word * GoalVar_4)
{
  {
    MR_Word InputVarList_8;
    MR_Word InputVars_9;
    MR_Word GoalVar0_10;
    MR_Box conv1_GoalVar0_10;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[5]), GoalList_3, &InputVarList_8);
    InputVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_8);
    conv1_GoalVar0_10 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), GoalList_3);
    GoalVar0_10 = ((MR_Word) (conv1_GoalVar0_10));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 2))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 3))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *GoalVar_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InputVars_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_11_p_0(
  MR_Word Context_12,
  MR_Word AtomicGoalVars_13,
  MR_Word ReturnType_14,
  MR_Word StmVarDI_15,
  MR_Word StmVarUO_16,
  MR_Word WrapperID_17,
  MR_Word RecCall_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_42,
  MR_Word * STATE_VARIABLE_NewPredInfo_43)
{
  {
    MR_Word InputVars_22;
    MR_Word InputTypes_24;
    MR_Word InputModes_26;
    MR_Word AtomicClosureVar_28;
    MR_Word ClosureAssign_29;
    MR_Word RttiTypeVar_30;
    MR_Word RttiTypeVarAssign_31;
    MR_Word Exception_Result_Type_32;
    MR_Word ExceptRes_Success_Functor_33;
    MR_Word ExceptRes_Failure_Functor_34;
    MR_Word ReturnExceptVar_35;
    MR_Word Goal_StmCreate_36;
    MR_Word Goal_TryStm_37;
    MR_Word Branch_AtomicSuccess_38;
    MR_Word Branch_AtomicException_39;
    MR_Word DisjGoal_40;
    MR_Word Goal0_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_NewPredInfo_46_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_NewPredInfo_60_60;
    MR_Word STATE_VARIABLE_NewPredInfo_62_62;
    MR_Word Var_64;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_NewPredInfo_73_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_NewPredInfo_90_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word STATE_VARIABLE_NewPredInfo_123_123;
    MR_Word STATE_VARIABLE_NewPredInfo_124_124;
    MR_Word Var_125;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_13, &InputVars_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_13, StmInfo_20, &InputTypes_24, &Var_25);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_13, &InputModes_26, &Var_27);
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ReturnType_14));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_24, Var_47);
    Var_54 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_58 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_26, Var_53);
    transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_17, InputVars_22, Var_44, Var_45, &AtomicClosureVar_28, &ClosureAssign_29, STATE_VARIABLE_NewPredInfo_0_42, &STATE_VARIABLE_NewPredInfo_46_46);
    transform_hlds__stm_expand__make_type_info_5_p_0(ReturnType_14, &RttiTypeVar_30, &RttiTypeVarAssign_31, STATE_VARIABLE_NewPredInfo_46_46, &STATE_VARIABLE_NewPredInfo_60_60);
    Exception_Result_Type_32 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_14);
    ExceptRes_Success_Functor_33 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    ExceptRes_Failure_Functor_34 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Exception_Result_Type_32, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[8])), &ReturnExceptVar_35, STATE_VARIABLE_NewPredInfo_60_60, &STATE_VARIABLE_NewPredInfo_62_62);
    Var_64 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (StmVarDI_15));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_77 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]));
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (StmVarDI_15));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_75);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_64, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_70, (MR_Word) ((MR_Unsigned) 0U), Var_72, &Goal_StmCreate_36, STATE_VARIABLE_NewPredInfo_62_62, &STATE_VARIABLE_NewPredInfo_73_73);
    Var_81 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (StmVarUO_16));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (StmVarDI_15));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ReturnExceptVar_35));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (AtomicClosureVar_28));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (RttiTypeVar_30));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_92));
    }
    Var_99 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[2]));
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (RttiTypeVar_30));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (AtomicClosureVar_28));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (ReturnExceptVar_35));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (StmVarDI_15));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (StmVarUO_16));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_102));
    }
    Var_89 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_97);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_81, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[9])), (MR_Integer) 4, (MR_Integer) 0, Var_87, (MR_Word) ((MR_Unsigned) 0U), Var_89, &Goal_TryStm_37, STATE_VARIABLE_NewPredInfo_73_73, &STATE_VARIABLE_NewPredInfo_90_90);
    transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_13, ReturnType_14, ReturnExceptVar_35, &Branch_AtomicSuccess_38, StmInfo_20, STATE_VARIABLE_NewPredInfo_90_90, &STATE_VARIABLE_NewPredInfo_123_123);
    transform_hlds__stm_expand__create_test_on_exception_8_p_0(Context_12, ReturnExceptVar_35, StmVarUO_16, ReturnType_14, RecCall_18, &Branch_AtomicException_39, STATE_VARIABLE_NewPredInfo_123_123, &STATE_VARIABLE_NewPredInfo_124_124);
    {
      Var_129 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (ExceptRes_Failure_Functor_34));
      MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) (Branch_AtomicException_39));
    }
    {
      Var_132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (ExceptRes_Success_Functor_33));
      MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) (Branch_AtomicSuccess_38));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_131));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(ReturnExceptVar_35, Var_125, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_40, STATE_VARIABLE_NewPredInfo_124_124, STATE_VARIABLE_NewPredInfo_43);
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Goal_StmCreate_36));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (RttiTypeVarAssign_31));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (DisjGoal_40));
      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Goal_TryStm_37));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_139));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (ClosureAssign_29));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
    }
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_136, Var_137);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_135, &Goal0_41);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(Goal0_41, (MR_Integer) 0, Goal_19);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_20;

    transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2661__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_20);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_20));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_14;

    transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2660__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_14);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_14));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * InputModes_5,
  MR_Word * OutputModes_6)
{
  {
    MR_Word InputVars_7;
    MR_Word OutputVars_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word InputSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 0))));
    MR_Word OutputSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 2))));

    InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_26);
    OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_27);
    Var_10 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Var_10));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_9, InputVars_7, InputModes_5);
    Var_12 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_11, OutputVars_8, OutputModes_6);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
  MR_Word StmGoalVars_5,
  MR_Word StmInfo_6,
  MR_Word * InputTypes_7,
  MR_Word * OutputTypes_8)
{
  {
    MR_Word ProcInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 3))));
    MR_Word VarTypes_10;
    MR_Word InputVars_11;
    MR_Word OutputVars_12;
    MR_Word InputSet_22;
    MR_Word OutputSet_23;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_9, &VarTypes_10);
    InputSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 0))));
    OutputSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 2))));
    InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_22);
    OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_23);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_10, InputVars_11, InputTypes_7);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_10, OutputVars_12, OutputTypes_8);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * Input_5,
  MR_Word * Output_6)
{
  {
    MR_Word InputSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 0))));
    MR_Word OutputSet_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 2))));

    *Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_7);
    *Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_8);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word GoalIn_4,
  MR_Word ScopePurity_5,
  MR_Word * GoalOut_6)
{
  {
    MR_Word GoalInInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalIn_4, (MR_Integer) 1))));
    MR_Word NonLocals_9;
    MR_Word InstMapDelta_10;
    MR_Word Detism_11;
    MR_Word Context_13;
    MR_Word GoalInfo_14;
    MR_Word Reason_15;
    MR_Word GoalOutExpr_16;

    NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInInfo_8);
    InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInInfo_8);
    Detism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInInfo_8);
    Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInInfo_8);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_9, InstMapDelta_10, Detism_11, ScopePurity_5, Context_13, &GoalInfo_14);
    {
      Reason_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Reason_15, 1) = (MR_Box) ((MR_Unsigned) (ScopePurity_5));
    }
    {
      GoalOutExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 1) = ((MR_Box) (Reason_15));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 2) = ((MR_Box) (GoalIn_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *GoalOut_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalOutExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
  MR_Word PredProcID_9,
  MR_Word Args_10,
  MR_Word ArgTypes_11,
  MR_Word ArgModes_12,
  MR_Word * ClosureVar_13,
  MR_Word * ClosureAssignGoal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_Word ShroudPredProcID_16;
    MR_Word ClosureType_17;
    MR_Word ClosureCons_18;
    MR_Word ClosureAssignGoal0_19;
    MR_Word ClosureAssignInstmapDeltaList_20;
    MR_Word ClosureAssignInstmapDelta_21;
    MR_Word ClosureAssignExpr_22;
    MR_Word ClosureAssignInfo0_23;
    MR_Word ClosureAssignInfo_24;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;

    ShroudPredProcID_16 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(PredProcID_9);
    parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, ArgTypes_11, &ClosureType_17);
    {
      ClosureCons_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 1) = ((MR_Box) (ShroudPredProcID_16));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 2) = NULL;
    }
    transform_hlds__stm_expand__create_aux_variable_5_p_0(ClosureType_17, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[7])), ClosureVar_13, STATE_VARIABLE_NewPredInfo_0_25, STATE_VARIABLE_NewPredInfo_26);
    hlds__make_goal__construct_functor_4_p_0(*ClosureVar_13, ClosureCons_18, Args_10, &ClosureAssignGoal0_19);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (*ClosureVar_13));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ArgModes_12));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_39)));
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_33, Var_35);
    ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ClosureAssignInstmapDeltaList_20);
    ClosureAssignExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureAssignGoal0_19, (MR_Integer) 0))));
    ClosureAssignInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureAssignGoal0_19, (MR_Integer) 1))));
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ClosureAssignInstmapDelta_21, ClosureAssignInfo0_23, &ClosureAssignInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ClosureAssignGoal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClosureAssignExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClosureAssignInfo_24));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
  MR_Word AtomicGoalVars_8,
  MR_Word ReturnType_9,
  MR_Word ReturnExceptVar_10,
  MR_Word * Goal_11,
  MR_Word StmInfo_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_Word OutputVars_15;
    MR_Word OutputTypes_17;
    MR_Word InputSet_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0))));
    MR_Word OutputSet_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2))));
    MR_Word ProcInfo0_72;
    MR_Word VarTypes_73;
    MR_Word InputVars_74;
    MR_Word OutputVars_75;
    MR_Word InputSet_85;
    MR_Word OutputSet_86;
    MR_Word Var_14;
    MR_Word Var_16;

    Var_14 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_57);
    OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_58);
    ProcInfo0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 3))));
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_72, &VarTypes_73);
    InputSet_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0))));
    OutputSet_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2))));
    InputVars_74 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_85);
    OutputVars_75 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_86);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_73, InputVars_74, &Var_16);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_73, OutputVars_75, &OutputTypes_17);
    if ((OutputTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SuccessResultVar_18;
      MR_Word Var_47;
      MR_Word Var_48;

      transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[5])), &SuccessResultVar_18, STATE_VARIABLE_NewPredInfo_0_28, STATE_VARIABLE_NewPredInfo_29);
      Var_47 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SuccessResultVar_18));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_47, Var_48, Goal_11);
    }
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 1))));

      if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OutVar_20;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Box conv0_OutVar_20;

        conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_15);
        OutVar_20 = ((MR_Word) (conv0_OutVar_20));
        Var_41 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (OutVar_20));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_41, Var_42, Goal_11);
        *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_0_28;
      }
      else
      {
        MR_Word MakeType_25;
        MR_Word DeconstructGoal_26;
        MR_Word UnifyOutputGoal_27;
        MR_Word STATE_VARIABLE_NewPredInfo_31_31;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word SuccessResultVar_50;
        MR_Word Var_24;

        transform_hlds__stm_expand__make_type_info_5_p_0(ReturnType_9, &Var_24, &MakeType_25, STATE_VARIABLE_NewPredInfo_0_28, &STATE_VARIABLE_NewPredInfo_31_31);
        transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[6])), &SuccessResultVar_50, STATE_VARIABLE_NewPredInfo_31_31, STATE_VARIABLE_NewPredInfo_29);
        Var_35 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (SuccessResultVar_50));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_35, Var_36, &DeconstructGoal_26);
        hlds__make_goal__deconstruct_tuple_3_p_0(SuccessResultVar_50, OutputVars_15, &UnifyOutputGoal_27);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (UnifyOutputGoal_27));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MakeType_25));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (DeconstructGoal_26));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
        }
        transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_38, Goal_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word Type_6,
  MR_Word * Var_7,
  MR_Word * Goals_8,
  MR_Word NewPredInfo0_9,
  MR_Word * NewPredInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 0))));
    MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 1))));
    MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 2))));
    MR_Word PredInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 3))));
    MR_Word ProcInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 4))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 5))));
    MR_Integer VarCnt_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 6))));
    MR_Word PolyInfo0_18;
    MR_Word PolyInfo_19;
    MR_Word PolySpecs_20;
    MR_Word PredInfo_21;
    MR_Word ProcInfo_22;
    MR_Word ModuleInfo_23;
    MR_Word Var_24;

    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_11, PredInfo0_14, ProcInfo0_15, &PolyInfo0_18);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Type_6, Context_16, Var_7, Goals_8, PolyInfo0_18, &PolyInfo_19);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_19, &PolySpecs_20, PredInfo0_14, &PredInfo_21, ProcInfo0_15, &ProcInfo_22, &ModuleInfo_23);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__stm_expand__make_type_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (PolySpecs_20));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *NewPredInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredId_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcId_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredInfo_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcInfo_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (VarCnt_17));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_8_p_0(
  MR_Word Context_9,
  MR_Word ExceptVar_10,
  MR_Word StmVar_11,
  MR_Word ReturnType_12,
  MR_Word RecCall_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word ExceptUnivVar_16;
    MR_Word DeconstructException_17;
    MR_Word TypeInfoRollbackVar_18;
    MR_Word TypeInfoRollbackAssign_19;
    MR_Word DropStateGoal_20;
    MR_Word TrueGoal_21;
    MR_Word RethrowBranch_22;
    MR_Word RetryBranch_23;
    MR_Word FalseGoal_24;
    MR_Word IfThenElseGoal_25;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_NewPredInfo_30_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_NewPredInfo_36_36;
    MR_Word Var_37;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_NewPredInfo_46_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_NewPredInfo_57_57;
    MR_Word STATE_VARIABLE_NewPredInfo_58_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_NewPredInfo_60_60;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word ModuleInfo0_75;
    MR_Word PredId_76;
    MR_Integer ProcId_77;
    MR_Word PredInfo0_78;
    MR_Word ProcInfo0_79;
    MR_Word Context_80;
    MR_Integer VarCnt_81;
    MR_Word PolyInfo0_82;
    MR_Word PolyInfo_83;
    MR_Word PolySpecs_84;
    MR_Word PredInfo_85;
    MR_Word ProcInfo_86;
    MR_Word ModuleInfo_87;
    MR_Word Var_88;

    Var_28 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_28, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[4])), &ExceptUnivVar_16, STATE_VARIABLE_NewPredInfo_0_26, &STATE_VARIABLE_NewPredInfo_30_30);
    Var_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ExceptUnivVar_16));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ExceptVar_10, Var_32, Var_33, &DeconstructException_17);
    Var_35 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    ModuleInfo0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 0))));
    PredId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 1))));
    ProcId_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 2))));
    PredInfo0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 3))));
    ProcInfo0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 4))));
    Context_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 5))));
    VarCnt_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 6))));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_75, PredInfo0_78, ProcInfo0_79, &PolyInfo0_82);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Var_35, Context_80, &TypeInfoRollbackVar_18, &TypeInfoRollbackAssign_19, PolyInfo0_82, &PolyInfo_83);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_83, &PolySpecs_84, PredInfo0_78, &PredInfo_85, ProcInfo0_79, &ProcInfo_86, &ModuleInfo_87);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (transform_hlds__stm_expand__create_test_on_exception_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (PolySpecs_84));
      MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 0) = ((MR_Box) (ModuleInfo_87));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 1) = ((MR_Box) (PredId_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 2) = ((MR_Box) (ProcId_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 3) = ((MR_Box) (PredInfo_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 4) = ((MR_Box) (ProcInfo_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 5) = ((MR_Box) (Context_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_36_36, 6) = ((MR_Box) (VarCnt_81));
    }
    Var_37 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (StmVar_11));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (StmVar_11));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_45 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_48);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_37, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_43, (MR_Word) ((MR_Unsigned) 0U), Var_45, &DropStateGoal_20, STATE_VARIABLE_NewPredInfo_36_36, &STATE_VARIABLE_NewPredInfo_46_46);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (RecCall_13));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (DropStateGoal_20));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_54, &TrueGoal_21);
    transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(StmVar_11, ExceptVar_10, ReturnType_12, RecCall_13, &RethrowBranch_22, STATE_VARIABLE_NewPredInfo_46_46, &STATE_VARIABLE_NewPredInfo_57_57);
    transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(StmVar_11, RecCall_13, &RetryBranch_23, STATE_VARIABLE_NewPredInfo_57_57, &STATE_VARIABLE_NewPredInfo_58_58);
    Var_59 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_9, TypeInfoRollbackVar_18, ExceptUnivVar_16, Var_59, RetryBranch_23, RethrowBranch_22, &FalseGoal_24, STATE_VARIABLE_NewPredInfo_58_58, &STATE_VARIABLE_NewPredInfo_60_60);
    Var_61 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_9, TypeInfoRollbackVar_18, ExceptUnivVar_16, Var_61, TrueGoal_21, FalseGoal_24, &IfThenElseGoal_25, STATE_VARIABLE_NewPredInfo_60_60, STATE_VARIABLE_NewPredInfo_27);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (DeconstructException_17));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (IfThenElseGoal_25));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoRollbackAssign_19, Var_67);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_64, Var_66);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_63, Goal_14);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
  MR_Word StmVar_6,
  MR_Word RecCall_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_15)
{
  {
    MR_Word BlockGoal_10;
    MR_Word UnlockGoal_11;
    MR_Word LockAndValidateGoals_12;
    MR_Word DropStateCall_13;
    MR_Word Var_16;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_NewPredInfo_36_36;
    MR_Word STATE_VARIABLE_NewPredInfo_38_38;
    MR_Word Var_39;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Context_74;
    MR_Word ModuleInfo_75;

    Var_16 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (StmVar_6));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(StmVar_6);
    ModuleInfo_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 0))));
    Context_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 5))));
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_75, Var_16, (MR_String) "stm_block", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_22, (MR_Word) ((MR_Unsigned) 0U), Var_24, Context_74, &BlockGoal_10);
    Var_27 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_35 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_27, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_35, &UnlockGoal_11, STATE_VARIABLE_NewPredInfo_0_14, &STATE_VARIABLE_NewPredInfo_36_36);
    transform_hlds__stm_expand__template_lock_and_validate_7_p_0(StmVar_6, (MR_Integer) 0, BlockGoal_10, UnlockGoal_11, &LockAndValidateGoals_12, STATE_VARIABLE_NewPredInfo_36_36, &STATE_VARIABLE_NewPredInfo_38_38);
    Var_39 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (StmVar_6));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_50);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_22, (MR_Word) ((MR_Unsigned) 0U), Var_47, &DropStateCall_13, STATE_VARIABLE_NewPredInfo_38_38, STATE_VARIABLE_NewPredInfo_15);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (RecCall_7));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (DropStateCall_13));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LockAndValidateGoals_12, Var_57);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_56, Goal_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2429__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
  MR_Word StmVar_8,
  MR_Word ExceptionVar_9,
  MR_Word ReturnType_10,
  MR_Word RecursiveCall_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_21,
  MR_Word * STATE_VARIABLE_NewPredInfo_22)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoVar_14;
    MR_Word CreateTypeInfoGoals_15;
    MR_Word Goal_ExceptionThrow_Call_16;
    MR_Word Goal_ValidBranch_17;
    MR_Word DropStateCall_18;
    MR_Word Goal_InvalidBranch_19;
    MR_Word Goals_20;
    MR_Word STATE_VARIABLE_NewPredInfo_23_23;
    MR_Word Var_24;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_NewPredInfo_51_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word ModuleInfo0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 0))));
    MR_Word PredId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 1))));
    MR_Integer ProcId_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 2))));
    MR_Word PredInfo0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 3))));
    MR_Word ProcInfo0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 4))));
    MR_Word Context_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 5))));
    MR_Integer VarCnt_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 6))));
    MR_Word PolyInfo0_77;
    MR_Word PolyInfo_78;
    MR_Word PolySpecs_79;
    MR_Word PredInfo_80;
    MR_Word ProcInfo_81;
    MR_Word ModuleInfo_82;
    MR_Word Var_83;

    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_70, PredInfo0_73, ProcInfo0_74, &PolyInfo0_77);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ReturnType_10, Context_75, &TypeInfoVar_14, &CreateTypeInfoGoals_15, PolyInfo0_77, &PolyInfo_78);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_78, &PolySpecs_79, PredInfo0_73, &PredInfo_80, ProcInfo0_74, &ProcInfo_81, &ModuleInfo_82);
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (PolySpecs_79));
      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 0) = ((MR_Box) (ModuleInfo_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 1) = ((MR_Box) (PredId_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 2) = ((MR_Box) (ProcId_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 3) = ((MR_Box) (PredInfo_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 4) = ((MR_Box) (ProcInfo_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 5) = ((MR_Box) (Context_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_23_23, 6) = ((MR_Box) (VarCnt_76));
    }
    Var_24 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ExceptionVar_9));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TypeInfoVar_14));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_34));
    }
    Var_32 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_30);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_24, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, Var_30, (MR_Word) ((MR_Unsigned) 0U), Var_32, &Goal_ExceptionThrow_Call_16, STATE_VARIABLE_NewPredInfo_23_23, &STATE_VARIABLE_NewPredInfo_33_33);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_16));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateTypeInfoGoals_15, Var_40);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_39, &Goal_ValidBranch_17);
    Var_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_50 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_53);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_48, (MR_Word) ((MR_Unsigned) 0U), Var_50, &DropStateCall_18, STATE_VARIABLE_NewPredInfo_33_33, &STATE_VARIABLE_NewPredInfo_51_51);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (RecursiveCall_11));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (DropStateCall_18));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_59, &Goal_InvalidBranch_19);
    transform_hlds__stm_expand__template_lock_and_validate_7_p_0(StmVar_8, (MR_Integer) 1, Goal_ValidBranch_17, Goal_InvalidBranch_19, &Goals_20, STATE_VARIABLE_NewPredInfo_51_51, STATE_VARIABLE_NewPredInfo_22);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Goals_20, Goal_12);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
  MR_Word StmVar_8,
  MR_Word UnlockAfterwards_9,
  MR_Word ValidGoal_10,
  MR_Word InvalidGoal_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * STATE_VARIABLE_NewPredInfo_20)
{
  {
    MR_Word IsValidVar_14;
    MR_Word LockCall_15;
    MR_Word ValidCall_16;
    MR_Word DisjGoal_17;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_NewPredInfo_23_23;
    MR_Word Var_25;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word Var_35;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;

    Var_21 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_21, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[3])), &IsValidVar_14, STATE_VARIABLE_NewPredInfo_0_19, &STATE_VARIABLE_NewPredInfo_23_23);
    Var_25 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_25, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_33, &LockCall_15, STATE_VARIABLE_NewPredInfo_23_23, &STATE_VARIABLE_NewPredInfo_34_34);
    Var_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (IsValidVar_14));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3])));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (IsValidVar_14));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_52));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_47);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_35, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_41, (MR_Word) ((MR_Unsigned) 0U), Var_43, &ValidCall_16, STATE_VARIABLE_NewPredInfo_34_34, &STATE_VARIABLE_NewPredInfo_44_44);
    Var_61 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (ValidGoal_10));
    }
    Var_65 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (InvalidGoal_11));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_63));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(IsValidVar_14, Var_56, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_17, STATE_VARIABLE_NewPredInfo_44_44, &STATE_VARIABLE_NewPredInfo_59_59);
    switch (UnlockAfterwards_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_68;
          MR_Word Var_69;

          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (DisjGoal_17));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ValidCall_16));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LockCall_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_68));
          }
          *STATE_VARIABLE_NewPredInfo_20 = STATE_VARIABLE_NewPredInfo_59_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnlockCall_18;
          MR_Word Var_71;
          MR_Word Var_79;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          Var_71 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          Var_79 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          transform_hlds__stm_expand__create_simple_call_12_p_0(Var_71, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_79, &UnlockCall_18, STATE_VARIABLE_NewPredInfo_59_59, STATE_VARIABLE_NewPredInfo_20);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DisjGoal_17));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (UnlockCall_18));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ValidCall_16));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LockCall_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_81));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
  MR_Word ProgVar_8,
  MR_Word Cases_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word * OutGoal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * STATE_VARIABLE_NewPredInfo_20)
{
  {
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 5))));
    MR_Word NonLocals_15;
    MR_Word InstMapDelta_16;
    MR_Word OutGoalExpr_17;
    MR_Word GoalInfo_18;

    NonLocals_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_16);
    {
      OutGoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 1) = ((MR_Box) (ProgVar_8));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 3) = ((MR_Box) (Cases_9));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_16, Detism_10, Purity_11, Context_14, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *OutGoal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutGoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
    *STATE_VARIABLE_NewPredInfo_20 = STATE_VARIABLE_NewPredInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(
  MR_Word Context_10,
  MR_Word RttiVar_11,
  MR_Word ExceptVar_12,
  MR_Word RollbackExceptCons_13,
  MR_Word TrueGoal_14,
  MR_Word FalseGoal_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_27,
  MR_Word * STATE_VARIABLE_NewPredInfo_28)
{
  {
    MR_Word UnivPayloadVar_18;
    MR_Word AssignGoal_19;
    MR_Word RollbackExceptVar_20;
    MR_Word UnivCall_21;
    MR_Word TestGoal_23;
    MR_Word CondGoal_24;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_NewPredInfo_31_31;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word Var_37;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_NewPredInfo_46_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_NewPredInfo_74_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_NewPredInfo_79_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word _UnifyCall_22;

    Var_29 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[0])), &UnivPayloadVar_18, STATE_VARIABLE_NewPredInfo_0_27, &STATE_VARIABLE_NewPredInfo_31_31);
    Var_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_10, RollbackExceptCons_13, Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[1])), &AssignGoal_19, &RollbackExceptVar_20, STATE_VARIABLE_NewPredInfo_31_31, &STATE_VARIABLE_NewPredInfo_35_35);
    Var_37 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ExceptVar_12));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (UnivPayloadVar_18));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (RttiVar_11));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_48));
    }
    Var_53 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[2]));
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (RttiVar_11));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (ExceptVar_12));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (UnivPayloadVar_18));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_56));
    }
    Var_45 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_51);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_37, (MR_String) "type_to_univ", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[2])), (MR_Integer) 1, (MR_Integer) 0, Var_43, (MR_Word) ((MR_Unsigned) 0U), Var_45, &UnivCall_21, STATE_VARIABLE_NewPredInfo_35_35, &STATE_VARIABLE_NewPredInfo_46_46);
    Var_65 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (UnivPayloadVar_18));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (RollbackExceptVar_20));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RttiVar_11));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_75));
    }
    Var_73 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_65, (MR_String) "unify", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, Var_71, (MR_Word) ((MR_Unsigned) 0U), Var_73, &_UnifyCall_22, STATE_VARIABLE_NewPredInfo_46_46, &STATE_VARIABLE_NewPredInfo_74_74);
    Var_80 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_81 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_82 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_83 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Var_83));
    }
    transform_hlds__stm_expand__create_var_test_6_p_0(UnivPayloadVar_18, RollbackExceptVar_20, Var_78, &TestGoal_23, STATE_VARIABLE_NewPredInfo_74_74, &STATE_VARIABLE_NewPredInfo_79_79);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (TestGoal_23));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (UnivCall_21));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (AssignGoal_19));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_84, &CondGoal_24);
    transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) ((MR_Unsigned) 0U), CondGoal_24, TrueGoal_14, FalseGoal_15, (MR_Integer) 0, (MR_Integer) 2, Goal_16, STATE_VARIABLE_NewPredInfo_79_79, STATE_VARIABLE_NewPredInfo_28);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
  MR_Word GoalsInConj_3,
  MR_Word * ConjGoal_4)
{
  {
    MR_Word ConjGoalExpr_6;
    MR_Word NonLocals_7;
    MR_Word InstMapDelta_8;
    MR_Word Detism_9;
    MR_Word Purity_10;
    MR_Word GoalAInfo_11;
    MR_Word Context_12;
    MR_Word ConjGoalInfo_13;
    MR_Word Var_14;
    MR_Box conv0_Var_14;

    {
      ConjGoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 2) = ((MR_Box) (GoalsInConj_3));
    }
    hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalsInConj_3, &NonLocals_7);
    hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalsInConj_3, &InstMapDelta_8);
    hlds__hlds_goal__goal_list_determinism_2_p_0(GoalsInConj_3, &Detism_9);
    hlds__hlds_goal__goal_list_purity_2_p_0(GoalsInConj_3, &Purity_10);
    conv0_Var_14 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsInConj_3);
    Var_14 = ((MR_Word) (conv0_Var_14));
    GoalAInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalAInfo_11);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, InstMapDelta_8, Detism_9, Purity_10, Context_12, &ConjGoalInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ConjGoal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConjGoalExpr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConjGoalInfo_13));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
  MR_Word ExistVars_10,
  MR_Word Cond_11,
  MR_Word Then_12,
  MR_Word Else_13,
  MR_Word Detism_14,
  MR_Word Purity_15,
  MR_Word * OutGoal_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_23,
  MR_Word * STATE_VARIABLE_NewPredInfo_24)
{
  {
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 5))));
    MR_Word OutGoalExpr_19;
    MR_Word NonLocals_20;
    MR_Word InstMapDelta_21;
    MR_Word GoalInfo_22;

    {
      OutGoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 1) = ((MR_Box) (ExistVars_10));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 2) = ((MR_Box) (Cond_11));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 3) = ((MR_Box) (Then_12));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 4) = ((MR_Box) (Else_13));
    }
    NonLocals_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_21);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_20, InstMapDelta_21, Detism_14, Purity_15, Context_18, &GoalInfo_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *OutGoal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutGoalExpr_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_22));
    }
    *STATE_VARIABLE_NewPredInfo_24 = STATE_VARIABLE_NewPredInfo_0_23;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word ModuleName_13,
  MR_String ProcName_14,
  MR_Word PredOrFunc_15,
  MR_Word Mode_16,
  MR_Word Detism_17,
  MR_Word Purity_18,
  MR_Word ProgVars_19,
  MR_Word GoalFeatures_20,
  MR_Word InstmapDelta_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27)
{
  {
    MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 5))));
    MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 0))));

    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_25, ModuleName_13, ProcName_14, PredOrFunc_15, Mode_16, Detism_17, Purity_18, ProgVars_19, GoalFeatures_20, InstmapDelta_21, Context_24, Goal_22);
    *STATE_VARIABLE_NewPredInfo_27 = STATE_VARIABLE_NewPredInfo_0_26;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_29,
  MR_Word * STATE_VARIABLE_NewPredInfo_30)
{
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_29, (MR_Integer) 5))));
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_29, (MR_Integer) 0))));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSInitInst_17;
    MR_Word LHSFinalInst_18;
    MR_Word RHSInitInst_19;
    MR_Word RHSFinalInst_20;
    MR_Word LHSTuple_21;
    MR_Word RHSTuple_22;
    MR_Word InstmapDelta_23;
    MR_Word GoalExpr_24;
    MR_Word NonLocals_25;
    MR_Word GoalInfo_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnifyType_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), UnifyType_14, 1) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(3), UnifyType_14, 2) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSInitInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0))));
    LHSFinalInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1))));
    RHSInitInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 2))));
    RHSFinalInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 3))));
    {
      LHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHSTuple_21, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 1) = ((MR_Box) (LHSInitInst_17));
      MR_hl_field(MR_mktag(0), LHSTuple_21, 2) = ((MR_Box) (LHSFinalInst_18));
    }
    {
      RHSTuple_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSTuple_22, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 1) = ((MR_Box) (RHSInitInst_19));
      MR_hl_field(MR_mktag(0), RHSTuple_22, 2) = ((MR_Box) (RHSFinalInst_20));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (RHSTuple_22));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (LHSTuple_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
    }
    hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_13, Var_33, &InstmapDelta_23);
    {
      GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, &NonLocals_25);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_25, InstmapDelta_23, (MR_Integer) 1, (MR_Integer) 0, Context_12, &GoalInfo_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_28));
    }
    *STATE_VARIABLE_NewPredInfo_30 = STATE_VARIABLE_NewPredInfo_0_29;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(
  MR_Word Context_9,
  MR_Word ConsId_10,
  MR_Word Type_11,
  MR_Word MaybeName_12,
  MR_Word * Goal_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17)
{
  {
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Type_11, MaybeName_12, Var_14, STATE_VARIABLE_NewPredInfo_0_16, STATE_VARIABLE_NewPredInfo_17);
    hlds__make_goal__make_const_construction_4_p_0(Context_9, *Var_14, ConsId_10, Goal_13);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * STATE_VARIABLE_NewPredInfo_17)
{
  {
    MR_Word ProcInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4))));
    MR_Integer Cnt0_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6))));
    MR_Word MaybeName_12;
    MR_Word ProcInfo_14;
    MR_Integer Cnt_15;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word Var_42;

    if ((MaybeName0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeName_12 = MaybeName0_7;
    else
    {
      MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName0_7, (MR_Integer) 0))));
      MR_String Var_18;
      MR_String Var_19;
      MR_String Var_21;

      Var_21 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Cnt0_11)));
      Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", Var_21);
      Var_18 = mercury__string__f_43_43_2_f_0(Name_13, Var_19);
      {
        MaybeName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeName_12, 0) = ((MR_Box) (Var_18));
      }
    }
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Type_6, MaybeName_12, Var_8, ProcInfo0_10, &ProcInfo_14);
    Cnt_15 = (MR_Integer) ((MR_Unsigned) Cnt0_11 + (MR_Unsigned) 1);
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1))));
    Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcInfo_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Cnt_15));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word * StmOutDI_9,
  MR_Word * StmOutUO_10,
  MR_Word * StmInDI_11,
  MR_Word * StmInUO_12)
{
  {
    MR_bool succeeded;
    MR_Word GoalList0_13;
    MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word Var_29;

    succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalList0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 2))));
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (succeeded)
      if ((GoalList0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "empty conjunction");
          return;
        }
      else
      {
        MR_Word GoalList_17;
        MR_Word MaybeOutVarPair_18;
        MR_Word MaybeInVarPair_19;
        MR_Word MaybeInDI_20;
        MR_Word MaybeInUO_21;
        MR_Word MaybeOutDI_22;
        MR_Word MaybeOutUO_23;
        MR_Box conv0_MaybeInDI_20;
        MR_Box conv1_MaybeInUO_21;
        MR_Box conv2_MaybeOutDI_22;
        MR_Box conv3_MaybeOutUO_23;
        MR_Word StmInDI0_24;
        MR_Word StmInUO0_25;
        MR_Word StmOutDI0_26;
        MR_Word StmOutUO0_27;

        transform_hlds__stm_expand__remove_tail_4_p_0(GoalList0_13, &GoalList_17, &MaybeOutVarPair_18, &MaybeInVarPair_19);
        conv0_MaybeInDI_20 = mercury__pair__fst_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), MaybeInVarPair_19);
        MaybeInDI_20 = ((MR_Word) (conv0_MaybeInDI_20));
        conv1_MaybeInUO_21 = mercury__pair__snd_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), MaybeInVarPair_19);
        MaybeInUO_21 = ((MR_Word) (conv1_MaybeInUO_21));
        conv2_MaybeOutDI_22 = mercury__pair__fst_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), MaybeOutVarPair_18);
        MaybeOutDI_22 = ((MR_Word) (conv2_MaybeOutDI_22));
        conv3_MaybeOutUO_23 = mercury__pair__snd_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[2]), MaybeOutVarPair_18);
        MaybeOutUO_23 = ((MR_Word) (conv3_MaybeOutUO_23));
        succeeded = (MaybeInDI_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          StmInDI0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInDI_20, (MR_Integer) 0))));
          succeeded = (MaybeInUO_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StmInUO0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInUO_21, (MR_Integer) 0))));
            succeeded = (MaybeOutDI_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              StmOutDI0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutDI_22, (MR_Integer) 0))));
              succeeded = (MaybeOutUO_23 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                StmOutUO0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutUO_23, (MR_Integer) 0))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_30;

          *StmInDI_11 = StmInDI0_24;
          *StmInUO_12 = StmInUO0_25;
          *StmOutDI_9 = StmOutDI0_26;
          *StmOutUO_10 = StmOutUO0_27;
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (GoalList_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "Vars not extracted");
            return;
          }
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "atomic_goal not a conj");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[5]);
      *HeadVar__4_4 = *HeadVar__3_3;
    }
    else
    {
      MR_Word HeadGoal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailGoals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeOutDI_12;
      MR_Word MaybeOutUO_13;
      MR_Word MaybeInDI_14;
      MR_Word MaybeInUO_15;
      MR_Word TailGoals_16;
      MR_Word MaybeOutDI0_17;
      MR_Word MaybeOutUO0_18;
      MR_Word MaybeInDI0_19;
      MR_Word MaybeInUO0_20;
      MR_Word HeadGoalExpr0_21;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word X_26;
      MR_Word V_27;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_49;
      MR_Word Var_53;
      MR_String Var_54;

      transform_hlds__stm_expand__remove_tail_4_p_0(TailGoals0_10, &TailGoals_16, &Var_35, &Var_36);
      MaybeOutDI0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
      MaybeOutUO0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
      MaybeInDI0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      MaybeInUO0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
      HeadGoalExpr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal0_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) HeadGoalExpr0_21)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 2))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 5))));
        succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
          succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
            succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              V_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
              succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                Var_54 = (MR_String) "stm_from_outer_to_inner";
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_54));
                }
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_41, Var_49);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        {
          MaybeInDI_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeInDI_14, 0) = ((MR_Box) (V_27));
        }
        MaybeInUO_15 = MaybeInUO0_20;
        {
          MaybeOutDI_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOutDI_12, 0) = ((MR_Box) (X_26));
        }
        MaybeOutUO_13 = MaybeOutUO0_18;
        *HeadVar__2_2 = TailGoals_16;
      }
      else
      {
        MR_Word X_47;
        MR_Word V_48;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_50;
        MR_Word Var_55;
        MR_String Var_56;

        succeeded = ((MR_tag((MR_Word) HeadGoalExpr0_21)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 2))));
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 5))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              V_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
              Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
              succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
                Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
                succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_55 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                  Var_56 = (MR_String) "stm_from_inner_to_outer";
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_56));
                  }
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_46, Var_50);
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MaybeInDI_14 = MaybeInDI0_19;
          {
            MaybeInUO_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeInUO_15, 0) = ((MR_Box) (V_48));
          }
          MaybeOutDI_12 = MaybeOutDI0_17;
          {
            MaybeOutUO_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOutUO_13, 0) = ((MR_Box) (X_47));
          }
          *HeadVar__2_2 = TailGoals_16;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal0_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_16));
          }
          MaybeInDI_14 = MaybeInDI0_19;
          MaybeInUO_15 = MaybeInUO0_20;
          MaybeOutDI_12 = MaybeOutDI0_17;
          MaybeOutUO_13 = MaybeOutUO0_18;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeOutDI_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeOutUO_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeInDI_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeInUO_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
  MR_Word InitInstmap_10,
  MR_Word FinalInstmap_11,
  MR_Word Goals_12,
  MR_Word InnerDIs_13,
  MR_Word InnerUOs_14,
  MR_Word IgnoreVarList0_15,
  MR_Word * StmGoalVarList_16,
  MR_Word STATE_VARIABLE_StmInfo_0_27,
  MR_Word * STATE_VARIABLE_StmInfo_28)
{
  {
    MR_bool succeeded = (Goals_12 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (InnerDIs_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (InnerUOs_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *StmGoalVarList_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_StmInfo_28 = STATE_VARIABLE_StmInfo_0_27;
    }
    else
    {
      MR_Word HeadGoal_18;
      MR_Word TailGoals_19;
      MR_Word HeadInnerDI_20;
      MR_Word TailInnerDIs_21;
      MR_Word HeadInnerUO_22;
      MR_Word TailInnerUOs_23;

      succeeded = (Goals_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_12, (MR_Integer) 0))));
        TailGoals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_12, (MR_Integer) 1))));
        succeeded = (InnerDIs_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadInnerDI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerDIs_13, (MR_Integer) 0))));
          TailInnerDIs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerDIs_13, (MR_Integer) 1))));
          succeeded = (InnerUOs_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadInnerUO_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerUOs_14, (MR_Integer) 0))));
            TailInnerUOs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerUOs_14, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word IgnoreVarList_24;
        MR_Word StmGoalVar_25;
        MR_Word StmGoalVarList0_26;
        MR_Word Var_29;
        MR_Word ModuleInfo_44;
        MR_Word GoalVars0_45;
        MR_Word GoalVars_46;
        MR_Word GoalVarList_47;
        MR_Word GoalInfo_49;
        MR_Word GoalNonLocalSet0_50;
        MR_Word GoalNonLocalSet_51;
        MR_Word GoalNonLocals_52;
        MR_Word LocalVarsList_53;
        MR_Word InputVarsList_54;
        MR_Word OutputVarsList_58;
        MR_Word LocalVars_59;
        MR_Word InputVars_60;
        MR_Word OutputVars_61;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word _InputVarsList_57;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (HeadInnerUO_22));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (IgnoreVarList0_15));
        }
        {
          IgnoreVarList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IgnoreVarList_24, 0) = ((MR_Box) (HeadInnerDI_20));
          MR_hl_field(MR_mktag(1), IgnoreVarList_24, 1) = ((MR_Box) (Var_29));
        }
        ModuleInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 0))));
        hlds__goal_util__goal_vars_2_p_0(HeadGoal_18, &GoalVars0_45);
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVarList_24, GoalVars0_45, &GoalVars_46);
        GoalVarList_47 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_46);
        GoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_18, (MR_Integer) 1))));
        GoalNonLocalSet0_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_49);
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVarList_24, GoalNonLocalSet0_50, &GoalNonLocalSet_51);
        GoalNonLocals_52 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocalSet_51);
        transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_44, GoalVarList_47, InitInstmap_10, FinalInstmap_11, (MR_Word) ((MR_Unsigned) 0U), &LocalVarsList_53, (MR_Word) ((MR_Unsigned) 0U), &InputVarsList_54, (MR_Word) ((MR_Unsigned) 0U), &Var_55);
        transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_44, GoalNonLocals_52, InitInstmap_10, FinalInstmap_11, (MR_Word) ((MR_Unsigned) 0U), &Var_56, (MR_Word) ((MR_Unsigned) 0U), &_InputVarsList_57, (MR_Word) ((MR_Unsigned) 0U), &OutputVarsList_58);
        LocalVars_59 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LocalVarsList_53);
        InputVars_60 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarsList_54);
        OutputVars_61 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsList_58);
        {
          StmGoalVar_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 0) = ((MR_Box) (InputVars_60));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 1) = ((MR_Box) (LocalVars_59));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 2) = ((MR_Box) (OutputVars_61));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 3) = ((MR_Box) (HeadInnerDI_20));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 4) = ((MR_Box) (HeadInnerUO_22));
        }
        transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_10, FinalInstmap_11, TailGoals_19, TailInnerDIs_21, TailInnerUOs_23, IgnoreVarList_24, &StmGoalVarList0_26, STATE_VARIABLE_StmInfo_0_27, STATE_VARIABLE_StmInfo_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *StmGoalVarList_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmGoalVar_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StmGoalVarList0_26));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/9", (MR_String) "lengths mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word InitInstmap_3,
  MR_Word FinalInstmap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InitVarInst_31;
      MR_Word FinalVarInst_32;
      MR_Word STATE_VARIABLE_LocalVars_39_39;
      MR_Word STATE_VARIABLE_OutputVars_40_40;
      MR_Word STATE_VARIABLE_InputVars_41_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_HeadVar__9_9;

      hlds__instmap__instmap_lookup_var_3_p_0(InitInstmap_3, Var_24, &InitVarInst_31);
      hlds__instmap__instmap_lookup_var_3_p_0(FinalInstmap_4, Var_24, &FinalVarInst_32);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitVarInst_31);
      if (succeeded)
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, FinalVarInst_32);
      if (succeeded)
      {
        {
          STATE_VARIABLE_LocalVars_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_LocalVars_39_39, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_LocalVars_39_39, 1) = ((MR_Box) (HeadVar__5_5));
        }
        STATE_VARIABLE_OutputVars_40_40 = HeadVar__9_9;
        STATE_VARIABLE_InputVars_41_41 = HeadVar__7_7;
      }
      else
      {
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitVarInst_31);
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, FinalVarInst_32);
        if (succeeded)
        {
          {
            STATE_VARIABLE_OutputVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OutputVars_40_40, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OutputVars_40_40, 1) = ((MR_Box) (HeadVar__9_9));
          }
          STATE_VARIABLE_InputVars_41_41 = HeadVar__7_7;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitVarInst_31);
          if (succeeded)
            succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, FinalVarInst_32);
          if (succeeded)
            {
              STATE_VARIABLE_InputVars_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InputVars_41_41, 0) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InputVars_41_41, 1) = ((MR_Box) (HeadVar__7_7));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
              return;
            }
          STATE_VARIABLE_OutputVars_40_40 = HeadVar__9_9;
        }
        STATE_VARIABLE_LocalVars_39_39 = HeadVar__5_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_25;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_LocalVars_39_39;
      next_value_of_HeadVar__7_7 = STATE_VARIABLE_InputVars_41_41;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_OutputVars_40_40;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

    transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredInfo_6;
    MR_Word ProcIds_7;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word PredIds_4;
    MR_Word STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_8_8;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[1]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_8_8);
    STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_8_8));
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_8_8, STATE_VARIABLE_ModuleInfo_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__stm_expand____Compare____stm_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__stm_expand__init(void)
{
}

void mercury__transform_hlds__stm_expand__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0);
}

void mercury__transform_hlds__stm_expand__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__stm_expand__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.stm_expand.
