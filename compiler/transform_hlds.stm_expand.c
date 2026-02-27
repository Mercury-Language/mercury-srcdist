/*
** Automatically generated from `stm_expand.m'
** by the Mercury compiler,
** version rotd-2026-02-27
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
#include "counter.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
#include "hlds.goal_util.mih"
#include "hlds.goal_vars.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2645__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2644__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2142__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1846__1_4_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1031__1_5_p_0(
  MR_Word IsValidConstVar_17,
  MR_Word LambdaHeadVar__1_81,
  MR_Word * LambdaHeadVar__2_82,
  MR_Word LambdaHeadVar__3_83,
  MR_Word * LambdaHeadVar__4_84);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1015__1_5_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52,
  MR_Word * LambdaHeadVar__3_53,
  MR_Word LambdaHeadVar__4_54,
  MR_Word * LambdaHeadVar__5_55);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__605__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(
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
transform_hlds__stm_expand__apply_varset_to_preds_6_p_0(
  MR_Word OldPredVarTable_7,
  MR_Word ProgVar_8,
  MR_Word STATE_VARIABLE_NewPredVarTable_0_17,
  MR_Word * STATE_VARIABLE_NewPredVarTable_18,
  MR_Word STATE_VARIABLE_VarMapping_0_19,
  MR_Word * STATE_VARIABLE_VarMapping_20);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

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
  MR_Word STATE_VARIABLE_Info_0_100,
  MR_Word * STATE_VARIABLE_Info_101);

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
  MR_Word STATE_VARIABLE_StmInfo_0_29,
  MR_Word * STATE_VARIABLE_StmInfo_30);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_StmInfo_0_59,
  MR_Word * STATE_VARIABLE_StmInfo_60);

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
transform_hlds__stm_expand__create_var_unify_stm_5_p_0(
  MR_Word StmInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_StmInfo_0_15,
  MR_Word * STATE_VARIABLE_StmInfo_16);

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
  MR_Word STATE_VARIABLE_StmInfo_0_32,
  MR_Word * STATE_VARIABLE_StmInfo_33);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word Types_3,
  MR_Word * ReturnType_4);

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
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1860__1_6_p_0(
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_34,
  MR_Word * STATE_VARIABLE_NewPredInfo_35);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_52,
  MR_Word * STATE_VARIABLE_NewPredInfo_53);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word ResultType_10,
  MR_Word ResultVar0_11,
  MR_Word AtomicGoal_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_17,
  MR_Word * STATE_VARIABLE_StmInfo_18);

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word NewPredInfo0_3,
  MR_Word * PredProcId_4);

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_13,
  MR_Word * STATE_VARIABLE_NewPredInfo_14);

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
  MR_Word CloneKind_14,
  MR_Word OrigGoal_15,
  MR_Word MaybeDetism_16,
  MR_Word * NewStmPredInfo_17,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_67,
  MR_Word * STATE_VARIABLE_StmInfo_68);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_51,
  MR_Word * STATE_VARIABLE_NewPredInfo_52);

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
transform_hlds__stm_expand__create_var_unify_5_p_0(
  MR_Word NewPredInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word AtomicGoal0_10,
  MR_Word * AtomicGoal_11,
  MR_Word AtomicGoalVars_12,
  MR_Word InnerDI_13,
  MR_Word InnerUO_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_34,
  MR_Word * STATE_VARIABLE_NewPredInfo_35,
  MR_Word STATE_VARIABLE_StmInfo_0_36,
  MR_Word * STATE_VARIABLE_StmInfo_37);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_43,
  MR_Word * STATE_VARIABLE_NewPredInfo_44);

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
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word Type_6,
  MR_Word * TypeInfoVar_7,
  MR_Word * Goals_8,
  MR_Word NewPredInfo0_9,
  MR_Word * NewPredInfo_10);

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
  MR_Word STATE_VARIABLE_NewPredInfo_0_20,
  MR_Word * STATE_VARIABLE_NewPredInfo_21);

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_6_p_0(
  MR_Word NewPredInfo_7,
  MR_Word ProgVar_8,
  MR_Word Cases_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word * OutGoal_12);

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(
  MR_Word Context_10,
  MR_Word TypeInfoVar_11,
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
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word NewPredInfo_13,
  MR_Word ModuleName_14,
  MR_String ProcName_15,
  MR_Word PredOrFunc_16,
  MR_Word TIArgVars_17,
  MR_Word NonTIArgVars_18,
  MR_Word InstmapDelta_19,
  MR_Word Mode_20,
  MR_Word Detism_21,
  MR_Word Purity_22,
  MR_Word GoalFeatures_23,
  MR_Word * Goal_24);

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_5_p_0(
  MR_Word NewPredInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_17,
  MR_Word * STATE_VARIABLE_NewPredInfo_18);

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
transform_hlds__stm_expand__calc_pred_variables_list_8_p_0(
  MR_Word StmInfo_9,
  MR_Word InitInstmap_10,
  MR_Word FinalInstmap_11,
  MR_Word Goals_12,
  MR_Word InnerDIs_13,
  MR_Word InnerUOs_14,
  MR_Word IgnoreVarList0_15,
  MR_Word * StmGoalVarList_16);

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


static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[28][1];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[3][7];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[2][9];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][5];




static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "--temp-context--")),
    ((MR_Box) ((MR_Integer) 999))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__stm_expand__stm_process_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__stm_expand__create_or_else_end_branch_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_2_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_top_level_pred_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[28][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "res")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "UnivPayload")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "RollbackExcpt")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "ValidResult")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "IsValidConst")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "ExceptUnivVar")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "ExceptionResult")) },
  /* row   8 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "ResultVar")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "STM0")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "STM")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "NewUO")) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "Stm_Expand_IsValid")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "Stm_Expand_Rollback")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) "STMDI")) },
  /* row  16 */
  { ((MR_Box) ((MR_String) "STMUO")) },
  /* row  17 */
  { ((MR_Box) ((MR_String) "InnSTM")) },
  /* row  18 */
  { ((MR_Box) ((MR_String) "InterSTM")) },
  /* row  19 */
  { ((MR_Box) ((MR_String) "RetryCons")) },
  /* row  20 */
  { ((MR_Box) ((MR_String) "RollbackCons")) },
  /* row  21 */
  { ((MR_Box) ((MR_String) "InnerSTM0")) },
  /* row  22 */
  { ((MR_Box) ((MR_String) "ExcptRes")) },
  /* row  23 */
  { ((MR_Box) ((MR_String) "BoringResult")) },
  /* row  24 */
  { ((MR_Box) ((MR_String) "SuccessResult")) },
  /* row  25 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row  26 */
  { ((MR_Box) ((MR_String) "Closure")) },
  /* row  27 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
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

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8] = {
  /* row   0 */
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
  /* row   1 */
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

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  (MR_String) "vars_inner_di",
  (MR_String) "vars_inner_uo"
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

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 };

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 };

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_goal_vars",
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0 },
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0,

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

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 };

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 };

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_info",
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0 },
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
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

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 };

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1] = { &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 };

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_new_pred_info",
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0 },
  { transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0,

};

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2645__1_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_19,
  MR_Word * HeadVar__3_20)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_12, HeadVar__3_20);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_12,
  MR_Word * HeadVar__3_20)
{
  *HeadVar__3_20 = HeadVar__1_12;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2644__1_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word HeadVar__2_13,
  MR_Word * HeadVar__3_14)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_10, HeadVar__3_14);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_10,
  MR_Word * HeadVar__3_14)
{
  *HeadVar__3_14 = HeadVar__1_10;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2142__1_4_p_0(
  MR_Word ResultVar0_10,
  MR_Word ResultVar_12,
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_34)), ((MR_Box) (ResultVar0_10)));
  if (succeeded)
    *LambdaHeadVar__2_35 = ResultVar_12;
  else
    *LambdaHeadVar__2_35 = LambdaHeadVar__1_34;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1846__1_4_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46)
{
  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(LambdaHeadVar__2_44, LambdaHeadVar__3_45, LambdaHeadVar__4_46);
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_52_54_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45,
  MR_Word * LambdaHeadVar__4_46)
{
  MR_Word Var_47;

  Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_47, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[18])), LambdaHeadVar__2_44, LambdaHeadVar__3_45, LambdaHeadVar__4_46);
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1031__1_5_p_0(
  MR_Word IsValidConstVar_17,
  MR_Word LambdaHeadVar__1_81,
  MR_Word * LambdaHeadVar__2_82,
  MR_Word LambdaHeadVar__3_83,
  MR_Word * LambdaHeadVar__4_84)
{
  MR_Word Var_85;
  MR_Word Context_90;
  MR_Word ModuleInfo_91;
  MR_Word UnifyType_92;
  MR_Word UnifyRHS_93;
  MR_Word LHSInitInst_95;
  MR_Word LHSFinalInst_96;
  MR_Word RHSInitInst_97;
  MR_Word RHSFinalInst_98;
  MR_Word LHSTuple_99;
  MR_Word RHSTuple_100;
  MR_Word InstmapDelta_101;
  MR_Word GoalExpr_102;
  MR_Word NonLocals_103;
  MR_Word GoalInfo_106;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;

  LHSInitInst_95 = parse_tree__prog_mode__ground_inst_0_f_0();
  LHSFinalInst_96 = parse_tree__prog_mode__ground_inst_0_f_0();
  RHSInitInst_97 = parse_tree__prog_mode__ground_inst_0_f_0();
  RHSFinalInst_98 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (LHSInitInst_95));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) (LHSFinalInst_96));
    MR_hl_field(0, Var_85, 2) = ((MR_Box) (RHSInitInst_97));
    MR_hl_field(0, Var_85, 3) = ((MR_Box) (RHSFinalInst_98));
  }
  ModuleInfo_91 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_83, 0))));
  Context_90 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_83, 5))));
  {
    UnifyType_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, UnifyType_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, UnifyType_92, 1) = ((MR_Box) (LambdaHeadVar__1_81));
    MR_hl_field(3, UnifyType_92, 2) = ((MR_Box) (IsValidConstVar_17));
  }
  {
    UnifyRHS_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyRHS_93, 0) = ((MR_Box) (IsValidConstVar_17));
  }
  {
    LHSTuple_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTuple_99, 0) = ((MR_Box) (LambdaHeadVar__1_81));
    MR_hl_field(0, LHSTuple_99, 1) = ((MR_Box) (LHSInitInst_95));
    MR_hl_field(0, LHSTuple_99, 2) = ((MR_Box) (LHSFinalInst_96));
  }
  {
    RHSTuple_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTuple_100, 0) = ((MR_Box) (IsValidConstVar_17));
    MR_hl_field(0, RHSTuple_100, 1) = ((MR_Box) (RHSInitInst_97));
    MR_hl_field(0, RHSTuple_100, 2) = ((MR_Box) (RHSFinalInst_98));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (RHSTuple_100));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (LHSTuple_99));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_91, Var_109, &InstmapDelta_101);
  {
    GoalExpr_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_102, 0) = ((MR_Box) (LambdaHeadVar__1_81));
    MR_hl_field(1, GoalExpr_102, 1) = ((MR_Box) (UnifyRHS_93));
    MR_hl_field(1, GoalExpr_102, 2) = ((MR_Box) (Var_85));
    MR_hl_field(1, GoalExpr_102, 3) = ((MR_Box) (UnifyType_92));
    MR_hl_field(1, GoalExpr_102, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[7]));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (IsValidConstVar_17));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (LambdaHeadVar__1_81));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_113));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_112, &NonLocals_103);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_103, InstmapDelta_101, (MR_Integer) 1, (MR_Integer) 0, Context_90, &GoalInfo_106);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_82 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_102));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_106));
  }
  *LambdaHeadVar__4_84 = LambdaHeadVar__3_83;
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1015__1_5_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52,
  MR_Word * LambdaHeadVar__3_53,
  MR_Word LambdaHeadVar__4_54,
  MR_Word * LambdaHeadVar__5_55)
{
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Context_79;
  MR_Word ModuleInfo_80;

  Var_56 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_56, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[4])), LambdaHeadVar__3_53, LambdaHeadVar__4_54, LambdaHeadVar__5_55);
  Var_59 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (*LambdaHeadVar__3_53));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (LambdaHeadVar__1_51));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (LambdaHeadVar__1_51));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (*LambdaHeadVar__3_53));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_76));
  }
  Var_64 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_71);
  ModuleInfo_80 = ((MR_Word) ((MR_hl_field(0, *LambdaHeadVar__5_55, 0))));
  Context_79 = ((MR_Word) ((MR_hl_field(0, *LambdaHeadVar__5_55, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_80, (MR_Integer) 0, Var_59, (MR_String) "stm_validate", (MR_Word) ((MR_Unsigned) 0U), Var_63, Var_64, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_79, LambdaHeadVar__2_52);
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__605__1_3_p_0(
  MR_Word GoalVar_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, GoalVar_4, 0))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, 1))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, 2))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, 3))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  *LambdaHeadVar__2_12 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, 0))));
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
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

              mercury__term_context____Compare____term_context_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
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

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));

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
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX6_13, ArgY6_14);
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

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 5))) & (MR_Integer) 1);
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
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

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));

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

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
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

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

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

static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_6_p_0(
  MR_Word OldPredVarTable_7,
  MR_Word ProgVar_8,
  MR_Word STATE_VARIABLE_NewPredVarTable_0_17,
  MR_Word * STATE_VARIABLE_NewPredVarTable_18,
  MR_Word STATE_VARIABLE_VarMapping_0_19,
  MR_Word * STATE_VARIABLE_VarMapping_20)
{
  MR_Word ProgVarEntry_11;
  MR_Word ProgVarType_13;
  MR_Word ProgVarIsDummy_14;
  MR_Word NewProgVarEntry_15;
  MR_Word NewProgVar_16;

  parse_tree__var_table__lookup_var_entry_3_p_0(OldPredVarTable_7, ProgVar_8, &ProgVarEntry_11);
  ProgVarType_13 = ((MR_Word) ((MR_hl_field(0, ProgVarEntry_11, 1))));
  ProgVarIsDummy_14 = ((MR_Unsigned) ((MR_hl_field(0, ProgVarEntry_11, 2))) & (MR_Integer) 1);
  {
    NewProgVarEntry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewProgVarEntry_15, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, NewProgVarEntry_15, 1) = ((MR_Box) (ProgVarType_13));
    MR_hl_field(0, NewProgVarEntry_15, 2) = (MR_Box) ((MR_Unsigned) (ProgVarIsDummy_14));
  }
  parse_tree__var_table__add_var_entry_4_p_0(NewProgVarEntry_15, &NewProgVar_16, STATE_VARIABLE_NewPredVarTable_0_17, STATE_VARIABLE_NewPredVarTable_18);
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (ProgVar_8)), ((MR_Box) (NewProgVar_16)), STATE_VARIABLE_VarMapping_0_19, STATE_VARIABLE_VarMapping_20);
}

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__copy_input_vars_in_goallist__605__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
}

