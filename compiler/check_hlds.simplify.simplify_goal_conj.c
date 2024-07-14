/*
** Automatically generated from `simplify_goal_conj.m'
** by the Mercury compiler,
** version rotd-2024-07-14
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


// :- module check_hlds.simplify.simplify_goal_conj.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_conj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_conj.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_builtin__type_ctor_info_uint_0;

static const MR_VA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj____vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain___vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj____vpti_tuple_2__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_2[1];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_ptag_ordered_merge_code_after_switch_result_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_name_ordered_merge_code_after_switch_result_0[3];

static const MR_Integer check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__functor_number_map_merge_code_after_switch_result_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__IntroducedFrom__pred__build_maps_first_switch__673__1_4_p_0(
  MR_Unsigned CurCaseNum_2,
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__construct_and_add_merged_switch_case_7_p_0(
  MR_Word Info_8,
  MR_Word FirstSwitchGoalMap_9,
  MR_Word SecondSwitchGoalMap_10,
  MR_Tuple HeadVar__4_4,
  MR_Word OoMConsIds_13,
  MR_Word STATE_VARIABLE_Cases_0_39,
  MR_Word * STATE_VARIABLE_Cases_40);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_97_110_100_95_97_100_100_95_109_101_114_103_101_100_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word FirstSwitchGoalMap_9,
  MR_Word SecondSwitchGoalMap_10,
  MR_Tuple HeadVar__4_4,
  MR_Word OoMConsIds_13,
  MR_Word STATE_VARIABLE_Cases_0_39,
  MR_Word * STATE_VARIABLE_Cases_40);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word Info_1,
  MR_Word ConjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevGoals_5,
  MR_Word STATE_VARIABLE_Subn_0_6,
  MR_Word * STATE_VARIABLE_Subn_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word Subn_4,
  MR_Word Var0_5,
  MR_Word * Var_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Common_0_7,
  MR_Word * STATE_VARIABLE_Common_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_116_111_95_109_101_114_103_101_95_117_110_105_102_121_95_97_102_116_101_114_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0(
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word ConjInfo_10,
  MR_Word HeadGoalExpr1_11,
  MR_Word HeadGoalInfo1_12,
  MR_Word HeadTailGoalExpr0_13,
  MR_Word TailTailGoals0_15,
  MR_Word * Result_16);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2,
  MR_Word TestConsId_3,
  MR_Word STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * STATE_VARIABLE_RevDiffCases_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0(
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word FirstGoalExpr_8,
  MR_Word FirstGoalInfo_9,
  MR_Word SecondGoalExpr0_10,
  MR_Word SecondGoalInfo0_11,
  MR_Word * Result_12);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned CurCaseNum_2,
  MR_Word FirstSwitchConsIdMap_3,
  MR_Word STATE_VARIABLE_SecondSwitchGoalMap_0_4,
  MR_Word * STATE_VARIABLE_SecondSwitchGoalMap_5,
  MR_Word STATE_VARIABLE_CasesConsIdsMap_0_6,
  MR_Word * STATE_VARIABLE_CasesConsIdsMap_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_cons_id_5_p_0(
  MR_Word FirstSwitchConsIdMap_6,
  MR_Unsigned SecondSwitchCaseNum_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_CasesConsIdsMap_0_14,
  MR_Word * STATE_VARIABLE_CasesConsIdsMap_15);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned CurCaseNum_2,
  MR_Word STATE_VARIABLE_FirstSwitchGoalMap_0_3,
  MR_Word * STATE_VARIABLE_FirstSwitchGoalMap_4,
  MR_Word STATE_VARIABLE_FirstSwitchConsIdMap_0_5,
  MR_Word * STATE_VARIABLE_FirstSwitchConsIdMap_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__delete_tail_unreachable_goals_7_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_19,
  MR_Word HeadGoalContext0_9,
  MR_Word HeadGoal1_10,
  MR_Word TailGoals0_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[5][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_6[1][10];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_7[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain___vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain___vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj____vpti_tuple_2__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_VA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj____vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain___vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj____vti_tuple_2builtin__type_ctor_info_uint_0builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__one_or_more__ti_one_or_more_1parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj____vpti_tuple_2__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_0 = {
  (MR_String) "merge_unsuccessful",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_1 = {
  (MR_String) "merge_successful_new_code_simplified",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_2[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_2 = {
  (MR_String) "merge_successful_new_code_not_simplified",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__field_types_merge_code_after_switch_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_0[1] = { &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_1[1] = { &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_2 };

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_2[1] = { &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_1 };

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_ptag_ordered_merge_code_after_switch_result_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_stag_ordered_merge_code_after_switch_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_name_ordered_merge_code_after_switch_result_0[3] = {
  &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_2,
  &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_1,
  &check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_functor_desc_merge_code_after_switch_result_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__functor_number_map_merge_code_after_switch_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_merge_code_after_switch_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "merge_code_after_switch_result",
  { check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_name_ordered_merge_code_after_switch_result_0 },
  { check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__du_ptag_ordered_merge_code_after_switch_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__functor_number_map_merge_code_after_switch_result_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "var_renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__IntroducedFrom__pred__build_maps_first_switch__673__1_4_p_0(
  MR_Unsigned CurCaseNum_2,
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadVar__2_37)), ((MR_Box) (CurCaseNum_2)), HeadVar__3_38, HeadVar__4_39);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(ArgX2_7, ArgY2_8);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__construct_and_add_merged_switch_case_7_p_0(
  MR_Word Info_8,
  MR_Word FirstSwitchGoalMap_9,
  MR_Word SecondSwitchGoalMap_10,
  MR_Tuple HeadVar__4_4,
  MR_Word OoMConsIds_13,
  MR_Word STATE_VARIABLE_Cases_0_39,
  MR_Word * STATE_VARIABLE_Cases_40)
{
  check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_97_110_100_95_97_100_100_95_109_101_114_103_101_100_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_49_93_95_48_7_p_0(FirstSwitchGoalMap_9, SecondSwitchGoalMap_10, HeadVar__4_4, OoMConsIds_13, STATE_VARIABLE_Cases_0_39, STATE_VARIABLE_Cases_40);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_97_110_100_95_97_100_100_95_109_101_114_103_101_100_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word FirstSwitchGoalMap_9,
  MR_Word SecondSwitchGoalMap_10,
  MR_Tuple HeadVar__4_4,
  MR_Word OoMConsIds_13,
  MR_Word STATE_VARIABLE_Cases_0_39,
  MR_Word * STATE_VARIABLE_Cases_40)
{
  MR_bool succeeded;
  MR_Unsigned FirstSwitchCaseNum_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Unsigned SecondSwitchCaseNum_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word SortedOoMConsIds_15;
  MR_Word MainConsId_16;
  MR_Word OtherConsIds_17;
  MR_Word FirstGoal_18;
  MR_Word SecondGoal_19;
  MR_Word FirstGoalExpr_20;
  MR_Word FirstGoalInfo_21;
  MR_Word SecondGoalExpr_22;
  MR_Word SecondGoalInfo_23;
  MR_Word FirstGoals_25;
  MR_Word SecondGoals_27;
  MR_Word GoalExpr_28;
  MR_Word GoalInfo_29;
  MR_Word Goal_30;
  MR_Word Case_38;
  MR_Word Var_46;
  MR_Word FirstDetism_61;
  MR_Word SecondDetism_62;
  MR_Word FirstPurity_63;
  MR_Word SecondPurity_64;
  MR_Word FirstInstMapDelta_65;
  MR_Word SecondInstMapDelta_66;
  MR_Word FirstNonLocals_67;
  MR_Word SecondNonLocals_68;
  MR_Word FirstFeatures_69;
  MR_Word SecondFeatures_70;
  MR_Word Detism_71;
  MR_Word Purity_72;
  MR_Word InstMapDelta_73;
  MR_Word NonLocals_74;
  MR_Word Features_75;
  MR_Word STATE_VARIABLE_GoalInfo_25_78;
  MR_Word STATE_VARIABLE_GoalInfo_26_79;
  MR_Word STATE_VARIABLE_GoalInfo_27_80;
  MR_Word STATE_VARIABLE_GoalInfo_28_81;
  MR_Box conv0_FirstGoal_18;
  MR_Box conv1_SecondGoal_19;
  MR_Word FirstSubGoals_24;
  MR_Word Var_41;
  MR_Word SecondSubGoals_26;
  MR_Word Var_43;

  mercury__one_or_more__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OoMConsIds_13, &SortedOoMConsIds_15);
  MainConsId_16 = ((MR_Word) ((MR_hl_field(0, SortedOoMConsIds_15, (MR_Integer) 0))));
  OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, SortedOoMConsIds_15, (MR_Integer) 1))));
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FirstSwitchGoalMap_9, ((MR_Box) (FirstSwitchCaseNum_11)), &conv0_FirstGoal_18);
  FirstGoal_18 = ((MR_Word) (conv0_FirstGoal_18));
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SecondSwitchGoalMap_10, ((MR_Box) (SecondSwitchCaseNum_12)), &conv1_SecondGoal_19);
  SecondGoal_19 = ((MR_Word) (conv1_SecondGoal_19));
  FirstGoalExpr_20 = ((MR_Word) ((MR_hl_field(0, FirstGoal_18, (MR_Integer) 0))));
  FirstGoalInfo_21 = ((MR_Word) ((MR_hl_field(0, FirstGoal_18, (MR_Integer) 1))));
  SecondGoalExpr_22 = ((MR_Word) ((MR_hl_field(0, SecondGoal_19, (MR_Integer) 0))));
  SecondGoalInfo_23 = ((MR_Word) ((MR_hl_field(0, SecondGoal_19, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) FirstGoalExpr_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstGoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_41 = ((MR_Unsigned) ((MR_hl_field(3, FirstGoalExpr_20, (MR_Integer) 1))) & (MR_Integer) 1);
    FirstSubGoals_24 = ((MR_Word) ((MR_hl_field(3, FirstGoalExpr_20, (MR_Integer) 2))));
    succeeded = (Var_41 == (MR_Integer) 0);
  }
  if (succeeded)
    FirstGoals_25 = FirstSubGoals_24;
  else
    {
      FirstGoals_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FirstGoals_25, 0) = ((MR_Box) (FirstGoal_18));
      MR_hl_field(1, FirstGoals_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  succeeded = ((((MR_tag((MR_Word) SecondGoalExpr_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SecondGoalExpr_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_43 = ((MR_Unsigned) ((MR_hl_field(3, SecondGoalExpr_22, (MR_Integer) 1))) & (MR_Integer) 1);
    SecondSubGoals_26 = ((MR_Word) ((MR_hl_field(3, SecondGoalExpr_22, (MR_Integer) 2))));
    succeeded = (Var_43 == (MR_Integer) 0);
  }
  if (succeeded)
    SecondGoals_27 = SecondSubGoals_26;
  else
    {
      SecondGoals_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SecondGoals_27, 0) = ((MR_Box) (SecondGoal_19));
      MR_hl_field(1, SecondGoals_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FirstGoals_25, SecondGoals_27);
  {
    GoalExpr_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_28, 2) = ((MR_Box) (Var_46));
  }
  FirstDetism_61 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(FirstGoalInfo_21);
  SecondDetism_62 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SecondGoalInfo_23);
  FirstPurity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(FirstGoalInfo_21);
  SecondPurity_64 = hlds__hlds_goal__goal_info_get_purity_1_f_0(SecondGoalInfo_23);
  FirstInstMapDelta_65 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(FirstGoalInfo_21);
  SecondInstMapDelta_66 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SecondGoalInfo_23);
  FirstNonLocals_67 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_21);
  SecondNonLocals_68 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(SecondGoalInfo_23);
  FirstFeatures_69 = hlds__hlds_goal__goal_info_get_features_1_f_0(FirstGoalInfo_21);
  SecondFeatures_70 = hlds__hlds_goal__goal_info_get_features_1_f_0(SecondGoalInfo_23);
  parse_tree__prog_detism__det_conjunction_detism_3_p_0(FirstDetism_61, SecondDetism_62, &Detism_71);
  Purity_72 = parse_tree__prog_data__worst_purity_2_f_0(FirstPurity_63, SecondPurity_64);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(FirstInstMapDelta_65, SecondInstMapDelta_66, (MR_Integer) 2, &InstMapDelta_73);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstNonLocals_67, SecondNonLocals_68, &NonLocals_74);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), FirstFeatures_69, SecondFeatures_70, &Features_75);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_71, FirstGoalInfo_21, &STATE_VARIABLE_GoalInfo_25_78);
  hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_72, STATE_VARIABLE_GoalInfo_25_78, &STATE_VARIABLE_GoalInfo_26_79);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_73, STATE_VARIABLE_GoalInfo_26_79, &STATE_VARIABLE_GoalInfo_27_80);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_74, STATE_VARIABLE_GoalInfo_27_80, &STATE_VARIABLE_GoalInfo_28_81);
  hlds__hlds_goal__goal_info_set_features_3_p_0(Features_75, STATE_VARIABLE_GoalInfo_28_81, &GoalInfo_29);
  {
    Goal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_30, 0) = ((MR_Box) (GoalExpr_28));
    MR_hl_field(0, Goal_30, 1) = ((MR_Box) (GoalInfo_29));
  }
  {
    Case_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Case_38, 0) = ((MR_Box) (MainConsId_16));
    MR_hl_field(0, Case_38, 1) = ((MR_Box) (OtherConsIds_17));
    MR_hl_field(0, Case_38, 2) = ((MR_Box) (Goal_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Cases_40 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Case_38));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_39));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(
  MR_Word Goals0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_27,
  MR_Word * STATE_VARIABLE_Common_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;

  if ((Goals0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_19;
    MR_Word Var_31;

    Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_31 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
    *STATE_VARIABLE_Common_28 = STATE_VARIABLE_Common_0_27;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
  else
  {
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 0))));

    if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SingleGoal_21;
      MR_Word SingleGoalInfo_22;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_Info_35_35;

      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Var_44, &Var_33, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Common_28, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
      SingleGoal_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      SingleGoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, SingleGoalInfo_22, SingleGoal_21, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_30);
    }
    else
    {
      succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(STATE_VARIABLE_Info_0_29);
      if (succeeded)
        check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(Goals0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Common_28, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      else
      {
        MR_Word Goals_26;
        MR_Word STATE_VARIABLE_Info_40_40;
        MR_Word Goal0_50;
        MR_Word Goals0_51;
        MR_Word Goal_52;
        MR_Word Goals_53;
        MR_Word InstMap1_58;
        MR_Word STATE_VARIABLE_Info_26_61;
        MR_Word _Common1_57;

        *GoalInfo_14 = GoalInfo0_13;
        Goal0_50 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 0))));
        Goals0_51 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 1))));
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_50, &Goal_52, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, &_Common1_57, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_26_61);
        hlds__goal_util__update_instmap_3_p_0(Goal_52, InstMap0_16, &InstMap1_58);
        check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(Goals0_51, &Goals_53, NestedContext0_15, InstMap1_58, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Info_26_61, &STATE_VARIABLE_Info_40_40);
        {
          Goals_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Goals_26, 0) = ((MR_Box) (Goal_52));
          MR_hl_field(1, Goals_26, 1) = ((MR_Box) (Goals_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, base, 2) = ((MR_Box) (Goals_26));
        }
        check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_30);
        *STATE_VARIABLE_Common_28 = STATE_VARIABLE_Common_0_27;
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word InstMap1_23;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word _Common1_22;

    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_14, &Goal_16, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &_Common1_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_26_26);
    hlds__goal_util__update_instmap_3_p_0(Goal_16, HeadVar__4_4, &InstMap1_23);
    check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, InstMap1_23, HeadVar__5_5, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Var_6;

  check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Var_6));
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(
  MR_Word Goals0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_41,
  MR_Word * STATE_VARIABLE_Common_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  MR_bool succeeded;
  MR_Word Goals1_19;
  MR_Word Goals_20;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_Info_48_48;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(STATE_VARIABLE_Info_0_43);
  if (succeeded)
  {
    MR_Word ConjNonLocals_83;
    MR_Word Subn0_84;
    MR_Word RevGoals_85;
    MR_Word Subn1_86;

    ConjNonLocals_83 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), &Subn0_84);
    check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(STATE_VARIABLE_Info_0_43, ConjNonLocals_83, Goals0_11, (MR_Word) ((MR_Unsigned) 0U), &RevGoals_85, Subn0_84, &Subn1_86);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), Subn1_86);
    if (succeeded)
    {
      Goals1_19 = Goals0_11;
      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_43;
    }
    else
    {
      MR_Word Goals1_87;
      MR_Word Subn_88;
      MR_Word RemovedVars_89;
      MR_Word VarTable0_90;
      MR_Word VarTable_91;
      MR_Word RttiVarMaps0_92;
      MR_Word RttiVarMaps_93;
      MR_Word STATE_VARIABLE_Info_25_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_103;

      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_85, &Goals1_87);
      {
        Var_103 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_103, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_7[0]));
        MR_hl_field(0, Var_103, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1));
        MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_103, 3) = ((MR_Box) (Subn1_86));
      }
      mercury__map__map_values_only_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), Var_103, Subn1_86, &Subn_88);
      hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Subn_88, Goals1_87, &Goals1_19);
      mercury__map__sorted_keys_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), Subn0_84, &RemovedVars_89);
      check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_43, &VarTable0_90);
      parse_tree__var_table__delete_sorted_var_entries_3_p_0(RemovedVars_89, VarTable0_90, &VarTable_91);
      check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_91, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_25_96);
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_25_96, &RttiVarMaps0_92);
      Var_97 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[3]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[3]));
      Var_98 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_97, Var_98, Subn_88, RttiVarMaps0_92, &RttiVarMaps_93);
      check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_93, STATE_VARIABLE_Info_25_96, &STATE_VARIABLE_Info_45_45);
    }
  }
  else
  {
    Goals1_19 = Goals0_11;
    STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_43;
  }
  Var_46 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(Var_46, Goals1_19, &Goals_20, GoalInfo0_13, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_48_48);
  if ((Goals_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_21;
    MR_Word Var_49;

    Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_49 = hlds__make_goal__true_goal_with_context_1_f_0(Context_21);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_48_48;
  }
  else
  {
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 1))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 0))));

    if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SingleGoalExpr_23 = ((MR_Word) ((MR_hl_field(0, Var_82, (MR_Integer) 0))));
      MR_Word SingleGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Var_82, (MR_Integer) 1))));

      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, SingleGoalInfo_24, SingleGoalExpr_23, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
    }
    else
    {
      MR_Word Detism_28;
      MR_Word CanFail_29;
      MR_Word Var_80;

      Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_28, &CanFail_29, &Var_80);
      succeeded = ((MR_Integer) 0 == Var_80);
      if (succeeded)
      {
        succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(STATE_VARIABLE_Info_48_48);
        if (succeeded)
          succeeded = check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(Goals_20);
      }
      if (succeeded)
      {
        MR_Word InnerDetism_30;
        MR_Word InnerInfo_31;
        MR_Word InnerGoal_32;
        MR_Word Var_55;

        parse_tree__prog_data__determinism_components_3_p_1(&InnerDetism_30, CanFail_29, (MR_Integer) 3);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(InnerDetism_30, GoalInfo0_13, &InnerInfo_31);
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_55, 2) = ((MR_Box) (Goals_20));
        }
        {
          InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InnerGoal_32, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, InnerGoal_32, 1) = ((MR_Box) (InnerInfo_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_conj_scalar_common_2[4])));
          MR_hl_field(3, base, 2) = ((MR_Box) (InnerGoal_32));
        }
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Goals_20));
        }
        *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_48_48;
      }
      *GoalInfo_14 = GoalInfo0_13;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word Info_1,
  MR_Word ConjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevGoals_5,
  MR_Word STATE_VARIABLE_Subn_0_6,
  MR_Word * STATE_VARIABLE_Subn_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Subn_7 = STATE_VARIABLE_Subn_0_6;
      *STATE_VARIABLE_RevGoals_5 = STATE_VARIABLE_RevGoals_0_4;
    }
    else
    {
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevGoals_27_27;
      MR_Word STATE_VARIABLE_Subn_28_28;
      MR_Word STATE_VARIABLE_Subn_26_26;
      MR_Word TypeInfo_33_50;
      MR_Word Unif_32;
      MR_Word LeftVar0_35;
      MR_Word RightVar0_36;
      MR_Word LeftVar_37;
      MR_Word RightVar_38;
      MR_Word CanElimRight_40;
      MR_Word VarTable_41;
      MR_Word ElimVar_42;
      MR_Word ReplacementVar_43;
      MR_Word EffTraceLevel_44;
      MR_Word TraceOptimized_45;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 0))));
      MR_Word TypeCtorInfo_32_49;
      MR_Word TypeCtorInfo_31_48;
      MR_Word Var_47;
      MR_Word Entry_58;
      MR_String Name_59;
      MR_String Suffix_60;
      MR_String Var_62;
      MR_Integer Var_61;
      MR_Word Entry_65;
      MR_String Name_66;
      MR_String Suffix_67;
      MR_String Var_69;
      MR_Integer Var_68;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevGoals_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Subn_0_6;

      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unif_32 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unif_32)) == (MR_Integer) 2);
        if (succeeded)
        {
          LeftVar0_35 = ((MR_Word) ((MR_hl_field(2, Unif_32, (MR_Integer) 0))));
          RightVar0_36 = ((MR_Word) ((MR_hl_field(2, Unif_32, (MR_Integer) 1))));
          check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(STATE_VARIABLE_Subn_0_6, LeftVar0_35, &LeftVar_37);
          check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(STATE_VARIABLE_Subn_0_6, RightVar0_36, &RightVar_38);
          TypeCtorInfo_32_49 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_32_49, ConjNonLocals_2, RightVar_38);
          if (succeeded)
            CanElimRight_40 = (MR_Integer) 0;
          else
            CanElimRight_40 = (MR_Integer) 1;
          check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(Info_1, &VarTable_41);
          TypeCtorInfo_31_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_31_48, ConjNonLocals_2, LeftVar_37);
          if (succeeded)
          {
            succeeded = (CanElimRight_40 == (MR_Integer) 1);
            if (succeeded)
            {
              ElimVar_42 = RightVar_38;
              ReplacementVar_43 = LeftVar_37;
              succeeded = MR_TRUE;
            }
          }
          else
          {
            switch (CanElimRight_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ElimVar_42 = LeftVar_37;
                  ReplacementVar_43 = RightVar_38;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Entry_51;
                  MR_String Name_52;
                  MR_String Suffix_53;
                  MR_String Var_55;
                  MR_Integer Var_54;

                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, LeftVar_37, &Entry_51);
                  Name_52 = ((MR_String) ((MR_hl_field(0, Entry_51, (MR_Integer) 0))));
                  succeeded = (strcmp(Name_52, (MR_String) "") == 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_55 = (MR_String) "HeadVar__";
                    succeeded = mercury__string__append_3_p_1(Var_55, &Suffix_53, Name_52);
                    if (succeeded)
                      succeeded = mercury__string__to_int_2_p_0(Suffix_53, &Var_54);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    ElimVar_42 = RightVar_38;
                    ReplacementVar_43 = LeftVar_37;
                  }
                  else
                  {
                    ElimVar_42 = LeftVar_37;
                    ReplacementVar_43 = RightVar_38;
                  }
                }
                break;
            }
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_eff_trace_level_optimized_3_p_0(Info_1, &EffTraceLevel_44, &TraceOptimized_45);
            Var_47 = libs__trace_params__eff_trace_level_needs_meaningful_var_names_1_f_0(EffTraceLevel_44);
            succeeded = (Var_47 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (TraceOptimized_45 == (MR_Integer) 0);
              if (succeeded)
              {
                parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, ElimVar_42, &Entry_58);
                Name_59 = ((MR_String) ((MR_hl_field(0, Entry_58, (MR_Integer) 0))));
                succeeded = (strcmp(Name_59, (MR_String) "") == 0);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_62 = (MR_String) "HeadVar__";
                  succeeded = mercury__string__append_3_p_1(Var_62, &Suffix_60, Name_59);
                  if (succeeded)
                    succeeded = mercury__string__to_int_2_p_0(Suffix_60, &Var_61);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, ReplacementVar_43, &Entry_65);
                    Name_66 = ((MR_String) ((MR_hl_field(0, Entry_65, (MR_Integer) 0))));
                    succeeded = (strcmp(Name_66, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      Var_69 = (MR_String) "HeadVar__";
                      succeeded = mercury__string__append_3_p_1(Var_69, &Suffix_67, Name_66);
                      if (succeeded)
                        succeeded = mercury__string__to_int_2_p_0(Suffix_67, &Var_68);
                      succeeded = !(succeeded);
                    }
                    succeeded = !(succeeded);
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_33_50 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]);
              mercury__map__det_insert_4_p_0(TypeInfo_33_50, TypeInfo_33_50, ((MR_Box) (ElimVar_42)), ((MR_Box) (ReplacementVar_43)), STATE_VARIABLE_Subn_0_6, &STATE_VARIABLE_Subn_26_26);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_Subn_28_28 = STATE_VARIABLE_Subn_26_26;
        STATE_VARIABLE_RevGoals_27_27 = STATE_VARIABLE_RevGoals_0_4;
      }
      else
      {
        {
          STATE_VARIABLE_RevGoals_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevGoals_27_27, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(1, STATE_VARIABLE_RevGoals_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevGoals_0_4));
        }
        STATE_VARIABLE_Subn_28_28 = STATE_VARIABLE_Subn_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goals_19;
      next_value_of_STATE_VARIABLE_RevGoals_0_4 = STATE_VARIABLE_RevGoals_27_27;
      next_value_of_STATE_VARIABLE_Subn_0_6 = STATE_VARIABLE_Subn_28_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevGoals_0_4 = next_value_of_STATE_VARIABLE_RevGoals_0_4;
      STATE_VARIABLE_Subn_0_6 = next_value_of_STATE_VARIABLE_Subn_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word Subn_4,
  MR_Word Var0_5,
  MR_Word * Var_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var1_7;
    MR_Box conv0_Var1_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), Subn_4, ((MR_Box) (Var0_5)), &conv0_Var1_7);
    if (succeeded)
    {
      Var1_7 = ((MR_Word) (conv0_Var1_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_Var0_5 = Var1_7;

      // direct tailcall eliminated
      ;
      Var0_5 = next_value_of_Var0_5;
      continue;
    }
    else
      *Var_6 = Var0_5;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Common_0_7,
  MR_Word * STATE_VARIABLE_Common_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Goals_3 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1);
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Common_8 = STATE_VARIABLE_Common_0_7;
    }
    else
    {
      MR_Word HeadGoal0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailGoals0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadSubGoals0_32;
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 0))));
      MR_Word Var_84;

      succeeded = ((((MR_tag((MR_Word) Var_83)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_83, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_84 = ((MR_Unsigned) ((MR_hl_field(3, Var_83, (MR_Integer) 1))) & (MR_Integer) 1);
        HeadSubGoals0_32 = ((MR_Word) ((MR_hl_field(3, Var_83, (MR_Integer) 2))));
        succeeded = (Var_84 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word HeadTailGoals1_34;
        MR_Word next_value_of_HeadVar__2_2;

        HeadTailGoals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals0_32, TailGoals0_25);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = HeadTailGoals1_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word HeadGoal1_37;
        MR_Word HeadGoalExpr1_38;
        MR_Word HeadGoalInfo1_39;
        MR_Word STATE_VARIABLE_Common_87_87;
        MR_Word STATE_VARIABLE_Info_88_88;
        MR_Word HeadSubGoals1_40;
        MR_Word Var_89;

        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(HeadGoal0_24, &HeadGoal1_37, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_Common_0_7, &STATE_VARIABLE_Common_87_87, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_88_88);
        HeadGoalExpr1_38 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_37, (MR_Integer) 0))));
        HeadGoalInfo1_39 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_37, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) HeadGoalExpr1_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr1_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_89 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr1_38, (MR_Integer) 1))) & (MR_Integer) 1);
          HeadSubGoals1_40 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_38, (MR_Integer) 2))));
          succeeded = (Var_89 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word HeadTailGoals1_106;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

          HeadTailGoals1_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals1_40, TailGoals0_25);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = HeadTailGoals1_106;
          next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_88_88;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
          continue;
        }
        else
        {
          MR_Word InstMap1_41;

          hlds__goal_util__update_instmap_3_p_0(HeadGoal1_37, HeadVar__6_6, &InstMap1_41);
          succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap1_41);
          if (!(succeeded))
          {
            MR_Word Detism1_42;
            MR_Word Var_116;
            MR_Word Var_43;

            Detism1_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(HeadGoalInfo1_39);
            parse_tree__prog_data__determinism_components_3_p_0(Detism1_42, &Var_43, &Var_116);
            succeeded = ((MR_Integer) 0 == Var_116);
          }
          if (succeeded)
          {
            MR_Word HeadGoalInfo0_45 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 1))));
            MR_Word HeadGoalContext0_46;
            MR_Word STATE_VARIABLE_Info_94_94;

            HeadGoalContext0_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo0_45);
            check_hlds__simplify__simplify_goal_conj__delete_tail_unreachable_goals_7_p_0(STATE_VARIABLE_PrevGoals_0_1, HeadGoalContext0_46, HeadGoal1_37, TailGoals0_25, Goals_3, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_94_94);
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_10);
            *STATE_VARIABLE_Common_8 = STATE_VARIABLE_Common_87_87;
          }
          else
          {
            MR_Word TailGoals1_75;
            MR_Word TailInstMap_76;
            MR_Word STATE_VARIABLE_PrevGoals_96_96;
            MR_Word STATE_VARIABLE_Info_97_97;
            MR_Word STATE_VARIABLE_Common_99_99;
            MR_Word TailTailGoals0_51;
            MR_Word HeadTailGoalExpr0_52;
            MR_Word HeadTailGoalInfo0_53;
            MR_Word HeadTailGoal0_50;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word next_value_of_STATE_VARIABLE_PrevGoals_0_1;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_HeadVar__6_6;
            MR_Word next_value_of_STATE_VARIABLE_Common_0_7;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

            succeeded = check_hlds__simplify__simplify_info__simplify_do_merge_code_after_switch_1_p_0(STATE_VARIABLE_Info_88_88);
            if (succeeded)
            {
              Var_117 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_37, (MR_Integer) 0))));
              Var_118 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_37, (MR_Integer) 1))));
              succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(HeadGoalExpr1_38, Var_117);
              if (succeeded)
              {
                succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(HeadGoalInfo1_39, Var_118);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) HeadGoalExpr1_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr1_38, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    succeeded = (TailGoals0_25 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      HeadTailGoal0_50 = ((MR_Word) ((MR_hl_field(1, TailGoals0_25, (MR_Integer) 0))));
                      TailTailGoals0_51 = ((MR_Word) ((MR_hl_field(1, TailGoals0_25, (MR_Integer) 1))));
                      HeadTailGoalExpr0_52 = ((MR_Word) ((MR_hl_field(0, HeadTailGoal0_50, (MR_Integer) 0))));
                      HeadTailGoalInfo0_53 = ((MR_Word) ((MR_hl_field(0, HeadTailGoal0_50, (MR_Integer) 1))));
                      if (((MR_tag((MR_Word) HeadTailGoalExpr0_52)) == (MR_Integer) 1))
                        succeeded = MR_TRUE;
                      else
                      if (((((MR_tag((MR_Word) HeadTailGoalExpr0_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadTailGoalExpr0_52, (MR_Integer) 0)))) == (MR_Integer) 4))))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word MergeResult_67;

              if (((MR_tag((MR_Word) HeadTailGoalExpr0_52)) == (MR_Integer) 1))
                check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_116_111_95_109_101_114_103_101_95_117_110_105_102_121_95_97_102_116_101_114_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0(STATE_VARIABLE_Info_88_88, HeadVar__4_4, HeadGoalExpr1_38, HeadGoalInfo1_39, HeadTailGoalExpr0_52, TailTailGoals0_51, &MergeResult_67);
              else
              {
                MR_Word HeadGoalExpr0_71 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 0))));
                MR_Word HeadGoalInfo0_107 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 1))));

                succeeded = ((((MR_tag((MR_Word) HeadGoalExpr0_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr0_71, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                  check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0(STATE_VARIABLE_Info_88_88, HeadGoalExpr0_71, HeadGoalInfo0_107, HeadTailGoalExpr0_52, HeadTailGoalInfo0_53, &MergeResult_67);
                else
                  MergeResult_67 = (MR_Word) ((MR_Unsigned) 0U);
              }
              switch (MR_tag((MR_Word) MergeResult_67)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_PrevGoals_96_96 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (HeadGoal1_37)));
                    TailGoals1_75 = TailGoals0_25;
                    TailInstMap_76 = InstMap1_41;
                    STATE_VARIABLE_Common_99_99 = STATE_VARIABLE_Common_87_87;
                    STATE_VARIABLE_Info_97_97 = STATE_VARIABLE_Info_88_88;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Info_101_101;
                    MR_Word HeadGoal2_109 = (MR_Word) (MR_body((MR_Word) (MergeResult_67), (MR_Integer) 1));

                    {
                      TailGoals1_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, TailGoals1_75, 0) = ((MR_Box) (HeadGoal2_109));
                      MR_hl_field(1, TailGoals1_75, 1) = ((MR_Box) (TailTailGoals0_51));
                    }
                    TailInstMap_76 = HeadVar__6_6;
                    STATE_VARIABLE_Common_99_99 = STATE_VARIABLE_Common_0_7;
                    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_101_101);
                    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_97_97);
                    STATE_VARIABLE_PrevGoals_96_96 = STATE_VARIABLE_PrevGoals_0_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HeadGoal2_77 = ((MR_Word) ((MR_hl_field(2, MergeResult_67, (MR_Integer) 0))));

                    STATE_VARIABLE_Info_97_97 = ((MR_Word) ((MR_hl_field(2, MergeResult_67, (MR_Integer) 1))));
                    STATE_VARIABLE_PrevGoals_96_96 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (HeadGoal2_77)));
                    TailGoals1_75 = TailTailGoals0_51;
                    TailInstMap_76 = InstMap1_41;
                    STATE_VARIABLE_Common_99_99 = STATE_VARIABLE_Common_87_87;
                  }
                  break;
              }
            }
            else
            {
              STATE_VARIABLE_PrevGoals_96_96 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (HeadGoal1_37)));
              TailGoals1_75 = TailGoals0_25;
              TailInstMap_76 = InstMap1_41;
              STATE_VARIABLE_Info_97_97 = STATE_VARIABLE_Info_88_88;
              STATE_VARIABLE_Common_99_99 = STATE_VARIABLE_Common_87_87;
            }
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_PrevGoals_0_1 = STATE_VARIABLE_PrevGoals_96_96;
            next_value_of_HeadVar__2_2 = TailGoals1_75;
            next_value_of_HeadVar__6_6 = TailInstMap_76;
            next_value_of_STATE_VARIABLE_Common_0_7 = STATE_VARIABLE_Common_99_99;
            next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_97_97;
            STATE_VARIABLE_PrevGoals_0_1 = next_value_of_STATE_VARIABLE_PrevGoals_0_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            STATE_VARIABLE_Common_0_7 = next_value_of_STATE_VARIABLE_Common_0_7;
            STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
            continue;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_116_111_95_109_101_114_103_101_95_117_110_105_102_121_95_97_102_116_101_114_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0(
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word ConjInfo_10,
  MR_Word HeadGoalExpr1_11,
  MR_Word HeadGoalInfo1_12,
  MR_Word HeadTailGoalExpr0_13,
  MR_Word TailTailGoals0_15,
  MR_Word * Result_16)
{
  MR_bool succeeded;
  MR_Word SwitchVar_17 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_11, (MR_Integer) 1))));
  MR_Word SwitchCanFail1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr1_11, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Cases1_19 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_11, (MR_Integer) 3))));
  MR_Word Unification_23 = ((MR_Word) ((MR_hl_field(1, HeadTailGoalExpr0_13, (MR_Integer) 3))));
  MR_Word RevTruncatedSameCases_31;
  MR_Word RevDiffCases_32;
  MR_Word TestVar_25;
  MR_Word TestConsId_26;
  MR_Word TestArgs_27;
  MR_Word DeconstructCanFail_29;
  MR_Word ConjNonLocals_33;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word TypeCtorInfo_44_44;

  succeeded = ((MR_tag((MR_Word) Unification_23)) == (MR_Integer) 1);
  if (succeeded)
  {
    TestVar_25 = ((MR_Word) ((MR_hl_field(1, Unification_23, (MR_Integer) 0))));
    TestConsId_26 = ((MR_Word) ((MR_hl_field(1, Unification_23, (MR_Integer) 1))));
    TestArgs_27 = ((MR_Word) ((MR_hl_field(1, Unification_23, (MR_Integer) 2))));
    DeconstructCanFail_29 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_23, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    succeeded = (TestArgs_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (DeconstructCanFail_29 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = (MR_Word) ((MR_Unsigned) 0U);
        Var_42 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(Cases1_19, TestVar_25, TestConsId_26, Var_41, &RevTruncatedSameCases_31, Var_42, &RevDiffCases_32);
        if (succeeded)
        {
          ConjNonLocals_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConjInfo_10);
          TypeCtorInfo_44_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_44_44, ConjNonLocals_33, TestVar_25);
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(TailTailGoals0_15, TestVar_25);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word TruncatedSwitchCanFail_34;
    MR_Word TruncatedSameCases_37;
    MR_Word HeadGoalExpr2_38;
    MR_Word HeadGoal2_39;
    MR_Word STATE_VARIABLE_Info_43_43;

    if ((RevDiffCases_32 == (MR_Word) ((MR_Unsigned) 0U)))
      TruncatedSwitchCanFail_34 = SwitchCanFail1_18;
    else
      TruncatedSwitchCanFail_34 = (MR_Integer) 0;
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevTruncatedSameCases_31, &TruncatedSameCases_37);
    {
      HeadGoalExpr2_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadGoalExpr2_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, HeadGoalExpr2_38, 1) = ((MR_Box) (SwitchVar_17));
      MR_hl_field(3, HeadGoalExpr2_38, 2) = (MR_Box) ((MR_Unsigned) (TruncatedSwitchCanFail_34));
      MR_hl_field(3, HeadGoalExpr2_38, 3) = ((MR_Box) (TruncatedSameCases_37));
    }
    {
      HeadGoal2_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadGoal2_39, 0) = ((MR_Box) (HeadGoalExpr2_38));
      MR_hl_field(0, HeadGoal2_39, 1) = ((MR_Box) (HeadGoalInfo1_12));
    }
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_43_43);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_16 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (HeadGoal2_39));
      MR_hl_field(2, base, 1) = ((MR_Box) (STATE_VARIABLE_Info_43_43));
    }
  }
  else
    *Result_16 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2)
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
      MR_Word Goal_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
      MR_Word NonLocals_9;
      MR_Word next_value_of_HeadVar__1_1;

      NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
      succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, TestVar_2);
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2,
  MR_Word TestConsId_3,
  MR_Word STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * STATE_VARIABLE_RevDiffCases_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevDiffCases_7 = STATE_VARIABLE_RevDiffCases_0_6;
      *STATE_VARIABLE_RevTruncatedSameCases_5 = STATE_VARIABLE_RevTruncatedSameCases_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_48_48;
      MR_Word Case_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 2))));
      MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 0))));
      MR_Word GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 1))));
      MR_Word Unification_30;
      MR_Word CaseConsId_32;
      MR_Word CaseArgs_33;
      MR_Word STATE_VARIABLE_RevTruncatedSameCases_45_45;
      MR_Word STATE_VARIABLE_RevDiffCases_46_46;
      MR_Word Var_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevDiffCases_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr_25)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_30 = ((MR_Word) ((MR_hl_field(1, GoalExpr_25, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 0))));
          CaseConsId_32 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 1))));
          CaseArgs_33 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 2))));
          TypeInfo_48_48 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (TestVar_2)), ((MR_Box) (Var_47)));
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(CaseConsId_32, TestConsId_3);
            if (succeeded)
              succeeded = (CaseArgs_33 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Context_38;
              MR_Word TrueGoal_39;
              MR_Word TruncatedCase_40;

              Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
              TrueGoal_39 = hlds__make_goal__true_goal_with_context_1_f_0(Context_38);
              {
                TruncatedCase_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TruncatedCase_40, 0) = ((MR_Box) (MainConsId_22));
                MR_hl_field(0, TruncatedCase_40, 1) = ((MR_Box) (OtherConsIds_23));
                MR_hl_field(0, TruncatedCase_40, 2) = ((MR_Box) (TrueGoal_39));
              }
              {
                STATE_VARIABLE_RevTruncatedSameCases_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevTruncatedSameCases_45_45, 0) = ((MR_Box) (TruncatedCase_40));
                MR_hl_field(1, STATE_VARIABLE_RevTruncatedSameCases_45_45, 1) = ((MR_Box) (STATE_VARIABLE_RevTruncatedSameCases_0_4));
              }
              STATE_VARIABLE_RevDiffCases_46_46 = STATE_VARIABLE_RevDiffCases_0_6;
            }
            else
            {
              {
                STATE_VARIABLE_RevDiffCases_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevDiffCases_46_46, 0) = ((MR_Box) (Case_16));
                MR_hl_field(1, STATE_VARIABLE_RevDiffCases_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevDiffCases_0_6));
              }
              STATE_VARIABLE_RevTruncatedSameCases_45_45 = STATE_VARIABLE_RevTruncatedSameCases_0_4;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Cases_17;
            next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4 = STATE_VARIABLE_RevTruncatedSameCases_45_45;
            next_value_of_STATE_VARIABLE_RevDiffCases_0_6 = STATE_VARIABLE_RevDiffCases_46_46;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_RevTruncatedSameCases_0_4 = next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4;
            STATE_VARIABLE_RevDiffCases_0_6 = next_value_of_STATE_VARIABLE_RevDiffCases_0_6;
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
check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Cases_40;

  check_hlds__simplify__simplify_goal_conj__construct_and_add_merged_switch_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cases_40);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cases_40));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0(
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word FirstGoalExpr_8,
  MR_Word FirstGoalInfo_9,
  MR_Word SecondGoalExpr0_10,
  MR_Word SecondGoalInfo0_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word FirstSwitchVar_23 = ((MR_Word) ((MR_hl_field(3, FirstGoalExpr_8, (MR_Integer) 1))));
  MR_Word FirstSwitchCanFail_24 = ((MR_Unsigned) ((MR_hl_field(3, FirstGoalExpr_8, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word FirstCases_25 = ((MR_Word) ((MR_hl_field(3, FirstGoalExpr_8, (MR_Integer) 3))));
  MR_Word SecondSwitchVar_26 = ((MR_Word) ((MR_hl_field(3, SecondGoalExpr0_10, (MR_Integer) 1))));
  MR_Word SecondSwitchCanFail_27 = ((MR_Unsigned) ((MR_hl_field(3, SecondGoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word SecondCases_28 = ((MR_Word) ((MR_hl_field(3, SecondGoalExpr0_10, (MR_Integer) 3))));
  MR_Word FirstSwitchGoalMap_29;
  MR_Word SecondSwitchGoalMap_31;
  MR_Word CasesConsIdsMap_32;
  MR_Word TypeCtorInfo_100_100;
  MR_Word TypeCtorInfo_101_101;
  MR_Word TypeCtorInfo_102_102;
  MR_Word TypeInfo_103_103;
  MR_Word TypeInfo_104_104;
  MR_Word TypeCtorInfo_105_105;
  MR_Word FirstSwitchConsIdMap_30;
  MR_Integer FirstSwitchNumCases_33;
  MR_Integer SecondSwitchNumCases_34;
  MR_Integer MergedNumCases_35;
  MR_Unsigned Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Unsigned Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Integer Var_68;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[2]), ((MR_Box) (SecondSwitchVar_26)), ((MR_Box) (FirstSwitchVar_23)));
  if (succeeded)
  {
    Var_62 = (MR_Unsigned) 1U;
    TypeCtorInfo_100_100 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
    TypeCtorInfo_101_101 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
    Var_63 = mercury__map__init_0_f_0(TypeCtorInfo_100_100, TypeCtorInfo_101_101);
    TypeCtorInfo_102_102 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
    Var_64 = mercury__map__init_0_f_0(TypeCtorInfo_102_102, TypeCtorInfo_100_100);
    check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0(FirstCases_25, Var_62, Var_63, &FirstSwitchGoalMap_29, Var_64, &FirstSwitchConsIdMap_30);
    Var_65 = (MR_Unsigned) 1U;
    Var_66 = mercury__map__init_0_f_0(TypeCtorInfo_100_100, TypeCtorInfo_101_101);
    TypeInfo_103_103 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]);
    TypeInfo_104_104 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]);
    Var_67 = mercury__map__init_0_f_0(TypeInfo_103_103, TypeInfo_104_104);
    check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0(SecondCases_28, Var_65, FirstSwitchConsIdMap_30, Var_66, &SecondSwitchGoalMap_31, Var_67, &CasesConsIdsMap_32);
    TypeCtorInfo_105_105 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
    mercury__list__length_2_p_0(TypeCtorInfo_105_105, FirstCases_25, &FirstSwitchNumCases_33);
    mercury__list__length_2_p_0(TypeCtorInfo_105_105, SecondCases_28, &SecondSwitchNumCases_34);
    mercury__map__count_2_p_0(TypeInfo_103_103, TypeInfo_104_104, CasesConsIdsMap_32, &MergedNumCases_35);
    Var_68 = (MR_Integer) ((MR_Unsigned) FirstSwitchNumCases_33 * (MR_Unsigned) SecondSwitchNumCases_34);
    succeeded = (MergedNumCases_35 < Var_68);
  }
  if (succeeded)
  {
    MR_Word CanFail_36;
    MR_Word Cases0_37;
    MR_Word Cases_38;
    MR_Word GoalExpr_39;
    MR_Word GoalInfo_40;
    MR_Word Goal_41;
    MR_Word Var_69;
    MR_Word FirstDetism_115;
    MR_Word SecondDetism_116;
    MR_Word FirstPurity_117;
    MR_Word SecondPurity_118;
    MR_Word FirstInstMapDelta_119;
    MR_Word SecondInstMapDelta_120;
    MR_Word FirstNonLocals_121;
    MR_Word SecondNonLocals_122;
    MR_Word FirstFeatures_123;
    MR_Word SecondFeatures_124;
    MR_Word Detism_125;
    MR_Word Purity_126;
    MR_Word InstMapDelta_127;
    MR_Word NonLocals_128;
    MR_Word Features_129;
    MR_Word STATE_VARIABLE_GoalInfo_25_132;
    MR_Word STATE_VARIABLE_GoalInfo_26_133;
    MR_Word STATE_VARIABLE_GoalInfo_27_134;
    MR_Word STATE_VARIABLE_GoalInfo_28_135;
    MR_Box conv1_Cases0_37;

    succeeded = (FirstSwitchCanFail_24 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (SecondSwitchCanFail_27 == (MR_Integer) 1);
    if (succeeded)
      CanFail_36 = (MR_Integer) 1;
    else
      CanFail_36 = (MR_Integer) 0;
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_6[0]));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__try_to_merge_switch_after_switch_6_p_0_1));
      MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_69, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_42));
      MR_hl_field(0, Var_69, 4) = ((MR_Box) (FirstSwitchGoalMap_29));
      MR_hl_field(0, Var_69, 5) = ((MR_Box) (SecondSwitchGoalMap_31));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[1]), Var_69, CasesConsIdsMap_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Cases0_37);
    Cases0_37 = ((MR_Word) (conv1_Cases0_37));
    mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_37, &Cases_38);
    {
      GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (FirstSwitchVar_23));
      MR_hl_field(3, GoalExpr_39, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
      MR_hl_field(3, GoalExpr_39, 3) = ((MR_Box) (Cases_38));
    }
    FirstDetism_115 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(FirstGoalInfo_9);
    SecondDetism_116 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SecondGoalInfo0_11);
    FirstPurity_117 = hlds__hlds_goal__goal_info_get_purity_1_f_0(FirstGoalInfo_9);
    SecondPurity_118 = hlds__hlds_goal__goal_info_get_purity_1_f_0(SecondGoalInfo0_11);
    FirstInstMapDelta_119 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(FirstGoalInfo_9);
    SecondInstMapDelta_120 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SecondGoalInfo0_11);
    FirstNonLocals_121 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_9);
    SecondNonLocals_122 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(SecondGoalInfo0_11);
    FirstFeatures_123 = hlds__hlds_goal__goal_info_get_features_1_f_0(FirstGoalInfo_9);
    SecondFeatures_124 = hlds__hlds_goal__goal_info_get_features_1_f_0(SecondGoalInfo0_11);
    parse_tree__prog_detism__det_conjunction_detism_3_p_0(FirstDetism_115, SecondDetism_116, &Detism_125);
    Purity_126 = parse_tree__prog_data__worst_purity_2_f_0(FirstPurity_117, SecondPurity_118);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(FirstInstMapDelta_119, SecondInstMapDelta_120, (MR_Integer) 2, &InstMapDelta_127);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstNonLocals_121, SecondNonLocals_122, &NonLocals_128);
    mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), FirstFeatures_123, SecondFeatures_124, &Features_129);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_125, FirstGoalInfo_9, &STATE_VARIABLE_GoalInfo_25_132);
    hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_126, STATE_VARIABLE_GoalInfo_25_132, &STATE_VARIABLE_GoalInfo_26_133);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_127, STATE_VARIABLE_GoalInfo_26_133, &STATE_VARIABLE_GoalInfo_27_134);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_128, STATE_VARIABLE_GoalInfo_27_134, &STATE_VARIABLE_GoalInfo_28_135);
    hlds__hlds_goal__goal_info_set_features_3_p_0(Features_129, STATE_VARIABLE_GoalInfo_28_135, &GoalInfo_40);
    {
      Goal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_41, 0) = ((MR_Box) (GoalExpr_39));
      MR_hl_field(0, Goal_41, 1) = ((MR_Box) (GoalInfo_40));
    }
    *Result_12 = (MR_Word) (MR_mkword(1, (MR_Word) (Goal_41)));
  }
  else
    *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CasesConsIdsMap_15;

  check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_cons_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CasesConsIdsMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CasesConsIdsMap_15));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned CurCaseNum_2,
  MR_Word FirstSwitchConsIdMap_3,
  MR_Word STATE_VARIABLE_SecondSwitchGoalMap_0_4,
  MR_Word * STATE_VARIABLE_SecondSwitchGoalMap_5,
  MR_Word STATE_VARIABLE_CasesConsIdsMap_0_6,
  MR_Word * STATE_VARIABLE_CasesConsIdsMap_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CasesConsIdsMap_7 = STATE_VARIABLE_CasesConsIdsMap_0_6;
      *STATE_VARIABLE_SecondSwitchGoalMap_5 = STATE_VARIABLE_SecondSwitchGoalMap_0_4;
    }
    else
    {
      MR_Word Case_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_SecondSwitchGoalMap_29_29;
      MR_Word STATE_VARIABLE_CasesConsIdsMap_30_30;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_CasesConsIdsMap_32_32;
      MR_Unsigned Var_33;
      MR_Box conv1_STATE_VARIABLE_CasesConsIdsMap_32_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_CurCaseNum_2;
      MR_Word next_value_of_STATE_VARIABLE_SecondSwitchGoalMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CasesConsIdsMap_0_6;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (CurCaseNum_2)), ((MR_Box) (Goal_24)), STATE_VARIABLE_SecondSwitchGoalMap_0_4, &STATE_VARIABLE_SecondSwitchGoalMap_29_29);
      check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_cons_id_5_p_0(FirstSwitchConsIdMap_3, CurCaseNum_2, MainConsId_22, STATE_VARIABLE_CasesConsIdsMap_0_6, &STATE_VARIABLE_CasesConsIdsMap_30_30);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_5[0]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_7_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (FirstSwitchConsIdMap_3));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) (CurCaseNum_2));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[1]), Var_31, OtherConsIds_23, ((MR_Box) (STATE_VARIABLE_CasesConsIdsMap_30_30)), &conv1_STATE_VARIABLE_CasesConsIdsMap_32_32);
      STATE_VARIABLE_CasesConsIdsMap_32_32 = ((MR_Word) (conv1_STATE_VARIABLE_CasesConsIdsMap_32_32));
      Var_33 = (CurCaseNum_2 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_17;
      next_value_of_CurCaseNum_2 = Var_33;
      next_value_of_STATE_VARIABLE_SecondSwitchGoalMap_0_4 = STATE_VARIABLE_SecondSwitchGoalMap_29_29;
      next_value_of_STATE_VARIABLE_CasesConsIdsMap_0_6 = STATE_VARIABLE_CasesConsIdsMap_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurCaseNum_2 = next_value_of_CurCaseNum_2;
      STATE_VARIABLE_SecondSwitchGoalMap_0_4 = next_value_of_STATE_VARIABLE_SecondSwitchGoalMap_0_4;
      STATE_VARIABLE_CasesConsIdsMap_0_6 = next_value_of_STATE_VARIABLE_CasesConsIdsMap_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_second_switch_cons_id_5_p_0(
  MR_Word FirstSwitchConsIdMap_6,
  MR_Unsigned SecondSwitchCaseNum_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_CasesConsIdsMap_0_14,
  MR_Word * STATE_VARIABLE_CasesConsIdsMap_15)
{
  MR_bool succeeded;
  MR_Unsigned FirstSwitchCaseNum_10;
  MR_Box conv0_FirstSwitchCaseNum_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), FirstSwitchConsIdMap_6, ((MR_Box) (ConsId_8)), &conv0_FirstSwitchCaseNum_10);
  if (succeeded)
  {
    FirstSwitchCaseNum_10 = ((MR_Unsigned) (conv0_FirstSwitchCaseNum_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Tuple CaseNums_11;
    MR_Word OldConsIds_12;
    MR_Box conv1_OldConsIds_12;

    {
      CaseNums_11 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CaseNums_11, 0) = ((MR_Box) (FirstSwitchCaseNum_10));
      MR_hl_field(0, CaseNums_11, 1) = ((MR_Box) (SecondSwitchCaseNum_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), STATE_VARIABLE_CasesConsIdsMap_0_14, ((MR_Box) (CaseNums_11)), &conv1_OldConsIds_12);
    if (succeeded)
    {
      OldConsIds_12 = ((MR_Word) (conv1_OldConsIds_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NewConsIds_13;

      NewConsIds_13 = mercury__one_or_more__cons_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_8)), OldConsIds_12);
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), ((MR_Box) (CaseNums_11)), ((MR_Box) (NewConsIds_13)), STATE_VARIABLE_CasesConsIdsMap_0_14, STATE_VARIABLE_CasesConsIdsMap_15);
    }
    else
    {
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (ConsId_8));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), ((MR_Box) (CaseNums_11)), ((MR_Box) (Var_17)), STATE_VARIABLE_CasesConsIdsMap_0_14, STATE_VARIABLE_CasesConsIdsMap_15);
    }
  }
  else
    *STATE_VARIABLE_CasesConsIdsMap_15 = STATE_VARIABLE_CasesConsIdsMap_0_14;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_39;

  check_hlds__simplify__simplify_goal_conj__IntroducedFrom__pred__build_maps_first_switch__673__1_4_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_39));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned CurCaseNum_2,
  MR_Word STATE_VARIABLE_FirstSwitchGoalMap_0_3,
  MR_Word * STATE_VARIABLE_FirstSwitchGoalMap_4,
  MR_Word STATE_VARIABLE_FirstSwitchConsIdMap_0_5,
  MR_Word * STATE_VARIABLE_FirstSwitchConsIdMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FirstSwitchConsIdMap_6 = STATE_VARIABLE_FirstSwitchConsIdMap_0_5;
      *STATE_VARIABLE_FirstSwitchGoalMap_4 = STATE_VARIABLE_FirstSwitchGoalMap_0_3;
    }
    else
    {
      MR_Word Case_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_FirstSwitchGoalMap_26_26;
      MR_Word STATE_VARIABLE_FirstSwitchConsIdMap_27_27;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_FirstSwitchConsIdMap_29_29;
      MR_Unsigned Var_30;
      MR_Box conv1_STATE_VARIABLE_FirstSwitchConsIdMap_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_CurCaseNum_2;
      MR_Word next_value_of_STATE_VARIABLE_FirstSwitchGoalMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_FirstSwitchConsIdMap_0_5;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (CurCaseNum_2)), ((MR_Box) (Goal_21)), STATE_VARIABLE_FirstSwitchGoalMap_0_3, &STATE_VARIABLE_FirstSwitchGoalMap_26_26);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (MainConsId_19)), ((MR_Box) (CurCaseNum_2)), STATE_VARIABLE_FirstSwitchConsIdMap_0_5, &STATE_VARIABLE_FirstSwitchConsIdMap_27_27);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_4[0]));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__build_maps_first_switch_6_p_0_1));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (CurCaseNum_2));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]), Var_28, OtherConsIds_20, ((MR_Box) (STATE_VARIABLE_FirstSwitchConsIdMap_27_27)), &conv1_STATE_VARIABLE_FirstSwitchConsIdMap_29_29);
      STATE_VARIABLE_FirstSwitchConsIdMap_29_29 = ((MR_Word) (conv1_STATE_VARIABLE_FirstSwitchConsIdMap_29_29));
      Var_30 = (CurCaseNum_2 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_15;
      next_value_of_CurCaseNum_2 = Var_30;
      next_value_of_STATE_VARIABLE_FirstSwitchGoalMap_0_3 = STATE_VARIABLE_FirstSwitchGoalMap_26_26;
      next_value_of_STATE_VARIABLE_FirstSwitchConsIdMap_0_5 = STATE_VARIABLE_FirstSwitchConsIdMap_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurCaseNum_2 = next_value_of_CurCaseNum_2;
      STATE_VARIABLE_FirstSwitchGoalMap_0_3 = next_value_of_STATE_VARIABLE_FirstSwitchGoalMap_0_3;
      STATE_VARIABLE_FirstSwitchConsIdMap_0_5 = next_value_of_STATE_VARIABLE_FirstSwitchConsIdMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__delete_tail_unreachable_goals_7_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_19,
  MR_Word HeadGoalContext0_9,
  MR_Word HeadGoal1_10,
  MR_Word TailGoals0_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word DeletedCallCallees0_14;
  MR_Word SubGoalCalledProcs_15;
  MR_Word DeletedCallCallees_16;
  MR_Word STATE_VARIABLE_PrevGoals_23_23;
  MR_Word STATE_VARIABLE_PrevGoals_26_26;

  check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_0_20, &DeletedCallCallees0_14);
  SubGoalCalledProcs_15 = hlds__goal_util__goals_proc_refs_1_f_0(TailGoals0_11);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_15, DeletedCallCallees0_14, &DeletedCallCallees_16);
  check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  STATE_VARIABLE_PrevGoals_23_23 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_19, ((MR_Box) (HeadGoal1_10)));
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_10, (MR_Integer) 0))));
    MR_Word Var_25;

    succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_24, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(3, Var_24, (MR_Integer) 1))));
      succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (!(succeeded))
    succeeded = (TailGoals0_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    STATE_VARIABLE_PrevGoals_26_26 = STATE_VARIABLE_PrevGoals_23_23;
  else
  {
    MR_Word FailGoal_18;

    FailGoal_18 = hlds__make_goal__fail_goal_with_context_1_f_0(HeadGoalContext0_9);
    STATE_VARIABLE_PrevGoals_26_26 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_23_23, ((MR_Box) (FailGoal_18)));
  }
  *Goals_12 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_26_26);
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_2;
    MR_Word Goals_3;
    MR_Word GoalInfo_5;
    MR_Word Detism_6;
    MR_Word SolnCount_8;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 1))));
      Detism_6 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_5);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_6, &Var_7, &SolnCount_8);
      succeeded = (SolnCount_8 == (MR_Integer) 3);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_3;

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
check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_conj____Unify____merge_code_after_switch_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_conj____Compare____merge_code_after_switch_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_conj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_merge_code_after_switch_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0);
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_conj.
