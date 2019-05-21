/*
** Automatically generated from `stm_expand.m'
** by the Mercury compiler,
** version rotd-2017-08-14
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


/* :- module transform_hlds.stm_expand. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__stm_expand__init
ENDINIT
*/

#include "transform_hlds.stm_expand.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2638__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_56_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2637__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_55_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14);

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_28);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2124__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1825__1_4_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42,
  MR_Word LambdaHeadVar__3_43,
  MR_Word * LambdaHeadVar__4_44);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_50_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_42,
  MR_Word LambdaHeadVar__3_43,
  MR_Word * LambdaHeadVar__4_44);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1020__1_5_p_0(
  MR_Word IsValidConstVar_15,
  MR_Word LambdaHeadVar__1_79,
  MR_Word * LambdaHeadVar__2_80,
  MR_Word LambdaHeadVar__3_81,
  MR_Word * LambdaHeadVar__4_82);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1003__1_5_p_0(
  MR_Word LambdaHeadVar__1_50,
  MR_Word * LambdaHeadVar__2_51,
  MR_Word * LambdaHeadVar__3_52,
  MR_Word LambdaHeadVar__4_53,
  MR_Word * LambdaHeadVar__5_54);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__597__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_98,
  MR_Word * STATE_VARIABLE_Info_99);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
  MR_Word GoalType_11,
  MR_Word InitInstmap_12,
  MR_Word FinalInstmap_13,
  MR_Word Outer_14,
  MR_Word MainGoal_16,
  MR_Word OrElseGoals_17,
  MR_Word * FinalGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_25,
  MR_Word * STATE_VARIABLE_StmInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
  MR_Word InitInstmap_12,
  MR_Word FinalInstmap_13,
  MR_Word OuterDI_14,
  MR_Word OuterUO_15,
  MR_Word AtomicGoal0_18,
  MR_Word OrElseGoals0_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_StmInfo_0_54,
  MR_Word * STATE_VARIABLE_StmInfo_55);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__808__1_7_p_0(
  MR_Word ResultType_43,
  MR_Word ResultVar_44,
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90,
  MR_Word * LambdaHeadVar__3_91,
  MR_Word LambdaHeadVar__4_92,
  MR_Word * LambdaHeadVar__5_93);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word ResultType_10,
  MR_Word ResultVar0_11,
  MR_Word AtomicGoal_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_17,
  MR_Word * STATE_VARIABLE_StmInfo_18);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_StmInfo_0_25,
  MR_Word * STATE_VARIABLE_StmInfo_26);

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
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word OuterDI_10,
  MR_Word OuterUO_11,
  MR_Word AtomicGoal_12,
  MR_Word OrElseGoals_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_30,
  MR_Word * STATE_VARIABLE_StmInfo_31);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
  MR_Word AtomicGoalVarList_7,
  MR_Word * CallGoal_8,
  MR_Word AtomicGoal_9,
  MR_Word OrElseGoals_10,
  MR_Word STATE_VARIABLE_StmInfo_0_21,
  MR_Word * STATE_VARIABLE_StmInfo_22);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word RecCallGoal_10,
  MR_Word AtomicGoal_11,
  MR_Word OrElseGoals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27,
  MR_Word STATE_VARIABLE_StmInfo_0_28,
  MR_Word * STATE_VARIABLE_StmInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word StmInfo_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * STATE_VARIABLE_NewPredInfo_8);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word ResultType_10,
  MR_Word ResultVar_11,
  MR_Word GoalList_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1374__1_7_p_0(
  MR_Word ResultType_10,
  MR_Word ResultVar_11,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37,
  MR_Word * LambdaHeadVar__3_38,
  MR_Word LambdaHeadVar__4_39,
  MR_Word * LambdaHeadVar__5_40);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
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
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
  MR_Word AtomicGoalVars_12,
  MR_Word AtomicGoal_13,
  MR_Word ResultType_14,
  MR_Word ResultVar_15,
  MR_Word StmDI_16,
  MR_Word StmUO_17,
  MR_Word CopySTM_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word BranchGoalVars_10,
  MR_Word Closures_11,
  MR_Word StmDI_12,
  MR_Word StmUO_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_31,
  MR_Word * STATE_VARIABLE_StmInfo_32);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word Closures_10,
  MR_Word StmDI_11,
  MR_Word StmUO_12,
  MR_Word ReturnType_13,
  MR_Word StmInfo_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
  MR_Word StmVars_8,
  MR_Word OuterSTMDI_9,
  MR_Word OuterSTMUO_10,
  MR_Word ExceptionRttiVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_39,
  MR_Word * STATE_VARIABLE_NewPredInfo_40);

static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
  MR_Word Src1_9,
  MR_Word Src2_10,
  MR_Word Src3_11,
  MR_Word * Dest_12,
  MR_Word STATE_VARIABLE_Accum_0_22,
  MR_Word * STATE_VARIABLE_Accum_23);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1839__1_6_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word LambdaHeadVar__2_52,
  MR_Word LambdaHeadVar__3_53,
  MR_Word * LambdaHeadVar__4_54,
  MR_Word LambdaHeadVar__5_55,
  MR_Word * LambdaHeadVar__6_56);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
  MR_Word StmVars_8,
  MR_Word UnlockAfterwards_9,
  MR_Word ValidGoal_10,
  MR_Word InvalidGoal_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * STATE_VARIABLE_NewPredInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer Count_5,
  MR_Word * Vars_6,
  MR_Word STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * STATE_VARIABLE_NewPredInfo_12);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
  MR_Word AtomicGoalVars_14,
  MR_Word ReturnType_15,
  MR_Word OuterStmDIVar_16,
  MR_Word OuterStmUOVar_17,
  MR_Word InnerSTMVars_18,
  MR_Word RttiVar_19,
  MR_Word RollbackExceptionRttiVar_20,
  MR_Word WrapperIDs_21,
  MR_Word EndBranch_22,
  MR_Word * Goal_23,
  MR_Word StmInfo_24,
  MR_Word STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * STATE_VARIABLE_NewPredInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
  MR_Word AtomicGoalVars_14,
  MR_Word ReturnType_15,
  MR_Word OuterStmDIVar_16,
  MR_Word OuterStmUOVar_17,
  MR_Word InnerSTMVar_18,
  MR_Word RttiVar_19,
  MR_Word RollbackExceptionRttiVar_20,
  MR_Word WrapperID_21,
  MR_Word RetryBranch_22,
  MR_Word * Goal_23,
  MR_Word StmInfo_24,
  MR_Word STATE_VARIABLE_NewPredInfo_0_49,
  MR_Word * STATE_VARIABLE_NewPredInfo_50);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_47,
  MR_Word * STATE_VARIABLE_NewPredInfo_48);