static void MR_CALL 
transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0(
  MR_Word GoalVar_4,
  MR_Word STATE_VARIABLE_GoalList_0_9,
  MR_Word * STATE_VARIABLE_GoalList_10)
{
  MR_Word CopyInputVarLambda_6;

  {
    CopyInputVarLambda_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CopyInputVarLambda_6, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2]));
    MR_hl_field(0, CopyInputVarLambda_6, 1) = ((MR_Box) (transform_hlds__stm_expand__copy_input_vars_in_goallist_3_p_0_1));
    MR_hl_field(0, CopyInputVarLambda_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, CopyInputVarLambda_6, 3) = ((MR_Box) (GoalVar_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), CopyInputVarLambda_6, STATE_VARIABLE_GoalList_0_9, STATE_VARIABLE_GoalList_10);
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word PredInfo0_8;
  MR_Word ProcTable0_9;
  MR_Word ProcInfo0_10;
  MR_Word ProcInfo_11;
  MR_Word PredInfo1_12;
  MR_Word ProcTable1_13;
  MR_Word ProcTable_14;
  MR_Word PredInfo_15;
  MR_Word STATE_VARIABLE_ModuleInfo_1_18;
  MR_Word Goal0_21;
  MR_Word InitInstmap_22;
  MR_Word StmInfo0_23;
  MR_Word Goal_24;
  MR_Word StmInfo_25;
  MR_Word RecalcInfo_28;
  MR_Word STATE_VARIABLE_ModuleInfo_1_32;
  MR_Word STATE_VARIABLE_ProcInfo_1_33;
  MR_Word STATE_VARIABLE_ProcInfo_2_34;
  MR_Box conv0_ProcInfo0_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_5, &PredInfo0_8);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcTable0_9);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_9, ((MR_Box) (ProcId_6)), &conv0_ProcInfo0_10);
  ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_21);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, ProcInfo0_10, &InitInstmap_22);
  {
    StmInfo0_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StmInfo0_23, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
    MR_hl_field(0, StmInfo0_23, 1) = ((MR_Box) (PredId_5));
    MR_hl_field(0, StmInfo0_23, 2) = ((MR_Box) (ProcId_6));
    MR_hl_field(0, StmInfo0_23, 3) = ((MR_Box) (ProcInfo0_10));
    MR_hl_field(0, StmInfo0_23, 4) = ((MR_Box) (PredInfo0_8));
    MR_hl_field(0, StmInfo0_23, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, StmInfo0_23, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  transform_hlds__stm_expand__stm_process_goal_5_p_0(InitInstmap_22, Goal0_21, &Goal_24, StmInfo0_23, &StmInfo_25);
  STATE_VARIABLE_ModuleInfo_1_32 = ((MR_Word) ((MR_hl_field(0, StmInfo_25, 0))));
  STATE_VARIABLE_ProcInfo_1_33 = ((MR_Word) ((MR_hl_field(0, StmInfo_25, 3))));
  PredInfo1_12 = ((MR_Word) ((MR_hl_field(0, StmInfo_25, 4))));
  RecalcInfo_28 = ((MR_Unsigned) ((MR_hl_field(0, StmInfo_25, 5))) & (MR_Integer) 1);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_24, STATE_VARIABLE_ProcInfo_1_33, &STATE_VARIABLE_ProcInfo_2_34);
  switch (RecalcInfo_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ProcInfo_11 = STATE_VARIABLE_ProcInfo_2_34;
        STATE_VARIABLE_ModuleInfo_1_18 = STATE_VARIABLE_ModuleInfo_1_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ProcInfo_3_36;

        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_2_34, &STATE_VARIABLE_ProcInfo_3_36);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_3_36, &ProcInfo_11, STATE_VARIABLE_ModuleInfo_1_32, &STATE_VARIABLE_ModuleInfo_1_18);
      }
      break;
  }
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_12, &ProcTable1_13);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_11)), ProcTable1_13, &ProcTable_14);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_14, PredInfo1_12, &PredInfo_15);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_5, PredInfo_15, STATE_VARIABLE_ModuleInfo_1_18, STATE_VARIABLE_ModuleInfo_17);
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
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_11, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_11, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_11, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_1_22;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(HeadVar__1_1, Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_22);
    transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(HeadVar__1_1, Cases0_12, &Cases_14, STATE_VARIABLE_Info_1_22, STATE_VARIABLE_Info_5);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_13, 2) = ((MR_Box) (Goal_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_14));
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
  MR_Word CondInfo_19;
  MR_Word CondInstmapDelta_20;
  MR_Word InstmapAfterCond_21;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_25;

  transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_10, Cond0_11, Cond_14, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_24);
  CondInfo_19 = ((MR_Word) ((MR_hl_field(0, Cond0_11, 1))));
  CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_19);
  hlds__instmap__apply_instmap_delta_3_p_0(CondInstmapDelta_20, Instmap0_10, &InstmapAfterCond_21);
  transform_hlds__stm_expand__stm_process_goal_5_p_0(InstmapAfterCond_21, Then0_12, Then_15, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_25);
  transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_10, Else0_13, Else_16, STATE_VARIABLE_Info_2_25, STATE_VARIABLE_Info_23);
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, GoalList0_7, 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, GoalList0_7, 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_1_16;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_10, &Goal_12, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_1_16);
    transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_11, &Goals_13, STATE_VARIABLE_Info_1_16, STATE_VARIABLE_Info_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalList_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, GoalList0_7, 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, GoalList0_7, 1))));
    MR_Word InstmapDelta_12;
    MR_Word GoalInfo_13;
    MR_Word Goal_14;
    MR_Word Instmap_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Info_1_20;

    transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap0_6, Goal0_10, &Goal_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_1_20);
    GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal0_10, 1))));
    InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_12, Instmap0_6, &Instmap_16);
    transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_16, Goals0_11, &Goals_17, STATE_VARIABLE_Info_1_20, STATE_VARIABLE_Info_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalList_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_100,
  MR_Word * STATE_VARIABLE_Info_101)
{
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word SubGoal_24;
        MR_Word GoalExpr_120;

        transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
        GoalExpr_120 = (MR_Word) ((MR_Word) (SubGoal_24));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_120));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_8 = Goal0_7;
        *STATE_VARIABLE_Info_101 = STATE_VARIABLE_Info_0_100;
      }
      break;
    case (MR_Integer) 2:
      {
        *Goal_8 = Goal0_7;
        *STATE_VARIABLE_Info_101 = STATE_VARIABLE_Info_0_100;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_8 = Goal0_7;
            *STATE_VARIABLE_Info_101 = STATE_VARIABLE_Info_0_100;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Conjuncts_19;
            MR_Word GoalExpr_20;

            transform_hlds__stm_expand__stm_process_conj_5_p_0(Instmap_6, Conjuncts0_18, &Conjuncts_19, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
              MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Conjuncts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Disjuncts_22;
            MR_Word GoalExpr_119;

            transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Disjuncts0_21, &Disjuncts_22, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            {
              GoalExpr_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_119, 1) = ((MR_Box) (Disjuncts_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_119));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_26 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_28;
            MR_Word GoalExpr_121;

            transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(Instmap_6, Cases0_27, &Cases_28, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            {
              GoalExpr_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_121, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_121, 1) = ((MR_Box) (Var_25));
              MR_hl_field(3, GoalExpr_121, 2) = (MR_Box) ((MR_Unsigned) (CanFail_26));
              MR_hl_field(3, GoalExpr_121, 3) = ((MR_Box) (Cases_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_121));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word InnerGoal0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));

            switch (MR_tag((MR_Word) Reason_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word GoalExpr_125;
                  MR_Word InnerGoal_126;

                  transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_126, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
                  {
                    GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (Reason_29));
                    MR_hl_field(3, GoalExpr_125, 2) = ((MR_Box) (InnerGoal_126));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_125));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_29, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word GoalExpr_125;
                      MR_Word InnerGoal_126;

                      transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_126, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
                      {
                        GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_125, 2) = ((MR_Box) (InnerGoal_126));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_125));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
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
                      MR_Word FGT_32 = ((MR_Unsigned) ((MR_hl_field(3, Reason_29, 2))) & (MR_Integer) 3);

                      switch (FGT_32) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            *Goal_8 = Goal0_7;
                            *STATE_VARIABLE_Info_101 = STATE_VARIABLE_Info_0_100;
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
                            MR_Word GoalExpr_122;

                            transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_33, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
                            {
                              GoalExpr_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_122, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, GoalExpr_122, 1) = ((MR_Box) (Reason_29));
                              MR_hl_field(3, GoalExpr_122, 2) = ((MR_Box) (InnerGoal_33));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              *Goal_8 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_122));
                              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
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
            MR_Word Vars_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Cond_59;
            MR_Word Then_60;
            MR_Word Else_61;
            MR_Word GoalExpr_129;

            transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(Instmap_6, Cond0_56, Then0_57, Else0_58, &Cond_59, &Then_60, &Else_61, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            {
              GoalExpr_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_129, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_129, 1) = ((MR_Box) (Vars_55));
              MR_hl_field(3, GoalExpr_129, 2) = ((MR_Box) (Cond_59));
              MR_hl_field(3, GoalExpr_129, 3) = ((MR_Box) (Then_60));
              MR_hl_field(3, GoalExpr_129, 4) = ((MR_Box) (Else_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_129));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));

            switch (MR_tag((MR_Word) ShortHand0_80)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_81 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_80, 0))) & (MR_Integer) 3);
                  MR_Word Outer_82 = ((MR_Word) ((MR_hl_field(1, ShortHand0_80, 1))));
                  MR_Word GoalDisj_89;
                  MR_Word MainGoal_90;
                  MR_Word OrElseGoals_91;
                  MR_Word InstmapDelta_92;
                  MR_Word FinalInstmap_93;
                  MR_Word Context_94;
                  MR_Word STATE_VARIABLE_Info_8_113;
                  MR_Word Goal0_131 = ((MR_Word) ((MR_hl_field(1, ShortHand0_80, 4))));
                  MR_Word Goals0_132 = ((MR_Word) ((MR_hl_field(1, ShortHand0_80, 5))));
                  MR_Word Goal_133;
                  MR_Word Goals_134;
                  MR_Word STATE_VARIABLE_Info_1_135;
                  MR_Box conv0_MainGoal_90;

                  transform_hlds__stm_expand__stm_process_goal_5_p_0(Instmap_6, Goal0_131, &Goal_133, STATE_VARIABLE_Info_0_100, &STATE_VARIABLE_Info_1_135);
                  transform_hlds__stm_expand__stm_process_disj_5_p_0(Instmap_6, Goals0_132, &Goals_134, STATE_VARIABLE_Info_1_135, &STATE_VARIABLE_Info_8_113);
                  {
                    GoalDisj_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, GoalDisj_89, 0) = ((MR_Box) (Goal_133));
                    MR_hl_field(1, GoalDisj_89, 1) = ((MR_Box) (Goals_134));
                  }
                  conv0_MainGoal_90 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalDisj_89);
                  MainGoal_90 = ((MR_Word) (conv0_MainGoal_90));
                  OrElseGoals_91 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalDisj_89);
                  InstmapDelta_92 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
                  hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_92, Instmap_6, &FinalInstmap_93);
                  Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                  transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_54_93_95_48_11_p_0(Context_94, GoalType_81, Instmap_6, FinalInstmap_93, Outer_82, MainGoal_90, OrElseGoals_91, Goal_8, STATE_VARIABLE_Info_8_113, STATE_VARIABLE_Info_101);
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
  MR_Word STATE_VARIABLE_StmInfo_0_29,
  MR_Word * STATE_VARIABLE_StmInfo_30)
{
  MR_Word OuterDI_22 = ((MR_Word) ((MR_hl_field(0, Outer_16, 0))));
  MR_Word OuterUO_23 = ((MR_Word) ((MR_hl_field(0, Outer_16, 1))));
  MR_Word STATE_VARIABLE_StmInfo_1_31;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Integer Var_53;

  switch (GoalType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0(Context_12, InitInstmap_14, FinalInstmap_15, OuterDI_22, OuterUO_23, MainGoal_18, OrElseGoals_19, FinalGoal_20, STATE_VARIABLE_StmInfo_0_29, &STATE_VARIABLE_StmInfo_1_31);
      break;
    case (MR_Integer) 1:
      {
        MR_Word AtomicGoal_54;
        MR_Word MainInnerDI_57;
        MR_Word MainInnerUO_58;
        MR_Word OrElseGoals_59;
        MR_Word OrElseInnerDIs_62;
        MR_Word OrElseInnerUOs_63;
        MR_Word AtomicGoalVarList_64;
        MR_Word AtomicGoalInfo_66;
        MR_Word Context_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_60;
        MR_Word Var_61;

        transform_hlds__stm_expand__strip_goal_calls_6_p_0(MainGoal_18, &AtomicGoal_54, &Var_55, &Var_56, &MainInnerDI_57, &MainInnerUO_58);
        mercury__list__map5_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[10]), OrElseGoals_19, &OrElseGoals_59, &Var_60, &Var_61, &OrElseInnerDIs_62, &OrElseInnerUOs_63);
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (MainGoal_18));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (OrElseGoals_19));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (MainInnerDI_57));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (OrElseInnerDIs_62));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (MainInnerUO_58));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (OrElseInnerUOs_63));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (OuterUO_23));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (OuterDI_22));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
        }
        transform_hlds__stm_expand__calc_pred_variables_list_8_p_0(STATE_VARIABLE_StmInfo_0_29, InitInstmap_14, FinalInstmap_15, Var_69, Var_70, Var_71, Var_72, &AtomicGoalVarList_64);
        AtomicGoalInfo_66 = ((MR_Word) ((MR_hl_field(0, AtomicGoal_54, 1))));
        Context_67 = hlds__hlds_goal__goal_info_get_context_1_f_0(AtomicGoalInfo_66);
        transform_hlds__stm_expand__create_top_level_pred_9_p_0(Context_67, AtomicGoalVarList_64, OuterDI_22, OuterUO_23, AtomicGoal_54, OrElseGoals_59, FinalGoal_20, STATE_VARIABLE_StmInfo_0_29, &STATE_VARIABLE_StmInfo_1_31);
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/11", (MR_String) "unknown atomic goal type");
        return;
      }
      break;
  }
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 1))));
  Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 4))));
  Var_53 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_1_31, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_StmInfo_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_53));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_54_44_32_55_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_12));
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
  MR_Word STATE_VARIABLE_StmInfo_0_59,
  MR_Word * STATE_VARIABLE_StmInfo_60)
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
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_30;
  MR_Word Var_31;

  transform_hlds__stm_expand__strip_goal_calls_6_p_0(AtomicGoal0_20, &AtomicGoal_24, &MainOuterDI_25, &MainOuterUO_26, &MainInnerDI_27, &MainInnerUO_28);
  mercury__list__map5_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[8]), OrElseGoals0_21, &OrElseGoals_29, &Var_30, &Var_31, &OrElseInnerDIs_32, &OrElseInnerUOs_33);
  Var_63 = parse_tree__prog_mode__unique_inst_0_f_0();
  Var_64 = parse_tree__prog_mode__unique_inst_0_f_0();
  Var_65 = parse_tree__prog_mode__clobbered_inst_0_f_0();
  {
    UnifyModeUoDi_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyModeUoDi_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyModeUoDi_34, 1) = ((MR_Box) (Var_63));
    MR_hl_field(0, UnifyModeUoDi_34, 2) = ((MR_Box) (Var_64));
    MR_hl_field(0, UnifyModeUoDi_34, 3) = ((MR_Box) (Var_65));
  }
  if ((OrElseGoals_29 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CopyDIVars_35;
    MR_Word CopyUOVars_36;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;

    transform_hlds__stm_expand__create_var_unify_stm_5_p_0(STATE_VARIABLE_StmInfo_0_59, MainInnerDI_27, MainOuterDI_25, UnifyModeUoDi_34, &CopyDIVars_35);
    transform_hlds__stm_expand__create_var_unify_stm_5_p_0(STATE_VARIABLE_StmInfo_0_59, MainOuterUO_26, MainInnerUO_28, UnifyModeUoDi_34, &CopyUOVars_36);
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (CopyUOVars_36));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (AtomicGoal_24));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (CopyDIVars_35));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_66, Goal_22);
    *STATE_VARIABLE_StmInfo_60 = STATE_VARIABLE_StmInfo_0_59;
  }
  else
  {
    MR_Word GoalList_40;
    MR_Word AtomicGoalVars_41;
    MR_Word AtomicGoalVarList1_42;
    MR_Word OutputTypes_47;
    MR_Word ResultType_48;
    MR_Word ResultVar_49;
    MR_Word PPIDList_57;
    MR_Word OrElseCall_58;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_StmInfo_1_100;
    MR_Word STATE_VARIABLE_StmInfo_2_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word CopyDIVars_118;
    MR_Word CopyUOVars_119;
    MR_Word InputVarList_151;
    MR_Word InputVars_152;
    MR_Word GoalVar0_153;
    MR_Box conv6_GoalVar0_153;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_46;

    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (AtomicGoal0_20));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (OrElseGoals0_21));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MainInnerDI_27));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (OrElseInnerDIs_32));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (MainInnerUO_28));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (OrElseInnerUOs_33));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (OuterUO_17));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (OuterDI_16));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
    }
    transform_hlds__stm_expand__calc_pred_variables_list_8_p_0(STATE_VARIABLE_StmInfo_0_59, InitInstmap_14, FinalInstmap_15, Var_70, Var_71, Var_72, Var_73, &AtomicGoalVarList1_42);
    {
      GoalList_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_40, 0) = ((MR_Box) (AtomicGoal_24));
      MR_hl_field(1, GoalList_40, 1) = ((MR_Box) (OrElseGoals_29));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[9]), AtomicGoalVarList1_42, &InputVarList_151);
    InputVars_152 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_151);
    conv6_GoalVar0_153 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList1_42);
    GoalVar0_153 = ((MR_Word) (conv6_GoalVar0_153));
    Var_155 = ((MR_Word) ((MR_hl_field(0, GoalVar0_153, 1))));
    Var_156 = ((MR_Word) ((MR_hl_field(0, GoalVar0_153, 2))));
    Var_157 = ((MR_Word) ((MR_hl_field(0, GoalVar0_153, 3))));
    Var_158 = ((MR_Word) ((MR_hl_field(0, GoalVar0_153, 4))));
    {
      AtomicGoalVars_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AtomicGoalVars_41, 0) = ((MR_Box) (InputVars_152));
      MR_hl_field(0, AtomicGoalVars_41, 1) = ((MR_Box) (Var_155));
      MR_hl_field(0, AtomicGoalVars_41, 2) = ((MR_Box) (Var_156));
      MR_hl_field(0, AtomicGoalVars_41, 3) = ((MR_Box) (Var_157));
      MR_hl_field(0, AtomicGoalVars_41, 4) = ((MR_Box) (Var_158));
    }
    transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_41, STATE_VARIABLE_StmInfo_0_59, &Var_46, &OutputTypes_47);
    if ((OutputTypes_47 == (MR_Word) ((MR_Unsigned) 0U)))
      ResultType_48 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
    else
    {
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(1, OutputTypes_47, 1))));
      MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, OutputTypes_47, 0))));

      if ((Var_168 == (MR_Word) ((MR_Unsigned) 0U)))
        ResultType_48 = Var_169;
      else
        {
          ResultType_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ResultType_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ResultType_48, 1) = ((MR_Box) (OutputTypes_47));
          MR_hl_field(3, ResultType_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
    }
    transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(ResultType_48, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[0])), &ResultVar_49, STATE_VARIABLE_StmInfo_0_59, &STATE_VARIABLE_StmInfo_1_100);
    transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(Context_13, ResultType_48, ResultVar_49, GoalList_40, AtomicGoalVarList1_42, &PPIDList_57, STATE_VARIABLE_StmInfo_1_100, &STATE_VARIABLE_StmInfo_2_107);
    transform_hlds__stm_expand__create_or_else_pred_9_p_0(Context_13, AtomicGoalVars_41, AtomicGoalVarList1_42, PPIDList_57, MainInnerDI_27, MainInnerUO_28, &OrElseCall_58, STATE_VARIABLE_StmInfo_2_107, STATE_VARIABLE_StmInfo_60);
    transform_hlds__stm_expand__create_var_unify_stm_5_p_0(*STATE_VARIABLE_StmInfo_60, MainInnerDI_27, MainOuterDI_25, UnifyModeUoDi_34, &CopyDIVars_118);
    transform_hlds__stm_expand__create_var_unify_stm_5_p_0(*STATE_VARIABLE_StmInfo_60, MainOuterUO_26, MainInnerUO_28, UnifyModeUoDi_34, &CopyUOVars_119);
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (CopyUOVars_119));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (OrElseCall_58));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) (CopyDIVars_118));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
    }
    transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_109, Goal_22);
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
      S_12 = ((MR_Word) ((MR_hl_field(1, Src1_8, 0))));
      Ss_13 = ((MR_Word) ((MR_hl_field(1, Src1_8, 1))));
      succeeded = (Src2_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        T_14 = ((MR_Word) ((MR_hl_field(1, Src2_9, 0))));
        Ts_15 = ((MR_Word) ((MR_hl_field(1, Src2_9, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word R_16;
      MR_Word Rs_17;
      MR_Word STATE_VARIABLE_Accum_1_20;
      MR_Word Var_31;

      transform_hlds__stm_expand__create_simple_wrapper_pred_9_p_0(Var_28, T_14, Var_29, Var_30, S_12, &R_16, &Var_31, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_1_20);
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(Var_28, Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_1_20, STATE_VARIABLE_Accum_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Dest_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (R_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Rs_17));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_5_p_0(
  MR_Word StmInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10)
{
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, StmInfo_6, 0))));
  MR_Word UnifyType_13;
  MR_Word UnifyRHS_14;
  MR_Word LHSInitInst_16;
  MR_Word LHSFinalInst_17;
  MR_Word RHSInitInst_18;
  MR_Word RHSFinalInst_19;
  MR_Word LHSTuple_20;
  MR_Word RHSTuple_21;
  MR_Word InstmapDelta_22;
  MR_Word GoalExpr_23;
  MR_Word NonLocals_24;
  MR_Word GoalInfo_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;

  {
    UnifyType_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, UnifyType_13, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(2, UnifyType_13, 1) = ((MR_Box) (VarRHS_8));
  }
  {
    UnifyRHS_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyRHS_14, 0) = ((MR_Box) (VarRHS_8));
  }
  LHSInitInst_16 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 0))));
  LHSFinalInst_17 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 1))));
  RHSInitInst_18 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 2))));
  RHSFinalInst_19 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 3))));
  {
    LHSTuple_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTuple_20, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(0, LHSTuple_20, 1) = ((MR_Box) (LHSInitInst_16));
    MR_hl_field(0, LHSTuple_20, 2) = ((MR_Box) (LHSFinalInst_17));
  }
  {
    RHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTuple_21, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(0, RHSTuple_21, 1) = ((MR_Box) (RHSInitInst_18));
    MR_hl_field(0, RHSTuple_21, 2) = ((MR_Box) (RHSFinalInst_19));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (RHSTuple_21));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (LHSTuple_20));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
  }
  hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_12, Var_32, &InstmapDelta_22);
  {
    GoalExpr_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_23, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, GoalExpr_23, 1) = ((MR_Box) (UnifyRHS_14));
    MR_hl_field(1, GoalExpr_23, 2) = ((MR_Box) (UnifyMode_9));
    MR_hl_field(1, GoalExpr_23, 3) = ((MR_Box) (UnifyType_13));
    MR_hl_field(1, GoalExpr_23, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[7]));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_36));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35, &NonLocals_24);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_24, InstmapDelta_22, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[8]), &GoalInfo_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_27));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_StmInfo_0_15,
  MR_Word * STATE_VARIABLE_StmInfo_16)
{
  MR_String Name_10;
  MR_Word IsDummy_12;
  MR_Word ProcInfo0_13;
  MR_Word ProcInfo_14;
  MR_Word Var_21;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Integer Var_36;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Integer Var_40;

  if ((MaybeName0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Name_10 = (MR_String) "";
  else
  {
    MR_String Name0_11 = ((MR_String) ((MR_hl_field(1, MaybeName0_7, 0))));

    Name_10 = mercury__string__f_43_43_2_f_0(Name0_11, (MR_String) "_Aux_STM");
  }
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 0))));
  IsDummy_12 = hlds__type_util__is_type_a_dummy_2_f_0(Var_21, Type_6);
  ProcInfo0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 3))));
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0(Name_10, Type_6, IsDummy_12, Var_8, ProcInfo0_13, &ProcInfo_14);
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 0))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 1))));
  Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 4))));
  Var_39 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 5))) & (MR_Integer) 1);
  Var_40 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_15, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_StmInfo_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcInfo_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_40));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
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
  MR_Word STATE_VARIABLE_StmInfo_0_32,
  MR_Word * STATE_VARIABLE_StmInfo_33)
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
  MR_Word TopLevelGoal_29;
  MR_Word NewPredInfo1_30;
  MR_Word NewPredInfo_31;
  MR_Word STATE_VARIABLE_StmInfo_1_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_StmInfo_2_40;
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
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word InputVarList_68;
  MR_Word GoalVar0_70;
  MR_Word InputSet_79;
  MR_Word OutputSet_80;
  MR_Word OrigPredId_91;
  MR_Integer OrigProcId_92;
  MR_Word OrigProcInfo_93;
  MR_Word OrigPredInfo_94;
  MR_Word StmExpanded_95;
  MR_Integer ExpandNum_96;
  MR_Word PredModuleInfo0_97;
  MR_Word NewPredId_98;
  MR_Integer NewProcId_99;
  MR_Word NewPredInfo_100;
  MR_Word NewProcInfo_101;
  MR_Word PredModuleInfo_104;
  MR_Box conv1_GoalVar0_70;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_75;

  transform_hlds__stm_expand__create_rollback_pred_7_p_0(Context_10, AtomicGoalVarList_11, &WrapperCall_18, AtomicGoal_14, OrElseGoals_15, STATE_VARIABLE_StmInfo_0_32, &STATE_VARIABLE_StmInfo_1_34);
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[7]), AtomicGoalVarList_11, &InputVarList_68);
  InputSet_79 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_68);
  conv1_GoalVar0_70 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
  GoalVar0_70 = ((MR_Word) (conv1_GoalVar0_70));
  Var_72 = ((MR_Word) ((MR_hl_field(0, GoalVar0_70, 1))));
  OutputSet_80 = ((MR_Word) ((MR_hl_field(0, GoalVar0_70, 2))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, GoalVar0_70, 3))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, GoalVar0_70, 4))));
  {
    AtomicGoalVars_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AtomicGoalVars_19, 0) = ((MR_Box) (InputSet_79));
    MR_hl_field(0, AtomicGoalVars_19, 1) = ((MR_Box) (Var_72));
    MR_hl_field(0, AtomicGoalVars_19, 2) = ((MR_Box) (OutputSet_80));
    MR_hl_field(0, AtomicGoalVars_19, 3) = ((MR_Box) (Var_74));
    MR_hl_field(0, AtomicGoalVars_19, 4) = ((MR_Box) (Var_75));
  }
  InputVars_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_79);
  OutputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_80);
  transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_19, STATE_VARIABLE_StmInfo_1_34, &InputTypes_22, &OutputTypes_23);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_19, &InputModes_24, &OutputModes_25);
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (OuterUO_13));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (OuterDI_12));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_21, Var_42);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_20, Var_41);
  Var_47 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
  Var_49 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OutputTypes_23, Var_46);
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_22, Var_45);
  Var_53 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_55 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutputModes_25, Var_52);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_24, Var_51);
  transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_35, Var_36, Var_37, (MR_Integer) 0, AtomicGoal_14, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_26, Goal_16, STATE_VARIABLE_StmInfo_1_34, &STATE_VARIABLE_StmInfo_2_40);
  Var_58 = parse_tree__prog_mode__unique_inst_0_f_0();
  Var_59 = parse_tree__prog_mode__unique_inst_0_f_0();
  Var_60 = parse_tree__prog_mode__clobbered_inst_0_f_0();
  {
    UnifyModeUoDi_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyModeUoDi_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyModeUoDi_27, 1) = ((MR_Box) (Var_58));
    MR_hl_field(0, UnifyModeUoDi_27, 2) = ((MR_Box) (Var_59));
    MR_hl_field(0, UnifyModeUoDi_27, 3) = ((MR_Box) (Var_60));
  }
  transform_hlds__stm_expand__create_var_unify_5_p_0(NewPredInfo0_26, OuterUO_13, OuterDI_12, UnifyModeUoDi_27, &CopyIOAssign_28);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (CopyIOAssign_28));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (WrapperCall_18));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_61, &TopLevelGoal_29);
  transform_hlds__stm_expand__new_pred_set_goal_3_p_0(TopLevelGoal_29, NewPredInfo0_26, &NewPredInfo1_30);
  transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(NewPredInfo1_30, &NewPredInfo_31);
  OrigPredId_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 1))));
  OrigProcId_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 2))));
  OrigProcInfo_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 3))));
  OrigPredInfo_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 4))));
  StmExpanded_95 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 5))) & (MR_Integer) 1);
  ExpandNum_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_2_40, 6))));
  PredModuleInfo0_97 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_31, 0))));
  NewPredId_98 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_31, 1))));
  NewProcId_99 = ((MR_Integer) ((MR_hl_field(0, NewPredInfo_31, 2))));
  NewPredInfo_100 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_31, 3))));
  NewProcInfo_101 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_31, 4))));
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_98, NewProcId_99, NewPredInfo_100, NewProcInfo_101, PredModuleInfo0_97, &PredModuleInfo_104);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_StmInfo_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredModuleInfo_104));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigPredId_91));
    MR_hl_field(0, base, 2) = ((MR_Box) (OrigProcId_92));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigProcInfo_93));
    MR_hl_field(0, base, 4) = ((MR_Box) (OrigPredInfo_94));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (StmExpanded_95));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExpandNum_96));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_20;

  transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2645__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_20);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_20));
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_14;

  transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2644__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_14));
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
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
  MR_Word STATE_VARIABLE_StmInfo_1_30;
  MR_Word STATE_VARIABLE_StmInfo_2_31;
  MR_Word InputVarList_36;
  MR_Word GoalVar0_38;
  MR_Word InputSet_47;
  MR_Word OutputSet_48;
  MR_Word ProcInfo0_58;
  MR_Word VarTable_59;
  MR_Word InputVars_60;
  MR_Word OutputVars_61;
  MR_Word InputSet_68;
  MR_Word OutputSet_69;
  MR_Word InputVars_79;
  MR_Word OutputVars_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word InputSet_87;
  MR_Word OutputSet_88;
  MR_Box conv1_GoalVar0_38;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;

  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[6]), AtomicGoalVarList_9, &InputVarList_36);
  InputSet_47 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_36);
  conv1_GoalVar0_38 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_9);
  GoalVar0_38 = ((MR_Word) (conv1_GoalVar0_38));
  Var_40 = ((MR_Word) ((MR_hl_field(0, GoalVar0_38, 1))));
  OutputSet_48 = ((MR_Word) ((MR_hl_field(0, GoalVar0_38, 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, GoalVar0_38, 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, GoalVar0_38, 4))));
  {
    AtomicGoalVars_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AtomicGoalVars_14, 0) = ((MR_Box) (InputSet_47));
    MR_hl_field(0, AtomicGoalVars_14, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, AtomicGoalVars_14, 2) = ((MR_Box) (OutputSet_48));
    MR_hl_field(0, AtomicGoalVars_14, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, AtomicGoalVars_14, 4) = ((MR_Box) (Var_43));
  }
  InputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_47);
  OutputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_48);
  ProcInfo0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_23, 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_58, &VarTable_59);
  InputSet_68 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_14, 0))));
  OutputSet_69 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_14, 2))));
  InputVars_60 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_68);
  OutputVars_61 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_69);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_59, InputVars_60, &InputTypes_17);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_59, OutputVars_61, &OutputTypes_18);
  InputSet_87 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_14, 0))));
  OutputSet_88 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_14, 2))));
  InputVars_79 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_87);
  OutputVars_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_88);
  Var_82 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_7_p_0_2));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (Var_82));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_81, InputVars_79, &InputModes_19);
  Var_84 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_7_p_0_3));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (Var_84));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_83, OutputVars_80, &OutputModes_20);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_15, OutputVars_16);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_17, OutputTypes_18);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_19, OutputModes_20);
  transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_25, Var_26, Var_27, (MR_Integer) 1, AtomicGoal_11, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_21, CallGoal_10, STATE_VARIABLE_StmInfo_0_23, &STATE_VARIABLE_StmInfo_1_30);
  transform_hlds__stm_expand__create_rollback_pred_2_9_p_0(Context_8, AtomicGoalVarList_9, *CallGoal_10, AtomicGoal_11, OrElseGoals_12, NewPredInfo0_21, &NewPredInfo_22, STATE_VARIABLE_StmInfo_1_30, &STATE_VARIABLE_StmInfo_2_31);
  transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_22, STATE_VARIABLE_StmInfo_2_31, STATE_VARIABLE_StmInfo_24);
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
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
  MR_Word AtomicGoalVars_17;
  MR_Word OutputTypes_19;
  MR_Word ResultType_20;
  MR_Word ResultVar_21;
  MR_Word InnerDI_22;
  MR_Word InnerUO_23;
  MR_Word ProcessGoalList_24;
  MR_Word WrapperID_25;
  MR_Word RollbackGoal_27;
  MR_Word STATE_VARIABLE_NewPredInfo_1_33;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_NewPredInfo_2_37;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_NewPredInfo_3_41;
  MR_Word STATE_VARIABLE_StmInfo_1_43;
  MR_Word STATE_VARIABLE_StmInfo_2_44;
  MR_Word STATE_VARIABLE_NewPredInfo_4_45;
  MR_Word STATE_VARIABLE_NewPredInfo_5_46;
  MR_Word STATE_VARIABLE_NewPredInfo_6_47;
  MR_Word InputVarList_49;
  MR_Word InputVars_50;
  MR_Word GoalVar0_51;
  MR_Word ProcInfo0_60;
  MR_Word VarTable_61;
  MR_Word InputVars_62;
  MR_Word OutputVars_63;
  MR_Word InputSet_70;
  MR_Word OutputSet_71;
  MR_Word OrigPredId_90;
  MR_Integer OrigProcId_91;
  MR_Word OrigProcInfo_92;
  MR_Word OrigPredInfo_93;
  MR_Word StmExpanded_94;
  MR_Integer ExpandNum_95;
  MR_Word PredModuleInfo0_96;
  MR_Word NewPredId_97;
  MR_Integer NewProcId_98;
  MR_Word NewPredInfo_99;
  MR_Word NewProcInfo_100;
  MR_Word PredModuleInfo_103;
  MR_Box conv1_GoalVar0_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_18;
  MR_Word Var_26;

  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[5]), AtomicGoalVarList_11, &InputVarList_49);
  InputVars_50 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_49);
  conv1_GoalVar0_51 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
  GoalVar0_51 = ((MR_Word) (conv1_GoalVar0_51));
  Var_53 = ((MR_Word) ((MR_hl_field(0, GoalVar0_51, 1))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, GoalVar0_51, 2))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, GoalVar0_51, 3))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, GoalVar0_51, 4))));
  {
    AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AtomicGoalVars_17, 0) = ((MR_Box) (InputVars_50));
    MR_hl_field(0, AtomicGoalVars_17, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, AtomicGoalVars_17, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, AtomicGoalVars_17, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, AtomicGoalVars_17, 4) = ((MR_Box) (Var_56));
  }
  ProcInfo0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_60, &VarTable_61);
  InputSet_70 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_17, 0))));
  OutputSet_71 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_17, 2))));
  InputVars_62 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_70);
  OutputVars_63 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_71);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_61, InputVars_62, &Var_18);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_61, OutputVars_63, &OutputTypes_19);
  if ((OutputTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
    ResultType_20 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
  else
  {
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(1, OutputTypes_19, 1))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, OutputTypes_19, 0))));

    if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
      ResultType_20 = Var_88;
    else
      {
        ResultType_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ResultType_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ResultType_20, 1) = ((MR_Box) (OutputTypes_19));
        MR_hl_field(3, ResultType_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
  }
  transform_hlds__stm_expand__create_aux_variable_5_p_0(ResultType_20, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[9])), &ResultVar_21, STATE_VARIABLE_NewPredInfo_0_28, &STATE_VARIABLE_NewPredInfo_1_33);
  Var_35 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_35, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[10])), &InnerDI_22, STATE_VARIABLE_NewPredInfo_1_33, &STATE_VARIABLE_NewPredInfo_2_37);
  Var_39 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_39, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[11])), &InnerUO_23, STATE_VARIABLE_NewPredInfo_2_37, &STATE_VARIABLE_NewPredInfo_3_41);
  OrigPredId_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 1))));
  OrigProcId_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 2))));
  OrigProcInfo_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 3))));
  OrigPredInfo_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 4))));
  StmExpanded_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 5))) & (MR_Integer) 1);
  ExpandNum_95 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_30, 6))));
  PredModuleInfo0_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_41, 0))));
  NewPredId_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_41, 1))));
  NewProcId_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_41, 2))));
  NewPredInfo_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_41, 3))));
  NewProcInfo_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_41, 4))));
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_97, NewProcId_98, NewPredInfo_99, NewProcInfo_100, PredModuleInfo0_96, &PredModuleInfo_103);
  {
    STATE_VARIABLE_StmInfo_1_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 0) = ((MR_Box) (PredModuleInfo_103));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 1) = ((MR_Box) (OrigPredId_90));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 2) = ((MR_Box) (OrigProcId_91));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 3) = ((MR_Box) (OrigProcInfo_92));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 4) = ((MR_Box) (OrigPredInfo_93));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 5) = (MR_Box) ((MR_Unsigned) (StmExpanded_94));
    MR_hl_field(0, STATE_VARIABLE_StmInfo_1_43, 6) = ((MR_Box) (ExpandNum_95));
  }
  {
    ProcessGoalList_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ProcessGoalList_24, 0) = ((MR_Box) (AtomicGoal_13));
    MR_hl_field(1, ProcessGoalList_24, 1) = ((MR_Box) (OrElseGoals_14));
  }
  transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0(Context_10, AtomicGoalVarList_11, ResultType_20, ResultVar_21, ProcessGoalList_24, &WrapperID_25, &Var_26, STATE_VARIABLE_StmInfo_1_43, &STATE_VARIABLE_StmInfo_2_44);
  transform_hlds__stm_expand__update_new_pred_info_3_p_0(STATE_VARIABLE_StmInfo_2_44, STATE_VARIABLE_NewPredInfo_3_41, &STATE_VARIABLE_NewPredInfo_4_45);
  transform_hlds__stm_expand__create_rollback_handler_goal_11_p_0(Context_10, AtomicGoalVars_17, ResultType_20, InnerDI_22, InnerUO_23, WrapperID_25, RecCallGoal_12, &RollbackGoal_27, STATE_VARIABLE_StmInfo_2_44, STATE_VARIABLE_NewPredInfo_4_45, &STATE_VARIABLE_NewPredInfo_5_46);
  transform_hlds__stm_expand__new_pred_set_goal_3_p_0(RollbackGoal_27, STATE_VARIABLE_NewPredInfo_5_46, &STATE_VARIABLE_NewPredInfo_6_47);
  transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_6_47, STATE_VARIABLE_NewPredInfo_29);
  transform_hlds__stm_expand__commit_new_pred_3_p_0(*STATE_VARIABLE_NewPredInfo_29, STATE_VARIABLE_StmInfo_2_44, STATE_VARIABLE_StmInfo_31);
}

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word StmInfo_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * STATE_VARIABLE_NewPredInfo_8)
{
  MR_Word ModuleInfo_6 = ((MR_Word) ((MR_hl_field(0, StmInfo_4, 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 1))));
  MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 3))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 5))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_7, 6))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_12;

  transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__593__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_12));
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
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, GoalList_14, 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, GoalList_14, 0))));

    if ((Var_69 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word AtomicGoalVars_19;
      MR_Box conv0_AtomicGoalVars_19;

      conv0_AtomicGoalVars_19 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
      AtomicGoalVars_19 = ((MR_Word) (conv0_AtomicGoalVars_19));
      transform_hlds__stm_expand__create_wrapper_pred_8_p_0(AtomicGoalVars_19, ResultType_12, ResultVar_13, Var_70, PredProcId_15, CallGoal_16, STATE_VARIABLE_StmInfo_0_35, STATE_VARIABLE_StmInfo_36);
    }
    else
    {
      MR_Word PPIDList_30;
      MR_Word StmDI_32;
      MR_Word StmUO_33;
      MR_Word NewAtomicGoal_34;
      MR_Word STATE_VARIABLE_StmInfo_2_47;
      MR_Word STATE_VARIABLE_StmInfo_3_48;
      MR_Word AtomicGoalVars_55;
      MR_Word InputVarList_72;
      MR_Word InputVars_73;
      MR_Word GoalVar0_74;
      MR_Box conv2_GoalVar0_74;
      MR_Word Var_76;
      MR_Word Var_77;

      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(Context_10, ResultType_12, ResultVar_13, GoalList_14, AtomicGoalVarList_11, &PPIDList_30, STATE_VARIABLE_StmInfo_0_35, &STATE_VARIABLE_StmInfo_2_47);
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[0]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[4]), AtomicGoalVarList_11, &InputVarList_72);
      InputVars_73 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarList_72);
      conv2_GoalVar0_74 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0), AtomicGoalVarList_11);
      GoalVar0_74 = ((MR_Word) (conv2_GoalVar0_74));
      Var_76 = ((MR_Word) ((MR_hl_field(0, GoalVar0_74, 1))));
      Var_77 = ((MR_Word) ((MR_hl_field(0, GoalVar0_74, 2))));
      StmDI_32 = ((MR_Word) ((MR_hl_field(0, GoalVar0_74, 3))));
      StmUO_33 = ((MR_Word) ((MR_hl_field(0, GoalVar0_74, 4))));
      {
        AtomicGoalVars_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AtomicGoalVars_55, 0) = ((MR_Box) (InputVars_73));
        MR_hl_field(0, AtomicGoalVars_55, 1) = ((MR_Box) (Var_76));
        MR_hl_field(0, AtomicGoalVars_55, 2) = ((MR_Box) (Var_77));
        MR_hl_field(0, AtomicGoalVars_55, 3) = ((MR_Box) (StmDI_32));
        MR_hl_field(0, AtomicGoalVars_55, 4) = ((MR_Box) (StmUO_33));
      }
      transform_hlds__stm_expand__create_or_else_pred_9_p_0(Context_10, AtomicGoalVars_55, AtomicGoalVarList_11, PPIDList_30, StmDI_32, StmUO_33, &NewAtomicGoal_34, STATE_VARIABLE_StmInfo_2_47, &STATE_VARIABLE_StmInfo_3_48);
      transform_hlds__stm_expand__create_wrapper_pred_8_p_0(AtomicGoalVars_55, ResultType_12, ResultVar_13, NewAtomicGoal_34, PredProcId_15, CallGoal_16, STATE_VARIABLE_StmInfo_3_48, STATE_VARIABLE_StmInfo_36);
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
      S_12 = ((MR_Word) ((MR_hl_field(1, Src1_8, 0))));
      Ss_13 = ((MR_Word) ((MR_hl_field(1, Src1_8, 1))));
      succeeded = (Src2_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        T_14 = ((MR_Word) ((MR_hl_field(1, Src2_9, 0))));
        Ts_15 = ((MR_Word) ((MR_hl_field(1, Src2_9, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word R_16;
      MR_Word Rs_17;
      MR_Word STATE_VARIABLE_Accum_1_20;
      MR_Word Var_31;

      transform_hlds__stm_expand__create_simple_wrapper_pred_9_p_0(Var_28, T_14, Var_29, Var_30, S_12, &R_16, &Var_31, STATE_VARIABLE_Accum_0_18, &STATE_VARIABLE_Accum_1_20);
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(Var_28, Var_29, Var_30, Ss_13, Ts_15, &Rs_17, STATE_VARIABLE_Accum_1_20, STATE_VARIABLE_Accum_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Dest_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (R_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Rs_17));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
        return;
      }
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
  MR_bool succeeded;
  MR_Word Var_18;
  MR_Word InnerDI_21 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 3))));
  MR_Word InnerUO0_22 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 4))));
  MR_Word InputVars_23;
  MR_Word InputTypes_25;
  MR_Word InputModes_27;
  MR_Word ResultVar_29;
  MR_Word CopyStm_30;
  MR_Word InnerUO_31;
  MR_Word WrapperGoal_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_NewPredInfo_1_38;
  MR_Word STATE_VARIABLE_StmInfo_1_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_NewPredInfo_2_58;
  MR_Word STATE_VARIABLE_AtomicGoal_1_59;
  MR_Word STATE_VARIABLE_AtomicGoal_2_60;
  MR_Word STATE_VARIABLE_NewPredInfo_3_61;
  MR_Word STATE_VARIABLE_StmInfo_2_62;
  MR_Word STATE_VARIABLE_NewPredInfo_4_65;
  MR_Word STATE_VARIABLE_NewPredInfo_5_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_NewPredInfo_6_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_NewPredInfo_7_74;
  MR_Word InputSet_87 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 0))));
  MR_Word OutputSet_88 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 2))));
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_28;

  InputVars_23 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_87);
  Var_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_88);
  transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_11, STATE_VARIABLE_StmInfo_0_19, &InputTypes_25, &Var_26);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_11, &InputModes_27, &Var_28);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (InnerUO0_22));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (InnerDI_21));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (ResultVar0_13));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_23, Var_40);
  Var_46 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  Var_48 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ResultType_12));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_25, Var_44);
  Var_51 = parse_tree__prog_mode__out_mode_0_f_0();
  Var_53 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_55 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_27, Var_50);
  transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_33, Var_34, Var_35, (MR_Integer) 3, AtomicGoal_14, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_NewPredInfo_1_38, CallGoal_16, STATE_VARIABLE_StmInfo_0_19, &STATE_VARIABLE_StmInfo_1_39);
  transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_13, ResultType_12, &ResultVar_29, STATE_VARIABLE_NewPredInfo_1_38, &STATE_VARIABLE_NewPredInfo_2_58, AtomicGoal_14, &STATE_VARIABLE_AtomicGoal_1_59);
  transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_1_59, &STATE_VARIABLE_AtomicGoal_2_60, AtomicGoalVars_11, InnerDI_21, InnerUO0_22, STATE_VARIABLE_NewPredInfo_2_58, &STATE_VARIABLE_NewPredInfo_3_61, STATE_VARIABLE_StmInfo_1_39, &STATE_VARIABLE_StmInfo_2_62);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (InnerUO0_22)), ((MR_Box) (InnerDI_21)));
  if (succeeded)
  {
    MR_Word Var_63;

    CopyStm_30 = (MR_Integer) 1;
    Var_63 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_63, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[12])), &InnerUO_31, STATE_VARIABLE_NewPredInfo_3_61, &STATE_VARIABLE_NewPredInfo_4_65);
  }
  else
  {
    CopyStm_30 = (MR_Integer) 0;
    InnerUO_31 = InnerUO0_22;
    STATE_VARIABLE_NewPredInfo_4_65 = STATE_VARIABLE_NewPredInfo_3_61;
  }
  transform_hlds__stm_expand__create_simple_post_wrapper_goal_12_p_0(Context_10, AtomicGoalVars_11, STATE_VARIABLE_AtomicGoal_2_60, ResultType_12, ResultVar_29, InnerDI_21, InnerUO_31, CopyStm_30, &WrapperGoal_32, STATE_VARIABLE_StmInfo_2_62, STATE_VARIABLE_NewPredInfo_4_65, &STATE_VARIABLE_NewPredInfo_5_67);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (InnerUO_31));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (InnerDI_21));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (ResultVar_29));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_23, Var_70);
  transform_hlds__stm_expand__set_head_vars_3_p_0(Var_68, STATE_VARIABLE_NewPredInfo_5_67, &STATE_VARIABLE_NewPredInfo_6_69);
  transform_hlds__stm_expand__new_pred_set_goal_3_p_0(WrapperGoal_32, STATE_VARIABLE_NewPredInfo_6_69, &STATE_VARIABLE_NewPredInfo_7_74);
  transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_7_74, &Var_18);
  transform_hlds__stm_expand__get_pred_proc_id_2_p_0(Var_18, PredProcId_15);
  transform_hlds__stm_expand__commit_new_pred_3_p_0(Var_18, STATE_VARIABLE_StmInfo_2_62, STATE_VARIABLE_StmInfo_20);
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
  MR_Word AssignResult_24;
  MR_Word TopLevelGoalList0_28;
  MR_Word TopLevelGoalList_29;

  transform_hlds__stm_expand__construct_output_8_p_0(Context_13, AtomicGoalVars_14, ResultType_16, ResultVar_17, StmInfo_22, &AssignResult_24, STATE_VARIABLE_NewPredInfo_0_30, STATE_VARIABLE_NewPredInfo_31);
  switch (CopySTM_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_50;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (AtomicGoal_15));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), AssignResult_24);
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_48, Var_50);
        TopLevelGoalList0_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), Var_47);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CopySTMAssign_27;
        MR_Word Var_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Context_53;
        MR_Word ModuleInfo_54;
        MR_Word UnifyType_55;
        MR_Word UnifyRHS_56;
        MR_Word LHSFinalInst_59;
        MR_Word RHSInitInst_60;
        MR_Word RHSFinalInst_61;
        MR_Word LHSTuple_62;
        MR_Word RHSTuple_63;
        MR_Word InstmapDelta_64;
        MR_Word GoalExpr_65;
        MR_Word NonLocals_66;
        MR_Word GoalInfo_69;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_76;

        LHSFinalInst_59 = parse_tree__prog_mode__unique_inst_0_f_0();
        RHSInitInst_60 = parse_tree__prog_mode__unique_inst_0_f_0();
        RHSFinalInst_61 = parse_tree__prog_mode__clobbered_inst_0_f_0();
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (LHSFinalInst_59));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) (RHSInitInst_60));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (RHSFinalInst_61));
        }
        ModuleInfo_54 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_31, 0))));
        Context_53 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_31, 5))));
        {
          UnifyType_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, UnifyType_55, 0) = ((MR_Box) (StmUO_19));
          MR_hl_field(2, UnifyType_55, 1) = ((MR_Box) (StmDI_18));
        }
        {
          UnifyRHS_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyRHS_56, 0) = ((MR_Box) (StmDI_18));
        }
        {
          LHSTuple_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LHSTuple_62, 0) = ((MR_Box) (StmUO_19));
          MR_hl_field(0, LHSTuple_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, LHSTuple_62, 2) = ((MR_Box) (LHSFinalInst_59));
        }
        {
          RHSTuple_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RHSTuple_63, 0) = ((MR_Box) (StmDI_18));
          MR_hl_field(0, RHSTuple_63, 1) = ((MR_Box) (RHSInitInst_60));
          MR_hl_field(0, RHSTuple_63, 2) = ((MR_Box) (RHSFinalInst_61));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (RHSTuple_63));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (LHSTuple_62));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
        }
        hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_54, Var_72, &InstmapDelta_64);
        {
          GoalExpr_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_65, 0) = ((MR_Box) (StmUO_19));
          MR_hl_field(1, GoalExpr_65, 1) = ((MR_Box) (UnifyRHS_56));
          MR_hl_field(1, GoalExpr_65, 2) = ((MR_Box) (Var_37));
          MR_hl_field(1, GoalExpr_65, 3) = ((MR_Box) (UnifyType_55));
          MR_hl_field(1, GoalExpr_65, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[7]));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (StmDI_18));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (StmUO_19));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
        }
        parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_75, &NonLocals_66);
        hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_66, InstmapDelta_64, (MR_Integer) 0, (MR_Integer) 0, Context_53, &GoalInfo_69);
        {
          CopySTMAssign_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CopySTMAssign_27, 0) = ((MR_Box) (GoalExpr_65));
          MR_hl_field(0, CopySTMAssign_27, 1) = ((MR_Box) (GoalInfo_69));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (AtomicGoal_15));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (CopySTMAssign_27));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
        }
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), AssignResult_24);
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_43, Var_46);
        TopLevelGoalList0_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), Var_42);
      }
      break;
  }
  hlds__goal_transform__flatten_conj_2_p_0(TopLevelGoalList0_28, &TopLevelGoalList_29);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_29, Goal_21);
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
  MR_Word STATE_VARIABLE_StmInfo_1_40;
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
  MR_Word InputSet_71 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 0))));
  MR_Word OutputSet_72 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 2))));
  MR_Word ProcInfo0_82;
  MR_Word VarTable_83;
  MR_Word InputVars_84;
  MR_Word OutputVars_85;
  MR_Word InputSet_92;
  MR_Word OutputSet_93;

  InputVars_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_71);
  OutputVars_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_72);
  ProcInfo0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_33, 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_82, &VarTable_83);
  InputSet_92 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 0))));
  OutputSet_93 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_11, 2))));
  InputVars_84 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_92);
  OutputVars_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_93);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_83, InputVars_84, &InputTypes_20);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_83, OutputVars_85, &OutputTypes_21);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_11, &InputModes_22, &OutputModes_23);
  transform_hlds__stm_expand__make_return_type_2_p_0(OutputTypes_21, &ReturnType_25);
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (StmUO_15));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (StmDI_14));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_19, Var_42);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_18, Var_41);
  Var_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  Var_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OutputTypes_21, Var_46);
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_20, Var_45);
  Var_53 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_55 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutputModes_23, Var_52);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_22, Var_51);
  Var_39 = hlds__make_goal__true_goal_0_f_0();
  transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_35, Var_36, Var_37, (MR_Integer) 4, Var_39, (MR_Word) ((MR_Unsigned) 0U), &NewPredInfo0_26, CallGoal_16, STATE_VARIABLE_StmInfo_0_33, &STATE_VARIABLE_StmInfo_1_40);
  Var_57 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_57, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[15])), &NewStmDI_27, NewPredInfo0_26, &NewPredInfo1_28);
  Var_60 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_60, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[16])), &NewStmUO_29, NewPredInfo1_28, &NewPredInfo2_30);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (NewStmUO_29));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (NewStmDI_27));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_19, Var_65);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_18, Var_64);
  transform_hlds__stm_expand__set_head_vars_3_p_0(Var_63, NewPredInfo2_30, &NewPredInfo3_31);
  transform_hlds__stm_expand__create_or_else_pred_2_9_p_0(Context_10, BranchGoalVars_12, Closures_13, NewStmDI_27, NewStmUO_29, ReturnType_25, STATE_VARIABLE_StmInfo_1_40, NewPredInfo3_31, &NewPredInfo_32);
  transform_hlds__stm_expand__commit_new_pred_3_p_0(NewPredInfo_32, STATE_VARIABLE_StmInfo_1_40, STATE_VARIABLE_StmInfo_34);
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Types_3, 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, Types_3, 0))));

    if ((Var_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *ReturnType_4 = Var_12;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ReturnType_4 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Types_3));
        MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
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
  MR_Integer ClosureCount_18;
  MR_Word InnerSTMVars_19;
  MR_Word ReturnTypeInfoVar_20;
  MR_Word CreateRetTypeInfo_21;
  MR_Word ExceptRttiVar_22;
  MR_Word CreateExceptTypeInfo_23;
  MR_Word EndBranchGoal_24;
  MR_Word MainGoal0_25;
  MR_Word TopLevelGoalList0_26;
  MR_Word TopLevelGoalList_27;
  MR_Word MainGoal1_28;
  MR_Word MainGoal_29;
  MR_Word STATE_VARIABLE_NewPredInfo_1_32;
  MR_Word STATE_VARIABLE_NewPredInfo_2_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_NewPredInfo_3_35;
  MR_Word STATE_VARIABLE_NewPredInfo_4_36;
  MR_Word STATE_VARIABLE_NewPredInfo_5_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_NewPredInfo_6_42;
  MR_Word ModuleInfo0_45;
  MR_Word PredId_46;
  MR_Integer ProcId_47;
  MR_Word PredInfo0_48;
  MR_Word ProcInfo0_49;
  MR_Word Context_50;
  MR_Integer VarCnt_51;
  MR_Word ModuleInfo_52;
  MR_Word PredInfo_53;
  MR_Word ProcInfo_54;
  MR_Word ModuleInfo0_55;
  MR_Word PredId_56;
  MR_Integer ProcId_57;
  MR_Word PredInfo0_58;
  MR_Word ProcInfo0_59;
  MR_Word Context_60;
  MR_Integer VarCnt_61;
  MR_Word ModuleInfo_62;
  MR_Word PredInfo_63;
  MR_Word ProcInfo_64;
  MR_Word GoalInInfo_66;
  MR_Word NonLocals_67;
  MR_Word InstMapDelta_68;
  MR_Word Detism_69;
  MR_Word Context_71;
  MR_Word GoalInfo_72;
  MR_Word GoalOutExpr_74;
  MR_Word ProcInfo0_75;
  MR_Word GoalVars_76;
  MR_Word GoalVarsSet_77;
  MR_Word ProcVarTable0_78;
  MR_Word ProcVarTable_79;
  MR_Word ProcInfo1_80;
  MR_Word ProcInfo_81;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Integer Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Integer Var_94;

  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Closures_12, &ClosureCount_18);
  transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(ClosureCount_18, &InnerSTMVars_19, STATE_VARIABLE_NewPredInfo_0_30, &STATE_VARIABLE_NewPredInfo_1_32);
  ModuleInfo0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 0))));
  PredId_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 1))));
  ProcId_47 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 2))));
  PredInfo0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 3))));
  ProcInfo0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 4))));
  Context_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 5))));
  VarCnt_51 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_32, 6))));
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(ReturnType_15, Context_50, &ReturnTypeInfoVar_20, &CreateRetTypeInfo_21, ModuleInfo0_45, &ModuleInfo_52, PredInfo0_48, &PredInfo_53, ProcInfo0_49, &ProcInfo_54);
  {
    STATE_VARIABLE_NewPredInfo_2_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 0) = ((MR_Box) (ModuleInfo_52));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 1) = ((MR_Box) (PredId_46));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 2) = ((MR_Box) (ProcId_47));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 3) = ((MR_Box) (PredInfo_53));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 4) = ((MR_Box) (ProcInfo_54));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 5) = ((MR_Box) (Context_50));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 6) = ((MR_Box) (VarCnt_51));
  }
  Var_34 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  ModuleInfo0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 0))));
  PredId_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 1))));
  ProcId_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 2))));
  PredInfo0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 3))));
  ProcInfo0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 4))));
  Context_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 5))));
  VarCnt_61 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_33, 6))));
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(Var_34, Context_60, &ExceptRttiVar_22, &CreateExceptTypeInfo_23, ModuleInfo0_55, &ModuleInfo_62, PredInfo0_58, &PredInfo_63, ProcInfo0_59, &ProcInfo_64);
  {
    STATE_VARIABLE_NewPredInfo_3_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 0) = ((MR_Box) (ModuleInfo_62));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 1) = ((MR_Box) (PredId_56));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 2) = ((MR_Box) (ProcId_57));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 3) = ((MR_Box) (PredInfo_63));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 4) = ((MR_Box) (ProcInfo_64));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 5) = ((MR_Box) (Context_60));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_3_35, 6) = ((MR_Box) (VarCnt_61));
  }
  transform_hlds__stm_expand__create_or_else_end_branch_8_p_0(Context_10, InnerSTMVars_19, StmDI_13, StmUO_14, ExceptRttiVar_22, &EndBranchGoal_24, STATE_VARIABLE_NewPredInfo_3_35, &STATE_VARIABLE_NewPredInfo_4_36);
  transform_hlds__stm_expand__create_or_else_branches_14_p_0(Context_10, AtomicGoalVars_11, ReturnType_15, StmDI_13, StmUO_14, InnerSTMVars_19, ReturnTypeInfoVar_20, ExceptRttiVar_22, Closures_12, EndBranchGoal_24, &MainGoal0_25, StmInfo_16, STATE_VARIABLE_NewPredInfo_4_36, &STATE_VARIABLE_NewPredInfo_5_37);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MainGoal0_25));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateExceptTypeInfo_23, Var_39);
  TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateRetTypeInfo_21, Var_38);
  hlds__goal_transform__flatten_conj_2_p_0(TopLevelGoalList0_26, &TopLevelGoalList_27);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_27, &MainGoal1_28);
  GoalInInfo_66 = ((MR_Word) ((MR_hl_field(0, MainGoal1_28, 1))));
  NonLocals_67 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInInfo_66);
  InstMapDelta_68 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInInfo_66);
  Detism_69 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInInfo_66);
  Context_71 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInInfo_66);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_67, InstMapDelta_68, Detism_69, (MR_Integer) 0, Context_71, &GoalInfo_72);
  {
    GoalOutExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalOutExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, GoalOutExpr_74, 1) = ((MR_Box) (MR_mkword(3, &transform_hlds__stm_expand_scalar_common_1[9])));
    MR_hl_field(3, GoalOutExpr_74, 2) = ((MR_Box) (MainGoal1_28));
  }
  {
    MainGoal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainGoal_29, 0) = ((MR_Box) (GoalOutExpr_74));
    MR_hl_field(0, MainGoal_29, 1) = ((MR_Box) (GoalInfo_72));
  }
  ProcInfo0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 4))));
  hlds__goal_vars__vars_in_goal_2_p_0(MainGoal_29, &GoalVars_76);
  GoalVarsSet_77 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_76);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_75, &ProcVarTable0_78);
  parse_tree__var_table__var_table_select_3_p_0(GoalVarsSet_77, ProcVarTable0_78, &ProcVarTable_79);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(ProcVarTable_79, ProcInfo0_75, &ProcInfo1_80);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(MainGoal_29, ProcInfo1_80, &ProcInfo_81);
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 0))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 1))));
  Var_90 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 2))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 3))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 5))));
  Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_5_37, 6))));
  {
    STATE_VARIABLE_NewPredInfo_6_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 0) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 1) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 2) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 3) = ((MR_Box) (Var_91));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 4) = ((MR_Box) (ProcInfo_81));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 5) = ((MR_Box) (Var_93));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_6_42, 6) = ((MR_Box) (Var_94));
  }
  transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_6_42, STATE_VARIABLE_NewPredInfo_31);
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_44;
  MR_Word conv0_LambdaHeadVar__4_46;

  transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1846__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_44, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_46);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_44));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_46));
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
  MR_Word STATE_VARIABLE_NewPredInfo_1_50;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_NewPredInfo_2_86;
  MR_Word Var_87;
  MR_Word Var_92;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word STATE_VARIABLE_NewPredInfo_3_100;
  MR_Word Var_102;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_114;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word STATE_VARIABLE_NewPredInfo_4_125;
  MR_Word Var_127;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_139;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Box conv2_STATE_VARIABLE_NewPredInfo_1_50;

  StmVarsMinusHead_21 = mercury__list__det_tail_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), StmVars_10);
  mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[3]), StmVarsMinusHead_21, &IntermediateStmVars_22, ((MR_Box) (STATE_VARIABLE_NewPredInfo_0_41)), &conv2_STATE_VARIABLE_NewPredInfo_1_50);
  STATE_VARIABLE_NewPredInfo_1_50 = ((MR_Word) (conv2_STATE_VARIABLE_NewPredInfo_1_50));
  {
    MergeStmVarsIn_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MergeStmVarsIn_23, 0) = ((MR_Box) (OuterSTMDI_11));
    MR_hl_field(1, MergeStmVarsIn_23, 1) = ((MR_Box) (IntermediateStmVars_22));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (OuterSTMUO_12));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  MergeStmVarsOut_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), IntermediateStmVars_22, Var_51);
  transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(StmVars_10, MergeStmVarsIn_23, MergeStmVarsOut_24, &MergeGoals_30, STATE_VARIABLE_NewPredInfo_1_50, &STATE_VARIABLE_NewPredInfo_2_86);
  Var_87 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  Var_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_2_86, Var_87, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_92, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &UnlockCall_31);
  Var_97 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
  Var_98 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_98, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[19])), &RetryConsVar_33, STATE_VARIABLE_NewPredInfo_2_86, &STATE_VARIABLE_NewPredInfo_3_100);
  hlds__make_goal__make_const_construction_4_p_0(Context_9, RetryConsVar_33, Var_97, &AssignRetryCons_32);
  Var_102 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (ExceptionRttiVar_13));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (RetryConsVar_33));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (ExceptionRttiVar_13));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_106));
  }
  Var_107 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_114);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_100, Var_102, (MR_String) "throw", (MR_Integer) 0, Var_105, Var_106, Var_107, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RetryCall_34);
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (RetryCall_34));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (AssignRetryCons_32));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (UnlockCall_31));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
  }
  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MergeGoals_30, Var_118);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_117, &ValidGoal_35);
  Var_122 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
  Var_123 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_123, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[20])), &RollbackConsVar_37, STATE_VARIABLE_NewPredInfo_3_100, &STATE_VARIABLE_NewPredInfo_4_125);
  hlds__make_goal__make_const_construction_4_p_0(Context_9, RollbackConsVar_37, Var_122, &AssignRollbackCons_36);
  Var_127 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (RollbackConsVar_37));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (ExceptionRttiVar_13));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_131));
  }
  Var_132 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_139);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_4_125, Var_127, (MR_String) "throw", (MR_Integer) 0, Var_105, Var_131, Var_132, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &ThrowCall_38);
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (ThrowCall_38));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (AssignRollbackCons_36));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (UnlockCall_31));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_142, &InvalidGoal_39);
  transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0(Context_9, StmVars_10, (MR_Integer) 0, ValidGoal_35, InvalidGoal_39, &Goals_40, STATE_VARIABLE_NewPredInfo_4_125, STATE_VARIABLE_NewPredInfo_42);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Goals_40, Goal_14);
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
      S_14 = ((MR_Word) ((MR_hl_field(1, Src1_9, 0))));
      Ss_15 = ((MR_Word) ((MR_hl_field(1, Src1_9, 1))));
      succeeded = (Src2_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        T_16 = ((MR_Word) ((MR_hl_field(1, Src2_10, 0))));
        Ts_17 = ((MR_Word) ((MR_hl_field(1, Src2_10, 1))));
        succeeded = (Src3_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          U_18 = ((MR_Word) ((MR_hl_field(1, Src3_11, 0))));
          Us_19 = ((MR_Word) ((MR_hl_field(1, Src3_11, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word R_20;
      MR_Word Rs_21;
      MR_Word STATE_VARIABLE_Accum_1_24;

      transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1860__1_6_p_0(S_14, T_16, U_18, &R_20, STATE_VARIABLE_Accum_0_22, &STATE_VARIABLE_Accum_1_24);
      transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(Ss_15, Ts_17, Us_19, &Rs_21, STATE_VARIABLE_Accum_1_24, STATE_VARIABLE_Accum_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Dest_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (R_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (Rs_21));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1860__1_6_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word LambdaHeadVar__3_55,
  MR_Word * LambdaHeadVar__4_56,
  MR_Word LambdaHeadVar__5_57,
  MR_Word * LambdaHeadVar__6_58)
{
  MR_Word Var_59;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Context_82;
  MR_Word ModuleInfo_83;

  Var_59 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (LambdaHeadVar__3_55));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (LambdaHeadVar__2_54));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (LambdaHeadVar__1_53));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_69));
  }
  Var_74 = (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5]));
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (LambdaHeadVar__1_53));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (LambdaHeadVar__2_54));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (LambdaHeadVar__3_55));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_77));
  }
  Var_64 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_72);
  ModuleInfo_83 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__5_57, 0))));
  Context_82 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__5_57, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_83, (MR_Integer) 0, Var_59, (MR_String) "stm_merge_nested_logs", (MR_Word) ((MR_Unsigned) 0U), Var_63, Var_64, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_82, LambdaHeadVar__4_56);
  *LambdaHeadVar__6_58 = LambdaHeadVar__5_57;
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_82;
  MR_Word conv4_LambdaHeadVar__4_84;

  transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1031__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_LambdaHeadVar__2_82, ((MR_Word) (wrapper_arg_3)), &conv4_LambdaHeadVar__4_84);
  *wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_82));
  *wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_84));
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
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_52;
  MR_Word conv1_LambdaHeadVar__3_53;
  MR_Word conv0_LambdaHeadVar__5_55;

  transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1015__1_5_p_0(((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_52, &conv1_LambdaHeadVar__3_53, ((MR_Word) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_55);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_52));
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_53));
  *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_55));
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0(
  MR_Word Context_9,
  MR_Word StmVars_10,
  MR_Word UnlockAfterwards_11,
  MR_Word ValidGoal_12,
  MR_Word InvalidGoal_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_34,
  MR_Word * STATE_VARIABLE_NewPredInfo_35)
{
  MR_Word AssignValidConst_16;
  MR_Word IsValidConstVar_17;
  MR_Word LockCall_18;
  MR_Word ValidCalls_25;
  MR_Word IsValidVars_26;
  MR_Word CreateValidTests_27;
  MR_Word TestValidGoals_30;
  MR_Word TestValidCond_31;
  MR_Word ITEGoal_32;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_NewPredInfo_1_39;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_NewPredInfo_2_80;
  MR_Word Context_124;
  MR_Word ModuleInfo_125;
  MR_Word Context_138;
  MR_Word OutGoalExpr_139;
  MR_Word NonLocals_140;
  MR_Word InstMapDelta_141;
  MR_Word GoalInfo_142;
  MR_Box conv3_STATE_VARIABLE_NewPredInfo_2_80;
  MR_Box conv6_STATE_VARIABLE_NewPredInfo_35;

  Var_36 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
  Var_37 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_37, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[5])), &IsValidConstVar_17, STATE_VARIABLE_NewPredInfo_0_34, &STATE_VARIABLE_NewPredInfo_1_39);
  hlds__make_goal__make_const_construction_4_p_0(Context_9, IsValidConstVar_17, Var_36, &AssignValidConst_16);
  Var_41 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  Var_46 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  ModuleInfo_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_39, 0))));
  Context_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_39, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_125, (MR_Integer) 0, Var_41, (MR_String) "stm_lock", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_124, &LockCall_18);
  mercury__list__map2_foldl_6_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[2]), StmVars_10, &ValidCalls_25, &IsValidVars_26, ((MR_Box) (STATE_VARIABLE_NewPredInfo_1_39)), &conv3_STATE_VARIABLE_NewPredInfo_2_80);
  STATE_VARIABLE_NewPredInfo_2_80 = ((MR_Word) (conv3_STATE_VARIABLE_NewPredInfo_2_80));
  {
    CreateValidTests_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CreateValidTests_27, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[1]));
    MR_hl_field(0, CreateValidTests_27, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_8_p_0_2));
    MR_hl_field(0, CreateValidTests_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, CreateValidTests_27, 3) = ((MR_Box) (IsValidConstVar_17));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0), CreateValidTests_27, IsValidVars_26, &TestValidGoals_30, ((MR_Box) (STATE_VARIABLE_NewPredInfo_2_80)), &conv6_STATE_VARIABLE_NewPredInfo_35);
  *STATE_VARIABLE_NewPredInfo_35 = ((MR_Word) (conv6_STATE_VARIABLE_NewPredInfo_35));
  transform_hlds__stm_expand__create_plain_conj_2_p_0(TestValidGoals_30, &TestValidCond_31);
  Context_138 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_35, 5))));
  {
    OutGoalExpr_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutGoalExpr_139, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, OutGoalExpr_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, OutGoalExpr_139, 2) = ((MR_Box) (TestValidCond_31));
    MR_hl_field(3, OutGoalExpr_139, 3) = ((MR_Box) (ValidGoal_12));
    MR_hl_field(3, OutGoalExpr_139, 4) = ((MR_Box) (InvalidGoal_13));
  }
  NonLocals_140 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_141);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_140, InstMapDelta_141, (MR_Integer) 4, (MR_Integer) 2, Context_138, &GoalInfo_142);
  {
    ITEGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ITEGoal_32, 0) = ((MR_Box) (OutGoalExpr_139));
    MR_hl_field(0, ITEGoal_32, 1) = ((MR_Box) (GoalInfo_142));
  }
  switch (UnlockAfterwards_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;

        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (LockCall_18));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) (ValidCalls_25));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (AssignValidConst_16));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_111, 0) = ((MR_Box) (ITEGoal_32));
          MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_109, Var_111);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnlockCall_33;
        MR_Word Var_94;
        MR_Word Var_99;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;

        Var_94 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
        Var_99 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_35, Var_94, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_99, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &UnlockCall_33);
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (LockCall_18));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (ValidCalls_25));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (AssignValidConst_16));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (ITEGoal_32));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (UnlockCall_33));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
        }
        *Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_104, Var_106);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer Count_5,
  MR_Word * Vars_6,
  MR_Word STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * STATE_VARIABLE_NewPredInfo_12)
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
      MR_Word STATE_VARIABLE_NewPredInfo_1_16;

      Var_14 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
      transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_14, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[17])), &Var_8, STATE_VARIABLE_NewPredInfo_0_11, &STATE_VARIABLE_NewPredInfo_1_16);
      Count1_9 = (MR_Integer) ((MR_Unsigned) Count_5 - (MR_Unsigned) 1);
      transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(Count1_9, &Vars0_10, STATE_VARIABLE_NewPredInfo_1_16, STATE_VARIABLE_NewPredInfo_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Vars_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (Vars0_10));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
        return;
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
      AGV_28 = ((MR_Word) ((MR_hl_field(1, AtomicGoalVars_16, 0))));
      AGVs_29 = ((MR_Word) ((MR_hl_field(1, AtomicGoalVars_16, 1))));
      succeeded = (InnerSTMVars_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InnerVar_30 = ((MR_Word) ((MR_hl_field(1, InnerSTMVars_20, 0))));
        InnerSTMVars0_31 = ((MR_Word) ((MR_hl_field(1, InnerSTMVars_20, 1))));
        succeeded = (WrapperIDs_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          WrapID_32 = ((MR_Word) ((MR_hl_field(1, WrapperIDs_23, 0))));
          WrapperIDs0_33 = ((MR_Word) ((MR_hl_field(1, WrapperIDs_23, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Goal0_34;
      MR_Word STATE_VARIABLE_NewPredInfo_1_37;

      transform_hlds__stm_expand__create_or_else_branches_14_p_0(Context_15, AGVs_29, ReturnType_17, OuterStmDIVar_18, OuterStmUOVar_19, InnerSTMVars0_31, RttiVar_21, RollbackExceptionRttiVar_22, WrapperIDs0_33, EndBranch_24, &Goal0_34, StmInfo_26, STATE_VARIABLE_NewPredInfo_0_35, &STATE_VARIABLE_NewPredInfo_1_37);
      transform_hlds__stm_expand__create_or_else_branch_14_p_0(Context_15, AGV_28, ReturnType_17, OuterStmDIVar_18, OuterStmUOVar_19, InnerVar_30, RttiVar_21, RollbackExceptionRttiVar_22, WrapID_32, Goal0_34, Goal_25, StmInfo_26, STATE_VARIABLE_NewPredInfo_1_37, STATE_VARIABLE_NewPredInfo_36);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/14", (MR_String) "mismatched lists");
        return;
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_52,
  MR_Word * STATE_VARIABLE_NewPredInfo_53)
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
  MR_Word Cases_50;
  MR_Word DisjGoal_51;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_NewPredInfo_1_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_NewPredInfo_2_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_NewPredInfo_3_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_99;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
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
  MR_Word STATE_VARIABLE_NewPredInfo_4_137;
  MR_Word Var_138;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_156;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_168;
  MR_Word Var_173;
  MR_Word Var_179;
  MR_Word Var_185;
  MR_Word Var_189;
  MR_Word Var_190;
  MR_Word Var_195;
  MR_Word Var_200;
  MR_Word STATE_VARIABLE_NewPredInfo_5_202;
  MR_Word Var_204;
  MR_Word Var_205;
  MR_Word Var_207;
  MR_Word Var_208;
  MR_Word Var_210;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_Word Var_215;
  MR_Word Var_216;
  MR_Word Var_218;
  MR_Word Var_219;
  MR_Word Var_220;
  MR_Word Var_225;
  MR_Word Var_226;
  MR_Word Var_227;
  MR_Word Var_228;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_33;

  transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_16, &InputVars_28, &Var_29);
  transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_16, StmInfo_26, &InputTypes_30, &Var_31);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_16, &InputModes_32, &Var_33);
  Var_54 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_54, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[21])), &InnerSTM0Var_34, STATE_VARIABLE_NewPredInfo_0_52, &STATE_VARIABLE_NewPredInfo_1_56);
  Var_58 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_17);
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_58, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[22])), &ReturnExceptVar_35, STATE_VARIABLE_NewPredInfo_1_56, &STATE_VARIABLE_NewPredInfo_2_60);
  Var_67 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  Var_69 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (ReturnType_17));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_30, Var_65);
  Var_72 = parse_tree__prog_mode__out_mode_0_f_0();
  Var_74 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_76 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_32, Var_71);
  transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_23, InputVars_28, Var_62, Var_63, &AtomicClosureVar_36, &ClosureAssign_37, STATE_VARIABLE_NewPredInfo_2_60, &STATE_VARIABLE_NewPredInfo_3_64);
  Var_78 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (InnerSTM0Var_34));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (OuterStmDIVar_18));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (OuterStmDIVar_18));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (InnerSTM0Var_34));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_95));
  }
  Var_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_90);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_64, Var_78, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, Var_81, (MR_Word) ((MR_Unsigned) 0U), Var_83, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &CreateNestedLogCall_38);
  Var_99 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (RttiVar_21));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (InnerSTMVar_20));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (InnerSTM0Var_34));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (ReturnExceptVar_35));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (AtomicClosureVar_36));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_110));
  }
  Var_116 = (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[4]));
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (RttiVar_21));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (AtomicClosureVar_36));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_125, 0) = ((MR_Box) (ReturnExceptVar_35));
    MR_hl_field(0, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_128, 0) = ((MR_Box) (InnerSTM0Var_34));
    MR_hl_field(0, Var_128, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_133, 0) = ((MR_Box) (InnerSTMVar_20));
    MR_hl_field(0, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_119));
  }
  Var_104 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_114);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_64, Var_99, (MR_String) "unsafe_try_stm", (MR_Integer) 0, Var_102, Var_103, Var_104, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[8])), (MR_Integer) 4, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &TryStmCall_39);
  transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_16, ReturnType_17, ReturnExceptVar_35, &DeconstructGoal_40, StmInfo_26, STATE_VARIABLE_NewPredInfo_3_64, &STATE_VARIABLE_NewPredInfo_4_137);
  Var_138 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (OuterStmUOVar_19));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (OuterStmDIVar_18));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (InnerSTMVar_20));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_148));
  }
  {
    Var_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_152, 0) = ((MR_Box) (InnerSTMVar_20));
    MR_hl_field(0, Var_152, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_162, 0) = ((MR_Box) (OuterStmUOVar_19));
    MR_hl_field(0, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
    MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_161));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_156));
  }
  Var_143 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_151);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_4_137, Var_138, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_142, Var_143, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &MergeNestedLogsCall_41);
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (MergeNestedLogsCall_41));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (DeconstructGoal_40));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_166));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_165, &SuccessBranch_42);
  Var_168 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_152));
    MR_hl_field(1, Var_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_173 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_179);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_4_137, Var_168, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_112, Var_173, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &DiscardCall_43);
  Var_185 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_195, 0) = ((MR_Box) (ReturnExceptVar_35));
    MR_hl_field(1, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_189, 0) = ((MR_Box) (RttiVar_21));
    MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_195));
  }
  Var_190 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_189);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_4_137, Var_185, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_189, Var_190, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RethrowCall_44);
  Var_200 = parse_tree__builtin_lib_types__univ_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_200, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[6])), &ExceptUnivVar_45, STATE_VARIABLE_NewPredInfo_4_137, &STATE_VARIABLE_NewPredInfo_5_202);
  Var_204 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
  {
    Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_205, 0) = ((MR_Box) (ExceptUnivVar_45));
    MR_hl_field(1, Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_35, Var_204, Var_205, &DeconstructException_46);
  {
    Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_208, 0) = ((MR_Box) (RethrowCall_44));
    MR_hl_field(1, Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_207, 0) = ((MR_Box) (DiscardCall_43));
    MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_208));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_207, &NotRetryBranch_47);
  Var_210 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
  transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_15, RollbackExceptionRttiVar_22, ExceptUnivVar_45, Var_210, RetryBranch_24, NotRetryBranch_47, &IfRetryGoal_48, STATE_VARIABLE_NewPredInfo_5_202, STATE_VARIABLE_NewPredInfo_53);
  {
    Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_213, 0) = ((MR_Box) (IfRetryGoal_48));
    MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_212, 0) = ((MR_Box) (DeconstructException_46));
    MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_213));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_212, &ExceptionBranch_49);
  Var_216 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
  {
    Var_215 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_215, 0) = ((MR_Box) (Var_216));
    MR_hl_field(0, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_215, 2) = ((MR_Box) (ExceptionBranch_49));
  }
  Var_220 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
  {
    Var_219 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_219, 0) = ((MR_Box) (Var_220));
    MR_hl_field(0, Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_219, 2) = ((MR_Box) (SuccessBranch_42));
  }
  {
    Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_218, 0) = ((MR_Box) (Var_219));
    MR_hl_field(1, Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Cases_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Cases_50, 0) = ((MR_Box) (Var_215));
    MR_hl_field(1, Cases_50, 1) = ((MR_Box) (Var_218));
  }
  transform_hlds__stm_expand__create_switch_disjunction_6_p_0(*STATE_VARIABLE_NewPredInfo_53, ReturnExceptVar_35, Cases_50, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_51);
  {
    Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_228, 0) = ((MR_Box) (DisjGoal_51));
    MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_227, 0) = ((MR_Box) (TryStmCall_39));
    MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_228));
  }
  {
    Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_226, 0) = ((MR_Box) (ClosureAssign_37));
    MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_227));
  }
  {
    Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_225, 0) = ((MR_Box) (CreateNestedLogCall_38));
    MR_hl_field(1, Var_225, 1) = ((MR_Box) (Var_226));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_225, Goal_25);
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_8_p_0(
  MR_Word AtomicGoalVars_9,
  MR_Word ResultType_10,
  MR_Word ResultVar0_11,
  MR_Word AtomicGoal_12,
  MR_Word * PredProcId_13,
  MR_Word * CallGoal_14,
  MR_Word STATE_VARIABLE_StmInfo_0_17,
  MR_Word * STATE_VARIABLE_StmInfo_18)
{
  MR_bool succeeded;
  MR_Word Var_16;
  MR_Word InnerDI_19 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_9, 3))));
  MR_Word InnerUO0_20 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_9, 4))));
  MR_Word InputVars_21;
  MR_Word InputTypes_23;
  MR_Word InputModes_25;
  MR_Word ResultVar_27;
  MR_Word CopyStm_28;
  MR_Word InnerUO_29;
  MR_Word WrapperGoal_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_NewPredInfo_1_36;
  MR_Word STATE_VARIABLE_StmInfo_1_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_NewPredInfo_2_56;
  MR_Word STATE_VARIABLE_AtomicGoal_1_57;
  MR_Word STATE_VARIABLE_AtomicGoal_2_58;
  MR_Word STATE_VARIABLE_NewPredInfo_3_59;
  MR_Word STATE_VARIABLE_StmInfo_2_60;
  MR_Word STATE_VARIABLE_NewPredInfo_4_63;
  MR_Word STATE_VARIABLE_NewPredInfo_5_65;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_NewPredInfo_6_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_NewPredInfo_7_72;
  MR_Word InputSet_85 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_9, 0))));
  MR_Word OutputSet_86 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_9, 2))));
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_26;

  InputVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_85);
  Var_22 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_86);
  transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_9, STATE_VARIABLE_StmInfo_0_17, &InputTypes_23, &Var_24);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_9, &InputModes_25, &Var_26);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (InnerUO0_20));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (InnerDI_19));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (ResultVar0_11));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_21, Var_38);
  Var_44 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  Var_46 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (ResultType_10));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_23, Var_42);
  Var_49 = parse_tree__prog_mode__out_mode_0_f_0();
  Var_51 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_53 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_25, Var_48);
  transform_hlds__stm_expand__create_cloned_pred_10_p_0(Var_31, Var_32, Var_33, (MR_Integer) 2, AtomicGoal_12, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_NewPredInfo_1_36, CallGoal_14, STATE_VARIABLE_StmInfo_0_17, &STATE_VARIABLE_StmInfo_1_37);
  transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", ResultVar0_11, ResultType_10, &ResultVar_27, STATE_VARIABLE_NewPredInfo_1_36, &STATE_VARIABLE_NewPredInfo_2_56, AtomicGoal_12, &STATE_VARIABLE_AtomicGoal_1_57);
  transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(STATE_VARIABLE_AtomicGoal_1_57, &STATE_VARIABLE_AtomicGoal_2_58, AtomicGoalVars_9, InnerDI_19, InnerUO0_20, STATE_VARIABLE_NewPredInfo_2_56, &STATE_VARIABLE_NewPredInfo_3_59, STATE_VARIABLE_StmInfo_1_37, &STATE_VARIABLE_StmInfo_2_60);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (InnerUO0_20)), ((MR_Box) (InnerDI_19)));
  if (succeeded)
  {
    MR_Word Var_61;

    CopyStm_28 = (MR_Integer) 1;
    Var_61 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_61, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[12])), &InnerUO_29, STATE_VARIABLE_NewPredInfo_3_59, &STATE_VARIABLE_NewPredInfo_4_63);
  }
  else
  {
    CopyStm_28 = (MR_Integer) 0;
    InnerUO_29 = InnerUO0_20;
    STATE_VARIABLE_NewPredInfo_4_63 = STATE_VARIABLE_NewPredInfo_3_59;
  }
  transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(AtomicGoalVars_9, STATE_VARIABLE_AtomicGoal_2_58, ResultType_10, ResultVar_27, InnerDI_19, InnerUO_29, CopyStm_28, &WrapperGoal_30, STATE_VARIABLE_StmInfo_2_60, STATE_VARIABLE_NewPredInfo_4_63, &STATE_VARIABLE_NewPredInfo_5_65);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (InnerUO_29));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (InnerDI_19));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (ResultVar0_11));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
  }
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), InputVars_21, Var_68);
  transform_hlds__stm_expand__set_head_vars_3_p_0(Var_66, STATE_VARIABLE_NewPredInfo_5_65, &STATE_VARIABLE_NewPredInfo_6_67);
  transform_hlds__stm_expand__new_pred_set_goal_3_p_0(WrapperGoal_30, STATE_VARIABLE_NewPredInfo_6_67, &STATE_VARIABLE_NewPredInfo_7_72);
  transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(STATE_VARIABLE_NewPredInfo_7_72, &Var_16);
  transform_hlds__stm_expand__get_pred_proc_id_2_p_0(Var_16, PredProcId_13);
  transform_hlds__stm_expand__commit_new_pred_3_p_0(Var_16, STATE_VARIABLE_StmInfo_2_60, STATE_VARIABLE_StmInfo_18);
}

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word NewPredInfo0_3,
  MR_Word * PredProcId_4)
{
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_3, 1))));
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, NewPredInfo0_3, 2))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PredProcId_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_6));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_13,
  MR_Word * STATE_VARIABLE_NewPredInfo_14)
{
  MR_Word ProcInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 4))));
  MR_Word GoalVars_7;
  MR_Word GoalVarsSet_8;
  MR_Word ProcVarTable0_9;
  MR_Word ProcVarTable_10;
  MR_Word ProcInfo1_11;
  MR_Word ProcInfo_12;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Integer Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Integer Var_27;

  hlds__goal_vars__vars_in_goal_2_p_0(Goal_4, &GoalVars_7);
  GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_7);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_6, &ProcVarTable0_9);
  parse_tree__var_table__var_table_select_3_p_0(GoalVarsSet_8, ProcVarTable0_9, &ProcVarTable_10);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(ProcVarTable_10, ProcInfo0_6, &ProcInfo1_11);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_4, ProcInfo1_11, &ProcInfo_12);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 1))));
  Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 2))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 3))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 5))));
  Var_27 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_13, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_27));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
  MR_Word STATE_VARIABLE_NewPredInfo_0_9,
  MR_Word * STATE_VARIABLE_NewPredInfo_10)
{
  MR_Word ProcInfo0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 4))));
  MR_Word ModuleInfo0_5 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 0))));
  MR_Word ProcInfo1_6;
  MR_Word ProcInfo_7;
  MR_Word ModuleInfo_8;
  MR_Word Var_27;
  MR_Integer Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Integer Var_32;

  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_4, &ProcInfo1_6);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ProcInfo1_6, &ProcInfo_7, ModuleInfo0_5, &ModuleInfo_8);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 1))));
  Var_28 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 2))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 5))));
  Var_32 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_9, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_7));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_32));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
  MR_Word NewPred_4,
  MR_Word StmInfo0_5,
  MR_Word * StmInfo_6)
{
  MR_Word OrigPredId_8 = ((MR_Word) ((MR_hl_field(0, StmInfo0_5, 1))));
  MR_Integer OrigProcId_9 = ((MR_Integer) ((MR_hl_field(0, StmInfo0_5, 2))));
  MR_Word OrigProcInfo_10 = ((MR_Word) ((MR_hl_field(0, StmInfo0_5, 3))));
  MR_Word OrigPredInfo_11 = ((MR_Word) ((MR_hl_field(0, StmInfo0_5, 4))));
  MR_Word StmExpanded_12 = ((MR_Unsigned) ((MR_hl_field(0, StmInfo0_5, 5))) & (MR_Integer) 1);
  MR_Integer ExpandNum_13 = ((MR_Integer) ((MR_hl_field(0, StmInfo0_5, 6))));
  MR_Word PredModuleInfo0_14 = ((MR_Word) ((MR_hl_field(0, NewPred_4, 0))));
  MR_Word NewPredId_15 = ((MR_Word) ((MR_hl_field(0, NewPred_4, 1))));
  MR_Integer NewProcId_16 = ((MR_Integer) ((MR_hl_field(0, NewPred_4, 2))));
  MR_Word NewPredInfo_17 = ((MR_Word) ((MR_hl_field(0, NewPred_4, 3))));
  MR_Word NewProcInfo_18 = ((MR_Word) ((MR_hl_field(0, NewPred_4, 4))));
  MR_Word PredModuleInfo_21;

  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(NewPredId_15, NewProcId_16, NewPredInfo_17, NewProcInfo_18, PredModuleInfo0_14, &PredModuleInfo_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *StmInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredModuleInfo_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigPredId_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (OrigProcId_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigProcInfo_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (OrigPredInfo_11));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (StmExpanded_12));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExpandNum_13));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
  MR_Word NewHeadVars_4,
  MR_Word STATE_VARIABLE_NewPredInfo_0_8,
  MR_Word * STATE_VARIABLE_NewPredInfo_9)
{
  MR_Word ProcInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 4))));
  MR_Word ProcInfo_7;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Integer Var_22;

  hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_4, ProcInfo0_6, &ProcInfo_7);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 0))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 1))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 2))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 3))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 5))));
  Var_22 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_8, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_7));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
  MR_Word ProcHeadVars_11,
  MR_Word PredArgTypes_12,
  MR_Word ProcHeadModes_13,
  MR_Word CloneKind_14,
  MR_Word OrigGoal_15,
  MR_Word MaybeDetism_16,
  MR_Word * NewStmPredInfo_17,
  MR_Word * CallGoal_18,
  MR_Word STATE_VARIABLE_StmInfo_0_67,
  MR_Word * STATE_VARIABLE_StmInfo_68)
{
  MR_Word ModuleInfo0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 0))));
  MR_Word PredInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 4))));
  MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 1))));
  MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 2))));
  MR_Integer ExpansionCnt0_24 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 6))));
  MR_Integer Arity_25;
  MR_Word GoalInfo0_27;
  MR_Word ProcInfo_28;
  MR_Word ProcContext_29;
  MR_Word ProcVarTable_30;
  MR_Word ProcInstVarSet_31;
  MR_Word ProcGoal_33;
  MR_Word ProcRttiVarMaps_34;
  MR_Word HasParallelConj_35;
  MR_Word VarNameRemap_36;
  MR_Word NewProcInfo_38;
  MR_Word ModuleName_39;
  MR_String OrigPredName_40;
  MR_Word PredOrFunc_41;
  MR_Word PredContext_42;
  MR_Word Transform_43;
  MR_String NewPredName_44;
  MR_Word OrigPredOrigin_45;
  MR_Word NewPredOrigin_46;
  MR_Word PredTypeVarSet_47;
  MR_Word PredExistQVars_48;
  MR_Word PredClassContext_49;
  MR_Word PredAssertions_50;
  MR_Word Markers_51;
  MR_Integer NewProcId_53;
  MR_Word NewPredInfo_54;
  MR_Word PredicateTable0_55;
  MR_Word NewPredId_56;
  MR_Word PredicateTable_57;
  MR_Word ModuleInfo_58;
  MR_Word CallExpr_59;
  MR_Word CallNonLocals_60;
  MR_Word CallInstmapDelta_61;
  MR_Word CallDeterminism_62;
  MR_Word CallPurity_63;
  MR_Word CallContext_64;
  MR_Word GoalInfo_65;
  MR_Integer ExpansionCnt_66;
  MR_Integer Var_71;
  MR_Word Var_78;
  MR_Word Var_114;
  MR_Integer Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;

  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ProcHeadVars_11, &Arity_25);
  GoalInfo0_27 = ((MR_Word) ((MR_hl_field(0, OrigGoal_15, 1))));
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_21, ProcId_23, &ProcInfo_28);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_28, &ProcContext_29);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_28, &ProcVarTable_30);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_28, &ProcInstVarSet_31);
  if ((MaybeDetism_16 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_28, &CallDeterminism_62);
  else
    CallDeterminism_62 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_16, 0))));
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_28, &ProcGoal_33);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_28, &ProcRttiVarMaps_34);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_28, &HasParallelConj_35);
  hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_28, &VarNameRemap_36);
  hlds__hlds_pred__proc_info_create_14_p_0(ProcContext_29, (MR_Word) ((MR_Unsigned) 0U), ProcVarTable_30, ProcHeadVars_11, ProcInstVarSet_31, ProcHeadModes_13, (MR_Integer) 2, CallDeterminism_62, ProcGoal_33, ProcRttiVarMaps_34, (MR_Integer) 1, HasParallelConj_35, VarNameRemap_36, &NewProcInfo_38);
  ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
  OrigPredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
  PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_21, &PredContext_42);
  Var_71 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_22);
  {
    Transform_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_43, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Transform_43, 1) = (MR_Box) (((((MR_Unsigned) (PredOrFunc_41) << 3)) | (MR_Unsigned) (CloneKind_14)));
    MR_hl_field(3, Transform_43, 2) = ((MR_Box) (Arity_25));
    MR_hl_field(3, Transform_43, 3) = ((MR_Box) (Var_71));
    MR_hl_field(3, Transform_43, 4) = ((MR_Box) (ExpansionCnt0_24));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(OrigPredName_40, Transform_43, &NewPredName_44);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_21, &OrigPredOrigin_45);
  {
    NewPredOrigin_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NewPredOrigin_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, NewPredOrigin_46, 1) = ((MR_Box) (OrigPredOrigin_45));
    MR_hl_field(3, NewPredOrigin_46, 2) = ((MR_Box) (PredId_22));
    MR_hl_field(3, NewPredOrigin_46, 3) = ((MR_Box) (ProcId_23));
  }
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &PredTypeVarSet_47);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_21, &PredExistQVars_48);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_21, &PredClassContext_49);
  hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo_21, &PredAssertions_50);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_51);
  hlds__hlds_pred__pred_info_create_17_p_0(PredOrFunc_41, ModuleName_39, NewPredName_44, PredContext_42, NewPredOrigin_46, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_51, PredArgTypes_12, PredTypeVarSet_47, PredExistQVars_48, PredClassContext_49, PredAssertions_50, VarNameRemap_36, (MR_Word) (&transform_hlds__stm_expand_scalar_common_3[27]), NewProcInfo_38, &NewProcId_53, &NewPredInfo_54);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_20, &PredicateTable0_55);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_54, &NewPredId_56, PredicateTable0_55, &PredicateTable_57);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_57, ModuleInfo0_20, &ModuleInfo_58);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (ModuleName_39));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (NewPredName_44));
  }
  {
    CallExpr_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallExpr_59, 0) = ((MR_Box) (NewPredId_56));
    MR_hl_field(2, CallExpr_59, 1) = ((MR_Box) (NewProcId_53));
    MR_hl_field(2, CallExpr_59, 2) = ((MR_Box) (ProcHeadVars_11));
    MR_hl_field(2, CallExpr_59, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, CallExpr_59, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, CallExpr_59, 5) = ((MR_Box) (Var_78));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProcHeadVars_11, &CallNonLocals_60);
  hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo0_20, ProcHeadVars_11, ProcHeadModes_13, &CallInstmapDelta_61);
  CallPurity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_27);
  CallContext_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_27);
  hlds__hlds_goal__goal_info_init_6_p_0(CallNonLocals_60, CallInstmapDelta_61, CallDeterminism_62, CallPurity_63, CallContext_64, &GoalInfo_65);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CallGoal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CallExpr_59));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_65));
  }
  ExpansionCnt_66 = (MR_Integer) ((MR_Unsigned) ExpansionCnt0_24 + (MR_Unsigned) 1);
  Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 1))));
  Var_115 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 2))));
  Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 3))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 4))));
  Var_118 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_67, 5))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_StmInfo_68 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_58));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_115));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_116));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_117));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_118));
    MR_hl_field(0, base, 6) = ((MR_Box) (ExpansionCnt_66));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *NewStmPredInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_58));
    MR_hl_field(0, base, 1) = ((MR_Box) (NewPredId_56));
    MR_hl_field(0, base, 2) = ((MR_Box) (NewProcId_53));
    MR_hl_field(0, base, 3) = ((MR_Box) (NewPredInfo_54));
    MR_hl_field(0, base, 4) = ((MR_Box) (NewProcInfo_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (CallContext_64));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Integer) 0));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_35;

  transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2142__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_35);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
  MR_String Name_9,
  MR_Word ResultVar0_10,
  MR_Word ResultType_11,
  MR_Word * ResultVar_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_30,
  MR_Word * STATE_VARIABLE_NewPredInfo_31,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33)
{
  MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 0))));
  MR_Word NewProcInfo0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 4))));
  MR_Word NewPredVarTable0_17;
  MR_Word NewHeadVars0_18;
  MR_Word NewPredVarTable1_19;
  MR_Word ResultIsDummy_20;
  MR_Word ResultVarEntry_21;
  MR_Word NewPredVarTable_22;
  MR_Word VarMapping_23;
  MR_Word MapLambda_24;
  MR_Word NewHeadVars_27;
  MR_Word NewProcInfo1_28;
  MR_Word NewProcInfo_29;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Integer Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Integer Var_58;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(NewProcInfo0_16, &NewPredVarTable0_17);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(NewProcInfo0_16, &NewHeadVars0_18);
  parse_tree__var_table__delete_var_entry_3_p_0(ResultVar0_10, NewPredVarTable0_17, &NewPredVarTable1_19);
  ResultIsDummy_20 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, ResultType_11);
  {
    ResultVarEntry_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultVarEntry_21, 0) = ((MR_Box) (Name_9));
    MR_hl_field(0, ResultVarEntry_21, 1) = ((MR_Box) (ResultType_11));
    MR_hl_field(0, ResultVarEntry_21, 2) = (MR_Box) ((MR_Unsigned) (ResultIsDummy_20));
  }
  parse_tree__var_table__add_var_entry_4_p_0(ResultVarEntry_21, ResultVar_12, NewPredVarTable1_19, &NewPredVarTable_22);
  VarMapping_23 = mercury__map__singleton_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (ResultVar0_10)), ((MR_Box) (*ResultVar_12)));
  {
    MapLambda_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
    MR_hl_field(0, MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
    MR_hl_field(0, MapLambda_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, MapLambda_24, 3) = ((MR_Box) (ResultVar0_10));
    MR_hl_field(0, MapLambda_24, 4) = ((MR_Box) (*ResultVar_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), MapLambda_24, NewHeadVars0_18, &NewHeadVars_27);
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_23, STATE_VARIABLE_Goal_0_32, STATE_VARIABLE_Goal_33);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(NewPredVarTable_22, NewProcInfo0_16, &NewProcInfo1_28);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(NewHeadVars_27, NewProcInfo1_28, &NewProcInfo_29);
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 0))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 1))));
  Var_54 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 2))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 3))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 5))));
  Var_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_30, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_31 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (NewProcInfo_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_58));
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_51,
  MR_Word * STATE_VARIABLE_NewPredInfo_52)
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
  MR_Word Cases_43;
  MR_Word DisjGoal_44;
  MR_Word PostAtomicTopLevelList_45;
  MR_Word PostAtomicGoal0_46;
  MR_Word PostAtomicGoal_47;
  MR_Word TopLevelGoalList0_49;
  MR_Word TopLevelGoalList_50;
  MR_Word STATE_VARIABLE_NewPredInfo_1_53;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_NewPredInfo_2_56;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_NewPredInfo_3_60;
  MR_Word Var_66;
  MR_Word Var_75;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_112;
  MR_Word Var_118;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_131;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_152;
  MR_Word Var_153;

  StmModuleName_22 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  ExceptionModuleName_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  AtomicGoalInfo_25 = ((MR_Word) ((MR_hl_field(0, AtomicGoal_13, 1))));
  Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(AtomicGoalInfo_25);
  transform_hlds__stm_expand__construct_output_8_p_0(Context_26, AtomicGoalVars_12, ResultType_14, ResultVar_15, StmInfo_20, &AssignResult_27, STATE_VARIABLE_NewPredInfo_0_51, &STATE_VARIABLE_NewPredInfo_1_53);
  Var_54 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_54, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[13])), &IsValidVar_28, STATE_VARIABLE_NewPredInfo_1_53, &STATE_VARIABLE_NewPredInfo_2_56);
  ValidTrueFunctor_29 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
  ValidFalseFunctor_30 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
  RollbackCons_31 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
  Var_58 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_assignment_8_p_0(Context_26, RollbackCons_31, Var_58, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[14])), &ConstRollbackGoal_32, &RollbackVar_33, STATE_VARIABLE_NewPredInfo_2_56, &STATE_VARIABLE_NewPredInfo_3_60);
  Var_66 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_60, StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_66, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &Goal_StmLock_Call_34);
  Var_75 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_60, StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_75, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &Goal_StmUnLock_Call_35);
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (IsValidVar_28));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (StmUO_17));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (StmUO_17));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (IsValidVar_28));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[4])));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_96));
  }
  Var_84 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_91);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_60, StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_83, Var_84, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &Goal_StmValidate_Call_36);
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (StmUO_17));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_106 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_112);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_60, StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_105, Var_106, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &Goal_StmCommit_Call_37);
  Var_118 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__make_type_info_5_p_0(Var_118, &TypeInfoVar_38, &CreateTypeInfoGoals_39, STATE_VARIABLE_NewPredInfo_3_60, STATE_VARIABLE_NewPredInfo_52);
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (TypeInfoVar_38));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (RollbackVar_33));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (TypeInfoVar_38));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_123));
  }
  Var_124 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_131);
  transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_52, ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, Var_122, Var_123, Var_124, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Goal_ExceptionThrow_Call_40);
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Goal_StmUnLock_Call_35));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Goal_StmCommit_Call_37));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_134, &Goal_ValidBranch_41);
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (ConstRollbackGoal_32));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (Goal_StmUnLock_Call_35));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_40));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CreateTypeInfoGoals_39, Var_142);
  Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_138, Var_141);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_137, &Goal_InvalidBranch_42);
  {
    Var_144 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_144, 0) = ((MR_Box) (ValidTrueFunctor_29));
    MR_hl_field(0, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_144, 2) = ((MR_Box) (Goal_ValidBranch_41));
  }
  {
    Var_147 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_147, 0) = ((MR_Box) (ValidFalseFunctor_30));
    MR_hl_field(0, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_147, 2) = ((MR_Box) (Goal_InvalidBranch_42));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Cases_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Cases_43, 0) = ((MR_Box) (Var_144));
    MR_hl_field(1, Cases_43, 1) = ((MR_Box) (Var_146));
  }
  transform_hlds__stm_expand__create_switch_disjunction_6_p_0(*STATE_VARIABLE_NewPredInfo_52, IsValidVar_28, Cases_43, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_44);
  {
    Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_153, 0) = ((MR_Box) (DisjGoal_44));
    MR_hl_field(1, Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (Goal_StmValidate_Call_36));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_153));
  }
  {
    PostAtomicTopLevelList_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PostAtomicTopLevelList_45, 0) = ((MR_Box) (Goal_StmLock_Call_34));
    MR_hl_field(1, PostAtomicTopLevelList_45, 1) = ((MR_Box) (Var_152));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(PostAtomicTopLevelList_45, &PostAtomicGoal0_46);
  transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(PostAtomicGoal0_46, (MR_Integer) 0, &PostAtomicGoal_47);
  switch (CopySTM_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_167;
        MR_Word Var_169;
        MR_Word Var_170;

        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (AtomicGoal_13));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (PostAtomicGoal_47));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AssignResult_27, Var_170);
        TopLevelGoalList0_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_167, Var_169);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CopySTMAssign_48;
        MR_Word Var_156;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;

        Var_158 = parse_tree__prog_mode__unique_inst_0_f_0();
        Var_159 = parse_tree__prog_mode__unique_inst_0_f_0();
        Var_160 = parse_tree__prog_mode__clobbered_inst_0_f_0();
        {
          Var_156 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_156, 1) = ((MR_Box) (Var_158));
          MR_hl_field(0, Var_156, 2) = ((MR_Box) (Var_159));
          MR_hl_field(0, Var_156, 3) = ((MR_Box) (Var_160));
        }
        transform_hlds__stm_expand__create_var_unify_5_p_0(*STATE_VARIABLE_NewPredInfo_52, StmUO_17, StmDI_16, Var_156, &CopySTMAssign_48);
        {
          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_161, 0) = ((MR_Box) (AtomicGoal_13));
          MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_165, 0) = ((MR_Box) (PostAtomicGoal_47));
          MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (CopySTMAssign_48));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_165));
        }
        Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AssignResult_27, Var_164);
        TopLevelGoalList0_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_161, Var_163);
      }
      break;
  }
  hlds__goal_transform__flatten_conj_2_p_0(TopLevelGoalList0_49, &TopLevelGoalList_50);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(TopLevelGoalList_50, Goal_19);
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
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Type_11, MaybeName_12, Var_14, STATE_VARIABLE_NewPredInfo_0_16, STATE_VARIABLE_NewPredInfo_17);
  hlds__make_goal__make_const_construction_4_p_0(Context_9, *Var_14, ConsId_10, Goal_13);
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
  MR_Word OutputVars_17;
  MR_Word OutputTypes_19;
  MR_Word InputSet_46 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_10, 0))));
  MR_Word OutputSet_47 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_10, 2))));
  MR_Word ProcInfo0_57;
  MR_Word VarTable_58;
  MR_Word InputVars_59;
  MR_Word OutputVars_60;
  MR_Word InputSet_67;
  MR_Word OutputSet_68;
  MR_Word Var_16;
  MR_Word Var_18;

  Var_16 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_46);
  OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_47);
  ProcInfo0_57 = ((MR_Word) ((MR_hl_field(0, StmInfo_13, 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_57, &VarTable_58);
  InputSet_67 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_10, 0))));
  OutputSet_68 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_10, 2))));
  InputVars_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_67);
  OutputVars_60 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_68);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_58, InputVars_59, &Var_18);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_58, OutputVars_60, &OutputTypes_19);
  if ((OutputTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goal_20;
    MR_Word Var_30;

    Var_30 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
    hlds__make_goal__make_const_construction_4_p_0(Context_9, ResultVar_12, Var_30, &Goal_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_0_28;
  }
  else
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, OutputTypes_19, 1))));

    if ((Var_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OutVar_22;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Goal_41;
      MR_Box conv0_OutVar_22;

      conv0_OutVar_22 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_17);
      OutVar_22 = ((MR_Word) (conv0_OutVar_22));
      Var_35 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_36 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_37 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (Var_35));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) (Var_36));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (Var_37));
      }
      transform_hlds__stm_expand__create_var_unify_5_p_0(STATE_VARIABLE_NewPredInfo_0_28, ResultVar_12, OutVar_22, Var_33, &Goal_41);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_41));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_0_28;
    }
    else
    {
      MR_Word MakeType_27;
      MR_Word Goal_42;
      MR_Word ModuleInfo0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 0))));
      MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 1))));
      MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 2))));
      MR_Word PredInfo0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 3))));
      MR_Word ProcInfo0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 4))));
      MR_Word Context_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 5))));
      MR_Integer VarCnt_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 6))));
      MR_Word ModuleInfo_85;
      MR_Word PredInfo_86;
      MR_Word ProcInfo_87;
      MR_Word Var_26;

      check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(ResultType_11, Context_83, &Var_26, &MakeType_27, ModuleInfo0_78, &ModuleInfo_85, PredInfo0_81, &PredInfo_86, ProcInfo0_82, &ProcInfo_87);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_NewPredInfo_29 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_85));
        MR_hl_field(0, base, 1) = ((MR_Box) (PredId_79));
        MR_hl_field(0, base, 2) = ((MR_Box) (ProcId_80));
        MR_hl_field(0, base, 3) = ((MR_Box) (PredInfo_86));
        MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_87));
        MR_hl_field(0, base, 5) = ((MR_Box) (Context_83));
        MR_hl_field(0, base, 6) = ((MR_Box) (VarCnt_84));
      }
      hlds__make_goal__construct_tuple_3_p_0(ResultVar_12, OutputVars_17, &Goal_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (MakeType_27));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_5_p_0(
  MR_Word NewPredInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_6, 5))));
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_6, 0))));
  MR_Word UnifyType_13;
  MR_Word UnifyRHS_14;
  MR_Word LHSInitInst_16;
  MR_Word LHSFinalInst_17;
  MR_Word RHSInitInst_18;
  MR_Word RHSFinalInst_19;
  MR_Word LHSTuple_20;
  MR_Word RHSTuple_21;
  MR_Word InstmapDelta_22;
  MR_Word GoalExpr_23;
  MR_Word NonLocals_24;
  MR_Word GoalInfo_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    UnifyType_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, UnifyType_13, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(2, UnifyType_13, 1) = ((MR_Box) (VarRHS_8));
  }
  {
    UnifyRHS_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyRHS_14, 0) = ((MR_Box) (VarRHS_8));
  }
  LHSInitInst_16 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 0))));
  LHSFinalInst_17 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 1))));
  RHSInitInst_18 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 2))));
  RHSFinalInst_19 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 3))));
  {
    LHSTuple_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTuple_20, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(0, LHSTuple_20, 1) = ((MR_Box) (LHSInitInst_16));
    MR_hl_field(0, LHSTuple_20, 2) = ((MR_Box) (LHSFinalInst_17));
  }
  {
    RHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTuple_21, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(0, RHSTuple_21, 1) = ((MR_Box) (RHSInitInst_18));
    MR_hl_field(0, RHSTuple_21, 2) = ((MR_Box) (RHSFinalInst_19));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (RHSTuple_21));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (LHSTuple_20));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
  }
  hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_12, Var_30, &InstmapDelta_22);
  {
    GoalExpr_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_23, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, GoalExpr_23, 1) = ((MR_Box) (UnifyRHS_14));
    MR_hl_field(1, GoalExpr_23, 2) = ((MR_Box) (UnifyMode_9));
    MR_hl_field(1, GoalExpr_23, 3) = ((MR_Box) (UnifyType_13));
    MR_hl_field(1, GoalExpr_23, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[7]));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_33, &NonLocals_24);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_24, InstmapDelta_22, (MR_Integer) 0, (MR_Integer) 0, Context_11, &GoalInfo_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_27));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NewPredVarTable_18;
  MR_Word conv0_STATE_VARIABLE_VarMapping_20;

  transform_hlds__stm_expand__apply_varset_to_preds_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NewPredVarTable_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarMapping_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NewPredVarTable_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarMapping_20));
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word AtomicGoal0_10,
  MR_Word * AtomicGoal_11,
  MR_Word AtomicGoalVars_12,
  MR_Word InnerDI_13,
  MR_Word InnerUO_14,
  MR_Word STATE_VARIABLE_NewPredInfo_0_34,
  MR_Word * STATE_VARIABLE_NewPredInfo_35,
  MR_Word STATE_VARIABLE_StmInfo_0_36,
  MR_Word * STATE_VARIABLE_StmInfo_37)
{
  MR_bool succeeded;
  MR_Word NewProcInfo0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 4))));
  MR_Word OldProcInfo0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 3))));
  MR_Word NewPredVarTable0_19;
  MR_Word OldPredVarTable_20;
  MR_Word LocalVars_22;
  MR_Word OrigInnerDI_24;
  MR_Word OrigInnerUO_25;
  MR_Word LocalVarList_26;
  MR_Word VarMapping0_27;
  MR_Word NewPredVarTable_28;
  MR_Word VarMapping1_29;
  MR_Word VarMapping_30;
  MR_Word NewProcInfo_32;
  MR_Word OldProcInfo_33;
  MR_Word Var_38;
  MR_Box conv3_NewPredVarTable_28;
  MR_Box conv2_VarMapping1_29;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Integer Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Integer Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Integer Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Integer Var_64;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(NewProcInfo0_17, &NewPredVarTable0_19);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(OldProcInfo0_18, &OldPredVarTable_20);
  LocalVars_22 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_12, 1))));
  OrigInnerDI_24 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_12, 3))));
  OrigInnerUO_25 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_12, 4))));
  LocalVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LocalVars_22);
  VarMapping0_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_6[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (OldPredVarTable_20));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[0]), Var_38, LocalVarList_26, ((MR_Box) (NewPredVarTable0_19)), &conv3_NewPredVarTable_28, ((MR_Box) (VarMapping0_27)), &conv2_VarMapping1_29);
  NewPredVarTable_28 = ((MR_Word) (conv3_NewPredVarTable_28));
  VarMapping1_29 = ((MR_Word) (conv2_VarMapping1_29));
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_24)), ((MR_Box) (OrigInnerUO_25)));
  if (succeeded)
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_24)), ((MR_Box) (InnerDI_13)), VarMapping1_29, &VarMapping_30);
  else
  {
    MR_Word VarMapping2_31;

    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerDI_24)), ((MR_Box) (InnerDI_13)), VarMapping1_29, &VarMapping2_31);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), ((MR_Box) (OrigInnerUO_25)), ((MR_Box) (InnerUO_14)), VarMapping2_31, &VarMapping_30);
  }
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VarMapping_30, AtomicGoal0_10, AtomicGoal_11);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(NewPredVarTable_28, NewProcInfo0_17, &NewProcInfo_32);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(OldPredVarTable_20, OldProcInfo0_18, &OldProcInfo_33);
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 0))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 1))));
  Var_53 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 2))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 3))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 5))));
  Var_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_34, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_35 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 4) = ((MR_Box) (NewProcInfo_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_57));
  }
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 0))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 1))));
  Var_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 2))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 4))));
  Var_63 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 5))) & (MR_Integer) 1);
  Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StmInfo_0_36, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_StmInfo_37 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 3) = ((MR_Box) (OldProcInfo_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_63));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_64));
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
  MR_Word STATE_VARIABLE_NewPredInfo_0_43,
  MR_Word * STATE_VARIABLE_NewPredInfo_44)
{
  MR_Word InputVars_22;
  MR_Word InputTypes_24;
  MR_Word InputModes_26;
  MR_Word AtomicClosureVar_28;
  MR_Word ClosureAssign_29;
  MR_Word ReturnTypeInfoVar_30;
  MR_Word ReturnTypeInfoVarAssign_31;
  MR_Word Exception_Result_Type_32;
  MR_Word ExceptRes_Success_Functor_33;
  MR_Word ExceptRes_Failure_Functor_34;
  MR_Word ReturnExceptVar_35;
  MR_Word Goal_StmCreate_36;
  MR_Word Goal_TryStm_37;
  MR_Word Branch_AtomicSuccess_38;
  MR_Word Branch_AtomicException_39;
  MR_Word Cases_40;
  MR_Word DisjGoal_41;
  MR_Word Goal0_42;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_NewPredInfo_1_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_NewPredInfo_2_61;
  MR_Word STATE_VARIABLE_NewPredInfo_3_63;
  MR_Word Var_65;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
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
  MR_Word STATE_VARIABLE_NewPredInfo_4_124;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_27;

  transform_hlds__stm_expand__get_input_output_varlist_3_p_0(AtomicGoalVars_13, &InputVars_22, &Var_23);
  transform_hlds__stm_expand__get_input_output_types_4_p_0(AtomicGoalVars_13, StmInfo_20, &InputTypes_24, &Var_25);
  transform_hlds__stm_expand__get_input_output_modes_3_p_0(AtomicGoalVars_13, &InputModes_26, &Var_27);
  Var_50 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  Var_52 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ReturnType_14));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InputTypes_24, Var_48);
  Var_55 = parse_tree__prog_mode__out_mode_0_f_0();
  Var_57 = parse_tree__prog_mode__di_mode_0_f_0();
  Var_59 = parse_tree__prog_mode__uo_mode_0_f_0();
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InputModes_26, Var_54);
  transform_hlds__stm_expand__create_closure_8_p_0(WrapperID_17, InputVars_22, Var_45, Var_46, &AtomicClosureVar_28, &ClosureAssign_29, STATE_VARIABLE_NewPredInfo_0_43, &STATE_VARIABLE_NewPredInfo_1_47);
  transform_hlds__stm_expand__make_type_info_5_p_0(ReturnType_14, &ReturnTypeInfoVar_30, &ReturnTypeInfoVarAssign_31, STATE_VARIABLE_NewPredInfo_1_47, &STATE_VARIABLE_NewPredInfo_2_61);
  Exception_Result_Type_32 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(ReturnType_14);
  ExceptRes_Success_Functor_33 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
  ExceptRes_Failure_Functor_34 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Exception_Result_Type_32, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[7])), &ReturnExceptVar_35, STATE_VARIABLE_NewPredInfo_2_61, &STATE_VARIABLE_NewPredInfo_3_63);
  Var_65 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (StmVarDI_15));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (StmVarDI_15));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_76);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_63, Var_65, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_69, Var_70, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &Goal_StmCreate_36);
  Var_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (ReturnTypeInfoVar_30));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (StmVarUO_16));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (StmVarDI_15));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ReturnExceptVar_35));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (AtomicClosureVar_28));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_93));
  }
  Var_99 = (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[4]));
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (ReturnTypeInfoVar_30));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) (AtomicClosureVar_28));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) (ReturnExceptVar_35));
    MR_hl_field(0, Var_108, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (StmVarDI_15));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[6])));
  }
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (StmVarUO_16));
    MR_hl_field(0, Var_118, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_102));
  }
  Var_87 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_97);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_3_63, Var_82, (MR_String) "unsafe_try_stm", (MR_Integer) 0, Var_85, Var_86, Var_87, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[8])), (MR_Integer) 4, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Goal_TryStm_37);
  transform_hlds__stm_expand__deconstruct_output_7_p_0(AtomicGoalVars_13, ReturnType_14, ReturnExceptVar_35, &Branch_AtomicSuccess_38, StmInfo_20, STATE_VARIABLE_NewPredInfo_3_63, &STATE_VARIABLE_NewPredInfo_4_124);
  transform_hlds__stm_expand__create_test_on_exception_8_p_0(Context_12, ReturnExceptVar_35, StmVarUO_16, ReturnType_14, RecCall_18, &Branch_AtomicException_39, STATE_VARIABLE_NewPredInfo_4_124, STATE_VARIABLE_NewPredInfo_44);
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) (ExceptRes_Failure_Functor_34));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_126, 2) = ((MR_Box) (Branch_AtomicException_39));
  }
  {
    Var_129 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_129, 0) = ((MR_Box) (ExceptRes_Success_Functor_33));
    MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_129, 2) = ((MR_Box) (Branch_AtomicSuccess_38));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Cases_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Cases_40, 0) = ((MR_Box) (Var_126));
    MR_hl_field(1, Cases_40, 1) = ((MR_Box) (Var_128));
  }
  transform_hlds__stm_expand__create_switch_disjunction_6_p_0(*STATE_VARIABLE_NewPredInfo_44, ReturnExceptVar_35, Cases_40, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_41);
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Goal_StmCreate_36));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (ReturnTypeInfoVarAssign_31));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (DisjGoal_41));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (Goal_TryStm_37));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (ClosureAssign_29));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
  }
  Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_135, Var_136);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_134, &Goal0_42);
  transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(Goal0_42, (MR_Integer) 0, Goal_19);
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_20;

  transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2645__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_20));
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_14;

  transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2644__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_14));
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * InputModes_5,
  MR_Word * OutputModes_6)
{
  MR_Word InputVars_7;
  MR_Word OutputVars_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word InputSet_19 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_4, 0))));
  MR_Word OutputSet_20 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_4, 2))));

  InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_19);
  OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_20);
  Var_10 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Var_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_9, InputVars_7, InputModes_5);
  Var_12 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_11, OutputVars_8, OutputModes_6);
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
  MR_Word StmGoalVars_5,
  MR_Word StmInfo_6,
  MR_Word * InputTypes_7,
  MR_Word * OutputTypes_8)
{
  MR_Word ProcInfo0_9 = ((MR_Word) ((MR_hl_field(0, StmInfo_6, 3))));
  MR_Word VarTable_10;
  MR_Word InputVars_11;
  MR_Word OutputVars_12;
  MR_Word InputSet_19;
  MR_Word OutputSet_20;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_9, &VarTable_10);
  InputSet_19 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_5, 0))));
  OutputSet_20 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_5, 2))));
  InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_19);
  OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_20);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, InputVars_11, InputTypes_7);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, OutputVars_12, OutputTypes_8);
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
  MR_Word StmGoalVars_4,
  MR_Word * Input_5,
  MR_Word * Output_6)
{
  MR_Word InputSet_7 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_4, 0))));
  MR_Word OutputSet_8 = ((MR_Word) ((MR_hl_field(0, StmGoalVars_4, 2))));

  *Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_7);
  *Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_8);
}

static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word Type_6,
  MR_Word * TypeInfoVar_7,
  MR_Word * Goals_8,
  MR_Word NewPredInfo0_9,
  MR_Word * NewPredInfo_10)
{
  MR_Word ModuleInfo0_11 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_9, 0))));
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_9, 1))));
  MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, NewPredInfo0_9, 2))));
  MR_Word PredInfo0_14 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_9, 3))));
  MR_Word ProcInfo0_15 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_9, 4))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, NewPredInfo0_9, 5))));
  MR_Integer VarCnt_17 = ((MR_Integer) ((MR_hl_field(0, NewPredInfo0_9, 6))));
  MR_Word ModuleInfo_18;
  MR_Word PredInfo_19;
  MR_Word ProcInfo_20;

  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(Type_6, Context_16, TypeInfoVar_7, Goals_8, ModuleInfo0_11, &ModuleInfo_18, PredInfo0_14, &PredInfo_19, ProcInfo0_15, &ProcInfo_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *NewPredInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredId_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcId_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredInfo_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarCnt_17));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word GoalIn_4,
  MR_Word ScopePurity_5,
  MR_Word * GoalOut_6)
{
  MR_Word GoalInInfo_8 = ((MR_Word) ((MR_hl_field(0, GoalIn_4, 1))));
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
    Reason_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Reason_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Reason_15, 1) = (MR_Box) ((MR_Unsigned) (ScopePurity_5));
  }
  {
    GoalOutExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalOutExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, GoalOutExpr_16, 1) = ((MR_Box) (Reason_15));
    MR_hl_field(3, GoalOutExpr_16, 2) = ((MR_Box) (GoalIn_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *GoalOut_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalOutExpr_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
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
  MR_Word ShroudPredProcID_16;
  MR_Word ClosureType_17;
  MR_Word ClosureCons_18;
  MR_Word ClosureAssignGoal0_19;
  MR_Word ClosureAssignInstmapDeltaList_20;
  MR_Word ClosureAssignInstmapDelta_21;
  MR_Word ClosureAssignExpr_22;
  MR_Word ClosureAssignInfo0_23;
  MR_Word ClosureAssignInfo_24;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;

  ShroudPredProcID_16 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(PredProcID_9);
  parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0((MR_Integer) 0, ArgTypes_11, &ClosureType_17);
  ClosureCons_18 = (MR_Word) (MR_mkword(2, (MR_Word) (ShroudPredProcID_16)));
  transform_hlds__stm_expand__create_aux_variable_5_p_0(ClosureType_17, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[26])), ClosureVar_13, STATE_VARIABLE_NewPredInfo_0_25, STATE_VARIABLE_NewPredInfo_26);
  hlds__make_goal__construct_functor_4_p_0(*ClosureVar_13, ClosureCons_18, Args_10, &ClosureAssignGoal0_19);
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (*ClosureVar_13));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (ArgModes_12));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_36 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_37)));
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_31, Var_33);
  ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ClosureAssignInstmapDeltaList_20);
  ClosureAssignExpr_22 = ((MR_Word) ((MR_hl_field(0, ClosureAssignGoal0_19, 0))));
  ClosureAssignInfo0_23 = ((MR_Word) ((MR_hl_field(0, ClosureAssignGoal0_19, 1))));
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ClosureAssignInstmapDelta_21, ClosureAssignInfo0_23, &ClosureAssignInfo_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ClosureAssignGoal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClosureAssignExpr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClosureAssignInfo_24));
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
  MR_Word OutputVars_15;
  MR_Word OutputTypes_17;
  MR_Word InputSet_54 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_8, 0))));
  MR_Word OutputSet_55 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_8, 2))));
  MR_Word ProcInfo0_65;
  MR_Word VarTable_66;
  MR_Word InputVars_67;
  MR_Word OutputVars_68;
  MR_Word InputSet_75;
  MR_Word OutputSet_76;
  MR_Word Var_14;
  MR_Word Var_16;

  Var_14 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_54);
  OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_55);
  ProcInfo0_65 = ((MR_Word) ((MR_hl_field(0, StmInfo_12, 3))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_65, &VarTable_66);
  InputSet_75 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_8, 0))));
  OutputSet_76 = ((MR_Word) ((MR_hl_field(0, AtomicGoalVars_8, 2))));
  InputVars_67 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputSet_75);
  OutputVars_68 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputSet_76);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_66, InputVars_67, &Var_16);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_66, OutputVars_68, &OutputTypes_17);
  if ((OutputTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SuccessResultVar_18;
    MR_Word Var_33;
    MR_Word Var_34;

    transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[23])), &SuccessResultVar_18, STATE_VARIABLE_NewPredInfo_0_28, STATE_VARIABLE_NewPredInfo_29);
    Var_33 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (SuccessResultVar_18));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_33, Var_34, Goal_11);
  }
  else
  {
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, OutputTypes_17, 1))));

    if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OutVar_20;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box conv0_OutVar_20;

      conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_1[1]), OutputVars_15);
      OutVar_20 = ((MR_Word) (conv0_OutVar_20));
      Var_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (OutVar_20));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_37, Var_38, Goal_11);
      *STATE_VARIABLE_NewPredInfo_29 = STATE_VARIABLE_NewPredInfo_0_28;
    }
    else
    {
      MR_Word MakeType_25;
      MR_Word DeconstructGoal_26;
      MR_Word UnifyOutputGoal_27;
      MR_Word STATE_VARIABLE_NewPredInfo_2_41;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word SuccessResultVar_50;
      MR_Word ModuleInfo0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 0))));
      MR_Word PredId_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 1))));
      MR_Integer ProcId_88 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 2))));
      MR_Word PredInfo0_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 3))));
      MR_Word ProcInfo0_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 4))));
      MR_Word Context_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 5))));
      MR_Integer VarCnt_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_28, 6))));
      MR_Word ModuleInfo_93;
      MR_Word PredInfo_94;
      MR_Word ProcInfo_95;
      MR_Word Var_24;

      check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(ReturnType_9, Context_91, &Var_24, &MakeType_25, ModuleInfo0_86, &ModuleInfo_93, PredInfo0_89, &PredInfo_94, ProcInfo0_90, &ProcInfo_95);
      {
        STATE_VARIABLE_NewPredInfo_2_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 0) = ((MR_Box) (ModuleInfo_93));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 1) = ((MR_Box) (PredId_87));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 2) = ((MR_Box) (ProcId_88));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 3) = ((MR_Box) (PredInfo_94));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 4) = ((MR_Box) (ProcInfo_95));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 5) = ((MR_Box) (Context_91));
        MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_41, 6) = ((MR_Box) (VarCnt_92));
      }
      transform_hlds__stm_expand__create_aux_variable_5_p_0(ReturnType_9, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[24])), &SuccessResultVar_50, STATE_VARIABLE_NewPredInfo_2_41, STATE_VARIABLE_NewPredInfo_29);
      Var_45 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (SuccessResultVar_50));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__deconstruct_functor_4_p_0(ReturnExceptVar_10, Var_45, Var_46, &DeconstructGoal_26);
      hlds__make_goal__deconstruct_tuple_3_p_0(SuccessResultVar_50, OutputVars_15, &UnifyOutputGoal_27);
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (UnifyOutputGoal_27));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (MakeType_25));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (DeconstructGoal_26));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
      }
      transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_48, Goal_11);
    }
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
  MR_Word STATE_VARIABLE_NewPredInfo_1_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_NewPredInfo_2_36;
  MR_Word Var_37;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_NewPredInfo_3_57;
  MR_Word STATE_VARIABLE_NewPredInfo_4_58;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_NewPredInfo_5_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word ModuleInfo0_70;
  MR_Word PredId_71;
  MR_Integer ProcId_72;
  MR_Word PredInfo0_73;
  MR_Word ProcInfo0_74;
  MR_Word Context_75;
  MR_Integer VarCnt_76;
  MR_Word ModuleInfo_77;
  MR_Word PredInfo_78;
  MR_Word ProcInfo_79;
  MR_Word Context_80;
  MR_Word ModuleInfo_81;

  Var_28 = parse_tree__builtin_lib_types__univ_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_28, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[6])), &ExceptUnivVar_16, STATE_VARIABLE_NewPredInfo_0_26, &STATE_VARIABLE_NewPredInfo_1_30);
  Var_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (ExceptUnivVar_16));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_goal__deconstruct_functor_4_p_0(ExceptVar_10, Var_32, Var_33, &DeconstructException_17);
  Var_35 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  ModuleInfo0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 0))));
  PredId_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 1))));
  ProcId_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 2))));
  PredInfo0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 3))));
  ProcInfo0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 4))));
  Context_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 5))));
  VarCnt_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_30, 6))));
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(Var_35, Context_75, &TypeInfoRollbackVar_18, &TypeInfoRollbackAssign_19, ModuleInfo0_70, &ModuleInfo_77, PredInfo0_73, &PredInfo_78, ProcInfo0_74, &ProcInfo_79);
  {
    STATE_VARIABLE_NewPredInfo_2_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 0) = ((MR_Box) (ModuleInfo_77));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 1) = ((MR_Box) (PredId_71));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 2) = ((MR_Box) (ProcId_72));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 3) = ((MR_Box) (PredInfo_78));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 4) = ((MR_Box) (ProcInfo_79));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 5) = ((MR_Box) (Context_75));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 6) = ((MR_Box) (VarCnt_76));
  }
  Var_37 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (StmVar_11));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (StmVar_11));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[6])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_42 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_48);
  ModuleInfo_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 0))));
  Context_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_2_36, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_81, (MR_Integer) 0, Var_37, (MR_String) "stm_discard_transaction_log", (MR_Word) ((MR_Unsigned) 0U), Var_41, Var_42, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_80, &DropStateGoal_20);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (RecCall_13));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (DropStateGoal_20));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_54, &TrueGoal_21);
  transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(StmVar_11, ExceptVar_10, ReturnType_12, RecCall_13, &RethrowBranch_22, STATE_VARIABLE_NewPredInfo_2_36, &STATE_VARIABLE_NewPredInfo_3_57);
  transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(StmVar_11, RecCall_13, &RetryBranch_23, STATE_VARIABLE_NewPredInfo_3_57, &STATE_VARIABLE_NewPredInfo_4_58);
  Var_59 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
  transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_9, TypeInfoRollbackVar_18, ExceptUnivVar_16, Var_59, RetryBranch_23, RethrowBranch_22, &FalseGoal_24, STATE_VARIABLE_NewPredInfo_4_58, &STATE_VARIABLE_NewPredInfo_5_60);
  Var_61 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
  transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(Context_9, TypeInfoRollbackVar_18, ExceptUnivVar_16, Var_61, TrueGoal_21, FalseGoal_24, &IfThenElseGoal_25, STATE_VARIABLE_NewPredInfo_5_60, STATE_VARIABLE_NewPredInfo_27);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (DeconstructException_17));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (IfThenElseGoal_25));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoRollbackAssign_19, Var_67);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_64, Var_66);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_63, Goal_14);
}