static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
  MR_Word AtomicGoalVars_8,
  MR_Word ResultType_9,
  MR_Word ResultVar_10,
  MR_Word StmInfo_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26);

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
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
  MR_Word AtomicGoalVars_11,
  MR_Word ReturnType_12,
  MR_Word StmVarDI_13,
  MR_Word StmVarUO_14,
  MR_Word WrapperID_15,
  MR_Word RecCall_16,
  MR_Word * Goal_17,
  MR_Word StmInfo_18,
  MR_Word STATE_VARIABLE_NewPredInfo_0_40,
  MR_Word * STATE_VARIABLE_NewPredInfo_41);

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
transform_hlds__stm_expand__create_test_on_exception_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
  MR_Word ExceptVar_8,
  MR_Word StmVar_9,
  MR_Word ReturnType_10,
  MR_Word RecCall_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_24,
  MR_Word * STATE_VARIABLE_NewPredInfo_25);

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
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
  MR_Word RttiVar_9,
  MR_Word ExceptVar_10,
  MR_Word RollbackExceptCons_11,
  MR_Word TrueGoal_12,
  MR_Word FalseGoal_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
  MR_Word Cons_8,
  MR_Word Type_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_15);

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

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[15][3];

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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--temp-context--")),
    ((MR_Box) ((MR_Integer) 999))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__stm_expand__stm_process_module_2_p_0_1)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_top_level_pred_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_goal_vars",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 = {
  (MR_String) "stm_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_new_pred_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0
};

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2638__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_56_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_12, HeadVar__3_20);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_56_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20)
{
  *HeadVar__3_20 = HeadVar__1_12;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2637__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_55_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_10, HeadVar__3_14);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_51_55_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14)
{
  *HeadVar__3_14 = HeadVar__1_10;
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[4], ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_28)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2124__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_35,
  MR_Word * LambdaHeadVar__2_36)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (LambdaHeadVar__1_35)), ((MR_Box) (ResultVar0_10)));
    if (succeeded)
      *LambdaHeadVar__2_36 = ResultVar_12;
    else
      *LambdaHeadVar__2_36 = LambdaHeadVar__1_35;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1825__1_4_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42,
  MR_Word LambdaHeadVar__3_43,
  MR_Word * LambdaHeadVar__4_44)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_50_53_95_95_49_95_95_91_49_93_95_48_4_p_0(LambdaHeadVar__2_42, LambdaHeadVar__3_43, LambdaHeadVar__4_44);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_50_53_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_42,
  MR_Word LambdaHeadVar__3_43,
  MR_Word * LambdaHeadVar__4_44)
{
  {
    MR_Word Var_45;

    Var_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_45, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[25]), LambdaHeadVar__2_42, LambdaHeadVar__3_43, LambdaHeadVar__4_44);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1020__1_5_p_0(
  MR_Word IsValidConstVar_15,
  MR_Word LambdaHeadVar__1_79,
  MR_Word * LambdaHeadVar__2_80,
  MR_Word LambdaHeadVar__3_81,
  MR_Word * LambdaHeadVar__4_82)
{
  {
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    Var_84 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
    Var_85 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Var_85));
    }
    transform_hlds__stm_expand__create_var_test_6_p_0(LambdaHeadVar__1_79, IsValidConstVar_15, Var_83, LambdaHeadVar__2_80, LambdaHeadVar__3_81, LambdaHeadVar__4_82);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1003__1_5_p_0(
  MR_Word LambdaHeadVar__1_50,
  MR_Word * LambdaHeadVar__2_51,
  MR_Word * LambdaHeadVar__3_52,
  MR_Word LambdaHeadVar__4_53,
  MR_Word * LambdaHeadVar__5_54)
{
  {
    MR_Word NPI1_23;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_Word Var_75;

    Var_55 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[3]), LambdaHeadVar__3_52, LambdaHeadVar__4_53, &NPI1_23);
    Var_58 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (*LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (*LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
    }
    Var_66 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_69);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_58, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_66, LambdaHeadVar__2_51, NPI1_23, LambdaHeadVar__5_54);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__597__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  {
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar_4, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
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
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  {
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    *LambdaHeadVar__2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 0)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 1)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 2)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 3)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_11, (MR_Integer) 4)));
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      hlds__hlds_module____Compare____module_info_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        hlds__hlds_pred____Compare____pred_id_0_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX3_8, ArgY3_9);
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            hlds__hlds_pred____Compare____pred_info_0_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              hlds__hlds_pred____Compare____proc_info_0_0(&Var_22, ArgX5_12, ArgY5_13);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__term____Compare____context_0_0(&Var_23, ArgX6_14, ArgY6_15);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX7_16, ArgY7_17);
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
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

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
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      hlds__hlds_module____Compare____module_info_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        hlds__hlds_pred____Compare____pred_id_0_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX3_8, ArgY3_9);
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            hlds__hlds_pred____Compare____proc_info_0_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              hlds__hlds_pred____Compare____pred_info_0_0(&Var_22, ArgX5_12, ArgY5_13);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;
                MR_Integer Var_33 = (MR_Integer) ArgX6_14;
                MR_Integer Var_34 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_23, Var_33, Var_34);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX7_16, ArgY7_17);
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
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

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
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
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
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
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
    MR_Word TypeInfo_34_34;
    MR_Word ProgType_18;
    MR_Word NewProgVar_19;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_OldPredVarTypes_0_26, ProgVar_12, &ProgType_18);
    mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &NewProgVar_19, STATE_VARIABLE_NewPredVarSet_0_20, STATE_VARIABLE_NewPredVarSet_21);
    hlds__vartypes__add_var_type_4_p_0(NewProgVar_19, ProgType_18, STATE_VARIABLE_NewPredVarTypes_0_22, STATE_VARIABLE_NewPredVarTypes_23);
    TypeInfo_34_34 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeInfo_34_34, ((MR_Box) (ProgVar_12)), ((MR_Box) (NewProgVar_19)), STATE_VARIABLE_VarMapping_0_28, STATE_VARIABLE_VarMapping_29);
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

    transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__597__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_12);
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
    MR_Word TypeCtorInfo_26_26;
    MR_Word CopyInputVarLambda_6;

    {
      CopyInputVarLambda_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 1) = ((MR_Box) (transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), CopyInputVarLambda_6, 3) = ((MR_Box) (GoalVar_4));
    }
    TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    mercury__list__map_3_p_0(TypeCtorInfo_26_26, TypeCtorInfo_26_26, CopyInputVarLambda_6, STATE_VARIABLE_GoalList_0_9, STATE_VARIABLE_GoalList_10);
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
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeCtorInfo_26_26;
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
    MR_Word Var_43;
    MR_Integer Var_44;
    MR_Integer Var_46;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &PredTable0_8);
    TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, PredTable0_8, ((MR_Box) (PredId_5)), &conv0_PredInfo0_9);
    PredInfo0_9 = ((MR_Word) conv0_PredInfo0_9);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &ProcTable0_10);
    TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_26_26, ProcTable0_10, ProcId_6, &conv1_ProcInfo0_11);
    ProcInfo0_11 = ((MR_Word) conv1_ProcInfo0_11);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_11, &Goal0_38);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo0_11, STATE_VARIABLE_ModuleInfo_0_19, &InitInstmap_39);
    {
      StmInfo0_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StmInfo0_40, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 1) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 2) = ((MR_Box) (ProcId_6));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 3) = ((MR_Box) (ProcInfo0_11));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 4) = ((MR_Box) (PredInfo0_9));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), StmInfo0_40, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__stm_expand__stm_process_goal_5_p_0(InitInstmap_39, Goal0_38, &Goal_41, StmInfo0_40, &StmInfo_42);
    STATE_VARIABLE_ModuleInfo_31_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 0)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 1)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 2)));
    STATE_VARIABLE_ProcInfo_32_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 3)));
    PredInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 4)));
    RecalcInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 5)));
    Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_42, (MR_Integer) 6)));
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
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_26_26, ProcId_6, ((MR_Box) (ProcInfo_12)), ProcTable1_14, &ProcTable_15);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo1_13, &PredInfo_16);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &PredTable1_17);
    mercury__map__det_update_4_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_16)), PredTable1_17, &PredTable_18);
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
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0)));
    MR_Word OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1)));
    MR_Word Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2)));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(HeadVar__1_1, Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_22_22);
    transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(HeadVar__1_1, Cases0_12, &Cases_14, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_5);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Goal_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Var_18;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_10, Cond0_11, Cond_14, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_24_24);
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_11, (MR_Integer) 0)));
    CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_11, (MR_Integer) 1)));
    CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_19);
    hlds__instmap__apply_instmap_delta_3_p_0(Instmap0_10, CondInstmapDelta_20, &InstmapAfterCond_21);
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
  if ((GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 0)));
    MR_Word Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 1)));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_16_16;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_10, &Goal_12, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_16_16);
    transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_11, &Goals_13, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  if ((GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 0)));
    MR_Word Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList0_7, (MR_Integer) 1)));
    MR_Word InstmapDelta_12;
    MR_Word GoalInfo_13;
    MR_Word Goal_14;
    MR_Word Instmap_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Info_20_20;
    MR_Word Var_15;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_6, Goal0_10, &Goal_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_20_20);
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0)));
    GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1)));
    InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(Instmap0_6, InstmapDelta_12, &Instmap_16);
    transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_16, Goals0_11, &Goals_17, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word STATE_VARIABLE_Info_0_98,
  MR_Word * STATE_VARIABLE_Info_99)
{
  {
    MR_Word GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_23 = (MR_Word) MR_body(((MR_Word) GoalExpr0_10), (MR_Integer) 0);
          MR_Word SubGoal_24;
          MR_Word GoalExpr_122;

          transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
          GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_122));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_99 = STATE_VARIABLE_Info_0_98;
        }
        break;
      case (MR_Integer) 2:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_99 = STATE_VARIABLE_Info_0_98;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_Info_99 = STATE_VARIABLE_Info_0_98;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Conjuncts_19;
              MR_Word GoalExpr_20;

              transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_6, Conjuncts0_18, &Conjuncts_19, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (ConjType_17));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Conjuncts_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Disjuncts_22;
              MR_Word GoalExpr_121;

              transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Disjuncts0_21, &Disjuncts_22, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
              {
                GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_121, 1) = ((MR_Box) (Disjuncts_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_121));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3)));
              MR_Word Cases_28;
              MR_Word GoalExpr_123;

              transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(Instmap_6, Cases0_27, &Cases_28, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
              {
                GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_123, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), GoalExpr_123, 2) = ((MR_Box) (CanFail_26));
                MR_hl_field(MR_mktag(3), GoalExpr_123, 3) = ((MR_Box) (Cases_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_123));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Reason_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word GoalExpr_127;
                    MR_Word InnerGoal_128;

                    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_128, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
                    {
                      GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), GoalExpr_127, 1) = ((MR_Box) (Reason_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_127, 2) = ((MR_Box) (InnerGoal_128));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_127));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      {
                        MR_Word GoalExpr_127;
                        MR_Word InnerGoal_128;

                        transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_128, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
                        {
                          GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), GoalExpr_127, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_127, 2) = ((MR_Box) (InnerGoal_128));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_127));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2)));
                        MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 1)));

                        switch (FGT_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              *Goal_8 = Goal0_7;
                              *STATE_VARIABLE_Info_99 = STATE_VARIABLE_Info_0_98;
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word InnerGoal_33;
                              MR_Word GoalExpr_124;

                              transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_33, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
                              {
                                GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), GoalExpr_124, 1) = ((MR_Box) (Reason_29));
                                MR_hl_field(MR_mktag(3), GoalExpr_124, 2) = ((MR_Box) (InnerGoal_33));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                *Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
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
              MR_Word Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Cond0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Then0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3)));
              MR_Word Else0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4)));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;
              MR_Word GoalExpr_131;

              transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(Instmap_6, Cond0_55, Then0_56, Else0_57, &Cond_58, &Then_59, &Else_60, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
              {
                GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 3) = ((MR_Box) (Then_59));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 4) = ((MR_Box) (Else_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ShortHand0_79)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_132_132;
                    MR_Word GoalType_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 0)));
                    MR_Word Outer_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 1)));
                    MR_Word GoalDisj_88;
                    MR_Word MainGoal_89;
                    MR_Word OrElseGoals_90;
                    MR_Word InstmapDelta_91;
                    MR_Word FinalInstmap_92;
                    MR_Word STATE_VARIABLE_Info_106_106;
                    MR_Word Goal0_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 4)));
                    MR_Word Goals0_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 5)));
                    MR_Word Goal_141;
                    MR_Word Goals_142;
                    MR_Word STATE_VARIABLE_Info_16_143;
                    MR_Word Inner_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 2)));
                    MR_Word _MaybeOutputVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 3)));
                    MR_Word _OrElseInners_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_79, (MR_Integer) 6)));
                    MR_Box conv0_MainGoal_89;

                    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_139, &Goal_141, STATE_VARIABLE_Info_0_98, &STATE_VARIABLE_Info_16_143);
                    transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_140, &Goals_142, STATE_VARIABLE_Info_16_143, &STATE_VARIABLE_Info_106_106);
                    {
                      GoalDisj_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), GoalDisj_88, 0) = ((MR_Box) (Goal_141));
                      MR_hl_field(MR_mktag(1), GoalDisj_88, 1) = ((MR_Box) (Goals_142));
                    }
                    TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    conv0_MainGoal_89 = mercury__list__det_head_1_f_0(TypeCtorInfo_132_132, GoalDisj_88);
                    MainGoal_89 = ((MR_Word) conv0_MainGoal_89);
                    OrElseGoals_90 = mercury__list__det_tail_1_f_0(TypeCtorInfo_132_132, GoalDisj_88);
                    InstmapDelta_91 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
                    hlds__instmap__apply_instmap_delta_3_p_0(Instmap_6, InstmapDelta_91, &FinalInstmap_92);
                    transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(GoalType_80, Instmap_6, FinalInstmap_92, Outer_81, MainGoal_89, OrElseGoals_90, Goal_8, STATE_VARIABLE_Info_106_106, STATE_VARIABLE_Info_99);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "try_goal");
                      return;
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
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
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

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) wrapper_arg_1), &conv4_Goal_8, &conv3_StmOutDI_9, &conv2_StmOutUO_10, &conv1_StmInDI_11, &conv0_StmInUO_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_8));
    *wrapper_arg_3 = ((MR_Box) (conv3_StmOutDI_9));
    *wrapper_arg_4 = ((MR_Box) (conv2_StmOutUO_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_StmInDI_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
  MR_Word GoalType_11,
  MR_Word InitInstmap_12,
  MR_Word FinalInstmap_13,
  MR_Word Outer_14,
  MR_Word MainGoal_16,
  MR_Word OrElseGoals_17,
  MR_Word * FinalGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_25,
  MR_Word * STATE_VARIABLE_StmInfo_26)
{
  {
    MR_Word OuterDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_14, (MR_Integer) 0)));
    MR_Word OuterUO_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Outer_14, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_StmInfo_34_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Integer Var_43;
    MR_Word Var_42;

    switch (GoalType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(InitInstmap_12, FinalInstmap_13, OuterDI_20, OuterUO_21, MainGoal_16, OrElseGoals_17, FinalGoal_18, STATE_VARIABLE_StmInfo_0_25, &STATE_VARIABLE_StmInfo_34_34);
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_50_82;
          MR_Word TypeInfo_51_83;
          MR_Word AtomicGoal_56;
          MR_Word MainInnerDI_59;
          MR_Word MainInnerUO_60;
          MR_Word OrElseGoals_61;
          MR_Word OrElseInnerDIs_64;
          MR_Word OrElseInnerUOs_65;
          MR_Word AtomicGoalVarList_66;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_StmInfo_40_72;
          MR_Word Var_73;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_62;
          MR_Word Var_63;

          transform_hlds__stm_expand__strip_goal_calls_6_p_0(MainGoal_16, &AtomicGoal_56, &Var_57, &Var_58, &MainInnerDI_59, &MainInnerUO_60);
          TypeCtorInfo_50_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          TypeInfo_51_83 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
          mercury__list__map5_7_p_0(TypeCtorInfo_50_82, TypeCtorInfo_50_82, TypeInfo_51_83, TypeInfo_51_83, TypeInfo_51_83, TypeInfo_51_83, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[14], OrElseGoals_17, &OrElseGoals_61, &Var_62, &Var_63, &OrElseInnerDIs_64, &OrElseInnerUOs_65);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MainGoal_16));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (OrElseGoals_17));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MainInnerDI_59));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (OrElseInnerDIs_64));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MainInnerUO_60));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (OrElseInnerUOs_65));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (OuterUO_21));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (OuterDI_20));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
          }
          transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_12, FinalInstmap_13, Var_68, Var_69, Var_70, Var_71, &AtomicGoalVarList_66, STATE_VARIABLE_StmInfo_0_25, &STATE_VARIABLE_StmInfo_40_72);
          transform_hlds__stm_expand__create_top_level_pred_8_p_0(AtomicGoalVarList_66, OuterDI_20, OuterUO_21, AtomicGoal_56, OrElseGoals_61, FinalGoal_18, STATE_VARIABLE_StmInfo_40_72, &STATE_VARIABLE_StmInfo_34_34);
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/10", (MR_String) "unknown atomic goal type");
            return;
          }
        }
        break;
    }
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 0)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 1)));
    Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 2)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 3)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 4)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 5)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
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

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) wrapper_arg_1), &conv4_Goal_8, &conv3_StmOutDI_9, &conv2_StmOutUO_10, &conv1_StmInDI_11, &conv0_StmInUO_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_8));
    *wrapper_arg_3 = ((MR_Box) (conv3_StmOutDI_9));
    *wrapper_arg_4 = ((MR_Box) (conv2_StmOutUO_10));
    *wrapper_arg_5 = ((MR_Box) (conv1_StmInDI_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
  MR_Word InitInstmap_12,
  MR_Word FinalInstmap_13,
  MR_Word OuterDI_14,
  MR_Word OuterUO_15,
  MR_Word AtomicGoal0_18,
  MR_Word OrElseGoals0_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_StmInfo_0_54,
  MR_Word * STATE_VARIABLE_StmInfo_55)
{
  {
    MR_Word TypeCtorInfo_145_145;
    MR_Word TypeInfo_146_146;
    MR_Word AtomicGoal_22;
    MR_Word MainOuterDI_23;
    MR_Word MainOuterUO_24;
    MR_Word MainInnerDI_25;
    MR_Word MainInnerUO_26;
    MR_Word OrElseGoals_27;
    MR_Word OrElseInnerDIs_30;
    MR_Word OrElseInnerUOs_31;
    MR_Word Var_28;
    MR_Word Var_29;

    transform_hlds__stm_expand__strip_goal_calls_6_p_0(AtomicGoal0_18, &AtomicGoal_22, &MainOuterDI_23, &MainOuterUO_24, &MainInnerDI_25, &MainInnerUO_26);
    TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    TypeInfo_146_146 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    mercury__list__map5_7_p_0(TypeCtorInfo_145_145, TypeCtorInfo_145_145, TypeInfo_146_146, TypeInfo_146_146, TypeInfo_146_146, TypeInfo_146_146, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[13], OrElseGoals0_19, &OrElseGoals_27, &Var_28, &Var_29, &OrElseInnerDIs_30, &OrElseInnerUOs_31);
    if ((OrElseGoals_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word CopyDIVars_32;
      MR_Word CopyUOVars_33;
      MR_Word Var_108;
      MR_Word STATE_VARIABLE_StmInfo_109_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;

      Var_110 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
      Var_111 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
      {
        Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_111));
      }
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainInnerDI_25, MainOuterDI_23, Var_108, &CopyDIVars_32, STATE_VARIABLE_StmInfo_0_54, &STATE_VARIABLE_StmInfo_109_109);
      Var_114 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
      Var_115 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
      {
        Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (Var_115));
      }
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainOuterUO_24, MainInnerUO_26, Var_112, &CopyUOVars_33, STATE_VARIABLE_StmInfo_109_109, STATE_VARIABLE_StmInfo_55);
      {
        Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (CopyUOVars_33));
        MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (AtomicGoal_22));
        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (CopyDIVars_32));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
      }
      transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_116, Goal_20);
    }
    else
    {
      MR_Word GoalList_37;
      MR_Word AtomicGoalVars_38;
      MR_Word AtomicGoalVarList1_39;
      MR_Word OutputTypes_42;
      MR_Word ResultType_43;
      MR_Word ResultVar_44;
      MR_Word PPIDList_52;
      MR_Word OrElseCall_53;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word STATE_VARIABLE_StmInfo_61_61;
      MR_Word Var_62;
      MR_Word STATE_VARIABLE_StmInfo_87_87;
      MR_Word STATE_VARIABLE_StmInfo_94_94;
      MR_Word STATE_VARIABLE_StmInfo_95_95;
      MR_Word Var_96;
      MR_Word STATE_VARIABLE_StmInfo_97_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word CopyDIVars_125;
      MR_Word CopyUOVars_126;
      MR_Word Var_41;

      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (AtomicGoal0_18));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (OrElseGoals0_19));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MainInnerDI_25));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (OrElseInnerDIs_30));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MainInnerUO_26));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (OrElseInnerUOs_31));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (OuterUO_15));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (OuterDI_14));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
      }
      transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_12, FinalInstmap_13, Var_57, Var_58, Var_59, Var_60, &AtomicGoalVarList1_39, STATE_VARIABLE_StmInfo_0_54, &STATE_VARIABLE_StmInfo_61_61);
      {
        GoalList_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_37, 0) = ((MR_Box) (AtomicGoal_22));
        MR_hl_field(MR_mktag(1), GoalList_37, 1) = ((MR_Box) (OrElseGoals_27));
      }
      transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(AtomicGoalVarList1_39, &AtomicGoalVars_38);
      transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_38, STATE_VARIABLE_StmInfo_61_61, &Var_41, &OutputTypes_42);
      transform_hlds__stm_expand__make_return_type_2_p_0(OutputTypes_42, &ResultType_43);
      transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(ResultType_43, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[24]), &ResultVar_44, STATE_VARIABLE_StmInfo_61_61, &STATE_VARIABLE_StmInfo_87_87);
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(ResultType_43, ResultVar_44, GoalList_37, AtomicGoalVarList1_39, &PPIDList_52, STATE_VARIABLE_StmInfo_87_87, &STATE_VARIABLE_StmInfo_94_94);
      transform_hlds__stm_expand__create_or_else_pred_8_p_0(AtomicGoalVars_38, AtomicGoalVarList1_39, PPIDList_52, MainInnerDI_25, MainInnerUO_26, &OrElseCall_53, STATE_VARIABLE_StmInfo_94_94, &STATE_VARIABLE_StmInfo_95_95);
      Var_98 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
      Var_99 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (Var_99));
      }
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainInnerDI_25, MainOuterDI_23, Var_96, &CopyDIVars_125, STATE_VARIABLE_StmInfo_95_95, &STATE_VARIABLE_StmInfo_97_97);
      Var_102 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
      Var_103 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (Var_103));
      }
      transform_hlds__stm_expand__create_var_unify_stm_6_p_0(MainOuterUO_24, MainInnerUO_26, Var_100, &CopyUOVars_126, STATE_VARIABLE_StmInfo_97_97, STATE_VARIABLE_StmInfo_55);
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (CopyUOVars_126));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (OrElseCall_53));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (CopyDIVars_125));
        MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
      }
      transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_104, Goal_20);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19)
{
  {
    MR_bool succeeded = (Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
      succeeded = (Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      *Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Accum_19 = STATE_VARIABLE_Accum_0_18;
    }
    else
    {
      MR_Word S_12;
      MR_Word Ss_13;
      MR_Word T_14;
      MR_Word Ts_15;

      succeeded = ((MR_tag((MR_Word) Src1_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 0)));
        Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Src2_9)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 0)));
          Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        MR_Word R_16;
        MR_Word Rs_17;
        MR_Word STATE_VARIABLE_Accum_20_20;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__808__1_7_p_0(Var_29, Var_30, S_12, T_14, &R_16, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_20_20);
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_20_20, STATE_VARIABLE_Accum_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_17));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__808__1_7_p_0(
  MR_Word ResultType_43,
  MR_Word ResultVar_44,
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90,
  MR_Word * LambdaHeadVar__3_91,
  MR_Word LambdaHeadVar__4_92,
  MR_Word * LambdaHeadVar__5_93)
{
  {
    MR_Word Var_51;

    transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(LambdaHeadVar__2_90, ResultType_43, ResultVar_44, LambdaHeadVar__1_89, LambdaHeadVar__3_91, &Var_51, LambdaHeadVar__4_92, LambdaHeadVar__5_93);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word ResultType_10,
  MR_Word ResultVar0_11,
  MR_Word AtomicGoal_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_17,
  MR_Word * STATE_VARIABLE_StmInfo_18)
{
  {
    MR_Word Var_16;

    transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(AtomicGoalVars_9, ResultType_10, ResultVar0_11, AtomicGoal_12, PredProcId_13, &Var_16, CallGoal_14, STATE_VARIABLE_StmInfo_0_17, STATE_VARIABLE_StmInfo_18);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_StmInfo_0_25,
  MR_Word * STATE_VARIABLE_StmInfo_26)
{
  {
    MR_Word ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 0)));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSFromToInsts_17;
    MR_Word RHSFromToInsts_18;
    MR_Word InstmapDelta_19;
    MR_Word GoalExpr_20;
    MR_Word NonLocals_21;
    MR_Word GoalInfo_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 1)));
    MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 2)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 3)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 4)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 5)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 6)));

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyType_14, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(2), UnifyType_14, 1) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0)));
    RHSFromToInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1)));
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (RHSFromToInsts_18));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (LHSFromToInsts_17));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(ModuleInfo_13, Var_31, Var_32, &InstmapDelta_19);
    {
      GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_31, &NonLocals_21);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_21, InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[7], &GoalInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
    }
    *STATE_VARIABLE_StmInfo_26 = STATE_VARIABLE_StmInfo_0_25;
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
    MR_Word ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
    MR_Word MaybeName_11;
    MR_Word ProcInfo_13;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Integer Var_31;
    MR_Word Var_28;

    if ((MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeName_11 = MaybeName0_7;
    else
    {
      MR_String Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeName0_7, (MR_Integer) 0)));
      MR_String Var_16;

      Var_16 = mercury__string__f_43_43_2_f_0(Name_12, (MR_String) "_Aux_STM");
      {
        MaybeName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeName_11, 0) = ((MR_Box) (Var_16));
      }
    }
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Type_6, MaybeName_11, Var_8, ProcInfo0_10, &ProcInfo_13);
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
    Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
    Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcInfo_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word Types_3,
  MR_Word * ReturnType_4)
{
  if ((Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ReturnType_4 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
  else
  {
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_3, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_3, (MR_Integer) 0)));

    if ((Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ReturnType_4 = Var_12;
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *ReturnType_4 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Types_3));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word OuterDI_10,
  MR_Word OuterUO_11,
  MR_Word AtomicGoal_12,
  MR_Word OrElseGoals_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_30,
  MR_Word * STATE_VARIABLE_StmInfo_31)
{
  {
    MR_Word TypeInfo_62_62;
    MR_Word TypeCtorInfo_63_63;
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeCtorInfo_24_86;
    MR_Word WrapperCall_16;
    MR_Word AtomicGoalVars_17;
    MR_Word InputVars_18;
    MR_Word OutputVars_19;
    MR_Word InputTypes_20;
    MR_Word OutputTypes_21;
    MR_Word InputModes_22;
    MR_Word OutputModes_23;
    MR_Word NewPredInfo0_24;
    MR_Word CopyIOAssign_25;
    MR_Word NewPredInfo1_26;
    MR_Word TopLevelGoal_27;
    MR_Word NewPredInfo2_28;
    MR_Word NewPredInfo_29;
    MR_Word STATE_VARIABLE_StmInfo_32_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_StmInfo_38_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word InputVarList_70;
    MR_Word InputVars_71;
    MR_Word GoalVar0_72;
    MR_Box conv1_GoalVar0_72;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_81;

    transform_hlds__stm_expand__create_rollback_pred_6_p_0(AtomicGoalVarList_9, &WrapperCall_16, AtomicGoal_12, OrElseGoals_13, STATE_VARIABLE_StmInfo_0_30, &STATE_VARIABLE_StmInfo_32_32);
    TypeCtorInfo_24_86 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    mercury__list__map_3_p_0(TypeCtorInfo_24_86, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[12], AtomicGoalVarList_9, &InputVarList_70);
    InputVars_71 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, InputVarList_70);
    conv1_GoalVar0_72 = mercury__list__det_head_1_f_0(TypeCtorInfo_24_86, AtomicGoalVarList_9);
    GoalVar0_72 = ((MR_Word) conv1_GoalVar0_72);
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_72, (MR_Integer) 0)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_72, (MR_Integer) 1)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_72, (MR_Integer) 2)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_72, (MR_Integer) 3)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_72, (MR_Integer) 4)));
    {
      AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 0) = ((MR_Box) (InputVars_71));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 1) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 3) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_17, 4) = ((MR_Box) (Var_85));
    }
    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_17, &InputVars_18, &OutputVars_19);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_17, STATE_VARIABLE_StmInfo_32_32, &InputTypes_20, &OutputTypes_21);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_17, &InputModes_22, &OutputModes_23);
    TypeInfo_62_62 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (OuterUO_11));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (OuterDI_10));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    Var_39 = mercury__list__f_43_43_2_f_0(TypeInfo_62_62, OutputVars_19, Var_40);
    Var_33 = mercury__list__f_43_43_2_f_0(TypeInfo_62_62, InputVars_18, Var_39);
    TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    Var_45 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    Var_47 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, OutputTypes_21, Var_44);
    Var_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, InputTypes_20, Var_43);
    TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    Var_51 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    Var_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_64_64, OutputModes_23, Var_50);
    Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_64_64, InputModes_22, Var_49);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_33, Var_34, Var_35, (MR_String) "toplevel", AtomicGoal_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NewPredInfo0_24, Goal_14, STATE_VARIABLE_StmInfo_32_32, &STATE_VARIABLE_StmInfo_38_38);
    Var_56 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
    Var_57 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_57));
    }
    transform_hlds__stm_expand__create_var_unify_6_p_0(OuterUO_11, OuterDI_10, Var_55, &CopyIOAssign_25, NewPredInfo0_24, &NewPredInfo1_26);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CopyIOAssign_25));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (WrapperCall_16));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_58, &TopLevelGoal_27);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(TopLevelGoal_27, NewPredInfo1_26, &NewPredInfo2_28);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(NewPredInfo2_28, &NewPredInfo_29);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_29, STATE_VARIABLE_StmInfo_38_38, STATE_VARIABLE_StmInfo_31);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
  MR_Word AtomicGoalVarList_7,
  MR_Word * CallGoal_8,
  MR_Word AtomicGoal_9,
  MR_Word OrElseGoals_10,
  MR_Word STATE_VARIABLE_StmInfo_0_21,
  MR_Word * STATE_VARIABLE_StmInfo_22)
{
  {
    MR_Word TypeCtorInfo_24_55 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word TypeCtorInfo_17_71;
    MR_Word AtomicGoalVars_12;
    MR_Word InputVars_13;
    MR_Word OutputVars_14;
    MR_Word InputTypes_15;
    MR_Word OutputTypes_16;
    MR_Word InputModes_17;
    MR_Word OutputModes_18;
    MR_Word NewPredInfo0_19;
    MR_Word NewPredInfo_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_StmInfo_28_28;
    MR_Word STATE_VARIABLE_StmInfo_29_29;
    MR_Word InputVarList_39;
    MR_Word GoalVar0_41;
    MR_Word InputSet_61;
    MR_Word OutputSet_62;
    MR_Word OrigPredId_76;
    MR_Integer OrigProcId_77;
    MR_Word OrigProcInfo_78;
    MR_Word OrigPredInfo_79;
    MR_Word StmExpanded_80;
    MR_Integer ExpandNum_81;
    MR_Word PredModuleInfo0_82;
    MR_Word NewPredId_83;
    MR_Integer NewProcId_84;
    MR_Word NewPredInfo_85;
    MR_Word NewProcInfo_86;
    MR_Word PredModuleInfo_89;
    MR_Box conv1_GoalVar0_41;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_50;
    MR_Word _StmModuleInfo0_75;
    MR_Word Var_87;
    MR_Integer Var_88;

    mercury__list__map_3_p_0(TypeCtorInfo_24_55, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[11], AtomicGoalVarList_7, &InputVarList_39);
    InputSet_61 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, InputVarList_39);
    conv1_GoalVar0_41 = mercury__list__det_head_1_f_0(TypeCtorInfo_24_55, AtomicGoalVarList_7);
    GoalVar0_41 = ((MR_Word) conv1_GoalVar0_41);
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_41, (MR_Integer) 0)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_41, (MR_Integer) 1)));
    OutputSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_41, (MR_Integer) 2)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_41, (MR_Integer) 3)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_41, (MR_Integer) 4)));
    {
      AtomicGoalVars_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_12, 0) = ((MR_Box) (InputSet_61));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_12, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_12, 2) = ((MR_Box) (OutputSet_62));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_12, 3) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_12, 4) = ((MR_Box) (Var_54));
    }
    TypeCtorInfo_17_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    InputVars_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_71, InputSet_61);
    OutputVars_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_71, OutputSet_62);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_12, STATE_VARIABLE_StmInfo_0_21, &InputTypes_15, &OutputTypes_16);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_12, &InputModes_17, &OutputModes_18);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], InputVars_13, OutputVars_14);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, InputTypes_15, OutputTypes_16);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, InputModes_17, OutputModes_18);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_23, Var_24, Var_25, (MR_String) "rollback", AtomicGoal_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NewPredInfo0_19, CallGoal_8, STATE_VARIABLE_StmInfo_0_21, &STATE_VARIABLE_StmInfo_28_28);
    transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(AtomicGoalVarList_7, *CallGoal_8, AtomicGoal_9, OrElseGoals_10, NewPredInfo0_19, &NewPredInfo_20, STATE_VARIABLE_StmInfo_28_28, &STATE_VARIABLE_StmInfo_29_29);
    _StmModuleInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 0)));
    OrigPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 1)));
    OrigProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 2)));
    OrigProcInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 3)));
    OrigPredInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 4)));
    StmExpanded_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 5)));
    ExpandNum_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 6)));
    PredModuleInfo0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 0)));
    NewPredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 1)));
    NewProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 2)));
    NewPredInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 3)));
    NewProcInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 4)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 5)));
    Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo_20, (MR_Integer) 6)));
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_83, NewProcId_84, NewPredInfo_85, NewProcInfo_86, PredModuleInfo0_82, &PredModuleInfo_89);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredModuleInfo_89));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigPredId_76));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OrigProcId_77));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigProcInfo_78));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigPredInfo_79));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StmExpanded_80));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ExpandNum_81));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_12;

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word RecCallGoal_10,
  MR_Word AtomicGoal_11,
  MR_Word OrElseGoals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27,
  MR_Word STATE_VARIABLE_StmInfo_0_28,
  MR_Word * STATE_VARIABLE_StmInfo_29)
{
  {
    MR_Word TypeCtorInfo_24_69 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word AtomicGoalVars_15;
    MR_Word OutputTypes_17;
    MR_Word ResultType_18;
    MR_Word ResultVar_19;
    MR_Word InnerDI_20;
    MR_Word InnerUO_21;
    MR_Word ProcessGoalList_22;
    MR_Word WrapperID_23;
    MR_Word RollbackGoal_25;
    MR_Word STATE_VARIABLE_NewPredInfo_31_31;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_NewPredInfo_39_39;
    MR_Word STATE_VARIABLE_StmInfo_41_41;
    MR_Word STATE_VARIABLE_StmInfo_42_42;
    MR_Word STATE_VARIABLE_NewPredInfo_43_43;
    MR_Word STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word STATE_VARIABLE_NewPredInfo_45_45;
    MR_Word InputVarList_53;
    MR_Word InputVars_54;
    MR_Word GoalVar0_55;
    MR_Box conv1_GoalVar0_55;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_64;
    MR_Word Var_16;
    MR_Word Var_24;

    mercury__list__map_3_p_0(TypeCtorInfo_24_69, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[10], AtomicGoalVarList_9, &InputVarList_53);
    InputVars_54 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, InputVarList_53);
    conv1_GoalVar0_55 = mercury__list__det_head_1_f_0(TypeCtorInfo_24_69, AtomicGoalVarList_9);
    GoalVar0_55 = ((MR_Word) conv1_GoalVar0_55);
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_55, (MR_Integer) 0)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_55, (MR_Integer) 1)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_55, (MR_Integer) 2)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_55, (MR_Integer) 3)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_55, (MR_Integer) 4)));
    {
      AtomicGoalVars_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AtomicGoalVars_15, 0) = ((MR_Box) (InputVars_54));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_15, 1) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_15, 2) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_15, 3) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), AtomicGoalVars_15, 4) = ((MR_Box) (Var_68));
    }
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_15, STATE_VARIABLE_StmInfo_0_28, &Var_16, &OutputTypes_17);
    if ((OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ResultType_18 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
    else
    {
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 1)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 0)));

      if ((Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ResultType_18 = Var_81;
      else
      {
        {
          ResultType_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ResultType_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ResultType_18, 1) = ((MR_Box) (OutputTypes_17));
          MR_hl_field(MR_mktag(3), ResultType_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    transform_hlds__stm_expand__create_aux_variable_5_p_0(ResultType_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[21]), &ResultVar_19, STATE_VARIABLE_NewPredInfo_0_26, &STATE_VARIABLE_NewPredInfo_31_31);
    Var_33 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_33, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[22]), &InnerDI_20, STATE_VARIABLE_NewPredInfo_31_31, &STATE_VARIABLE_NewPredInfo_35_35);
    Var_37 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[23]), &InnerUO_21, STATE_VARIABLE_NewPredInfo_35_35, &STATE_VARIABLE_NewPredInfo_39_39);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(STATE_VARIABLE_NewPredInfo_39_39, STATE_VARIABLE_StmInfo_0_28, &STATE_VARIABLE_StmInfo_41_41);
    {
      ProcessGoalList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcessGoalList_22, 0) = ((MR_Box) (AtomicGoal_11));
      MR_hl_field(MR_mktag(1), ProcessGoalList_22, 1) = ((MR_Box) (OrElseGoals_12));
    }
    transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(AtomicGoalVarList_9, ResultType_18, ResultVar_19, ProcessGoalList_22, &WrapperID_23, &Var_24, STATE_VARIABLE_StmInfo_41_41, &STATE_VARIABLE_StmInfo_42_42);
    transform_hlds__stm_expand__update_new_pred_info_3_p_0(STATE_VARIABLE_StmInfo_42_42, STATE_VARIABLE_NewPredInfo_39_39, &STATE_VARIABLE_NewPredInfo_43_43);
    transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(AtomicGoalVars_15, ResultType_18, InnerDI_20, InnerUO_21, WrapperID_23, RecCallGoal_10, &RollbackGoal_25, STATE_VARIABLE_StmInfo_42_42, STATE_VARIABLE_NewPredInfo_43_43, &STATE_VARIABLE_NewPredInfo_44_44);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(RollbackGoal_25, STATE_VARIABLE_NewPredInfo_44_44, &STATE_VARIABLE_NewPredInfo_45_45);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_45_45, STATE_VARIABLE_NewPredInfo_27);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_27, STATE_VARIABLE_StmInfo_42_42, STATE_VARIABLE_StmInfo_29);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word StmInfo_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * STATE_VARIABLE_NewPredInfo_8)
{
  {
    MR_Word ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 1)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 5)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_4, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 1)));
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 5)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
  MR_Word AtomicGoalVarList_9,
  MR_Word ResultType_10,
  MR_Word ResultVar_11,
  MR_Word GoalList_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_33,
  MR_Word * STATE_VARIABLE_StmInfo_34)
{
  if ((GoalList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_wrapper_for_goal_list\'/8", (MR_String) "empty list");
      return;
    }
  }
  else
  {
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList_12, (MR_Integer) 1)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalList_12, (MR_Integer) 0)));

    if ((Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word AtomicGoalVars_17;
      MR_Box conv0_AtomicGoalVars_17;
      MR_Word Var_79;

      conv0_AtomicGoalVars_17 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0, AtomicGoalVarList_9);
      AtomicGoalVars_17 = ((MR_Word) conv0_AtomicGoalVars_17);
      transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(AtomicGoalVars_17, ResultType_10, ResultVar_11, Var_69, PredProcId_13, &Var_79, CallGoal_14, STATE_VARIABLE_StmInfo_0_33, STATE_VARIABLE_StmInfo_34);
    }
    else
    {
      MR_Word PPIDList_28;
      MR_Word StmDI_30;
      MR_Word StmUO_31;
      MR_Word NewAtomicGoal_32;
      MR_Word STATE_VARIABLE_StmInfo_41_41;
      MR_Word STATE_VARIABLE_StmInfo_42_42;
      MR_Word AtomicGoalVars_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_90;

      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(ResultType_10, ResultVar_11, GoalList_12, AtomicGoalVarList_9, &PPIDList_28, STATE_VARIABLE_StmInfo_0_33, &STATE_VARIABLE_StmInfo_41_41);
      transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(AtomicGoalVarList_9, &AtomicGoalVars_54);
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_54, (MR_Integer) 0)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_54, (MR_Integer) 1)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_54, (MR_Integer) 2)));
      StmDI_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_54, (MR_Integer) 3)));
      StmUO_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_54, (MR_Integer) 4)));
      transform_hlds__stm_expand__create_or_else_pred_8_p_0(AtomicGoalVars_54, AtomicGoalVarList_9, PPIDList_28, StmDI_30, StmUO_31, &NewAtomicGoal_32, STATE_VARIABLE_StmInfo_41_41, &STATE_VARIABLE_StmInfo_42_42);
      transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(AtomicGoalVars_54, ResultType_10, ResultVar_11, NewAtomicGoal_32, PredProcId_13, &Var_90, CallGoal_14, STATE_VARIABLE_StmInfo_42_42, STATE_VARIABLE_StmInfo_34);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Src1_8,
  MR_Word Src2_9,
  MR_Word * Dest_10,
  MR_Word STATE_VARIABLE_Accum_0_18,
  MR_Word * STATE_VARIABLE_Accum_19)
{
  {
    MR_bool succeeded = (Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
      succeeded = (Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      *Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Accum_19 = STATE_VARIABLE_Accum_0_18;
    }
    else
    {
      MR_Word S_12;
      MR_Word Ss_13;
      MR_Word T_14;
      MR_Word Ts_15;

      succeeded = ((MR_tag((MR_Word) Src1_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 0)));
        Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_8, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Src2_9)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 0)));
          Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_9, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        MR_Word R_16;
        MR_Word Rs_17;
        MR_Word STATE_VARIABLE_Accum_20_20;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1374__1_7_p_0(Var_29, Var_30, S_12, T_14, &R_16, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_20_20);
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_20_20, STATE_VARIABLE_Accum_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_17));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1374__1_7_p_0(
  MR_Word ResultType_10,
  MR_Word ResultVar_11,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37,
  MR_Word * LambdaHeadVar__3_38,
  MR_Word LambdaHeadVar__4_39,
  MR_Word * LambdaHeadVar__5_40)
{
  {
    MR_Word Var_27;
    MR_Word Var_79;

    transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(LambdaHeadVar__2_37, ResultType_10, ResultVar_11, LambdaHeadVar__1_36, LambdaHeadVar__3_38, &Var_79, &Var_27, LambdaHeadVar__4_39, LambdaHeadVar__5_40);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
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
    MR_Word TypeInfo_86_86;
    MR_Word InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 3)));
    MR_Word InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 4)));
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
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 0)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 1)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 2)));
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_25;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_10, &InputVars_20, &Var_21);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_10, STATE_VARIABLE_StmInfo_0_32, &InputTypes_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_10, &InputModes_24, &Var_25);
    TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (InnerUO0_19));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ResultVar0_12));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    Var_34 = mercury__list__f_43_43_2_f_0(TypeInfo_86_86, InputVars_20, Var_41);
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ResultType_11));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, InputTypes_22, Var_45);
    Var_52 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_54 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, InputModes_24, Var_51);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_34, Var_35, Var_36, (MR_String) "simple_wrapper", STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_NewPredInfo_39_39, CallGoal_16, STATE_VARIABLE_StmInfo_0_32, &STATE_VARIABLE_StmInfo_40_40);
    transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_12, ResultType_11, &ResultVar_26, STATE_VARIABLE_NewPredInfo_39_39, &STATE_VARIABLE_NewPredInfo_59_59, STATE_VARIABLE_AtomicGoal_0_30, &STATE_VARIABLE_AtomicGoal_60_60);
    transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_60_60, &STATE_VARIABLE_AtomicGoal_61_61, AtomicGoalVars_10, InnerDI_18, InnerUO0_19, STATE_VARIABLE_NewPredInfo_59_59, &STATE_VARIABLE_NewPredInfo_62_62, STATE_VARIABLE_StmInfo_40_40, &STATE_VARIABLE_StmInfo_63_63);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (InnerUO0_19)), ((MR_Box) (InnerDI_18)));
    if (succeeded)
    {
      MR_Word Var_64;

      CopyStm_27 = (MR_Integer) 1;
      Var_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
      transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[12]), &InnerUO_28, STATE_VARIABLE_NewPredInfo_62_62, &STATE_VARIABLE_NewPredInfo_66_66);
    }
    else
    {
      CopyStm_27 = (MR_Integer) 0;
      InnerUO_28 = InnerUO0_19;
      STATE_VARIABLE_NewPredInfo_66_66 = STATE_VARIABLE_NewPredInfo_62_62;
    }
    transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(AtomicGoalVars_10, STATE_VARIABLE_AtomicGoal_61_61, ResultType_11, ResultVar_26, InnerDI_18, InnerUO_28, CopyStm_27, &WrapperGoal_29, STATE_VARIABLE_StmInfo_63_63, STATE_VARIABLE_NewPredInfo_66_66, &STATE_VARIABLE_NewPredInfo_68_68);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (InnerUO_28));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ResultVar_26));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
    }
    Var_69 = mercury__list__f_43_43_2_f_0(TypeInfo_86_86, InputVars_20, Var_71);
    transform_hlds__stm_expand__set_head_vars_3_p_0(Var_69, STATE_VARIABLE_NewPredInfo_68_68, &STATE_VARIABLE_NewPredInfo_70_70);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(WrapperGoal_29, STATE_VARIABLE_NewPredInfo_70_70, &STATE_VARIABLE_NewPredInfo_75_75);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_75_75, STATE_VARIABLE_NewPredInfo_31);
    transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*STATE_VARIABLE_NewPredInfo_31, PredProcId_14);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_31, STATE_VARIABLE_StmInfo_63_63, STATE_VARIABLE_StmInfo_33);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
  MR_Word AtomicGoalVars_12,
  MR_Word AtomicGoal_13,
  MR_Word ResultType_14,
  MR_Word ResultVar_15,
  MR_Word StmDI_16,
  MR_Word StmUO_17,
  MR_Word CopySTM_18,
  MR_Word * Goal_19,
  MR_Word StmInfo_20,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_Word AssignResult_22;
    MR_Word Call1_23;
    MR_Word Call2_24;
    MR_Word TopLevelGoalList0_26;
    MR_Word TopLevelGoalList_27;
    MR_Word STATE_VARIABLE_NewPredInfo_34_34;

    transform_hlds__stm_expand__construct_output_7_p_0(AtomicGoalVars_12, ResultType_14, ResultVar_15, StmInfo_20, &AssignResult_22, STATE_VARIABLE_NewPredInfo_0_28, &STATE_VARIABLE_NewPredInfo_34_34);
    Call1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Call2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    switch (CopySTM_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Call2_24, AssignResult_22);
          Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Var_36, Var_38);
          TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Call1_23, Var_35);
          *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_34_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_48_48;
          MR_Word CopySTMAssign_25;
          MR_Word Var_39;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_47;

          Var_41 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
          Var_42 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_42));
          }
          transform_hlds__stm_expand__create_var_unify_6_p_0(StmUO_17, StmDI_16, Var_39, &CopySTMAssign_25, STATE_VARIABLE_NewPredInfo_34_34, STATE_VARIABLE_NewPredInfo_29);
          TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (CopySTMAssign_25));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_47 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_48, Call2_24, AssignResult_22);
          Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_48, Var_44, Var_47);
          TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_48, Call1_23, Var_43);
        }
        break;
    }
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_26, &TopLevelGoalList_27);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_27, Goal_19);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word BranchGoalVars_10,
  MR_Word Closures_11,
  MR_Word StmDI_12,
  MR_Word StmUO_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_31,
  MR_Word * STATE_VARIABLE_StmInfo_32)
{
  {
    MR_Word TypeInfo_67_67;
    MR_Word TypeCtorInfo_68_68;
    MR_Word TypeCtorInfo_69_69;
    MR_Word TypeCtorInfo_17_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word InputVars_16;
    MR_Word OutputVars_17;
    MR_Word InputTypes_18;
    MR_Word OutputTypes_19;
    MR_Word InputModes_20;
    MR_Word OutputModes_21;
    MR_Word ReturnType_23;
    MR_Word NewPredInfo0_24;
    MR_Word NewStmDI_25;
    MR_Word NewPredInfo1_26;
    MR_Word NewStmUO_27;
    MR_Word NewPredInfo2_28;
    MR_Word NewPredInfo3_29;
    MR_Word NewPredInfo_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_StmInfo_38_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word InputSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_9, (MR_Integer) 0)));
    MR_Word OutputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_9, (MR_Integer) 2)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_9, (MR_Integer) 1)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_9, (MR_Integer) 3)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_9, (MR_Integer) 4)));

    InputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_83, InputSet_73);
    OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_83, OutputSet_74);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_9, STATE_VARIABLE_StmInfo_0_31, &InputTypes_18, &OutputTypes_19);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_9, &InputModes_20, &OutputModes_21);
    if ((OutputTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ReturnType_23 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
    else
    {
      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_19, (MR_Integer) 1)));
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_19, (MR_Integer) 0)));

      if ((Var_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ReturnType_23 = Var_93;
      else
      {
        {
          ReturnType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReturnType_23, 1) = ((MR_Box) (OutputTypes_19));
          MR_hl_field(MR_mktag(3), ReturnType_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    TypeInfo_67_67 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (StmUO_13));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (StmDI_12));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    Var_39 = mercury__list__f_43_43_2_f_0(TypeInfo_67_67, OutputVars_17, Var_40);
    Var_33 = mercury__list__f_43_43_2_f_0(TypeInfo_67_67, InputVars_16, Var_39);
    TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    Var_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_68_68, OutputTypes_19, Var_44);
    Var_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_68_68, InputTypes_18, Var_43);
    TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    Var_51 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    Var_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_69_69, OutputModes_21, Var_50);
    Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_69_69, InputModes_20, Var_49);
    Var_37 = hlds__make_goal__true_goal_0_f_0();
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_33, Var_34, Var_35, (MR_String) "or_else", Var_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NewPredInfo0_24, CallGoal_14, STATE_VARIABLE_StmInfo_0_31, &STATE_VARIABLE_StmInfo_38_38);
    Var_55 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[19]), &NewStmDI_25, NewPredInfo0_24, &NewPredInfo1_26);
    Var_58 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_58, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[20]), &NewStmUO_27, NewPredInfo1_26, &NewPredInfo2_28);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (NewStmUO_27));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (NewStmDI_25));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    Var_62 = mercury__list__f_43_43_2_f_0(TypeInfo_67_67, OutputVars_17, Var_63);
    Var_61 = mercury__list__f_43_43_2_f_0(TypeInfo_67_67, InputVars_16, Var_62);
    transform_hlds__stm_expand__set_head_vars_3_p_0(Var_61, NewPredInfo2_28, &NewPredInfo3_29);
    transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(BranchGoalVars_10, Closures_11, NewStmDI_25, NewStmUO_27, ReturnType_23, STATE_VARIABLE_StmInfo_38_38, NewPredInfo3_29, &NewPredInfo_30);
    transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_30, STATE_VARIABLE_StmInfo_38_38, STATE_VARIABLE_StmInfo_32);
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word Closures_10,
  MR_Word StmDI_11,
  MR_Word StmUO_12,
  MR_Word ReturnType_13,
  MR_Word StmInfo_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_43_43;
    MR_Integer ClosureCount_16;
    MR_Word InnerSTMVars_17;
    MR_Word ReturnRttiVar_18;
    MR_Word CreateRetTypeInfo_19;
    MR_Word ExceptRttiVar_20;
    MR_Word CreateExceptTypeInfo_21;
    MR_Word EndBranchGoal_22;
    MR_Word MainGoal0_23;
    MR_Word TopLevelGoalList0_24;
    MR_Word TopLevelGoalList_25;
    MR_Word MainGoal1_26;
    MR_Word MainGoal_27;
    MR_Word STATE_VARIABLE_NewPredInfo_30_30;
    MR_Word STATE_VARIABLE_NewPredInfo_31_31;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_NewPredInfo_40_40;
    MR_Word ModuleInfo0_49;
    MR_Word PredId_50;
    MR_Integer ProcId_51;
    MR_Word PredInfo0_52;
    MR_Word ProcInfo0_53;
    MR_Word Context_54;
    MR_Integer VarCnt_55;
    MR_Word PolyInfo0_56;
    MR_Word PolyInfo_57;
    MR_Word PolySpecs_58;
    MR_Word PredInfo_59;
    MR_Word ProcInfo_60;
    MR_Word ModuleInfo_61;
    MR_Word Var_62;
    MR_Word ModuleInfo0_73;
    MR_Word PredId_74;
    MR_Integer ProcId_75;
    MR_Word PredInfo0_76;
    MR_Word ProcInfo0_77;
    MR_Word Context_78;
    MR_Integer VarCnt_79;
    MR_Word PolyInfo0_80;
    MR_Word PolyInfo_81;
    MR_Word PolySpecs_82;
    MR_Word PredInfo_83;
    MR_Word ProcInfo_84;
    MR_Word ModuleInfo_85;
    MR_Word Var_86;

    mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Closures_10, &ClosureCount_16);
    transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(ClosureCount_16, &InnerSTMVars_17, STATE_VARIABLE_NewPredInfo_0_28, &STATE_VARIABLE_NewPredInfo_30_30);
    ModuleInfo0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 0)));
    PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 1)));
    ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 2)));
    PredInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 3)));
    ProcInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 4)));
    Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 5)));
    VarCnt_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 6)));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_49, PredInfo0_52, ProcInfo0_53, &PolyInfo0_56);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ReturnType_13, Context_54, &ReturnRttiVar_18, &CreateRetTypeInfo_19, PolyInfo0_56, &PolyInfo_57);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_57, &PolySpecs_58, PredInfo0_52, &PredInfo_59, ProcInfo0_53, &ProcInfo_60, &ModuleInfo_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (PolySpecs_58));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_62, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 0) = ((MR_Box) (ModuleInfo_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 1) = ((MR_Box) (PredId_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 2) = ((MR_Box) (ProcId_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 3) = ((MR_Box) (PredInfo_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 4) = ((MR_Box) (ProcInfo_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 5) = ((MR_Box) (Context_54));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, 6) = ((MR_Box) (VarCnt_55));
    }
    Var_32 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 0)));
    PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 1)));
    ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 2)));
    PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 3)));
    ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 4)));
    Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 5)));
    VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 6)));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_73, PredInfo0_76, ProcInfo0_77, &PolyInfo0_80);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Var_32, Context_78, &ExceptRttiVar_20, &CreateExceptTypeInfo_21, PolyInfo0_80, &PolyInfo_81);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_81, &PolySpecs_82, PredInfo0_76, &PredInfo_83, ProcInfo0_77, &ProcInfo_84, &ModuleInfo_85);
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (PolySpecs_82));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_86, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 0) = ((MR_Box) (ModuleInfo_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 1) = ((MR_Box) (PredId_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 2) = ((MR_Box) (ProcId_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 3) = ((MR_Box) (PredInfo_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 4) = ((MR_Box) (ProcInfo_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 5) = ((MR_Box) (Context_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_33_33, 6) = ((MR_Box) (VarCnt_79));
    }
    transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(InnerSTMVars_17, StmDI_11, StmUO_12, ExceptRttiVar_20, &EndBranchGoal_22, STATE_VARIABLE_NewPredInfo_33_33, &STATE_VARIABLE_NewPredInfo_34_34);
    transform_hlds__stm_expand__create_or_else_branches_13_p_0(AtomicGoalVars_9, ReturnType_13, StmDI_11, StmUO_12, InnerSTMVars_17, ReturnRttiVar_18, ExceptRttiVar_20, Closures_10, EndBranchGoal_22, &MainGoal0_23, StmInfo_14, STATE_VARIABLE_NewPredInfo_34_34, &STATE_VARIABLE_NewPredInfo_35_35);
    TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MainGoal0_23));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_43_43, CreateExceptTypeInfo_21, Var_37);
    TopLevelGoalList0_24 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_43_43, CreateRetTypeInfo_19, Var_36);
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_24, &TopLevelGoalList_25);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_25, &MainGoal1_26);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(MainGoal1_26, (MR_Integer) 0, &MainGoal_27);
    transform_hlds__stm_expand__new_pred_set_goal_3_p_0(MainGoal_27, STATE_VARIABLE_NewPredInfo_35_35, &STATE_VARIABLE_NewPredInfo_40_40);
    transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_40_40, STATE_VARIABLE_NewPredInfo_29);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_42;
    MR_Word conv0_LambdaHeadVar__4_44;

    transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1825__1_4_p_0(((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_42, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_44);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_42));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_44));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
  MR_Word StmVars_8,
  MR_Word OuterSTMDI_9,
  MR_Word OuterSTMUO_10,
  MR_Word ExceptionRttiVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_39,
  MR_Word * STATE_VARIABLE_NewPredInfo_40)
{
  {
    MR_Word TypeInfo_156_156 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    MR_Word StmVarsMinusHead_19;
    MR_Word IntermediateStmVars_20;
    MR_Word MergeStmVarsIn_21;
    MR_Word MergeStmVarsOut_22;
    MR_Word MergeGoals_28;
    MR_Word UnlockCall_29;
    MR_Word AssignRetryCons_30;
    MR_Word RetryConsVar_31;
    MR_Word RetryCall_32;
    MR_Word ValidGoal_33;
    MR_Word AssignRollbackCons_34;
    MR_Word RollbackConsVar_35;
    MR_Word ThrowCall_36;
    MR_Word InvalidGoal_37;
    MR_Word Goals_38;
    MR_Word STATE_VARIABLE_NewPredInfo_48_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_NewPredInfo_83_83;
    MR_Word Var_84;
    MR_Word Var_92;
    MR_Word STATE_VARIABLE_NewPredInfo_93_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word STATE_VARIABLE_NewPredInfo_97_97;
    MR_Word Var_99;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_NewPredInfo_108_108;
    MR_Word Var_109;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word STATE_VARIABLE_NewPredInfo_122_122;
    MR_Word Var_124;
    MR_Word Var_130;
    MR_Word Var_132;
    MR_Word STATE_VARIABLE_NewPredInfo_133_133;
    MR_Word Var_134;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Box conv2_STATE_VARIABLE_NewPredInfo_48_48;

    StmVarsMinusHead_19 = mercury__list__det_tail_1_f_0(TypeInfo_156_156, StmVars_8);
    mercury__list__map_foldl_5_p_0(TypeInfo_156_156, TypeInfo_156_156, (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[9], StmVarsMinusHead_19, &IntermediateStmVars_20, ((MR_Box) (STATE_VARIABLE_NewPredInfo_0_39)), &conv2_STATE_VARIABLE_NewPredInfo_48_48);
    STATE_VARIABLE_NewPredInfo_48_48 = ((MR_Word) conv2_STATE_VARIABLE_NewPredInfo_48_48);
    {
      MergeStmVarsIn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MergeStmVarsIn_21, 0) = ((MR_Box) (OuterSTMDI_9));
      MR_hl_field(MR_mktag(1), MergeStmVarsIn_21, 1) = ((MR_Box) (IntermediateStmVars_20));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (OuterSTMUO_10));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    MergeStmVarsOut_22 = mercury__list__f_43_43_2_f_0(TypeInfo_156_156, IntermediateStmVars_20, Var_49);
    transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(StmVars_8, MergeStmVarsIn_21, MergeStmVarsOut_22, &MergeGoals_28, STATE_VARIABLE_NewPredInfo_48_48, &STATE_VARIABLE_NewPredInfo_83_83);
    Var_84 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_84, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_92, &UnlockCall_29, STATE_VARIABLE_NewPredInfo_83_83, &STATE_VARIABLE_NewPredInfo_93_93);
    Var_94 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    Var_95 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(Var_94, Var_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[17]), &AssignRetryCons_30, &RetryConsVar_31, STATE_VARIABLE_NewPredInfo_93_93, &STATE_VARIABLE_NewPredInfo_97_97);
    Var_99 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (RetryConsVar_31));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ExceptionRttiVar_11));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_109));
    }
    Var_107 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_105);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_99, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, Var_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_107, &RetryCall_32, STATE_VARIABLE_NewPredInfo_97_97, &STATE_VARIABLE_NewPredInfo_108_108);
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (RetryCall_32));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (AssignRetryCons_30));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (UnlockCall_29));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, MergeGoals_28, Var_115);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_114, &ValidGoal_33);
    Var_119 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    Var_120 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(Var_119, Var_120, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[18]), &AssignRollbackCons_34, &RollbackConsVar_35, STATE_VARIABLE_NewPredInfo_108_108, &STATE_VARIABLE_NewPredInfo_122_122);
    Var_124 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (RollbackConsVar_35));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ExceptionRttiVar_11));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_134));
    }
    Var_132 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_130);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_124, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, Var_130, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_132, &ThrowCall_36, STATE_VARIABLE_NewPredInfo_122_122, &STATE_VARIABLE_NewPredInfo_133_133);
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (ThrowCall_36));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (AssignRollbackCons_34));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (UnlockCall_29));
      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_140));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_139, &InvalidGoal_37);
    transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(StmVars_8, (MR_Integer) 0, ValidGoal_33, InvalidGoal_37, &Goals_38, STATE_VARIABLE_NewPredInfo_133_133, STATE_VARIABLE_NewPredInfo_40);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Goals_38, Goal_12);
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
    MR_bool succeeded = (Src1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Src2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Src3_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *Dest_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

      succeeded = ((MR_tag((MR_Word) Src1_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        S_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_9, (MR_Integer) 0)));
        Ss_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src1_9, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Src2_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          T_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_10, (MR_Integer) 0)));
          Ts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src2_10, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Src3_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            U_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src3_11, (MR_Integer) 0)));
            Us_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Src3_11, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word R_20;
        MR_Word Rs_21;
        MR_Word STATE_VARIABLE_Accum_24_24;

        transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1839__1_6_p_0(S_14, T_16, U_18, &R_20, STATE_VARIABLE_Accum_0_22, &STATE_VARIABLE_Accum_24_24);
        transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(Ss_15, Ts_17, Us_19, &Rs_21, STATE_VARIABLE_Accum_24_24, STATE_VARIABLE_Accum_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Dest_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (R_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rs_21));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1839__1_6_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word LambdaHeadVar__2_52,
  MR_Word LambdaHeadVar__3_53,
  MR_Word * LambdaHeadVar__4_54,
  MR_Word LambdaHeadVar__5_55,
  MR_Word * LambdaHeadVar__6_56)
{
  {
    MR_Word Var_57;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;

    Var_57 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (LambdaHeadVar__3_53));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LambdaHeadVar__2_52));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
    }
    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (LambdaHeadVar__2_52));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (LambdaHeadVar__3_53));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
    }
    Var_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_69);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_57, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_65, LambdaHeadVar__4_54, LambdaHeadVar__5_55, LambdaHeadVar__6_56);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_80;
    MR_Word conv4_LambdaHeadVar__4_82;

    transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1020__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv5_LambdaHeadVar__2_80, ((MR_Word) wrapper_arg_3), &conv4_LambdaHeadVar__4_82);
    *wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_80));
    *wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_82));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_51;
    MR_Word conv1_LambdaHeadVar__3_52;
    MR_Word conv0_LambdaHeadVar__5_54;

    transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1003__1_5_p_0(((MR_Word) wrapper_arg_1), &conv2_LambdaHeadVar__2_51, &conv1_LambdaHeadVar__3_52, ((MR_Word) wrapper_arg_4), &conv0_LambdaHeadVar__5_54);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_51));
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_52));
    *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_54));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
  MR_Word StmVars_8,
  MR_Word UnlockAfterwards_9,
  MR_Word ValidGoal_10,
  MR_Word InvalidGoal_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * STATE_VARIABLE_NewPredInfo_34)
{
  {
    MR_Word TypeInfo_119_119;
    MR_Word TypeCtorInfo_120_120;
    MR_Word TypeCtorInfo_121_121;
    MR_Word AssignValidConst_14;
    MR_Word IsValidConstVar_15;
    MR_Word LockCall_16;
    MR_Word ValidCalls_24;
    MR_Word IsValidVars_25;
    MR_Word CreateValidTests_26;
    MR_Word TestValidGoals_29;
    MR_Word TestValidCond_30;
    MR_Word ITEGoal_31;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_NewPredInfo_38_38;
    MR_Word Var_40;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_NewPredInfo_49_49;
    MR_Word STATE_VARIABLE_NewPredInfo_78_78;
    MR_Word STATE_VARIABLE_NewPredInfo_86_86;
    MR_Word STATE_VARIABLE_NewPredInfo_90_90;
    MR_Box conv3_STATE_VARIABLE_NewPredInfo_78_78;
    MR_Box conv6_STATE_VARIABLE_NewPredInfo_86_86;

    Var_35 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    Var_36 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(Var_35, Var_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[16]), &AssignValidConst_14, &IsValidConstVar_15, STATE_VARIABLE_NewPredInfo_0_33, &STATE_VARIABLE_NewPredInfo_38_38);
    Var_40 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_40, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_48, &LockCall_16, STATE_VARIABLE_NewPredInfo_38_38, &STATE_VARIABLE_NewPredInfo_49_49);
    TypeInfo_119_119 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
    mercury__list__map2_foldl_6_p_0(TypeInfo_119_119, TypeCtorInfo_120_120, TypeInfo_119_119, TypeCtorInfo_121_121, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[8], StmVars_8, &ValidCalls_24, &IsValidVars_25, ((MR_Box) (STATE_VARIABLE_NewPredInfo_49_49)), &conv3_STATE_VARIABLE_NewPredInfo_78_78);
    STATE_VARIABLE_NewPredInfo_78_78 = ((MR_Word) conv3_STATE_VARIABLE_NewPredInfo_78_78);
    {
      CreateValidTests_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CreateValidTests_26, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), CreateValidTests_26, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2));
      MR_hl_field(MR_mktag(0), CreateValidTests_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), CreateValidTests_26, 3) = ((MR_Box) (IsValidConstVar_15));
    }
    mercury__list__map_foldl_5_p_0(TypeInfo_119_119, TypeCtorInfo_120_120, TypeCtorInfo_121_121, CreateValidTests_26, IsValidVars_25, &TestValidGoals_29, ((MR_Box) (STATE_VARIABLE_NewPredInfo_78_78)), &conv6_STATE_VARIABLE_NewPredInfo_86_86);
    STATE_VARIABLE_NewPredInfo_86_86 = ((MR_Word) conv6_STATE_VARIABLE_NewPredInfo_86_86);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TestValidGoals_29, &TestValidCond_30);
    transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TestValidCond_30, ValidGoal_10, InvalidGoal_11, (MR_Integer) 4, (MR_Integer) 2, &ITEGoal_31, STATE_VARIABLE_NewPredInfo_86_86, &STATE_VARIABLE_NewPredInfo_90_90);
    switch (UnlockAfterwards_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;

          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LockCall_16));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (ValidCalls_24));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (AssignValidConst_14));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ITEGoal_31));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *Goals_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_120_120, Var_91, Var_93);
          *STATE_VARIABLE_NewPredInfo_34 = STATE_VARIABLE_NewPredInfo_90_90;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnlockCall_32;
          MR_Word Var_95;
          MR_Word Var_103;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;

          Var_95 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          Var_103 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          transform_hlds__stm_expand__create_simple_call_12_p_0(Var_95, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_103, &UnlockCall_32, STATE_VARIABLE_NewPredInfo_90_90, STATE_VARIABLE_NewPredInfo_34);
          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (LockCall_16));
            MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (ValidCalls_24));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (AssignValidConst_14));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ITEGoal_31));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (UnlockCall_32));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
          }
          *Goals_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_120_120, Var_105, Var_107);
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
      *Vars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[15]), &Var_8, STATE_VARIABLE_NewPredInfo_0_11, &STATE_VARIABLE_NewPredInfo_16_16);
        Count1_9 = (Count_5 - (MR_Integer) 1);
        transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(Count1_9, &Vars0_10, STATE_VARIABLE_NewPredInfo_16_16, STATE_VARIABLE_NewPredInfo_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars0_10));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
  MR_Word AtomicGoalVars_14,
  MR_Word ReturnType_15,
  MR_Word OuterStmDIVar_16,
  MR_Word OuterStmUOVar_17,
  MR_Word InnerSTMVars_18,
  MR_Word RttiVar_19,
  MR_Word RollbackExceptionRttiVar_20,
  MR_Word WrapperIDs_21,
  MR_Word EndBranch_22,
  MR_Word * Goal_23,
  MR_Word StmInfo_24,
  MR_Word STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * STATE_VARIABLE_NewPredInfo_34)
{
  {
    MR_bool succeeded = (InnerSTMVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (WrapperIDs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (AtomicGoalVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *Goal_23 = EndBranch_22;
      *STATE_VARIABLE_NewPredInfo_34 = STATE_VARIABLE_NewPredInfo_0_33;
    }
    else
    {
      MR_Word AGV_26;
      MR_Word AGVs_27;
      MR_Word InnerVar_28;
      MR_Word InnerSTMVars0_29;
      MR_Word WrapID_30;
      MR_Word WrapperIDs0_31;

      succeeded = ((MR_tag((MR_Word) AtomicGoalVars_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        AGV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), AtomicGoalVars_14, (MR_Integer) 0)));
        AGVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), AtomicGoalVars_14, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) InnerSTMVars_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          InnerVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerSTMVars_18, (MR_Integer) 0)));
          InnerSTMVars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerSTMVars_18, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) WrapperIDs_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            WrapID_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), WrapperIDs_21, (MR_Integer) 0)));
            WrapperIDs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), WrapperIDs_21, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal0_32;
        MR_Word STATE_VARIABLE_NewPredInfo_35_35;

        transform_hlds__stm_expand__create_or_else_branches_13_p_0(AGVs_27, ReturnType_15, OuterStmDIVar_16, OuterStmUOVar_17, InnerSTMVars0_29, RttiVar_19, RollbackExceptionRttiVar_20, WrapperIDs0_31, EndBranch_22, &Goal0_32, StmInfo_24, STATE_VARIABLE_NewPredInfo_0_33, &STATE_VARIABLE_NewPredInfo_35_35);
        transform_hlds__stm_expand__create_or_else_branch_13_p_0(AGV_26, ReturnType_15, OuterStmDIVar_16, OuterStmUOVar_17, InnerVar_28, RttiVar_19, RollbackExceptionRttiVar_20, WrapID_30, Goal0_32, Goal_23, StmInfo_24, STATE_VARIABLE_NewPredInfo_35_35, STATE_VARIABLE_NewPredInfo_34);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/13", (MR_String) "mismatched lists");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
  MR_Word AtomicGoalVars_14,
  MR_Word ReturnType_15,
  MR_Word OuterStmDIVar_16,
  MR_Word OuterStmUOVar_17,
  MR_Word InnerSTMVar_18,
  MR_Word RttiVar_19,
  MR_Word RollbackExceptionRttiVar_20,
  MR_Word WrapperID_21,
  MR_Word RetryBranch_22,
  MR_Word * Goal_23,
  MR_Word StmInfo_24,
  MR_Word STATE_VARIABLE_NewPredInfo_0_49,
  MR_Word * STATE_VARIABLE_NewPredInfo_50)
{
  {
    MR_Word InputVars_26;
    MR_Word InputTypes_28;
    MR_Word InputModes_30;
    MR_Word InnerSTM0Var_32;
    MR_Word ReturnExceptVar_33;
    MR_Word AtomicClosureVar_34;
    MR_Word ClosureAssign_35;
    MR_Word CreateNestedLogCall_36;
    MR_Word TryStmCall_37;
    MR_Word DeconstructGoal_38;
    MR_Word MergeNestedLogsCall_39;
    MR_Word SuccessBranch_40;
    MR_Word DiscardCall_41;
    MR_Word RethrowCall_42;
    MR_Word ExceptUnivVar_43;
    MR_Word DeconstructException_44;
    MR_Word NotRetryBranch_45;
    MR_Word IfRetryGoal_46;
    MR_Word ExceptionBranch_47;
    MR_Word DisjGoal_48;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_NewPredInfo_53_53;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_NewPredInfo_57_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_NewPredInfo_61_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_NewPredInfo_84_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word STATE_VARIABLE_NewPredInfo_105_105;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word STATE_VARIABLE_NewPredInfo_134_134;
    MR_Word Var_135;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word STATE_VARIABLE_NewPredInfo_144_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_153;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_165;
    MR_Word Var_173;
    MR_Word STATE_VARIABLE_NewPredInfo_174_174;
    MR_Word Var_176;
    MR_Word Var_182;
    MR_Word Var_188;
    MR_Word Var_190;
    MR_Word STATE_VARIABLE_NewPredInfo_191_191;
    MR_Word Var_192;
    MR_Word Var_197;
    MR_Word STATE_VARIABLE_NewPredInfo_199_199;
    MR_Word Var_201;
    MR_Word Var_202;
    MR_Word Var_204;
    MR_Word Var_205;
    MR_Word Var_207;
    MR_Word STATE_VARIABLE_NewPredInfo_208_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_212;
    MR_Word Var_216;
    MR_Word Var_217;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_224;
    MR_Word Var_225;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_31;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_14, &InputVars_26, &Var_27);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_14, StmInfo_24, &InputTypes_28, &Var_29);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_14, &InputModes_30, &Var_31);
    Var_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_51, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[13]), &InnerSTM0Var_32, STATE_VARIABLE_NewPredInfo_0_49, &STATE_VARIABLE_NewPredInfo_53_53);
    Var_55 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_15);
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[14]), &ReturnExceptVar_33, STATE_VARIABLE_NewPredInfo_53_53, &STATE_VARIABLE_NewPredInfo_57_57);
    Var_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ReturnType_15));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, InputTypes_28, Var_62);
    Var_69 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_71 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_73 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
    }
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, InputModes_30, Var_68);
    transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_21, InputVars_26, Var_59, Var_60, &AtomicClosureVar_34, &ClosureAssign_35, STATE_VARIABLE_NewPredInfo_57_57, &STATE_VARIABLE_NewPredInfo_61_61);
    Var_75 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (InnerSTM0Var_32));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (OuterStmDIVar_16));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_85));
    }
    Var_89 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (OuterStmDIVar_16));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (InnerSTM0Var_32));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_92));
    }
    Var_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_87);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_75, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_83, &CreateNestedLogCall_36, STATE_VARIABLE_NewPredInfo_61_61, &STATE_VARIABLE_NewPredInfo_84_84);
    Var_96 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (InnerSTMVar_18));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (InnerSTM0Var_32));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (AtomicClosureVar_34));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (RttiVar_19));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_107));
    }
    Var_114 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]);
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (RttiVar_19));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (AtomicClosureVar_34));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (ReturnExceptVar_33));
      MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (InnerSTM0Var_32));
      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (InnerSTMVar_18));
      MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_117));
    }
    Var_104 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_112);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_96, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[9]), (MR_Integer) 4, (MR_Integer) 0, Var_102, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_104, &TryStmCall_37, STATE_VARIABLE_NewPredInfo_84_84, &STATE_VARIABLE_NewPredInfo_105_105);
    transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_14, ReturnType_15, ReturnExceptVar_33, &DeconstructGoal_38, StmInfo_24, STATE_VARIABLE_NewPredInfo_105_105, &STATE_VARIABLE_NewPredInfo_134_134);
    Var_135 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (OuterStmUOVar_17));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (OuterStmDIVar_16));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (InnerSTMVar_18));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (InnerSTMVar_18));
      MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (OuterStmUOVar_17));
      MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
      MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_158));
    }
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_153));
    }
    Var_143 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_148);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_135, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_141, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_143, &MergeNestedLogsCall_39, STATE_VARIABLE_NewPredInfo_134_134, &STATE_VARIABLE_NewPredInfo_144_144);
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (MergeNestedLogsCall_39));
      MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (DeconstructGoal_38));
      MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_163));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_162, &SuccessBranch_40);
    Var_165 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_173 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_176);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_165, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_173, &DiscardCall_41, STATE_VARIABLE_NewPredInfo_144_144, &STATE_VARIABLE_NewPredInfo_174_174);
    Var_182 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (RttiVar_19));
      MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_192));
    }
    Var_190 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_188);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_182, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, Var_188, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_190, &RethrowCall_42, STATE_VARIABLE_NewPredInfo_174_174, &STATE_VARIABLE_NewPredInfo_191_191);
    Var_197 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_197, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[4]), &ExceptUnivVar_43, STATE_VARIABLE_NewPredInfo_191_191, &STATE_VARIABLE_NewPredInfo_199_199);
    Var_201 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (ExceptUnivVar_43));
      MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_33, Var_201, Var_202, &DeconstructException_44);
    {
      Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (RethrowCall_42));
      MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (DiscardCall_41));
      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_205));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_204, &NotRetryBranch_45);
    Var_207 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(RollbackExceptionRttiVar_20, ExceptUnivVar_43, Var_207, RetryBranch_22, NotRetryBranch_45, &IfRetryGoal_46, STATE_VARIABLE_NewPredInfo_199_199, &STATE_VARIABLE_NewPredInfo_208_208);
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (IfRetryGoal_46));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (DeconstructException_44));
      MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_209, &ExceptionBranch_47);
    Var_217 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_216, 2) = ((MR_Box) (ExceptionBranch_47));
    }
    Var_221 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    {
      Var_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (Var_221));
      MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_220, 2) = ((MR_Box) (SuccessBranch_40));
    }
    {
      Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
      MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_216));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_219));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(ReturnExceptVar_33, Var_212, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_48, STATE_VARIABLE_NewPredInfo_208_208, STATE_VARIABLE_NewPredInfo_50);
    {
      Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (DisjGoal_48));
      MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (TryStmCall_37));
      MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) (Var_227));
    }
    {
      Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (ClosureAssign_35));
      MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_226));
    }
    {
      Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_224, 0) = ((MR_Box) (CreateNestedLogCall_36));
      MR_hl_field(MR_mktag(1), Var_224, 1) = ((MR_Box) (Var_225));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_224, Goal_23);
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
    MR_Word TypeInfo_86_86;
    MR_Word InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 3)));
    MR_Word InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 4)));
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
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 0)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 1)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_10, (MR_Integer) 2)));
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_25;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_10, &InputVars_20, &Var_21);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_10, STATE_VARIABLE_StmInfo_0_32, &InputTypes_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_10, &InputModes_24, &Var_25);
    TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (InnerUO0_19));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ResultVar0_12));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    Var_34 = mercury__list__f_43_43_2_f_0(TypeInfo_86_86, InputVars_20, Var_41);
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ResultType_11));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, InputTypes_22, Var_45);
    Var_52 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_54 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, InputModes_24, Var_51);
    transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_34, Var_35, Var_36, (MR_String) "wrapper", STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_NewPredInfo_39_39, CallGoal_16, STATE_VARIABLE_StmInfo_0_32, &STATE_VARIABLE_StmInfo_40_40);
    transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_12, ResultType_11, &ResultVar_26, STATE_VARIABLE_NewPredInfo_39_39, &STATE_VARIABLE_NewPredInfo_59_59, STATE_VARIABLE_AtomicGoal_0_30, &STATE_VARIABLE_AtomicGoal_60_60);
    transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_60_60, &STATE_VARIABLE_AtomicGoal_61_61, AtomicGoalVars_10, InnerDI_18, InnerUO0_19, STATE_VARIABLE_NewPredInfo_59_59, &STATE_VARIABLE_NewPredInfo_62_62, STATE_VARIABLE_StmInfo_40_40, &STATE_VARIABLE_StmInfo_63_63);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (InnerUO0_19)), ((MR_Box) (InnerDI_18)));
    if (succeeded)
    {
      MR_Word Var_64;

      CopyStm_27 = (MR_Integer) 1;
      Var_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
      transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[12]), &InnerUO_28, STATE_VARIABLE_NewPredInfo_62_62, &STATE_VARIABLE_NewPredInfo_66_66);
    }
    else
    {
      CopyStm_27 = (MR_Integer) 0;
      InnerUO_28 = InnerUO0_19;
      STATE_VARIABLE_NewPredInfo_66_66 = STATE_VARIABLE_NewPredInfo_62_62;
    }
    transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(AtomicGoalVars_10, STATE_VARIABLE_AtomicGoal_61_61, ResultType_11, ResultVar_26, InnerDI_18, InnerUO_28, CopyStm_27, &WrapperGoal_29, STATE_VARIABLE_StmInfo_63_63, STATE_VARIABLE_NewPredInfo_66_66, &STATE_VARIABLE_NewPredInfo_68_68);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (InnerUO_28));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (InnerDI_18));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ResultVar0_12));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
    }
    Var_69 = mercury__list__f_43_43_2_f_0(TypeInfo_86_86, InputVars_20, Var_71);
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
    MR_Word PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 1)));
    MR_Integer ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 5)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo0_3, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word TypeCtorInfo_32_32;
    MR_Word ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    MR_Word GoalVars_7;
    MR_Word GoalVarsSet_8;
    MR_Word ProcVarSet0_9;
    MR_Word ProcVarTypes0_10;
    MR_Word ProgVarSet_11;
    MR_Word ProcVarTypes_12;
    MR_Word ProcInfo1_13;
    MR_Word ProcInfo2_14;
    MR_Word ProcInfo_15;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Integer Var_31;
    MR_Word Var_29;

    hlds__goal_util__goal_vars_2_p_0(Goal_4, &GoalVars_7);
    TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0(TypeCtorInfo_32_32, GoalVars_7);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_6, &ProcVarSet0_9);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_6, &ProcVarTypes0_10);
    mercury__varset__select_3_p_0(TypeCtorInfo_32_32, GoalVarsSet_8, ProcVarSet0_9, &ProgVarSet_11);
    hlds__vartypes__vartypes_select_3_p_0(GoalVarsSet_8, ProcVarTypes0_10, &ProcVarTypes_12);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(ProgVarSet_11, ProcInfo0_6, &ProcInfo1_13);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_4, ProcInfo1_13, &ProcInfo2_14);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ProcVarTypes_12, ProcInfo2_14, &ProcInfo_15);
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word ProcInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
    MR_Word ModuleInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
    MR_Word ProcInfo1_6;
    MR_Word ProcInfo_7;
    MR_Word ModuleInfo_8;
    MR_Word Var_28;
    MR_Integer Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Integer Var_33;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
    MR_Word Var_27;
    MR_Word Var_31;

    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_4, &ProcInfo1_6);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ProcInfo1_6, &ProcInfo_7, ModuleInfo0_5, &ModuleInfo_8);
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
    Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
    Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word OrigPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 1)));
    MR_Integer OrigProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 2)));
    MR_Word OrigProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 3)));
    MR_Word OrigPredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 4)));
    MR_Word StmExpanded_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 5)));
    MR_Integer ExpandNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 6)));
    MR_Word PredModuleInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 0)));
    MR_Word NewPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 1)));
    MR_Integer NewProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 2)));
    MR_Word NewPredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 3)));
    MR_Word NewProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 4)));
    MR_Word PredModuleInfo_21;
    MR_Word _StmModuleInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo0_5, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 5)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPred_4, (MR_Integer) 6)));

    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_15, NewProcId_16, NewPredInfo_17, NewProcInfo_18, PredModuleInfo0_14, &PredModuleInfo_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *StmInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredModuleInfo_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigPredId_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OrigProcId_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigProcInfo_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OrigPredInfo_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StmExpanded_12));
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
    MR_Word ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
    MR_Word ProcInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Integer Var_23;
    MR_Word Var_21;

    hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_4, ProcInfo0_6, &ProcInfo_7);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
    Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
    Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word TypeCtorInfo_141_141;
    MR_Word ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 0)));
    MR_Word PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 4)));
    MR_Integer ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 2)));
    MR_Word PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 1)));
    MR_Integer ExpansionCnt0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 6)));
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
    MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 3)));
    MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 5)));
    MR_Word Var_26;
    MR_Word Var_126;
    MR_Integer Var_132;

    mercury__list__length_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ProcHeadVars_11, &Arity_25);
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigGoal_15, (MR_Integer) 0)));
    GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigGoal_15, (MR_Integer) 1)));
    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_21, ProcId_22, &ProcInfo_28);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_28, &ProcContext_29);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_28, &ProcVarSet_30);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_28, &ProcVarTypes_31);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_28, &ProcInstVarSet_32);
    if ((MaybeDetism_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_28, &CallDeterminism_61);
    else
      CallDeterminism_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDetism_16, (MR_Integer) 0)));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_28, &ProcGoal_34);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_28, &ProcRttiVarMaps_35);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_28, &HasParallelConj_36);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_28, &VarNameRemap_37);
    hlds__hlds_pred__proc_info_create_15_p_0(ProcContext_29, (MR_Integer) -1, ProcVarSet_30, ProcVarTypes_31, ProcHeadVars_11, ProcInstVarSet_32, ProcHeadModes_13, (MR_Integer) 2, CallDeterminism_61, ProcGoal_34, ProcRttiVarMaps_35, (MR_Integer) 1, HasParallelConj_36, VarNameRemap_37, &NewProcInfo_39);
    ModuleName_40 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
    OrigPredName_41 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
    PredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_21, &PredContext_43);
    TypeCtorInfo_141_141 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_79 = mercury__string__string_1_f_0(TypeCtorInfo_141_141, ((MR_Box) (Arity_25)));
    Var_83 = mercury__string__string_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_23)));
    Var_86 = mercury__string__string_1_f_0(TypeCtorInfo_141_141, ((MR_Box) (ExpansionCnt0_24)));
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
      NewPredName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NewPredName_44, 0) = ((MR_Box) (ModuleName_40));
      MR_hl_field(MR_mktag(1), NewPredName_44, 1) = ((MR_Box) (Var_70));
    }
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_21, &OrigPredOrigin_45);
    {
      NewPredOrigin_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), NewPredOrigin_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(2), NewPredOrigin_46, 1) = ((MR_Box) (OrigPredOrigin_45));
      MR_hl_field(MR_mktag(2), NewPredOrigin_46, 2) = ((MR_Box) (PredId_23));
    }
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &PredTypeVarSet_47);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_21, &PredExistQVars_48);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_21, &PredClassContext_49);
    hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo_21, &PredAssertions_50);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_51);
    hlds__hlds_pred__pred_info_create_16_p_0(ModuleName_40, NewPredName_44, PredOrFunc_42, PredContext_43, NewPredOrigin_46, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), Markers_51, PredArgTypes_12, PredTypeVarSet_47, PredExistQVars_48, PredClassContext_49, PredAssertions_50, VarNameRemap_37, NewProcInfo_39, &NewProcId_52, &NewPredInfo_53);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_20, &PredicateTable0_54);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_53, &NewPredId_55, PredicateTable0_54, &PredicateTable_56);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_56, ModuleInfo0_20, &ModuleInfo_57);
    {
      CallExpr_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), CallExpr_58, 0) = ((MR_Box) (NewPredId_55));
      MR_hl_field(MR_mktag(2), CallExpr_58, 1) = ((MR_Box) (NewProcId_52));
      MR_hl_field(MR_mktag(2), CallExpr_58, 2) = ((MR_Box) (ProcHeadVars_11));
      MR_hl_field(MR_mktag(2), CallExpr_58, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), CallExpr_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), CallExpr_58, 5) = ((MR_Box) (NewPredName_44));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ProcHeadVars_11, &CallNonLocals_59);
    hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo0_20, ProcHeadVars_11, ProcHeadModes_13, &CallInstmapDelta_60);
    CallPurity_62 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_27);
    CallContext_63 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_27);
    hlds__hlds_goal__goal_info_init_6_p_0(CallNonLocals_59, CallInstmapDelta_60, CallDeterminism_61, CallPurity_62, CallContext_63, &GoalInfo_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *CallGoal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallExpr_58));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_64));
    }
    ExpansionCnt_65 = (ExpansionCnt0_24 + (MR_Integer) 1);
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 0)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 1)));
    Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 2)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 3)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 4)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 5)));
    Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_66, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_67 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ExpansionCnt_65));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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

    transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2124__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_36);
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
    MR_Word TypeCtorInfo_54_54;
    MR_Word TypeInfo_55_55;
    MR_Word NewProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
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
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
    MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
    MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Integer Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Integer Var_53;
    MR_Word Var_51;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(NewProcInfo0_15, &NewPredVarSet0_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(NewProcInfo0_15, &NewPredVarTypes0_17);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(NewProcInfo0_15, &NewHeadVars0_18);
    TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__delete_var_3_p_0(TypeCtorInfo_54_54, ResultVar0_10, NewPredVarSet0_16, &NewPredVarSet1_19);
    hlds__vartypes__delete_var_type_3_p_0(ResultVar0_10, NewPredVarTypes0_17, &NewPredVarTypes1_20);
    mercury__varset__new_named_var_4_p_0(TypeCtorInfo_54_54, Name_9, ResultVar_12, NewPredVarSet1_19, &NewPredVarSet_21);
    hlds__vartypes__add_var_type_4_p_0(*ResultVar_12, ResultType_11, NewPredVarTypes1_20, &NewPredVarTypes_22);
    TypeInfo_55_55 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    VarMapping_23 = mercury__map__singleton_2_f_0(TypeInfo_55_55, TypeInfo_55_55, ((MR_Box) (ResultVar0_10)), ((MR_Box) (*ResultVar_12)));
    {
      MapLambda_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), MapLambda_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), MapLambda_24, 3) = ((MR_Box) (ResultVar0_10));
      MR_hl_field(MR_mktag(0), MapLambda_24, 4) = ((MR_Box) (*ResultVar_12));
    }
    mercury__list__map_3_p_0(TypeInfo_55_55, TypeInfo_55_55, MapLambda_24, NewHeadVars0_18, &NewHeadVars_27);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_23, STATE_VARIABLE_Goal_0_33, STATE_VARIABLE_Goal_34);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(NewPredVarSet_21, NewProcInfo0_15, &NewProcInfo1_28);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(NewPredVarTypes_22, NewProcInfo1_28, &NewProcInfo2_29);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_27, NewProcInfo2_29, &NewProcInfo_30);
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
    Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
    Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_47,
  MR_Word * STATE_VARIABLE_NewPredInfo_48)
{
  {
    MR_Word TypeCtorInfo_169_169;
    MR_Word StmModuleName_22;
    MR_Word ExceptionModuleName_23;
    MR_Word AssignResult_24;
    MR_Word IsValidVar_25;
    MR_Word ValidTrueFunctor_26;
    MR_Word ValidFalseFunctor_27;
    MR_Word RollbackCons_28;
    MR_Word ConstRollbackGoal_29;
    MR_Word RollbackVar_30;
    MR_Word Goal_StmLock_Call_31;
    MR_Word Goal_StmUnLock_Call_32;
    MR_Word Goal_StmValidate_Call_33;
    MR_Word Goal_StmCommit_Call_34;
    MR_Word TypeInfoVar_35;
    MR_Word CreateTypeInfoGoals_36;
    MR_Word Goal_ExceptionThrow_Call_37;
    MR_Word Goal_ValidBranch_38;
    MR_Word Goal_InvalidBranch_39;
    MR_Word DisjGoal_40;
    MR_Word PostAtomicTopLevelList_41;
    MR_Word PostAtomicGoal0_42;
    MR_Word PostAtomicGoal_43;
    MR_Word TopLevelGoalList0_45;
    MR_Word TopLevelGoalList_46;
    MR_Word STATE_VARIABLE_NewPredInfo_49_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_NewPredInfo_52_52;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_NewPredInfo_56_56;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_NewPredInfo_66_66;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_NewPredInfo_75_75;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_NewPredInfo_84_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_NewPredInfo_106_106;
    MR_Word Var_108;
    MR_Word Var_114;
    MR_Word STATE_VARIABLE_NewPredInfo_115_115;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word STATE_VARIABLE_NewPredInfo_124_124;
    MR_Word Var_125;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word STATE_VARIABLE_NewPredInfo_143_143;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_151;

    StmModuleName_22 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    ExceptionModuleName_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    transform_hlds__stm_expand__construct_output_7_p_0(AtomicGoalVars_12, ResultType_14, ResultVar_15, StmInfo_20, &AssignResult_24, STATE_VARIABLE_NewPredInfo_0_47, &STATE_VARIABLE_NewPredInfo_49_49);
    Var_50 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_50, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[10]), &IsValidVar_25, STATE_VARIABLE_NewPredInfo_49_49, &STATE_VARIABLE_NewPredInfo_52_52);
    ValidTrueFunctor_26 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    ValidFalseFunctor_27 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    RollbackCons_28 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    Var_54 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(RollbackCons_28, Var_54, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[11]), &ConstRollbackGoal_29, &RollbackVar_30, STATE_VARIABLE_NewPredInfo_52_52, &STATE_VARIABLE_NewPredInfo_56_56);
    Var_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_65, &Goal_StmLock_Call_31, STATE_VARIABLE_NewPredInfo_56_56, &STATE_VARIABLE_NewPredInfo_66_66);
    Var_74 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_74, &Goal_StmUnLock_Call_32, STATE_VARIABLE_NewPredInfo_66_66, &STATE_VARIABLE_NewPredInfo_75_75);
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (IsValidVar_25));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (IsValidVar_25));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3])));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_92));
    }
    Var_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_87);
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_83, &Goal_StmValidate_Call_33, STATE_VARIABLE_NewPredInfo_75_75, &STATE_VARIABLE_NewPredInfo_84_84);
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (StmUO_17));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_105 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_108);
    transform_hlds__stm_expand__create_simple_call_12_p_0(StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_103, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_105, &Goal_StmCommit_Call_34, STATE_VARIABLE_NewPredInfo_84_84, &STATE_VARIABLE_NewPredInfo_106_106);
    Var_114 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__make_type_info_5_p_0(Var_114, &TypeInfoVar_35, &CreateTypeInfoGoals_36, STATE_VARIABLE_NewPredInfo_106_106, &STATE_VARIABLE_NewPredInfo_115_115);
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (RollbackVar_30));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (TypeInfoVar_35));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_125));
    }
    Var_123 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_121);
    transform_hlds__stm_expand__create_simple_call_12_p_0(ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, Var_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_123, &Goal_ExceptionThrow_Call_37, STATE_VARIABLE_NewPredInfo_115_115, &STATE_VARIABLE_NewPredInfo_124_124);
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Goal_StmUnLock_Call_32));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Goal_StmCommit_Call_34));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_130, &Goal_ValidBranch_38);
    TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ConstRollbackGoal_29));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Goal_StmUnLock_Call_32));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_37));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_137 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, CreateTypeInfoGoals_36, Var_138);
    Var_133 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, Var_134, Var_137);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_133, &Goal_InvalidBranch_39);
    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (ValidTrueFunctor_26));
      MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_144, 2) = ((MR_Box) (Goal_ValidBranch_38));
    }
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (ValidFalseFunctor_27));
      MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_147, 2) = ((MR_Box) (Goal_InvalidBranch_39));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_144));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_146));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(IsValidVar_25, Var_140, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_40, STATE_VARIABLE_NewPredInfo_124_124, &STATE_VARIABLE_NewPredInfo_143_143);
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (DisjGoal_40));
      MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Goal_StmValidate_Call_33));
      MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
    }
    {
      PostAtomicTopLevelList_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PostAtomicTopLevelList_41, 0) = ((MR_Box) (Goal_StmLock_Call_31));
      MR_hl_field(MR_mktag(1), PostAtomicTopLevelList_41, 1) = ((MR_Box) (Var_150));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(PostAtomicTopLevelList_41, &PostAtomicGoal0_42);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(PostAtomicGoal0_42, (MR_Integer) 0, &PostAtomicGoal_43);
    switch (CopySTM_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_154;
          MR_Word Var_156;
          MR_Word Var_157;

          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (PostAtomicGoal_43));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_156 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, AssignResult_24, Var_157);
          TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, Var_154, Var_156);
          *STATE_VARIABLE_NewPredInfo_48 = STATE_VARIABLE_NewPredInfo_143_143;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CopySTMAssign_44;
          MR_Word Var_159;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;

          Var_161 = parse_tree__prog_mode__uo_from_to_insts_0_f_0();
          Var_162 = parse_tree__prog_mode__di_from_to_insts_0_f_0();
          {
            Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Var_161));
            MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (Var_162));
          }
          transform_hlds__stm_expand__create_var_unify_6_p_0(StmUO_17, StmDI_16, Var_159, &CopySTMAssign_44, STATE_VARIABLE_NewPredInfo_143_143, STATE_VARIABLE_NewPredInfo_48);
          {
            Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (AtomicGoal_13));
            MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (PostAtomicGoal_43));
            MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (CopySTMAssign_44));
            MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_167));
          }
          Var_165 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, AssignResult_24, Var_166);
          TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_169_169, Var_163, Var_165);
        }
        break;
    }
    hlds__goal_util__flatten_conj_2_p_0(TopLevelGoalList0_45, &TopLevelGoalList_46);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_46, Goal_19);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
  MR_Word AtomicGoalVars_8,
  MR_Word ResultType_9,
  MR_Word ResultVar_10,
  MR_Word StmInfo_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * STATE_VARIABLE_NewPredInfo_27)
{
  {
    MR_Word TypeCtorInfo_17_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word TypeCtorInfo_17_84;
    MR_Word OutputVars_15;
    MR_Word OutputTypes_17;
    MR_Word InputSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0)));
    MR_Word OutputSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2)));
    MR_Word ProcInfo0_61;
    MR_Word VarTypes_62;
    MR_Word InputVars_63;
    MR_Word OutputVars_64;
    MR_Word InputSet_74;
    MR_Word OutputSet_75;
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 1)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 3)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 4)));
    MR_Word Var_14;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Integer Var_70;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_16;

    Var_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_56, InputSet_46);
    OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_56, OutputSet_47);
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 0)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 1)));
    Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 2)));
    ProcInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 3)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 4)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 5)));
    Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_11, (MR_Integer) 6)));
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_61, &VarTypes_62);
    InputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 1)));
    OutputSet_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 3)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 4)));
    TypeCtorInfo_17_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    InputVars_63 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_84, InputSet_74);
    OutputVars_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_84, OutputSet_75);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_62, InputVars_63, &Var_16);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_62, OutputVars_64, &OutputTypes_17);
    if ((OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Goal_18;
      MR_Word Var_36;

      Var_36 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
      hlds__make_goal__make_const_construction_3_p_0(ResultVar_10, Var_36, &Goal_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *STATE_VARIABLE_NewPredInfo_27 = STATE_VARIABLE_NewPredInfo_0_26;
    }
    else
    {
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 1)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 0)));

      if ((Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word OutVar_20;
        MR_Word Var_31;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Goal_38;
        MR_Box conv0_OutVar_20;

        conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], OutputVars_15);
        OutVar_20 = ((MR_Word) conv0_OutVar_20);
        Var_33 = parse_tree__prog_mode__out_from_to_insts_0_f_0();
        Var_34 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_34));
        }
        transform_hlds__stm_expand__create_var_unify_6_p_0(ResultVar_10, OutVar_20, Var_31, &Goal_38, STATE_VARIABLE_NewPredInfo_0_26, STATE_VARIABLE_NewPredInfo_27);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word MakeType_25;
        MR_Word Goal_39;
        MR_Word Var_24;

        transform_hlds__stm_expand__make_type_info_5_p_0(ResultType_9, &Var_24, &MakeType_25, STATE_VARIABLE_NewPredInfo_0_26, STATE_VARIABLE_NewPredInfo_27);
        hlds__make_goal__construct_tuple_3_p_0(ResultVar_10, OutputVars_15, &Goal_39);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MakeType_25));
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
    MR_Word ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSFromToInsts_17;
    MR_Word RHSFromToInsts_18;
    MR_Word InstmapDelta_19;
    MR_Word GoalExpr_20;
    MR_Word NonLocals_21;
    MR_Word GoalInfo_24;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
    MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
    MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyType_14, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(2), UnifyType_14, 1) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0)));
    RHSFromToInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1)));
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (RHSFromToInsts_18));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (LHSFromToInsts_17));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(ModuleInfo_13, Var_29, Var_30, &InstmapDelta_19);
    {
      GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_29, &NonLocals_21);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_21, InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, Context_12, &GoalInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
    }
    *STATE_VARIABLE_NewPredInfo_26 = STATE_VARIABLE_NewPredInfo_0_25;
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

    transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_NewPredVarSet_21, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_NewPredVarTypes_23, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_OldPredVarSet_25, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_OldPredVarTypes_27, ((MR_Word) wrapper_arg_10), &conv0_STATE_VARIABLE_VarMapping_29);
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
    MR_Word TypeInfo_75_75;
    MR_Word TypeInfo_87_87;
    MR_Word TypeInfo_88_88;
    MR_Word NewProcInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
    MR_Word OldProcInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
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
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
    MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
    MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
    MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
    MR_Integer Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
    MR_Word Var_23;
    MR_Word Var_25;
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
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Integer Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Integer Var_73;
    MR_Word Var_70;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(NewProcInfo0_17, &NewPredVarSet0_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(NewProcInfo0_17, &NewPredVarTypes0_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(OldProcInfo0_18, &OldPredVarSet0_21);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(OldProcInfo0_18, &OldPredVarTypes0_22);
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 0)));
    LocalVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 1)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 2)));
    OrigInnerDI_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 3)));
    OrigInnerUO_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_12, (MR_Integer) 4)));
    LocalVarList_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LocalVars_24);
    TypeInfo_75_75 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    VarMapping0_29 = mercury__map__init_0_f_0(TypeInfo_75_75, TypeInfo_75_75);
    TypeInfo_87_87 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[3];
    TypeInfo_88_88 = (MR_Word) &transform_hlds__stm_expand_scalar_common_2[0];
    mercury__list__foldl5_12_p_0(TypeInfo_75_75, TypeInfo_87_87, TypeInfo_88_88, TypeInfo_87_87, TypeInfo_88_88, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[7], LocalVarList_28, ((MR_Box) (NewPredVarSet0_19)), &conv9_NewPredVarSet_30, ((MR_Box) (NewPredVarTypes0_20)), &conv8_NewPredVarTypes_31, ((MR_Box) (OldPredVarSet0_21)), &conv7_OldPredVarSet_32, ((MR_Box) (OldPredVarTypes0_22)), &conv6_OldPredVarTypes_33, ((MR_Box) (VarMapping0_29)), &conv5_VarMapping1_34);
    NewPredVarSet_30 = ((MR_Word) conv9_NewPredVarSet_30);
    NewPredVarTypes_31 = ((MR_Word) conv8_NewPredVarTypes_31);
    OldPredVarSet_32 = ((MR_Word) conv7_OldPredVarSet_32);
    OldPredVarTypes_33 = ((MR_Word) conv6_OldPredVarTypes_33);
    VarMapping1_34 = ((MR_Word) conv5_VarMapping1_34);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (OrigInnerUO_27)));
    if (succeeded)
      mercury__map__det_insert_4_p_0(TypeInfo_75_75, TypeInfo_75_75, ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (InnerDI_13)), VarMapping1_34, &VarMapping_35);
    else
    {
      MR_Word VarMapping2_36;

      mercury__map__det_insert_4_p_0(TypeInfo_75_75, TypeInfo_75_75, ((MR_Box) (OrigInnerDI_26)), ((MR_Box) (InnerDI_13)), VarMapping1_34, &VarMapping2_36);
      mercury__map__det_insert_4_p_0(TypeInfo_75_75, TypeInfo_75_75, ((MR_Box) (OrigInnerUO_27)), ((MR_Box) (InnerUO_14)), VarMapping2_36, &VarMapping_35);
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_35, AtomicGoal0_10, AtomicGoal_11);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(NewPredVarSet_30, NewProcInfo0_17, &NewProcInfo1_37);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(NewPredVarTypes_31, NewProcInfo1_37, &NewProcInfo_38);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(OldPredVarSet_32, OldProcInfo0_18, &OldProcInfo1_39);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(OldPredVarTypes_33, OldProcInfo1_39, &OldProcInfo_40);
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
    Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
    Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NewPredInfo_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewProcInfo_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_66));
    }
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
    Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
    Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_StmInfo_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OldProcInfo_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
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

    transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__585__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
  MR_Word GoalList_3,
  MR_Word * GoalVar_4)
{
  {
    MR_Word TypeCtorInfo_24_24 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word InputVarList_8;
    MR_Word InputVars_9;
    MR_Word GoalVar0_10;
    MR_Box conv1_GoalVar0_10;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_19;

    mercury__list__map_3_p_0(TypeCtorInfo_24_24, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[6], GoalList_3, &InputVarList_8);
    InputVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, InputVarList_8);
    conv1_GoalVar0_10 = mercury__list__det_head_1_f_0(TypeCtorInfo_24_24, GoalList_3);
    GoalVar0_10 = ((MR_Word) conv1_GoalVar0_10);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 2)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 3)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalVar0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
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
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
  MR_Word AtomicGoalVars_11,
  MR_Word ReturnType_12,
  MR_Word StmVarDI_13,
  MR_Word StmVarUO_14,
  MR_Word WrapperID_15,
  MR_Word RecCall_16,
  MR_Word * Goal_17,
  MR_Word StmInfo_18,
  MR_Word STATE_VARIABLE_NewPredInfo_0_40,
  MR_Word * STATE_VARIABLE_NewPredInfo_41)
{
  {
    MR_Word InputVars_20;
    MR_Word InputTypes_22;
    MR_Word InputModes_24;
    MR_Word AtomicClosureVar_26;
    MR_Word ClosureAssign_27;
    MR_Word RttiTypeVar_28;
    MR_Word RttiTypeVarAssign_29;
    MR_Word Exception_Result_Type_30;
    MR_Word ExceptRes_Success_Functor_31;
    MR_Word ExceptRes_Failure_Functor_32;
    MR_Word ReturnExceptVar_33;
    MR_Word Goal_StmCreate_34;
    MR_Word Goal_TryStm_35;
    MR_Word Branch_AtomicSuccess_36;
    MR_Word Branch_AtomicException_37;
    MR_Word DisjGoal_38;
    MR_Word Goal0_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_NewPredInfo_44_44;
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
    MR_Word STATE_VARIABLE_NewPredInfo_58_58;
    MR_Word STATE_VARIABLE_NewPredInfo_60_60;
    MR_Word Var_62;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_NewPredInfo_71_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_79;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_NewPredInfo_88_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word STATE_VARIABLE_NewPredInfo_121_121;
    MR_Word STATE_VARIABLE_NewPredInfo_122_122;
    MR_Word Var_123;
    MR_Word Var_127;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_25;

    transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_11, &InputVars_20, &Var_21);
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_11, StmInfo_18, &InputTypes_22, &Var_23);
    transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_11, &InputModes_24, &Var_25);
    Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ReturnType_12));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, InputTypes_22, Var_45);
    Var_52 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_54 = parse_tree__prog_mode__di_mode_0_f_0();
    Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, InputModes_24, Var_51);
    transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_15, InputVars_20, Var_42, Var_43, &AtomicClosureVar_26, &ClosureAssign_27, STATE_VARIABLE_NewPredInfo_0_40, &STATE_VARIABLE_NewPredInfo_44_44);
    transform_hlds__stm_expand__make_type_info_5_p_0(ReturnType_12, &RttiTypeVar_28, &RttiTypeVarAssign_29, STATE_VARIABLE_NewPredInfo_44_44, &STATE_VARIABLE_NewPredInfo_58_58);
    Exception_Result_Type_30 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_12);
    ExceptRes_Success_Functor_31 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    ExceptRes_Failure_Functor_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Exception_Result_Type_30, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[8]), &ReturnExceptVar_33, STATE_VARIABLE_NewPredInfo_58_58, &STATE_VARIABLE_NewPredInfo_60_60);
    Var_62 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (StmVarDI_13));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_75 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (StmVarDI_13));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_73);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_62, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_70, &Goal_StmCreate_34, STATE_VARIABLE_NewPredInfo_60_60, &STATE_VARIABLE_NewPredInfo_71_71);
    Var_79 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (StmVarUO_14));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (StmVarDI_13));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (AtomicClosureVar_26));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (RttiTypeVar_28));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_90));
    }
    Var_97 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]);
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (RttiTypeVar_28));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (AtomicClosureVar_26));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (ReturnExceptVar_33));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (StmVarDI_13));
      MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
    }
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (StmVarUO_14));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_100));
    }
    Var_87 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_95);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_79, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[9]), (MR_Integer) 4, (MR_Integer) 0, Var_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_87, &Goal_TryStm_35, STATE_VARIABLE_NewPredInfo_71_71, &STATE_VARIABLE_NewPredInfo_88_88);
    transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_11, ReturnType_12, ReturnExceptVar_33, &Branch_AtomicSuccess_36, StmInfo_18, STATE_VARIABLE_NewPredInfo_88_88, &STATE_VARIABLE_NewPredInfo_121_121);
    transform_hlds__stm_expand__create_test_on_exception_7_p_0(ReturnExceptVar_33, StmVarUO_14, ReturnType_12, RecCall_16, &Branch_AtomicException_37, STATE_VARIABLE_NewPredInfo_121_121, &STATE_VARIABLE_NewPredInfo_122_122);
    {
      Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (ExceptRes_Failure_Functor_32));
      MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (Branch_AtomicException_37));
    }
    {
      Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (ExceptRes_Success_Functor_31));
      MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) (Branch_AtomicSuccess_36));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_129));
    }
    transform_hlds__stm_expand__create_switch_disjunction_7_p_0(ReturnExceptVar_33, Var_123, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_38, STATE_VARIABLE_NewPredInfo_122_122, STATE_VARIABLE_NewPredInfo_41);
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Goal_StmCreate_34));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (RttiTypeVarAssign_29));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (DisjGoal_38));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Goal_TryStm_35));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ClosureAssign_27));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_136));
    }
    Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Var_134, Var_135);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_133, &Goal0_39);
    transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(Goal0_39, (MR_Integer) 0, Goal_17);
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

    transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2638__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__3_20);
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

    transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2637__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_14);
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
    MR_Word TypeInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeCtorInfo_17_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word InputVars_7;
    MR_Word OutputVars_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word InputSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 0)));
    MR_Word OutputSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 1)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 4)));

    InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_36, InputSet_26);
    OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_36, OutputSet_27);
    Var_10 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Var_10));
    }
    TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    mercury__list__map_3_p_0(TypeInfo_17_17, TypeCtorInfo_18_18, Var_9, InputVars_7, InputModes_5);
    Var_12 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_12));
    }
    mercury__list__map_3_p_0(TypeInfo_17_17, TypeCtorInfo_18_18, Var_11, OutputVars_8, OutputModes_6);
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
    MR_Word TypeCtorInfo_17_32;
    MR_Word ProcInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 3)));
    MR_Word VarTypes_10;
    MR_Word InputVars_11;
    MR_Word OutputVars_12;
    MR_Word InputSet_22;
    MR_Word OutputSet_23;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 1)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 5)));
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_6, (MR_Integer) 6)));
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_9, &VarTypes_10);
    InputSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 0)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 1)));
    OutputSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 2)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 3)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_5, (MR_Integer) 4)));
    TypeCtorInfo_17_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_32, InputSet_22);
    OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_32, OutputSet_23);
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
    MR_Word TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word InputSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 0)));
    MR_Word OutputSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 3)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmGoalVars_4, (MR_Integer) 4)));

    *Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_17, InputSet_7);
    *Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_17, OutputSet_8);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word GoalIn_4,
  MR_Word ScopePurity_5,
  MR_Word * GoalOut_6)
{
  {
    MR_Word GoalInInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalIn_4, (MR_Integer) 1)));
    MR_Word NonLocals_9;
    MR_Word InstMapDelta_10;
    MR_Word Detism_11;
    MR_Word Context_13;
    MR_Word GoalInfo_14;
    MR_Word Reason_15;
    MR_Word GoalOutExpr_16;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalIn_4, (MR_Integer) 0)));

    NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInInfo_8);
    InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInInfo_8);
    Detism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInInfo_8);
    Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInInfo_8);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_9, InstMapDelta_10, Detism_11, ScopePurity_5, Context_13, &GoalInfo_14);
    {
      Reason_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Reason_15, 1) = ((MR_Box) (ScopePurity_5));
    }
    {
      GoalOutExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 1) = ((MR_Box) (Reason_15));
      MR_hl_field(MR_mktag(3), GoalOutExpr_16, 2) = ((MR_Box) (GoalIn_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
      ClosureCons_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 1) = ((MR_Box) (ShroudPredProcID_16));
      MR_hl_field(MR_mktag(3), ClosureCons_18, 2) = NULL;
    }
    transform_hlds__stm_expand__create_aux_variable_5_p_0(ClosureType_17, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[7]), ClosureVar_13, STATE_VARIABLE_NewPredInfo_0_25, STATE_VARIABLE_NewPredInfo_26);
    hlds__make_goal__construct_functor_4_p_0(*ClosureVar_13, ClosureCons_18, Args_10, &ClosureAssignGoal0_19);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (*ClosureVar_13));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ArgModes_12));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_39);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_33, Var_35);
    ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ClosureAssignInstmapDeltaList_20);
    ClosureAssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureAssignGoal0_19, (MR_Integer) 0)));
    ClosureAssignInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureAssignGoal0_19, (MR_Integer) 1)));
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ClosureAssignInstmapDelta_21, ClosureAssignInfo0_23, &ClosureAssignInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word TypeCtorInfo_17_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word TypeCtorInfo_17_95;
    MR_Word OutputVars_15;
    MR_Word OutputTypes_17;
    MR_Word InputSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0)));
    MR_Word OutputSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2)));
    MR_Word ProcInfo0_72;
    MR_Word VarTypes_73;
    MR_Word InputVars_74;
    MR_Word OutputVars_75;
    MR_Word InputSet_85;
    MR_Word OutputSet_86;
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 1)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 3)));
    MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 4)));
    MR_Word Var_14;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Integer Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Integer Var_81;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_16;

    Var_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_67, InputSet_57);
    OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_67, OutputSet_58);
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 0)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 1)));
    Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 2)));
    ProcInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 3)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 4)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 5)));
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), StmInfo_12, (MR_Integer) 6)));
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_72, &VarTypes_73);
    InputSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 0)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 1)));
    OutputSet_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 2)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 3)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), AtomicGoalVars_8, (MR_Integer) 4)));
    TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    InputVars_74 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_95, InputSet_85);
    OutputVars_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_17_95, OutputSet_86);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_73, InputVars_74, &Var_16);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_73, OutputVars_75, &OutputTypes_17);
    if ((OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word SuccessResultVar_18;
      MR_Word Var_47;
      MR_Word Var_48;

      transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[5]), &SuccessResultVar_18, STATE_VARIABLE_NewPredInfo_0_28, STATE_VARIABLE_NewPredInfo_29);
      Var_47 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SuccessResultVar_18));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_47, Var_48, Goal_11);
    }
    else
    {
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 1)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputTypes_17, (MR_Integer) 0)));

      if ((Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word OutVar_20;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Box conv0_OutVar_20;

        conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], OutputVars_15);
        OutVar_20 = ((MR_Word) conv0_OutVar_20);
        Var_41 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (OutVar_20));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[6]), &SuccessResultVar_50, STATE_VARIABLE_NewPredInfo_31_31, STATE_VARIABLE_NewPredInfo_29);
        Var_35 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (SuccessResultVar_50));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_35, Var_36, &DeconstructGoal_26);
        hlds__make_goal__deconstruct_tuple_3_p_0(SuccessResultVar_50, OutputVars_15, &UnifyOutputGoal_27);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (UnifyOutputGoal_27));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MakeType_25));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
    MR_Word ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 0)));
    MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 1)));
    MR_Integer ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 2)));
    MR_Word PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 3)));
    MR_Word ProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 4)));
    MR_Word Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 5)));
    MR_Integer VarCnt_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NewPredInfo0_9, (MR_Integer) 6)));
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
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__stm_expand__make_type_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (PolySpecs_20));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_24, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
transform_hlds__stm_expand__create_test_on_exception_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
  MR_Word ExceptVar_8,
  MR_Word StmVar_9,
  MR_Word ReturnType_10,
  MR_Word RecCall_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_24,
  MR_Word * STATE_VARIABLE_NewPredInfo_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_67_67;
    MR_Word ExceptUnivVar_14;
    MR_Word DeconstructException_15;
    MR_Word TypeInfoRollbackVar_16;
    MR_Word TypeInfoRollbackAssign_17;
    MR_Word DropStateGoal_18;
    MR_Word TrueGoal_19;
    MR_Word RethrowBranch_20;
    MR_Word RetryBranch_21;
    MR_Word FalseGoal_22;
    MR_Word IfThenElseGoal_23;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_NewPredInfo_28_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word Var_35;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_NewPredInfo_55_55;
    MR_Word STATE_VARIABLE_NewPredInfo_56_56;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_NewPredInfo_58_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word ModuleInfo0_73;
    MR_Word PredId_74;
    MR_Integer ProcId_75;
    MR_Word PredInfo0_76;
    MR_Word ProcInfo0_77;
    MR_Word Context_78;
    MR_Integer VarCnt_79;
    MR_Word PolyInfo0_80;
    MR_Word PolyInfo_81;
    MR_Word PolySpecs_82;
    MR_Word PredInfo_83;
    MR_Word ProcInfo_84;
    MR_Word ModuleInfo_85;
    MR_Word Var_86;

    Var_26 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_26, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[4]), &ExceptUnivVar_14, STATE_VARIABLE_NewPredInfo_0_24, &STATE_VARIABLE_NewPredInfo_28_28);
    Var_30 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ExceptUnivVar_14));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ExceptVar_8, Var_30, Var_31, &DeconstructException_15);
    Var_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 0)));
    PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 1)));
    ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 2)));
    PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 3)));
    ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 4)));
    Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 5)));
    VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 6)));
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_73, PredInfo0_76, ProcInfo0_77, &PolyInfo0_80);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Var_33, Context_78, &TypeInfoRollbackVar_16, &TypeInfoRollbackAssign_17, PolyInfo0_80, &PolyInfo_81);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_81, &PolySpecs_82, PredInfo0_76, &PredInfo_83, ProcInfo0_77, &ProcInfo_84, &ModuleInfo_85);
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__stm_expand__create_test_on_exception_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (PolySpecs_82));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_86, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 0) = ((MR_Box) (ModuleInfo_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 1) = ((MR_Box) (PredId_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 2) = ((MR_Box) (ProcId_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 3) = ((MR_Box) (PredInfo_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 4) = ((MR_Box) (ProcInfo_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 5) = ((MR_Box) (Context_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_34_34, 6) = ((MR_Box) (VarCnt_79));
    }
    Var_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (StmVar_9));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (StmVar_9));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_46);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_35, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_43, &DropStateGoal_18, STATE_VARIABLE_NewPredInfo_34_34, &STATE_VARIABLE_NewPredInfo_44_44);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (RecCall_11));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (DropStateGoal_18));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_52, &TrueGoal_19);
    transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(StmVar_9, ExceptVar_8, ReturnType_10, RecCall_11, &RethrowBranch_20, STATE_VARIABLE_NewPredInfo_44_44, &STATE_VARIABLE_NewPredInfo_55_55);
    transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(StmVar_9, RecCall_11, &RetryBranch_21, STATE_VARIABLE_NewPredInfo_55_55, &STATE_VARIABLE_NewPredInfo_56_56);
    Var_57 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(TypeInfoRollbackVar_16, ExceptUnivVar_14, Var_57, RetryBranch_21, RethrowBranch_20, &FalseGoal_22, STATE_VARIABLE_NewPredInfo_56_56, &STATE_VARIABLE_NewPredInfo_58_58);
    Var_59 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(TypeInfoRollbackVar_16, ExceptUnivVar_14, Var_59, TrueGoal_19, FalseGoal_22, &IfThenElseGoal_23, STATE_VARIABLE_NewPredInfo_58_58, STATE_VARIABLE_NewPredInfo_25);
    TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (DeconstructException_15));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (IfThenElseGoal_23));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_64 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_67_67, TypeInfoRollbackAssign_17, Var_65);
    Var_61 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_67_67, Var_62, Var_64);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_61, Goal_12);
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
    MR_Word Var_77;
    MR_Integer Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Integer Var_81;

    Var_16 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (StmVar_6));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(StmVar_6);
    ModuleInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 0)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 1)));
    Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 2)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 3)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 4)));
    Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 5)));
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 6)));
    hlds__goal_util__generate_simple_call_12_p_0(Var_16, (MR_String) "stm_block", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_24, ModuleInfo_75, Context_74, &BlockGoal_10);
    Var_27 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_35 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_27, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_35, &UnlockGoal_11, STATE_VARIABLE_NewPredInfo_0_14, &STATE_VARIABLE_NewPredInfo_36_36);
    transform_hlds__stm_expand__template_lock_and_validate_7_p_0(StmVar_6, (MR_Integer) 0, BlockGoal_10, UnlockGoal_11, &LockAndValidateGoals_12, STATE_VARIABLE_NewPredInfo_36_36, &STATE_VARIABLE_NewPredInfo_38_38);
    Var_39 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (StmVar_6));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_50);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_47, &DropStateCall_13, STATE_VARIABLE_NewPredInfo_38_38, STATE_VARIABLE_NewPredInfo_15);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (RecCall_7));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (DropStateCall_13));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, LockAndValidateGoals_12, Var_57);
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

    succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
    MR_Word ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 0)));
    MR_Word PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 1)));
    MR_Integer ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 2)));
    MR_Word PredInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 3)));
    MR_Word ProcInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 4)));
    MR_Word Context_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 5)));
    MR_Integer VarCnt_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 6)));
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
      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (PolySpecs_79));
      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_83, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    {
      STATE_VARIABLE_NewPredInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ExceptionVar_9));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TypeInfoVar_14));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_34));
    }
    Var_32 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_30);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_24, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, Var_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_32, &Goal_ExceptionThrow_Call_16, STATE_VARIABLE_NewPredInfo_23_23, &STATE_VARIABLE_NewPredInfo_33_33);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_16));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, CreateTypeInfoGoals_15, Var_40);
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_39, &Goal_ValidBranch_17);
    Var_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_50 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_53);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_50, &DropStateCall_18, STATE_VARIABLE_NewPredInfo_33_33, &STATE_VARIABLE_NewPredInfo_51_51);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (RecursiveCall_11));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[3]), &IsValidVar_14, STATE_VARIABLE_NewPredInfo_0_19, &STATE_VARIABLE_NewPredInfo_23_23);
    Var_25 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    Var_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_25, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_33, &LockCall_15, STATE_VARIABLE_NewPredInfo_23_23, &STATE_VARIABLE_NewPredInfo_34_34);
    Var_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (IsValidVar_14));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (StmVar_8));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (IsValidVar_14));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_52));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_47);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_35, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_43, &ValidCall_16, STATE_VARIABLE_NewPredInfo_34_34, &STATE_VARIABLE_NewPredInfo_44_44);
    Var_61 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (ValidGoal_10));
    }
    Var_65 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (InvalidGoal_11));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (DisjGoal_17));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ValidCall_16));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          transform_hlds__stm_expand__create_simple_call_12_p_0(Var_71, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_79, &UnlockCall_18, STATE_VARIABLE_NewPredInfo_59_59, STATE_VARIABLE_NewPredInfo_20);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DisjGoal_17));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (UnlockCall_18));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ValidCall_16));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 5)));
    MR_Word NonLocals_15;
    MR_Word InstMapDelta_16;
    MR_Word OutGoalExpr_17;
    MR_Word GoalInfo_18;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 1)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 3)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 4)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 6)));

    NonLocals_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_16);
    {
      OutGoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 1) = ((MR_Box) (ProgVar_8));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), OutGoalExpr_17, 3) = ((MR_Box) (Cases_9));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_16, Detism_10, Purity_11, Context_14, &GoalInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *OutGoal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutGoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
    }
    *STATE_VARIABLE_NewPredInfo_20 = STATE_VARIABLE_NewPredInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
  MR_Word RttiVar_9,
  MR_Word ExceptVar_10,
  MR_Word RollbackExceptCons_11,
  MR_Word TrueGoal_12,
  MR_Word FalseGoal_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_Word UnivPayloadVar_16;
    MR_Word AssignGoal_17;
    MR_Word RollbackExceptVar_18;
    MR_Word UnivCall_19;
    MR_Word TestGoal_21;
    MR_Word CondGoal_22;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_NewPredInfo_29_29;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word Var_35;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_NewPredInfo_72_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_NewPredInfo_77_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word _UnifyCall_20;

    Var_27 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_27, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[0]), &UnivPayloadVar_16, STATE_VARIABLE_NewPredInfo_0_25, &STATE_VARIABLE_NewPredInfo_29_29);
    Var_31 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(RollbackExceptCons_11, Var_31, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[1]), &AssignGoal_17, &RollbackExceptVar_18, STATE_VARIABLE_NewPredInfo_29_29, &STATE_VARIABLE_NewPredInfo_33_33);
    Var_35 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ExceptVar_10));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (UnivPayloadVar_16));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (RttiVar_9));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_46));
    }
    Var_51 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[3]);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (RttiVar_9));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (ExceptVar_10));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (UnivPayloadVar_16));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_54));
    }
    Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_49);
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_35, (MR_String) "type_to_univ", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_5[2]), (MR_Integer) 1, (MR_Integer) 0, Var_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_43, &UnivCall_19, STATE_VARIABLE_NewPredInfo_33_33, &STATE_VARIABLE_NewPredInfo_44_44);
    Var_63 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (UnivPayloadVar_16));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (RollbackExceptVar_18));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (RttiVar_9));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_73));
    }
    Var_71 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__stm_expand__create_simple_call_12_p_0(Var_63, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, Var_69, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_71, &_UnifyCall_20, STATE_VARIABLE_NewPredInfo_44_44, &STATE_VARIABLE_NewPredInfo_72_72);
    Var_78 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
    Var_79 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_79));
    }
    transform_hlds__stm_expand__create_var_test_6_p_0(UnivPayloadVar_16, RollbackExceptVar_18, Var_76, &TestGoal_21, STATE_VARIABLE_NewPredInfo_72_72, &STATE_VARIABLE_NewPredInfo_77_77);
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (TestGoal_21));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (UnivCall_19));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (AssignGoal_17));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_80, &CondGoal_22);
    transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CondGoal_22, TrueGoal_12, FalseGoal_13, (MR_Integer) 0, (MR_Integer) 2, Goal_14, STATE_VARIABLE_NewPredInfo_77_77, STATE_VARIABLE_NewPredInfo_26);
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
    MR_Word Var_15;

    {
      ConjGoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConjGoalExpr_6, 2) = ((MR_Box) (GoalsInConj_3));
    }
    hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalsInConj_3, &NonLocals_7);
    hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalsInConj_3, &InstMapDelta_8);
    hlds__hlds_goal__goal_list_determinism_2_p_0(GoalsInConj_3, &Detism_9);
    hlds__hlds_goal__goal_list_purity_2_p_0(GoalsInConj_3, &Purity_10);
    conv0_Var_14 = mercury__list__det_head_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, GoalsInConj_3);
    Var_14 = ((MR_Word) conv0_Var_14);
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    GoalAInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalAInfo_11);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, InstMapDelta_8, Detism_9, Purity_10, Context_12, &ConjGoalInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 5)));
    MR_Word OutGoalExpr_19;
    MR_Word NonLocals_20;
    MR_Word InstMapDelta_21;
    MR_Word GoalInfo_22;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 1)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 4)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 6)));

    {
      OutGoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 1) = ((MR_Box) (ExistVars_10));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 2) = ((MR_Box) (Cond_11));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 3) = ((MR_Box) (Then_12));
      MR_hl_field(MR_mktag(3), OutGoalExpr_19, 4) = ((MR_Box) (Else_13));
    }
    NonLocals_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_21);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_20, InstMapDelta_21, Detism_14, Purity_15, Context_18, &GoalInfo_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 5)));
    MR_Word ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 1)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 2)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 4)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 6)));

    hlds__goal_util__generate_simple_call_12_p_0(ModuleName_13, ProcName_14, PredOrFunc_15, Mode_16, Detism_17, Purity_18, ProgVars_19, GoalFeatures_20, InstmapDelta_21, ModuleInfo_25, Context_24, Goal_22);
    *STATE_VARIABLE_NewPredInfo_27 = STATE_VARIABLE_NewPredInfo_0_26;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
    MR_Word ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
    MR_Word UnifyType_14;
    MR_Word UnifyRHS_15;
    MR_Word LHSFromToInsts_17;
    MR_Word RHSFromToInsts_18;
    MR_Word InstmapDelta_19;
    MR_Word GoalExpr_20;
    MR_Word NonLocals_21;
    MR_Word GoalInfo_24;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
    MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
    MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

    {
      UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnifyType_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), UnifyType_14, 1) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(3), UnifyType_14, 2) = ((MR_Box) (VarRHS_8));
    }
    {
      UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyRHS_15, 0) = ((MR_Box) (VarRHS_8));
    }
    LHSFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0)));
    RHSFromToInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1)));
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (VarRHS_8));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (RHSFromToInsts_18));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (LHSFromToInsts_17));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(ModuleInfo_13, Var_29, Var_30, &InstmapDelta_19);
    {
      GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 0) = ((MR_Box) (VarLHS_7));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 1) = ((MR_Box) (UnifyRHS_15));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 2) = ((MR_Box) (UnifyMode_9));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 3) = ((MR_Box) (UnifyType_14));
      MR_hl_field(MR_mktag(1), GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_29, &NonLocals_21);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_21, InstmapDelta_19, (MR_Integer) 1, (MR_Integer) 0, Context_12, &GoalInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
    }
    *STATE_VARIABLE_NewPredInfo_26 = STATE_VARIABLE_NewPredInfo_0_25;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
  MR_Word Cons_8,
  MR_Word Type_9,
  MR_Word MaybeName_10,
  MR_Word * Goal_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_15)
{
  {
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Type_9, MaybeName_10, Var_12, STATE_VARIABLE_NewPredInfo_0_14, STATE_VARIABLE_NewPredInfo_15);
    hlds__make_goal__make_const_construction_3_p_0(*Var_12, Cons_8, Goal_11);
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
    MR_Word ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    MR_Integer Cnt0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    MR_Word MaybeName_12;
    MR_Word ProcInfo_14;
    MR_Integer Cnt_15;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    MR_Word Var_41;
    MR_Integer Var_43;

    if ((MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeName_12 = MaybeName0_7;
    else
    {
      MR_String Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeName0_7, (MR_Integer) 0)));
      MR_String Var_18;
      MR_String Var_19;
      MR_String Var_21;

      Var_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (Cnt0_11)));
      Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", Var_21);
      Var_18 = mercury__string__f_43_43_2_f_0(Name_13, Var_19);
      {
        MaybeName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeName_12, 0) = ((MR_Box) (Var_18));
      }
    }
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Type_6, MaybeName_12, Var_8, ProcInfo0_10, &ProcInfo_14);
    Cnt_15 = (Cnt0_11 + (MR_Integer) 1);
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word Var_29;

    succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1)));
      GoalList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 2)));
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (succeeded)
      if ((GoalList0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "empty conjunction");
          return;
        }
      }
      else
      {
        MR_Word TypeInfo_41_41;
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
        TypeInfo_41_41 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[2];
        conv0_MaybeInDI_20 = mercury__pair__fst_1_f_0(TypeInfo_41_41, TypeInfo_41_41, MaybeInVarPair_19);
        MaybeInDI_20 = ((MR_Word) conv0_MaybeInDI_20);
        conv1_MaybeInUO_21 = mercury__pair__snd_1_f_0(TypeInfo_41_41, TypeInfo_41_41, MaybeInVarPair_19);
        MaybeInUO_21 = ((MR_Word) conv1_MaybeInUO_21);
        conv2_MaybeOutDI_22 = mercury__pair__fst_1_f_0(TypeInfo_41_41, TypeInfo_41_41, MaybeOutVarPair_18);
        MaybeOutDI_22 = ((MR_Word) conv2_MaybeOutDI_22);
        conv3_MaybeOutUO_23 = mercury__pair__snd_1_f_0(TypeInfo_41_41, TypeInfo_41_41, MaybeOutVarPair_18);
        MaybeOutUO_23 = ((MR_Word) conv3_MaybeOutUO_23);
        succeeded = ((MR_tag((MR_Word) MaybeInDI_20)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          StmInDI0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInDI_20, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeInUO_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            StmInUO0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInUO_21, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) MaybeOutDI_22)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              StmOutDI0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOutDI_22, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) MaybeOutUO_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                StmOutUO0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOutUO_23, (MR_Integer) 0)));
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
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (GoalList_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "Vars not extracted");
            return;
          }
        }
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "atomic_goal not a conj");
        return;
      }
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__3_3 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[5];
      *HeadVar__4_4 = *HeadVar__3_3;
    }
    else
    {
      MR_Word HeadGoal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TailGoals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
      MR_Word Var_22;
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
      MR_Word Var_23;
      MR_Integer Var_24;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_25;

      transform_hlds__stm_expand__remove_tail_4_p_0(TailGoals0_10, &TailGoals_16, &Var_35, &Var_36);
      MaybeOutDI0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0)));
      MaybeOutUO0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1)));
      MaybeInDI0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
      MaybeInUO0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1)));
      HeadGoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_9, (MR_Integer) 0)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal0_9, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) HeadGoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 0)));
        Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 1)));
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 2)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 3)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 4)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 5)));
        succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0)));
          Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            X_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              V_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
              succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                Var_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                Var_54 = (MR_String) "stm_from_outer_to_inner";
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          MaybeInDI_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeInDI_14, 0) = ((MR_Box) (V_27));
        }
        MaybeInUO_15 = MaybeInUO0_20;
        {
          MaybeOutDI_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
        MR_Word Var_30;
        MR_Integer Var_31;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_32;

        succeeded = ((MR_tag((MR_Word) HeadGoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 0)));
          Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 1)));
          Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 2)));
          Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 3)));
          Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 4)));
          Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadGoalExpr0_21, (MR_Integer) 5)));
          succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              V_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
              Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                X_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
                Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
                succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  Var_55 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                  Var_56 = (MR_String) "stm_from_inner_to_outer";
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
            MaybeInUO_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeInUO_15, 0) = ((MR_Box) (V_48));
          }
          MaybeOutDI_12 = MaybeOutDI0_17;
          {
            MaybeOutUO_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOutUO_13, 0) = ((MR_Box) (X_47));
          }
          *HeadVar__2_2 = TailGoals_16;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeOutDI_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeOutUO_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_bool succeeded = (Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (InnerDIs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (InnerUOs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *StmGoalVarList_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

      succeeded = ((MR_tag((MR_Word) Goals_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_12, (MR_Integer) 0)));
        TailGoals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_12, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) InnerDIs_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadInnerDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerDIs_13, (MR_Integer) 0)));
          TailInnerDIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerDIs_13, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) InnerUOs_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadInnerUO_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerUOs_14, (MR_Integer) 0)));
            TailInnerUOs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerUOs_14, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_44_69;
        MR_Word IgnoreVarList_24;
        MR_Word StmGoalVar_25;
        MR_Word StmGoalVarList0_26;
        MR_Word Var_29;
        MR_Word ModuleInfo_45;
        MR_Word GoalVars0_46;
        MR_Word GoalVars_47;
        MR_Word GoalVarList_48;
        MR_Word GoalInfo_50;
        MR_Word GoalNonLocalSet0_51;
        MR_Word GoalNonLocalSet_52;
        MR_Word GoalNonLocals_53;
        MR_Word LocalVarsList_54;
        MR_Word InputVarsList_55;
        MR_Word OutputVarsList_59;
        MR_Word LocalVars_60;
        MR_Word InputVars_61;
        MR_Word OutputVars_62;
        MR_Word Var_63;
        MR_Integer Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Integer Var_68;
        MR_Word Var_49;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word _InputVarsList_58;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (HeadInnerUO_22));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (IgnoreVarList0_15));
        }
        {
          IgnoreVarList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IgnoreVarList_24, 0) = ((MR_Box) (HeadInnerDI_20));
          MR_hl_field(MR_mktag(1), IgnoreVarList_24, 1) = ((MR_Box) (Var_29));
        }
        ModuleInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 0)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 1)));
        Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 2)));
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 3)));
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 4)));
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 5)));
        Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 6)));
        hlds__goal_util__goal_vars_2_p_0(HeadGoal_18, &GoalVars0_46);
        TypeCtorInfo_44_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__delete_list_3_p_0(TypeCtorInfo_44_69, IgnoreVarList_24, GoalVars0_46, &GoalVars_47);
        GoalVarList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_44_69, GoalVars_47);
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_18, (MR_Integer) 0)));
        GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_18, (MR_Integer) 1)));
        GoalNonLocalSet0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_50);
        parse_tree__set_of_var__delete_list_3_p_0(TypeCtorInfo_44_69, IgnoreVarList_24, GoalNonLocalSet0_51, &GoalNonLocalSet_52);
        GoalNonLocals_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_44_69, GoalNonLocalSet_52);
        transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_45, GoalVarList_48, InitInstmap_10, FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &LocalVarsList_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &InputVarsList_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_56);
        transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_45, GoalNonLocals_53, InitInstmap_10, FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &_InputVarsList_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &OutputVarsList_59);
        LocalVars_60 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_44_69, LocalVarsList_54);
        InputVars_61 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_44_69, InputVarsList_55);
        OutputVars_62 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_44_69, OutputVarsList_59);
        {
          StmGoalVar_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 0) = ((MR_Box) (InputVars_61));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 1) = ((MR_Box) (LocalVars_60));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 2) = ((MR_Box) (OutputVars_62));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 3) = ((MR_Box) (HeadInnerDI_20));
          MR_hl_field(MR_mktag(0), StmGoalVar_25, 4) = ((MR_Box) (HeadInnerUO_22));
        }
        transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(InitInstmap_10, FinalInstmap_11, TailGoals_19, TailInnerDIs_21, TailInnerUOs_23, IgnoreVarList_24, &StmGoalVarList0_26, STATE_VARIABLE_StmInfo_0_27, STATE_VARIABLE_StmInfo_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *StmGoalVarList_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmGoalVar_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StmGoalVarList0_26));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/9", (MR_String) "lengths mismatch");
          return;
        }
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

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word InitVarInst_31;
      MR_Word FinalVarInst_32;
      MR_Word STATE_VARIABLE_LocalVars_39_39;
      MR_Word STATE_VARIABLE_OutputVars_40_40;
      MR_Word STATE_VARIABLE_InputVars_41_41;

      hlds__instmap__instmap_lookup_var_3_p_0(InitInstmap_3, Var_24, &InitVarInst_31);
      hlds__instmap__instmap_lookup_var_3_p_0(FinalInstmap_4, Var_24, &FinalVarInst_32);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitVarInst_31);
      if (succeeded)
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, FinalVarInst_32);
      if (succeeded)
      {
        {
          STATE_VARIABLE_LocalVars_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
            STATE_VARIABLE_OutputVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
              STATE_VARIABLE_InputVars_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InputVars_41_41, 0) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_InputVars_41_41, 1) = ((MR_Box) (HeadVar__7_7));
            }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
              return;
            }
          }
          STATE_VARIABLE_OutputVars_40_40 = HeadVar__9_9;
        }
        STATE_VARIABLE_LocalVars_39_39 = HeadVar__5_5;
      }
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__2_2 = Vars_25;
        MR_Word next_value_of_HeadVar__5_5 = STATE_VARIABLE_LocalVars_39_39;
        MR_Word next_value_of_HeadVar__7_7 = STATE_VARIABLE_InputVars_41_41;
        MR_Word next_value_of_HeadVar__9_9 = STATE_VARIABLE_OutputVars_40_40;

        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        HeadVar__9_9 = next_value_of_HeadVar__9_9;
      }
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

    transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_20);
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
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_9);
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

    transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_9);
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
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[2], PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_8_8);
    STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_8_8);
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

    succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    transform_hlds__stm_expand____Compare____stm_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

/* :- end_module transform_hlds.stm_expand. */