static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
  MR_Word StmVar_6,
  MR_Word RecCall_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * STATE_VARIABLE_NewPredInfo_15)
{
  MR_Word BlockGoal_10;
  MR_Word UnlockGoal_11;
  MR_Word LockAndValidateGoals_12;
  MR_Word DropStateCall_13;
  MR_Word Var_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Context_61;
  MR_Word ModuleInfo_62;
  MR_Word Context_75;
  MR_Word ModuleInfo_76;

  Var_16 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (StmVar_6));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = hlds__instmap__instmap_delta_bind_var_1_f_0(StmVar_6);
  ModuleInfo_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_14, 0))));
  Context_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_14, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_62, (MR_Integer) 0, Var_16, (MR_String) "stm_block", (MR_Word) ((MR_Unsigned) 0U), Var_20, Var_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_61, &BlockGoal_10);
  Var_27 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  Var_32 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  ModuleInfo_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_14, 0))));
  Context_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_14, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_76, (MR_Integer) 0, Var_27, (MR_String) "stm_unlock", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_32, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_75, &UnlockGoal_11);
  transform_hlds__stm_expand__template_lock_and_validate_7_p_0(StmVar_6, (MR_Integer) 0, BlockGoal_10, UnlockGoal_11, &LockAndValidateGoals_12, STATE_VARIABLE_NewPredInfo_0_14, STATE_VARIABLE_NewPredInfo_15);
  Var_39 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (StmVar_6));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[6])));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_44 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_50);
  transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_15, Var_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_20, Var_44, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &DropStateCall_13);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (RecCall_7));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (DropStateCall_13));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LockAndValidateGoals_12, Var_57);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_56, Goal_8);
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
  MR_Word ReturnTypeInfoVar_14;
  MR_Word ReturnTypeInfoVarAssign_15;
  MR_Word Goal_ExceptionThrow_Call_16;
  MR_Word Goal_ValidBranch_17;
  MR_Word DropStateCall_18;
  MR_Word Goal_InvalidBranch_19;
  MR_Word Goals_20;
  MR_Word STATE_VARIABLE_NewPredInfo_1_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word ModuleInfo0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 0))));
  MR_Word PredId_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 1))));
  MR_Integer ProcId_66 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 2))));
  MR_Word PredInfo0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 3))));
  MR_Word ProcInfo0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 4))));
  MR_Word Context_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 5))));
  MR_Integer VarCnt_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_21, 6))));
  MR_Word ModuleInfo_71;
  MR_Word PredInfo_72;
  MR_Word ProcInfo_73;
  MR_Word Context_74;
  MR_Word ModuleInfo_75;

  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(ReturnType_10, Context_69, &ReturnTypeInfoVar_14, &ReturnTypeInfoVarAssign_15, ModuleInfo0_64, &ModuleInfo_71, PredInfo0_67, &PredInfo_72, ProcInfo0_68, &ProcInfo_73);
  {
    STATE_VARIABLE_NewPredInfo_1_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 0) = ((MR_Box) (ModuleInfo_71));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 1) = ((MR_Box) (PredId_65));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 2) = ((MR_Box) (ProcId_66));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 3) = ((MR_Box) (PredInfo_72));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 4) = ((MR_Box) (ProcInfo_73));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 5) = ((MR_Box) (Context_69));
    MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 6) = ((MR_Box) (VarCnt_70));
  }
  Var_24 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (ReturnTypeInfoVar_14));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (ExceptionVar_9));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ReturnTypeInfoVar_14));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_28));
  }
  Var_29 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_36);
  ModuleInfo_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 0))));
  Context_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_1_23, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_75, (MR_Integer) 0, Var_24, (MR_String) "rethrow", Var_27, Var_28, Var_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_74, &Goal_ExceptionThrow_Call_16);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Goal_ExceptionThrow_Call_16));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ReturnTypeInfoVarAssign_15, Var_40);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_39, &Goal_ValidBranch_17);
  Var_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (StmVar_8));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (StmVar_8));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[6])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_53);
  transform_hlds__stm_expand__create_simple_call_12_p_0(STATE_VARIABLE_NewPredInfo_1_23, Var_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_46, Var_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &DropStateCall_18);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (RecursiveCall_11));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (DropStateCall_18));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_59, &Goal_InvalidBranch_19);
  transform_hlds__stm_expand__template_lock_and_validate_7_p_0(StmVar_8, (MR_Integer) 1, Goal_ValidBranch_17, Goal_InvalidBranch_19, &Goals_20, STATE_VARIABLE_NewPredInfo_1_23, STATE_VARIABLE_NewPredInfo_22);
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Goals_20, Goal_12);
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
  MR_Word StmVar_8,
  MR_Word UnlockAfterwards_9,
  MR_Word ValidGoal_10,
  MR_Word InvalidGoal_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_NewPredInfo_0_20,
  MR_Word * STATE_VARIABLE_NewPredInfo_21)
{
  MR_Word IsValidVar_14;
  MR_Word LockCall_15;
  MR_Word ValidCall_16;
  MR_Word Cases_17;
  MR_Word DisjGoal_18;
  MR_Word Var_22;
  MR_Word Var_26;
  MR_Word Var_31;
  MR_Word Var_36;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Context_84;
  MR_Word ModuleInfo_85;

  Var_22 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_22, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[4])), &IsValidVar_14, STATE_VARIABLE_NewPredInfo_0_20, STATE_VARIABLE_NewPredInfo_21);
  Var_26 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  Var_31 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  ModuleInfo_85 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_21, 0))));
  Context_84 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_21, 5))));
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_85, (MR_Integer) 0, Var_26, (MR_String) "stm_lock", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_84, &LockCall_15);
  Var_36 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (IsValidVar_14));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (StmVar_8));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (StmVar_8));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[5])));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (IsValidVar_14));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_53));
  }
  Var_41 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_48);
  transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_21, Var_36, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_40, Var_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &ValidCall_16);
  Var_58 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) (ValidGoal_10));
  }
  Var_62 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) (InvalidGoal_11));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Cases_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Cases_17, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Cases_17, 1) = ((MR_Box) (Var_60));
  }
  transform_hlds__stm_expand__create_switch_disjunction_6_p_0(*STATE_VARIABLE_NewPredInfo_21, IsValidVar_14, Cases_17, (MR_Integer) 0, (MR_Integer) 2, &DisjGoal_18);
  switch (UnlockAfterwards_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_81;
        MR_Word Var_82;

        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (DisjGoal_18));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (ValidCall_16));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LockCall_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_81));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnlockCall_19;
        MR_Word Var_67;
        MR_Word Var_72;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;

        Var_67 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
        Var_72 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_21, Var_67, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_72, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), &UnlockCall_19);
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (DisjGoal_18));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (UnlockCall_19));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (ValidCall_16));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LockCall_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_77));
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_6_p_0(
  MR_Word NewPredInfo_7,
  MR_Word ProgVar_8,
  MR_Word Cases_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word * OutGoal_12)
{
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_7, 5))));
  MR_Word NonLocals_14;
  MR_Word InstMapDelta_15;
  MR_Word OutGoalExpr_16;
  MR_Word GoalInfo_17;

  NonLocals_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_15);
  {
    OutGoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutGoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, OutGoalExpr_16, 1) = ((MR_Box) (ProgVar_8));
    MR_hl_field(3, OutGoalExpr_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, OutGoalExpr_16, 3) = ((MR_Box) (Cases_9));
  }
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_14, InstMapDelta_15, Detism_10, Purity_11, Context_13, &GoalInfo_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *OutGoal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OutGoalExpr_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_9_p_0(
  MR_Word Context_10,
  MR_Word TypeInfoVar_11,
  MR_Word ExceptVar_12,
  MR_Word RollbackExceptCons_13,
  MR_Word TrueGoal_14,
  MR_Word FalseGoal_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_NewPredInfo_0_27,
  MR_Word * STATE_VARIABLE_NewPredInfo_28)
{
  MR_Word UnivPayloadVar_18;
  MR_Word AssignGoal_19;
  MR_Word RollbackExceptVar_20;
  MR_Word UnivCall_21;
  MR_Word TestGoal_23;
  MR_Word CondGoal_24;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_NewPredInfo_1_31;
  MR_Word Var_33;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_65;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Context_88;
  MR_Word OutGoalExpr_89;
  MR_Word NonLocals_90;
  MR_Word InstMapDelta_91;
  MR_Word GoalInfo_92;
  MR_Word _UnifyCall_22;

  Var_29 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_29, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[1])), &UnivPayloadVar_18, STATE_VARIABLE_NewPredInfo_0_27, &STATE_VARIABLE_NewPredInfo_1_31);
  Var_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
  transform_hlds__stm_expand__create_aux_variable_5_p_0(Var_33, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[2])), &RollbackExceptVar_20, STATE_VARIABLE_NewPredInfo_1_31, STATE_VARIABLE_NewPredInfo_28);
  hlds__make_goal__make_const_construction_4_p_0(Context_10, RollbackExceptVar_20, RollbackExceptCons_13, &AssignGoal_19);
  Var_37 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (TypeInfoVar_11));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ExceptVar_12));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (UnivPayloadVar_18));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_48));
  }
  Var_52 = (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_1[4]));
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (TypeInfoVar_11));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (ExceptVar_12));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (UnivPayloadVar_18));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_55));
  }
  Var_42 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_50);
  transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_28, Var_37, (MR_String) "type_to_univ", (MR_Integer) 0, Var_40, Var_41, Var_42, (MR_Word) (MR_mkword(1, &transform_hlds__stm_expand_scalar_common_3[3])), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &UnivCall_21);
  Var_65 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (UnivPayloadVar_18));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (RollbackExceptVar_20));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_76));
  }
  Var_70 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  transform_hlds__stm_expand__create_simple_call_12_p_0(*STATE_VARIABLE_NewPredInfo_28, Var_65, (MR_String) "unify", (MR_Integer) 0, Var_40, Var_69, Var_70, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &_UnifyCall_22);
  Var_79 = parse_tree__prog_mode__ground_inst_0_f_0();
  Var_80 = parse_tree__prog_mode__ground_inst_0_f_0();
  Var_81 = parse_tree__prog_mode__ground_inst_0_f_0();
  Var_82 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (Var_80));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) (Var_81));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Var_82));
  }
  transform_hlds__stm_expand__create_var_test_5_p_0(*STATE_VARIABLE_NewPredInfo_28, UnivPayloadVar_18, RollbackExceptVar_20, Var_78, &TestGoal_23);
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (TestGoal_23));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (UnivCall_21));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (AssignGoal_19));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  transform_hlds__stm_expand__create_plain_conj_2_p_0(Var_83, &CondGoal_24);
  Context_88 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_NewPredInfo_28, 5))));
  {
    OutGoalExpr_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutGoalExpr_89, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, OutGoalExpr_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, OutGoalExpr_89, 2) = ((MR_Box) (CondGoal_24));
    MR_hl_field(3, OutGoalExpr_89, 3) = ((MR_Box) (TrueGoal_14));
    MR_hl_field(3, OutGoalExpr_89, 4) = ((MR_Box) (FalseGoal_15));
  }
  NonLocals_90 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_91);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_90, InstMapDelta_91, (MR_Integer) 0, (MR_Integer) 2, Context_88, &GoalInfo_92);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OutGoalExpr_89));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_92));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
  MR_Word GoalsInConj_3,
  MR_Word * ConjGoal_4)
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
    ConjGoalExpr_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConjGoalExpr_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConjGoalExpr_6, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, ConjGoalExpr_6, 2) = ((MR_Box) (GoalsInConj_3));
  }
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalsInConj_3, &NonLocals_7);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalsInConj_3, &InstMapDelta_8);
  hlds__hlds_goal__goal_list_determinism_2_p_0(GoalsInConj_3, &Detism_9);
  hlds__hlds_goal__goal_list_purity_2_p_0(GoalsInConj_3, &Purity_10);
  conv0_Var_14 = mercury__list__det_head_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsInConj_3);
  Var_14 = ((MR_Word) (conv0_Var_14));
  GoalAInfo_11 = ((MR_Word) ((MR_hl_field(0, Var_14, 1))));
  Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalAInfo_11);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, InstMapDelta_8, Detism_9, Purity_10, Context_12, &ConjGoalInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ConjGoal_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConjGoalExpr_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConjGoalInfo_13));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word NewPredInfo_13,
  MR_Word ModuleName_14,
  MR_String ProcName_15,
  MR_Word PredOrFunc_16,
  MR_Word TIArgVars_17,
  MR_Word NonTIArgVars_18,
  MR_Word InstmapDelta_19,
  MR_Word Mode_20,
  MR_Word Detism_21,
  MR_Word Purity_22,
  MR_Word GoalFeatures_23,
  MR_Word * Goal_24)
{
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_13, 5))));
  MR_Word ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_13, 0))));

  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_26, PredOrFunc_16, ModuleName_14, ProcName_15, TIArgVars_17, NonTIArgVars_18, InstmapDelta_19, Mode_20, Detism_21, Purity_22, GoalFeatures_23, Context_25, Goal_24);
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_5_p_0(
  MR_Word NewPredInfo_6,
  MR_Word VarLHS_7,
  MR_Word VarRHS_8,
  MR_Word UnifyMode_9,
  MR_Word * Goal_10)
{
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_6, 5))));
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, NewPredInfo_6, 0))));
  MR_Word UnifyType_13;
  MR_Word UnifyRHS_14;
  MR_Word LHSInitInst_16;
  MR_Word LHSFinalInst_17;
  MR_Word RHSInitInst_18;
  MR_Word RHSFinalInst_19;
  MR_Word LHSTuple_20;
  MR_Word RHSTuple_21;
  MR_Word InstmapDelta_22;
  MR_Word GoalExpr_23;
  MR_Word NonLocals_24;
  MR_Word GoalInfo_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    UnifyType_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, UnifyType_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, UnifyType_13, 1) = ((MR_Box) (VarLHS_7));
    MR_hl_field(3, UnifyType_13, 2) = ((MR_Box) (VarRHS_8));
  }
  {
    UnifyRHS_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyRHS_14, 0) = ((MR_Box) (VarRHS_8));
  }
  LHSInitInst_16 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 0))));
  LHSFinalInst_17 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 1))));
  RHSInitInst_18 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 2))));
  RHSFinalInst_19 = ((MR_Word) ((MR_hl_field(0, UnifyMode_9, 3))));
  {
    LHSTuple_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTuple_20, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(0, LHSTuple_20, 1) = ((MR_Box) (LHSInitInst_16));
    MR_hl_field(0, LHSTuple_20, 2) = ((MR_Box) (LHSFinalInst_17));
  }
  {
    RHSTuple_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTuple_21, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(0, RHSTuple_21, 1) = ((MR_Box) (RHSInitInst_18));
    MR_hl_field(0, RHSTuple_21, 2) = ((MR_Box) (RHSFinalInst_19));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (RHSTuple_21));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (LHSTuple_20));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
  }
  hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(ModuleInfo_12, Var_30, &InstmapDelta_22);
  {
    GoalExpr_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_23, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, GoalExpr_23, 1) = ((MR_Box) (UnifyRHS_14));
    MR_hl_field(1, GoalExpr_23, 2) = ((MR_Box) (UnifyMode_9));
    MR_hl_field(1, GoalExpr_23, 3) = ((MR_Box) (UnifyType_13));
    MR_hl_field(1, GoalExpr_23, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[7]));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (VarRHS_8));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (VarLHS_7));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_33, &NonLocals_24);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_24, InstmapDelta_22, (MR_Integer) 1, (MR_Integer) 0, Context_11, &GoalInfo_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_27));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word Type_6,
  MR_Word MaybeName0_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_NewPredInfo_0_17,
  MR_Word * STATE_VARIABLE_NewPredInfo_18)
{
  MR_String Name_10;
  MR_Integer Cnt0_12;
  MR_Word IsDummy_13;
  MR_Word ProcInfo0_14;
  MR_Word ProcInfo_15;
  MR_Integer Cnt_16;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 0))));
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Integer Var_48;
  MR_Word Var_49;
  MR_Word Var_51;

  IsDummy_13 = hlds__type_util__is_type_a_dummy_2_f_0(Var_25, Type_6);
  ProcInfo0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 4))));
  Cnt0_12 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 6))));
  if ((MaybeName0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Name_10 = (MR_String) "";
  else
  {
    MR_String Name0_11 = ((MR_String) ((MR_hl_field(1, MaybeName0_7, 0))));
    MR_String Var_60;
    MR_String Var_68;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__stm_expand_scalar_common_3[25]), Cnt0_12, &Var_60);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", Var_60);
    Name_10 = mercury__string__f_43_43_2_f_0(Name0_11, Var_68);
  }
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0(Name_10, Type_6, IsDummy_13, Var_8, ProcInfo0_14, &ProcInfo_15);
  Cnt_16 = (MR_Integer) ((MR_Unsigned) Cnt0_12 + (MR_Unsigned) 1);
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 0))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 1))));
  Var_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NewPredInfo_0_17, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NewPredInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 6) = ((MR_Box) (Cnt_16));
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
  MR_bool succeeded;
  MR_Word GoalList0_13;
  MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word Var_29;

  succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_28, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_29 = ((MR_Unsigned) ((MR_hl_field(3, Var_28, 1))) & (MR_Integer) 1);
    GoalList0_13 = ((MR_Word) ((MR_hl_field(3, Var_28, 2))));
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
        StmInDI0_24 = ((MR_Word) ((MR_hl_field(1, MaybeInDI_20, 0))));
        succeeded = (MaybeInUO_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          StmInUO0_25 = ((MR_Word) ((MR_hl_field(1, MaybeInUO_21, 0))));
          succeeded = (MaybeOutDI_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StmOutDI0_26 = ((MR_Word) ((MR_hl_field(1, MaybeOutDI_22, 0))));
            succeeded = (MaybeOutUO_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              StmOutUO0_27 = ((MR_Word) ((MR_hl_field(1, MaybeOutUO_23, 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_32;

        *StmInDI_11 = StmInDI0_24;
        *StmInUO_12 = StmInUO0_25;
        *StmOutDI_9 = StmOutDI0_26;
        *StmOutUO_10 = StmOutUO0_27;
        {
          Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_32, 2) = ((MR_Box) (GoalList_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
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

static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[3]);
    *HeadVar__4_4 = (MR_Word) (&transform_hlds__stm_expand_scalar_common_1[3]);
  }
  else
  {
    MR_Word HeadGoal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailGoals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
    MaybeOutDI0_17 = ((MR_Word) ((MR_hl_field(0, Var_35, 0))));
    MaybeOutUO0_18 = ((MR_Word) ((MR_hl_field(0, Var_35, 1))));
    MaybeInDI0_19 = ((MR_Word) ((MR_hl_field(0, Var_36, 0))));
    MaybeInUO0_20 = ((MR_Word) ((MR_hl_field(0, Var_36, 1))));
    HeadGoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_9, 0))));
    succeeded = ((MR_tag((MR_Word) HeadGoalExpr0_21)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(2, HeadGoalExpr0_21, 2))));
      Var_41 = ((MR_Word) ((MR_hl_field(2, HeadGoalExpr0_21, 5))));
      succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          X_26 = ((MR_Word) ((MR_hl_field(1, Var_38, 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, 1))));
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            V_27 = ((MR_Word) ((MR_hl_field(1, Var_39, 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, 1))));
            succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
              Var_54 = (MR_String) "stm_from_outer_to_inner";
              {
                Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_53));
                MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_54));
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
        MaybeInDI_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeInDI_14, 0) = ((MR_Box) (V_27));
      }
      MaybeInUO_15 = MaybeInUO0_20;
      {
        MaybeOutDI_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeOutDI_12, 0) = ((MR_Box) (X_26));
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
        Var_42 = ((MR_Word) ((MR_hl_field(2, HeadGoalExpr0_21, 2))));
        Var_46 = ((MR_Word) ((MR_hl_field(2, HeadGoalExpr0_21, 5))));
        succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            V_48 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_47 = ((MR_Word) ((MR_hl_field(1, Var_44, 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, 1))));
              succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_55 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                Var_56 = (MR_String) "stm_from_inner_to_outer";
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_56));
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
          MaybeInUO_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeInUO_15, 0) = ((MR_Box) (V_48));
        }
        MaybeOutDI_12 = MaybeOutDI0_17;
        {
          MaybeOutUO_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOutUO_13, 0) = ((MR_Box) (X_47));
        }
        *HeadVar__2_2 = TailGoals_16;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal0_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_16));
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
      MR_hl_field(0, base, 0) = ((MR_Box) (MaybeOutDI_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeOutUO_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MaybeInDI_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeInUO_15));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_8_p_0(
  MR_Word StmInfo_9,
  MR_Word InitInstmap_10,
  MR_Word FinalInstmap_11,
  MR_Word Goals_12,
  MR_Word InnerDIs_13,
  MR_Word InnerUOs_14,
  MR_Word IgnoreVarList0_15,
  MR_Word * StmGoalVarList_16)
{
  MR_bool succeeded = (Goals_12 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (InnerDIs_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (InnerUOs_14 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *StmGoalVarList_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadGoal_17;
    MR_Word TailGoals_18;
    MR_Word HeadInnerDI_19;
    MR_Word TailInnerDIs_20;
    MR_Word HeadInnerUO_21;
    MR_Word TailInnerUOs_22;

    succeeded = (Goals_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadGoal_17 = ((MR_Word) ((MR_hl_field(1, Goals_12, 0))));
      TailGoals_18 = ((MR_Word) ((MR_hl_field(1, Goals_12, 1))));
      succeeded = (InnerDIs_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadInnerDI_19 = ((MR_Word) ((MR_hl_field(1, InnerDIs_13, 0))));
        TailInnerDIs_20 = ((MR_Word) ((MR_hl_field(1, InnerDIs_13, 1))));
        succeeded = (InnerUOs_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadInnerUO_21 = ((MR_Word) ((MR_hl_field(1, InnerUOs_14, 0))));
          TailInnerUOs_22 = ((MR_Word) ((MR_hl_field(1, InnerUOs_14, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word IgnoreVarList_23;
      MR_Word StmGoalVar_24;
      MR_Word StmGoalVarListTail_25;
      MR_Word Var_26;
      MR_Word ModuleInfo_29;
      MR_Word GoalVars0_30;
      MR_Word GoalVars_31;
      MR_Word GoalVarList_32;
      MR_Word GoalInfo_34;
      MR_Word GoalNonLocalSet0_35;
      MR_Word GoalNonLocalSet_36;
      MR_Word GoalNonLocals_37;
      MR_Word LocalVarsList_38;
      MR_Word InputVarsList_39;
      MR_Word OutputVarsList_43;
      MR_Word LocalVars_44;
      MR_Word InputVars_45;
      MR_Word OutputVars_46;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word _InputVarsList_42;

      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (HeadInnerUO_21));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (IgnoreVarList0_15));
      }
      {
        IgnoreVarList_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IgnoreVarList_23, 0) = ((MR_Box) (HeadInnerDI_19));
        MR_hl_field(1, IgnoreVarList_23, 1) = ((MR_Box) (Var_26));
      }
      ModuleInfo_29 = ((MR_Word) ((MR_hl_field(0, StmInfo_9, 0))));
      hlds__goal_vars__vars_in_goal_2_p_0(HeadGoal_17, &GoalVars0_30);
      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVarList_23, GoalVars0_30, &GoalVars_31);
      GoalVarList_32 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_31);
      GoalInfo_34 = ((MR_Word) ((MR_hl_field(0, HeadGoal_17, 1))));
      GoalNonLocalSet0_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_34);
      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVarList_23, GoalNonLocalSet0_35, &GoalNonLocalSet_36);
      GoalNonLocals_37 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocalSet_36);
      transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_29, GoalVarList_32, InitInstmap_10, FinalInstmap_11, (MR_Word) ((MR_Unsigned) 0U), &LocalVarsList_38, (MR_Word) ((MR_Unsigned) 0U), &InputVarsList_39, (MR_Word) ((MR_Unsigned) 0U), &Var_40);
      transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(ModuleInfo_29, GoalNonLocals_37, InitInstmap_10, FinalInstmap_11, (MR_Word) ((MR_Unsigned) 0U), &Var_41, (MR_Word) ((MR_Unsigned) 0U), &_InputVarsList_42, (MR_Word) ((MR_Unsigned) 0U), &OutputVarsList_43);
      LocalVars_44 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LocalVarsList_38);
      InputVars_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputVarsList_39);
      OutputVars_46 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsList_43);
      {
        StmGoalVar_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, StmGoalVar_24, 0) = ((MR_Box) (InputVars_45));
        MR_hl_field(0, StmGoalVar_24, 1) = ((MR_Box) (LocalVars_44));
        MR_hl_field(0, StmGoalVar_24, 2) = ((MR_Box) (OutputVars_46));
        MR_hl_field(0, StmGoalVar_24, 3) = ((MR_Box) (HeadInnerDI_19));
        MR_hl_field(0, StmGoalVar_24, 4) = ((MR_Box) (HeadInnerUO_21));
      }
      transform_hlds__stm_expand__calc_pred_variables_list_8_p_0(StmInfo_9, InitInstmap_10, FinalInstmap_11, TailGoals_18, TailInnerDIs_20, TailInnerUOs_22, IgnoreVarList_23, &StmGoalVarListTail_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *StmGoalVarList_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (StmGoalVar_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (StmGoalVarListTail_25));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/8", (MR_String) "lengths mismatch");
        return;
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
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InitVarInst_31;
      MR_Word FinalVarInst_32;
      MR_Word STATE_VARIABLE_LocalVars_1_39;
      MR_Word STATE_VARIABLE_OutputVars_1_40;
      MR_Word STATE_VARIABLE_InputVars_1_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_HeadVar__9_9;

      hlds__instmap__instmap_lookup_var_3_p_0(InitInstmap_3, Var_24, &InitVarInst_31);
      hlds__instmap__instmap_lookup_var_3_p_0(FinalInstmap_4, Var_24, &FinalVarInst_32);
      succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitVarInst_31);
      if (succeeded)
        succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, FinalVarInst_32);
      if (succeeded)
      {
        {
          STATE_VARIABLE_LocalVars_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_LocalVars_1_39, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_LocalVars_1_39, 1) = ((MR_Box) (HeadVar__5_5));
        }
        STATE_VARIABLE_OutputVars_1_40 = HeadVar__9_9;
        STATE_VARIABLE_InputVars_1_41 = HeadVar__7_7;
      }
      else
      {
        succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitVarInst_31);
        if (succeeded)
          succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, FinalVarInst_32);
        if (succeeded)
        {
          {
            STATE_VARIABLE_OutputVars_1_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_OutputVars_1_40, 0) = ((MR_Box) (Var_24));
            MR_hl_field(1, STATE_VARIABLE_OutputVars_1_40, 1) = ((MR_Box) (HeadVar__9_9));
          }
          STATE_VARIABLE_InputVars_1_41 = HeadVar__7_7;
        }
        else
        {
          succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitVarInst_31);
          if (succeeded)
            succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, FinalVarInst_32);
          if (succeeded)
            {
              STATE_VARIABLE_InputVars_1_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_InputVars_1_41, 0) = ((MR_Box) (Var_24));
              MR_hl_field(1, STATE_VARIABLE_InputVars_1_41, 1) = ((MR_Box) (HeadVar__7_7));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
              return;
            }
          STATE_VARIABLE_OutputVars_1_40 = HeadVar__9_9;
        }
        STATE_VARIABLE_LocalVars_1_39 = HeadVar__5_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_25;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_LocalVars_1_39;
      next_value_of_HeadVar__7_7 = STATE_VARIABLE_InputVars_1_41;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_OutputVars_1_40;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo_6;
  MR_Word ProcIds_7;
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
  ProcIds_7 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (PredId_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
}

void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  MR_Word PredIds_4;
  MR_Word STATE_VARIABLE_ModuleInfo_1_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_8;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__stm_expand_scalar_common_2[1]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_1_8);
  STATE_VARIABLE_ModuleInfo_1_8 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_8));
  hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_1_8, STATE_VARIABLE_ModuleInfo_6);
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__stm_expand____Compare____stm_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
