/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2026-01-14
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


// :- module check_hlds.switch_detection.
// :- implementation.

/*
INIT mercury__check_hlds__switch_detection__init
ENDINIT
*/

#include "check_hlds.switch_detection.mih"


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
#include "getopt.mih"
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
#include "check_hlds.find_bind_var.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.scout_disjunctions.mih"
#include "check_hlds.switch_candidates.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2];

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

static const MR_NotagFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__notag_functor_desc_switch_detect_info_0;

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__985__1_2_p_0(
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__2_108);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__952__1_2_p_0(
  MR_Word IsMember_22,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__960__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word IsMember_84);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__944__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word HeadVar__2_114);

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__switch_detection__accumulate_case_9_p_0(
  MR_Word LocalInfo_10,
  MR_Word Var_11,
  MR_Word GoalInfo0_12,
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cases_0_47,
  MR_Word * STATE_VARIABLE_Cases_48,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_49,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_50);

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_4(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word GoalInfo0_12,
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cases_0_47,
  MR_Word * STATE_VARIABLE_Cases_48,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_49,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_50);

static void MR_CALL 
check_hlds__switch_detection__gather_smallest_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SmallestContext_0_2,
  MR_Word * STATE_VARIABLE_SmallestContext_3);

static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_to_cases_table_4_p_0(
  MR_Word Arm_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_CasesTable_0_18,
  MR_Word * STATE_VARIABLE_CasesTable_19);

static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
  MR_Word Unifies_6,
  MR_Word LaterGoals_7,
  MR_Word GoalInfo_8,
  MR_Word Disjunct_9,
  MR_Word * Goal_10);

static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_8_p_0(
  MR_Word SwitchVar_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word _Result0_13,
  MR_Word * Result_14);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_53_44_32_55_93_95_48_8_p_0(
  MR_Word SwitchVar_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word * Result_14);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word Info_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_7_p_0(
  MR_Word InstMap0_8,
  MR_Word MaybeRequiredVar_9,
  MR_Word Disjuncts0_10,
  MR_Word GoalInfo_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_32,
  MR_Word * STATE_VARIABLE_LocalInfo_33);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
  MR_Word Var_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalInfo_0_5,
  MR_Word * STATE_VARIABLE_LocalInfo_6);

static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_6_p_0(
  MR_Word InstMap0_7,
  MR_Word MaybeRequiredVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_LocalInfo_0_112,
  MR_Word * STATE_VARIABLE_LocalInfo_113);

static void MR_CALL 
check_hlds__switch_detection__detect_switch_candidates_in_disj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Candidates_0_7,
  MR_Word * STATE_VARIABLE_Candidates_8);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
  MR_Word LocalInfo_8,
  MR_Word Var_9,
  MR_Word Disjuncts0_10,
  MR_Word GoalInfo_11,
  MR_Word * Left_12,
  MR_Word * Cases_13,
  MR_Word * Requant_14);

static void MR_CALL 
check_hlds__switch_detection__cases_table_to_cases_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
check_hlds__switch_detection__cases_table_to_cases_4_f_0(
  MR_Word LocalInfo_6,
  MR_Word Var_7,
  MR_Word GoalInfo_8,
  MR_Word CasesTable_9);

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
  MR_Word LocalInfo_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesTable_0_4,
  MR_Word * STATE_VARIABLE_CasesTable_5);

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
  MR_Word LocalInfo_8,
  MR_Word Var_9,
  MR_Word ConjGoals_10,
  MR_Word GoalInfo_11,
  MR_Word STATE_VARIABLE_RevUnifies_0_47,
  MR_Word STATE_VARIABLE_CasesTable_0_48,
  MR_Word * STATE_VARIABLE_CasesTable_49);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Left_0_4,
  MR_Word * STATE_VARIABLE_Left_5,
  MR_Word STATE_VARIABLE_CasesTable_0_6,
  MR_Word * STATE_VARIABLE_CasesTable_7);

static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][11];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][12];




static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0])),
    ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[3])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[3])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0 = {
  (MR_String) "single_cons_id_arm",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1 = {
  (MR_String) "multi_cons_id_arm",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0 };

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1 };

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____case_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____case_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "case_arm",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2] = {
  (MR_String) "cases_map",
  (MR_String) "conflict_cons_ids"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 = {
  (MR_String) "cases_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 };

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 };

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_table_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_table_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_table",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2] = {
  (MR_String) "cons_id_state",
  (MR_String) "cons_id_arms"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 = {
  (MR_String) "cons_id_entry",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 };

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 };

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_entry",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
  (MR_String) "cons_id_has_all_singles",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
  (MR_String) "cons_id_has_one_multi",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
  (MR_String) "cons_id_has_conflict",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_state_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_state_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_state",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5] = {
  (MR_String) "lsdi_var_table",
  (MR_String) "lsdi_disjunction_info_map",
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_requant",
  (MR_String) "lsdi_deleted_callees"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[5] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 = {
  (MR_String) "local_switch_detect_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 };

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 };

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "local_switch_detect_info",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0,

};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__notag_functor_desc_switch_detect_info_0 = {
  (MR_String) "switch_detect_info",
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_String) "sdi_module_info",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "switch_detect_info",
  { &check_hlds__switch_detection__check_hlds__switch_detection__notag_functor_desc_switch_detect_info_0 },
  { &check_hlds__switch_detection__check_hlds__switch_detection__notag_functor_desc_switch_detect_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0,

};

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__985__1_2_p_0(
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__2_108)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (HeadVar__2_108)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__952__1_2_p_0(
  MR_Word IsMember_22,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded = (IsMember_22 == HeadVar__2_58);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__960__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word IsMember_84)
{
  MR_bool succeeded = (IsMember_84 == HeadVar__1_64);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__944__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word HeadVar__2_114)
{
  MR_bool succeeded = (HeadVar__2_114 == HeadVar__1_54);

  return succeeded;
}

void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0(
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

    hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0(
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

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
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
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    parse_tree__var_table____Compare____var_table_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_module____Compare____module_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
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
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_11;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
      succeeded = (SubResult1_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
      {
        MR_Word SubResult2_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]), &SubResult2_14, ((MR_Box) (ArgX2_12)), ((MR_Box) (ArgY2_13)));
        succeeded = (SubResult2_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_14;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX3_15, ArgY3_16);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_10;
    MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX3_11, ArgY3_12);
      }
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.switch_detection.project_single_arm_goal\'/1", (MR_String) "multi arm");
  else
    Goal_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  return Goal_2;
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
  else
    Goal_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  return Goal_2;
}

static void MR_CALL 
check_hlds__switch_detection__accumulate_case_9_p_0(
  MR_Word LocalInfo_10,
  MR_Word Var_11,
  MR_Word GoalInfo0_12,
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cases_0_47,
  MR_Word * STATE_VARIABLE_Cases_48,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_49,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_50)
{
  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0(GoalInfo0_12, ConflictConsIds_13, HeadVar__5_5, STATE_VARIABLE_Cases_0_47, STATE_VARIABLE_Cases_48, STATE_VARIABLE_AlreadyHandledConsIds_0_49, STATE_VARIABLE_AlreadyHandledConsIds_50);
}

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__985__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_2;

  conv1_Goal_2 = check_hlds__switch_detection__project_arm_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Goal_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__952__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_2;

  conv0_Goal_2 = check_hlds__switch_detection__project_single_arm_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__960__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__944__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word GoalInfo0_12,
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cases_0_47,
  MR_Word * STATE_VARIABLE_Cases_48,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_49,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_50)
{
  MR_bool succeeded;
  MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 0))));
  MR_Word Entry_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 1))));
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, Entry_15, 1))));
  MR_Word Var_114 = ((MR_Unsigned) ((MR_hl_field(0, Entry_15, 0))) & (MR_Integer) 3);

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), STATE_VARIABLE_AlreadyHandledConsIds_0_49, ((MR_Box) (ConsId_14)));
  if (succeeded)
  {
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[1]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (Var_114));
    }
    mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "already handled but not cons_id_has_one_multi");
    *STATE_VARIABLE_AlreadyHandledConsIds_50 = STATE_VARIABLE_AlreadyHandledConsIds_0_49;
    *STATE_VARIABLE_Cases_48 = STATE_VARIABLE_Cases_0_47;
  }
  else
  {
    MR_Word Arms_21;

    Arms_21 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Var_113);
    switch (Var_114) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Case_24;
          MR_Word Var_61;
          MR_Word IsMember_84;
          MR_Word Disjuncts_85;
          MR_Word GoalInfo_117;
          MR_Word Goal_118;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (ConsId_14)), &IsMember_84);
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[2]));
            MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_2));
            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_61, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, Var_61, 4) = ((MR_Box) (IsMember_84));
          }
          mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "singles status but in ConflictConsIds");
          Disjuncts_85 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[5]), Arms_21);
          if ((Disjuncts_85 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_117 = GoalInfo0_12;
          else
          {
            MR_Word FirstDisjunct_120 = ((MR_Word) ((MR_hl_field(1, Disjuncts_85, 0))));
            MR_Word LaterDisjuncts_121 = ((MR_Word) ((MR_hl_field(1, Disjuncts_85, 1))));
            MR_Word FirstGoalInfo_123 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_120, 1))));
            MR_Word FirstContext_124;
            MR_Word SmallestContext_125;

            FirstContext_124 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_123);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_121, FirstContext_124, &SmallestContext_125);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_125, GoalInfo0_12, &GoalInfo_117);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_85, GoalInfo_117, &Goal_118);
          {
            Case_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_24, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(0, Case_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_24, 2) = ((MR_Box) (Goal_118));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Cases_48 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_24));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_47));
          }
          *STATE_VARIABLE_AlreadyHandledConsIds_50 = STATE_VARIABLE_AlreadyHandledConsIds_0_49;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IsMember_22;
          MR_Word Disjuncts_23;
          MR_Word Var_55;
          MR_Word Case_115;
          MR_Word GoalInfo_126;
          MR_Word Goal_127;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (ConsId_14)), &IsMember_22);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[2]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_4));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (IsMember_22));
            MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "conflict status but not in ConflictConsIds");
          Disjuncts_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[6]), Arms_21);
          if ((Disjuncts_23 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_126 = GoalInfo0_12;
          else
          {
            MR_Word FirstDisjunct_129 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 0))));
            MR_Word LaterDisjuncts_130 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 1))));
            MR_Word FirstGoalInfo_132 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_129, 1))));
            MR_Word FirstContext_133;
            MR_Word SmallestContext_134;

            FirstContext_133 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_132);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_130, FirstContext_133, &SmallestContext_134);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_134, GoalInfo0_12, &GoalInfo_126);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_23, GoalInfo_126, &Goal_127);
          {
            Case_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_115, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(0, Case_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_115, 2) = ((MR_Box) (Goal_127));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Cases_48 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_115));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_47));
          }
          *STATE_VARIABLE_AlreadyHandledConsIds_50 = STATE_VARIABLE_AlreadyHandledConsIds_0_49;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MainConsId0_26;
          MR_Word OtherConsIds0_27;
          MR_Word Goal_28;
          MR_Word Arm_25;
          MR_Word Var_67;

          succeeded = (Arms_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arm_25 = ((MR_Word) ((MR_hl_field(1, Arms_21, 0))));
            Var_67 = ((MR_Word) ((MR_hl_field(1, Arms_21, 1))));
            succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Arm_25)) == (MR_Integer) 1);
              if (succeeded)
              {
                MainConsId0_26 = ((MR_Word) ((MR_hl_field(1, Arm_25, 0))));
                OtherConsIds0_27 = ((MR_Word) ((MR_hl_field(1, Arm_25, 1))));
                Goal_28 = ((MR_Word) ((MR_hl_field(1, Arm_25, 2))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word AllConsIds0_29;
            MR_Word AllConsIds_31;
            MR_Word Var_68;
            MR_Word Var_30;

            {
              AllConsIds0_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllConsIds0_29, 0) = ((MR_Box) (MainConsId0_26));
              MR_hl_field(1, AllConsIds0_29, 1) = ((MR_Box) (OtherConsIds0_27));
            }
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[4]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_6));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (ConflictConsIds_13));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_68, AllConsIds0_29, &Var_30, &AllConsIds_31);
            if ((AllConsIds_31 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "cons_id_has_one_multi: AllConsIds = []");
                return;
              }
            else
            {
              MR_Word MainConsId_32 = ((MR_Word) ((MR_hl_field(1, AllConsIds_31, 0))));
              MR_Word OtherConsIds_33 = ((MR_Word) ((MR_hl_field(1, AllConsIds_31, 1))));
              MR_Word Case_116;

              {
                Case_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Case_116, 0) = ((MR_Box) (MainConsId_32));
                MR_hl_field(0, Case_116, 1) = ((MR_Box) (OtherConsIds_33));
                MR_hl_field(0, Case_116, 2) = ((MR_Box) (Goal_28));
              }
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_33, STATE_VARIABLE_AlreadyHandledConsIds_0_49, STATE_VARIABLE_AlreadyHandledConsIds_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Cases_48 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Case_116));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_47));
              }
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "misleading cons_id_has_one_multi");
              return;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__gather_smallest_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SmallestContext_0_2,
  MR_Word * STATE_VARIABLE_SmallestContext_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SmallestContext_3 = STATE_VARIABLE_SmallestContext_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));
      MR_Word Context_12;
      MR_Word STATE_VARIABLE_SmallestContext_1_16;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SmallestContext_0_2;

      Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
      mercury__term_context____Compare____term_context_0_0(&Var_18, Context_12, STATE_VARIABLE_SmallestContext_0_2);
      succeeded = ((MR_Integer) 1 == Var_18);
      if (succeeded)
        STATE_VARIABLE_SmallestContext_1_16 = Context_12;
      else
        STATE_VARIABLE_SmallestContext_1_16 = STATE_VARIABLE_SmallestContext_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_SmallestContext_0_2 = STATE_VARIABLE_SmallestContext_1_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SmallestContext_0_2 = next_value_of_STATE_VARIABLE_SmallestContext_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_to_cases_table_4_p_0(
  MR_Word Arm_5,
  MR_Word ConsId_6,
  MR_Word STATE_VARIABLE_CasesTable_0_18,
  MR_Word * STATE_VARIABLE_CasesTable_19)
{
  MR_bool succeeded;
  MR_Word CasesMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_18, 0))));
  MR_Word ConflictConsIds0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_18, 1))));
  MR_Word ConflictConsIds_13;
  MR_Word CasesMap_17;
  MR_Word Entry0_10;
  MR_Box conv0_Entry0_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap0_8, ((MR_Box) (ConsId_6)), &conv0_Entry0_10);
  if (succeeded)
  {
    Entry0_10 = ((MR_Word) (conv0_Entry0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word State0_11 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_10, 0))) & (MR_Integer) 3);
    MR_Word Arms0_12 = ((MR_Word) ((MR_hl_field(0, Entry0_10, 1))));
    MR_Word Arms_15;
    MR_Word Entry_16;

    switch (State0_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_6)), ConflictConsIds0_9, &ConflictConsIds_13);
        break;
      case (MR_Integer) 2:
        ConflictConsIds_13 = ConflictConsIds0_9;
        break;
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_5)), Arms0_12, &Arms_15);
    {
      Entry_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_16, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(0, Entry_16, 1) = ((MR_Box) (Arms_15));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_16)), CasesMap0_8, &CasesMap_17);
  }
  else
  {
    MR_Word Arms_22;
    MR_Word Entry_23;

    Arms_22 = mercury__cord__singleton_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_5)));
    {
      Entry_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_23, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Entry_23, 1) = ((MR_Box) (Arms_22));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_23)), CasesMap0_8, &CasesMap_17);
    ConflictConsIds_13 = ConflictConsIds0_9;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CasesTable_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CasesMap_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConflictConsIds_13));
  }
}

static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
  MR_Word Unifies_6,
  MR_Word LaterGoals_7,
  MR_Word GoalInfo_8,
  MR_Word Disjunct_9,
  MR_Word * Goal_10)
{
  MR_bool succeeded;
  MR_Word Conjuncts_13;
  MR_Word Var_20;
  MR_Word DisjunctGoals_11;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Disjunct_9, 0))));
  MR_Word Var_15;

  succeeded = ((((MR_tag((MR_Word) Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_14, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_15 = ((MR_Unsigned) ((MR_hl_field(3, Var_14, 1))) & (MR_Integer) 1);
    DisjunctGoals_11 = ((MR_Word) ((MR_hl_field(3, Var_14, 2))));
    succeeded = (Var_15 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), DisjunctGoals_11, LaterGoals_7);
    Conjuncts_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_6, Var_16);
  }
  else
  {
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Disjunct_9));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_18, LaterGoals_7);
    Conjuncts_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_6, Var_17);
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_20, 2) = ((MR_Box) (Conjuncts_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
  }
}

static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_8_p_0(
  MR_Word SwitchVar_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word _Result0_13,
  MR_Word * Result_14)
{
  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_53_44_32_55_93_95_48_8_p_0(SwitchVar_9, GoalExpr0_10, GoalInfo0_11, Goals_12, Result_14);
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_53_44_32_55_93_95_48_8_p_0(
  MR_Word SwitchVar_9,
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goals_12,
  MR_Word * Result_14)
{
  MR_bool succeeded;
  MR_Word Unification0_19;
  MR_Word UnifyVar_21;
  MR_Word Functor_22;
  MR_Word ArgVars_23;
  MR_Word TypeInfo_43_43;

  Unification0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
  UnifyVar_21 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 0))));
  Functor_22 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 1))));
  ArgVars_23 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *Result_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Functor_22));
  }
  succeeded = (ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeInfo_43_43 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (SwitchVar_9)), ((MR_Box) (UnifyVar_21)));
  }
  if (succeeded)
    *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Unification_27;
    MR_Word GoalExpr_28;
    MR_Word Goal_29;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 1))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 2))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Unification0_19, 3))));
    MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(1, Unification0_19, 4))) & (MR_Integer) 1);
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;

    {
      Unification_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Unification_27, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Unification_27, 1) = ((MR_Box) (Var_33));
      MR_hl_field(1, Unification_27, 2) = ((MR_Box) (Var_34));
      MR_hl_field(1, Unification_27, 3) = ((MR_Box) (Var_35));
      MR_hl_field(1, Unification_27, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_37)));
    }
    Var_38 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 2))));
    Var_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 4))));
    {
      GoalExpr_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_28, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, GoalExpr_28, 1) = ((MR_Box) (Var_39));
      MR_hl_field(1, GoalExpr_28, 2) = ((MR_Box) (Var_40));
      MR_hl_field(1, GoalExpr_28, 3) = ((MR_Box) (Unification_27));
      MR_hl_field(1, GoalExpr_28, 4) = ((MR_Box) (Var_42));
    }
    {
      Goal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_29, 0) = ((MR_Box) (GoalExpr_28));
      MR_hl_field(0, Goal_29, 1) = ((MR_Box) (GoalInfo0_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word Info_6 = (MR_Word) (STATE_VARIABLE_ModuleInfo_0_13);
  MR_Word ValidPredIds_7;
  MR_Word ValidPredIdSet_8;
  MR_Word PredIdTable0_9;
  MR_Word PredIdsInfos0_10;
  MR_Word PredIdsInfos_11;
  MR_Word PredIdTable_12;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &ValidPredIds_7);
  ValidPredIdSet_8 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_7);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &PredIdTable0_9);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_9, &PredIdsInfos0_10);
  check_hlds__switch_detection__detect_switches_in_preds_5_p_0(ProgressStream_4, Info_6, ValidPredIdSet_8, PredIdsInfos0_10, &PredIdsInfos_11);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_11, &PredIdTable_12);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word Info_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredIdInfo0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word PredIdsInfos0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word PredIdInfo_14;
    MR_Word PredIdsInfos_15;
    MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, 0))));
    MR_Word PredInfo0_17 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, 1))));

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_16)));
    if (succeeded)
    {
      MR_Word PredInfo_18;
      MR_Word NonImportedProcIds_20;

      NonImportedProcIds_20 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_17);
      if ((NonImportedProcIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
        PredInfo_18 = PredInfo0_17;
      else
      {
        MR_Word ProcTable0_24;
        MR_Word ProcList0_25;
        MR_Word ProcList_26;
        MR_Word ProcTable_27;
        MR_Word ModuleInfo_23 = (MR_Word) (Info_2);

        hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_1, ModuleInfo_23, (MR_String) "Detecting switches in", PredId_16);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_24);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_24, &ProcList0_25);
        check_hlds__switch_detection__detect_switches_in_procs_4_p_0(Info_2, NonImportedProcIds_20, ProcList0_25, &ProcList_26);
        mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcList_26, &ProcTable_27);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_27, PredInfo0_17, &PredInfo_18);
      }
      {
        PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_14, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(0, PredIdInfo_14, 1) = ((MR_Box) (PredInfo_18));
      }
    }
    else
      PredIdInfo_14 = PredIdInfo0_12;
    check_hlds__switch_detection__detect_switches_in_preds_5_p_0(ProgressStream_1, Info_2, ValidPredIdSet_3, PredIdsInfos0_13, &PredIdsInfos_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredIdInfo_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIdsInfos_15));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcIdInfo0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ProcIdsInfos0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ProcIdInfo_11;
    MR_Word ProcIdsInfos_12;
    MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, ProcIdInfo0_9, 0))));
    MR_Word ProcInfo0_14 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo0_9, 1))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_13)), HeadVar__2_2);
    if (succeeded)
    {
      MR_Word ProcInfo_15;

      check_hlds__switch_detection__detect_switches_in_proc_3_p_0(HeadVar__1_1, ProcInfo0_14, &ProcInfo_15);
      {
        ProcIdInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcIdInfo_11, 0) = ((MR_Box) (ProcId_13));
        MR_hl_field(0, ProcIdInfo_11, 1) = ((MR_Box) (ProcInfo_15));
      }
    }
    else
      ProcIdInfo_11 = ProcIdInfo0_9;
    check_hlds__switch_detection__detect_switches_in_procs_4_p_0(HeadVar__1_1, HeadVar__2_2, ProcIdsInfos0_10, &ProcIdsInfos_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcIdInfo_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcIdsInfos_12));
    }
  }
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_proc_3_p_0(
  MR_Word Info_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24)
{
  MR_Word ModuleInfo_6 = (MR_Word) (Info_4);
  MR_Word DisjunctionInfoMap_7;
  MR_Word InstMap0_8;
  MR_Word VarTable_9;
  MR_Word Goal0_10;
  MR_Word BodyDeletedCallCallees0_12;
  MR_Word LocalInfo0_13;
  MR_Word Goal_14;
  MR_Word LocalInfo_15;
  MR_Word Requant_19;
  MR_Word BodyDeletedCallCallees_20;
  MR_Word DeletedCallCallees0_21;
  MR_Word DeletedCallCallees_22;
  MR_Word STATE_VARIABLE_ProcInfo_1_25;
  MR_Word STATE_VARIABLE_ProcInfo_2_27;
  MR_Word STATE_VARIABLE_ProcInfo_3_29;

  check_hlds__scout_disjunctions__scout_disjunctions_in_proc_4_p_0(ModuleInfo_6, STATE_VARIABLE_ProcInfo_0_23, &STATE_VARIABLE_ProcInfo_1_25, &DisjunctionInfoMap_7);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_6, STATE_VARIABLE_ProcInfo_1_25, &InstMap0_8);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_25, &VarTable_9);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_25, &Goal0_10);
  BodyDeletedCallCallees0_12 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  {
    LocalInfo0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LocalInfo0_13, 0) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, LocalInfo0_13, 1) = ((MR_Box) (DisjunctionInfoMap_7));
    MR_hl_field(0, LocalInfo0_13, 2) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, LocalInfo0_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, LocalInfo0_13, 4) = ((MR_Box) (BodyDeletedCallCallees0_12));
  }
  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), Goal0_10, &Goal_14, LocalInfo0_13, &LocalInfo_15);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_1_25, &STATE_VARIABLE_ProcInfo_2_27);
  Requant_19 = ((MR_Unsigned) ((MR_hl_field(0, LocalInfo_15, 3))) & (MR_Integer) 1);
  BodyDeletedCallCallees_20 = ((MR_Word) ((MR_hl_field(0, LocalInfo_15, 4))));
  switch (Requant_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_ProcInfo_3_29 = STATE_VARIABLE_ProcInfo_2_27;
      break;
    case (MR_Integer) 0:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_2_27, &STATE_VARIABLE_ProcInfo_3_29);
      break;
  }
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_3_29, &DeletedCallCallees0_21);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), BodyDeletedCallCallees_20, DeletedCallCallees0_21, &DeletedCallCallees_22);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_22, STATE_VARIABLE_ProcInfo_3_29, STATE_VARIABLE_ProcInfo_24);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_7_p_0(
  MR_Word InstMap0_8,
  MR_Word MaybeRequiredVar_9,
  MR_Word Disjuncts0_10,
  MR_Word GoalInfo_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_32,
  MR_Word * STATE_VARIABLE_LocalInfo_33)
{
  MR_Word NonLocals_14;
  MR_Word VarsToTry_15;
  MR_Word CandidatesCord_16;
  MR_Word Candidates_17;
  MR_Word Var_34;

  NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, &VarsToTry_15);
  Var_34 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0));
  check_hlds__switch_detection__detect_switch_candidates_in_disj_8_p_0(STATE_VARIABLE_LocalInfo_0_32, GoalInfo_11, Disjuncts0_10, InstMap0_8, MaybeRequiredVar_9, VarsToTry_15, Var_34, &CandidatesCord_16);
  Candidates_17 = mercury__cord__to_list_1_f_0((MR_Word) (&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0), CandidatesCord_16);
  if ((Candidates_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Disjuncts_18;

    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap0_8, Disjuncts0_10, &Disjuncts_18, STATE_VARIABLE_LocalInfo_0_32, STATE_VARIABLE_LocalInfo_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_12 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_18));
    }
  }
  else
  {
    MR_Word FirstCandidate_19 = ((MR_Word) ((MR_hl_field(1, Candidates_17, 0))));
    MR_Word LaterCandidates_20 = ((MR_Word) ((MR_hl_field(1, Candidates_17, 1))));
    MR_Word BestCandidate_21;
    MR_Word BestRank_22;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;

    check_hlds__switch_candidates__select_best_candidate_switch_3_p_0(FirstCandidate_19, LaterCandidates_20, &BestCandidate_21);
    Var_40 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 1))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 2))));
    BestRank_22 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 4))));
    Var_44 = ((((MR_Unsigned) ((MR_hl_field(0, BestCandidate_21, 5))) >> 1)) & (MR_Integer) 1);
    Var_45 = ((MR_Unsigned) ((MR_hl_field(0, BestCandidate_21, 5))) & (MR_Integer) 1);
    switch (MR_tag((MR_Word) BestRank_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BestRank_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word SwitchGoalExpr_25;
              MR_Word LeftDisjuncts0_26;
              MR_Word STATE_VARIABLE_LocalInfo_2_36;
              MR_Word Cases_66;
              MR_Word STATE_VARIABLE_LocalInfo_1_69;
              MR_Word STATE_VARIABLE_LocalInfo_2_70;

              if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_LocalInfo_1_69 = STATE_VARIABLE_LocalInfo_0_32;
              else
              {
                MR_Word UnreachableCalledProcs_63;
                MR_Word DeletedCallCallees0_64;
                MR_Word DeletedCallCallees_65;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_80;

                UnreachableCalledProcs_63 = hlds__goal_refs__goals_proc_refs_1_f_0(Var_42);
                DeletedCallCallees0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 4))));
                mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_63, DeletedCallCallees0_64, &DeletedCallCallees_65);
                Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 0))));
                Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 1))));
                Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 2))));
                Var_80 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 3))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_LocalInfo_1_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 0) = ((MR_Box) (Var_77));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 1) = ((MR_Box) (Var_78));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 2) = ((MR_Box) (Var_79));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 3) = (MR_Box) ((MR_Unsigned) (Var_80));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 4) = ((MR_Box) (DeletedCallCallees_65));
                }
              }
              switch (Var_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_LocalInfo_2_70 = STATE_VARIABLE_LocalInfo_1_69;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 0))));
                    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 1))));
                    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 2))));
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 4))));

                    {
                      STATE_VARIABLE_LocalInfo_2_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 0) = ((MR_Box) (Var_82));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 1) = ((MR_Box) (Var_83));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 2) = ((MR_Box) (Var_84));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 4) = ((MR_Box) (Var_86));
                    }
                  }
                  break;
              }
              check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_40, InstMap0_8, Var_41, &Cases_66, STATE_VARIABLE_LocalInfo_2_70, &STATE_VARIABLE_LocalInfo_2_36);
              if ((Cases_66 == (MR_Word) ((MR_Unsigned) 0U)))
                SwitchGoalExpr_25 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_1[7]));
              else
                {
                  SwitchGoalExpr_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SwitchGoalExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, SwitchGoalExpr_25, 1) = ((MR_Box) (Var_40));
                  MR_hl_field(3, SwitchGoalExpr_25, 2) = (MR_Box) ((MR_Unsigned) (Var_44));
                  MR_hl_field(3, SwitchGoalExpr_25, 3) = ((MR_Box) (Cases_66));
                }
              LeftDisjuncts0_26 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 3))));
              if ((LeftDisjuncts0_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *GoalExpr_12 = SwitchGoalExpr_25;
                *STATE_VARIABLE_LocalInfo_33 = STATE_VARIABLE_LocalInfo_2_36;
              }
              else
              {
                MR_Word LeftGoal_29;
                MR_Word LeftDisjuncts_30;
                MR_Word SwitchGoal_31;
                MR_Word Var_38;
                MR_Word Var_39;

                check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_8, MaybeRequiredVar_9, LeftDisjuncts0_26, GoalInfo_11, &LeftGoal_29, STATE_VARIABLE_LocalInfo_2_36, STATE_VARIABLE_LocalInfo_33);
                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (LeftGoal_29));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) (GoalInfo_11));
                }
                hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_38, &LeftDisjuncts_30);
                {
                  SwitchGoal_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SwitchGoal_31, 0) = ((MR_Box) (SwitchGoalExpr_25));
                  MR_hl_field(0, SwitchGoal_31, 1) = ((MR_Box) (GoalInfo_11));
                }
                {
                  Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_39, 0) = ((MR_Box) (SwitchGoal_31));
                  MR_hl_field(1, Var_39, 1) = ((MR_Box) (LeftDisjuncts_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_39));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts0_10));
              }
              *STATE_VARIABLE_LocalInfo_33 = STATE_VARIABLE_LocalInfo_0_32;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word SwitchGoalExpr_25;
          MR_Word LeftDisjuncts0_26;
          MR_Word STATE_VARIABLE_LocalInfo_2_36;
          MR_Word Cases_66;
          MR_Word STATE_VARIABLE_LocalInfo_1_69;
          MR_Word STATE_VARIABLE_LocalInfo_2_70;

          if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LocalInfo_1_69 = STATE_VARIABLE_LocalInfo_0_32;
          else
          {
            MR_Word UnreachableCalledProcs_63;
            MR_Word DeletedCallCallees0_64;
            MR_Word DeletedCallCallees_65;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;

            UnreachableCalledProcs_63 = hlds__goal_refs__goals_proc_refs_1_f_0(Var_42);
            DeletedCallCallees0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 4))));
            mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_63, DeletedCallCallees0_64, &DeletedCallCallees_65);
            Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 0))));
            Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 1))));
            Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 2))));
            Var_80 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_32, 3))) & (MR_Integer) 1);
            {
              STATE_VARIABLE_LocalInfo_1_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 0) = ((MR_Box) (Var_77));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 1) = ((MR_Box) (Var_78));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 2) = ((MR_Box) (Var_79));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 3) = (MR_Box) ((MR_Unsigned) (Var_80));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 4) = ((MR_Box) (DeletedCallCallees_65));
            }
          }
          switch (Var_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_LocalInfo_2_70 = STATE_VARIABLE_LocalInfo_1_69;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 0))));
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 1))));
                MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 2))));
                MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_69, 4))));

                {
                  STATE_VARIABLE_LocalInfo_2_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 0) = ((MR_Box) (Var_82));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 1) = ((MR_Box) (Var_83));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 2) = ((MR_Box) (Var_84));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_70, 4) = ((MR_Box) (Var_86));
                }
              }
              break;
          }
          check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_40, InstMap0_8, Var_41, &Cases_66, STATE_VARIABLE_LocalInfo_2_70, &STATE_VARIABLE_LocalInfo_2_36);
          if ((Cases_66 == (MR_Word) ((MR_Unsigned) 0U)))
            SwitchGoalExpr_25 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_1[7]));
          else
            {
              SwitchGoalExpr_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SwitchGoalExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, SwitchGoalExpr_25, 1) = ((MR_Box) (Var_40));
              MR_hl_field(3, SwitchGoalExpr_25, 2) = (MR_Box) ((MR_Unsigned) (Var_44));
              MR_hl_field(3, SwitchGoalExpr_25, 3) = ((MR_Box) (Cases_66));
            }
          LeftDisjuncts0_26 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, 3))));
          if ((LeftDisjuncts0_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *GoalExpr_12 = SwitchGoalExpr_25;
            *STATE_VARIABLE_LocalInfo_33 = STATE_VARIABLE_LocalInfo_2_36;
          }
          else
          {
            MR_Word LeftGoal_29;
            MR_Word LeftDisjuncts_30;
            MR_Word SwitchGoal_31;
            MR_Word Var_38;
            MR_Word Var_39;

            check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_8, MaybeRequiredVar_9, LeftDisjuncts0_26, GoalInfo_11, &LeftGoal_29, STATE_VARIABLE_LocalInfo_2_36, STATE_VARIABLE_LocalInfo_33);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_38, 0) = ((MR_Box) (LeftGoal_29));
              MR_hl_field(0, Var_38, 1) = ((MR_Box) (GoalInfo_11));
            }
            hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_38, &LeftDisjuncts_30);
            {
              SwitchGoal_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SwitchGoal_31, 0) = ((MR_Box) (SwitchGoalExpr_25));
              MR_hl_field(0, SwitchGoal_31, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (SwitchGoal_31));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (LeftDisjuncts_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_39));
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_1_19;

    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap_1, (MR_Word) ((MR_Unsigned) 0U), Goal0_11, &Goal_13, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_1_19);
    check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_1_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word InstMap1_16;
    MR_Word STATE_VARIABLE_LocalInfo_1_20;

    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_1, (MR_Word) ((MR_Unsigned) 0U), Goal0_11, &Goal_13, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_1_20);
    hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal0_11, InstMap0_1, &InstMap1_16);
    check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap1_16, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_1_20, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
  MR_Word Var_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalInfo_0_5,
  MR_Word * STATE_VARIABLE_LocalInfo_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_6 = STATE_VARIABLE_LocalInfo_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, 2))));
    MR_Word VarTable_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 0))));
    MR_Word VarType_23;
    MR_Word ModuleInfo0_24;
    MR_Word InstMap1_25;
    MR_Word ModuleInfo_26;
    MR_Word Goal_27;
    MR_Word STATE_VARIABLE_LocalInfo_1_30;
    MR_Word STATE_VARIABLE_LocalInfo_2_32;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_1, &VarType_23);
    ModuleInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 2))));
    hlds__instmap__bind_var_to_functors_8_p_0(Var_1, VarType_23, MainConsId_19, OtherConsIds_20, InstMap0_2, &InstMap1_25, ModuleInfo0_24, &ModuleInfo_26);
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 1))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 3))) & (MR_Integer) 1);
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 4))));
    {
      STATE_VARIABLE_LocalInfo_1_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 1) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 2) = ((MR_Box) (ModuleInfo_26));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 3) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 4) = ((MR_Box) (Var_45));
    }
    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_25, (MR_Word) ((MR_Unsigned) 0U), Goal0_21, &Goal_27, STATE_VARIABLE_LocalInfo_1_30, &STATE_VARIABLE_LocalInfo_2_32);
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_27));
    }
    check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_1, InstMap0_2, Cases0_15, &Cases_17, STATE_VARIABLE_LocalInfo_2_32, STATE_VARIABLE_LocalInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_1_19;

    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap_1, (MR_Word) ((MR_Unsigned) 0U), Goal0_11, &Goal_13, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_1_19);
    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_1_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_6_p_0(
  MR_Word InstMap0_7,
  MR_Word MaybeRequiredVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_LocalInfo_0_112,
  MR_Word * STATE_VARIABLE_LocalInfo_113)
{
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
  MR_Word GoalExpr_30;

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_63 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_64;

        check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_63, &SubGoal_64, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
        GoalExpr_30 = (MR_Word) ((MR_Word) (SubGoal_64));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RHS0_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 1))));

        switch (MR_tag((MR_Word) RHS0_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_30 = GoalExpr0_12;
              *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarsModes_23 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 2))));
              MR_Word LambdaGoal0_25 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 4))));
              MR_Word ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 2))));
              MR_Word InstMap1_27;
              MR_Word LambdaGoal_28;
              MR_Word RHS_29;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Unsigned packed_word_4;
              MR_Word Var_158;
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_162;

              hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_26, VarsModes_23, InstMap0_7, &InstMap1_27);
              check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_27, (MR_Word) ((MR_Unsigned) 0U), LambdaGoal0_25, &LambdaGoal_28, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
              packed_word_4 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, 0)));
              Var_154 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 1))));
              Var_155 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 2))));
              Var_156 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, 3))) & (MR_Integer) 7);
              {
                RHS_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_29, 0) = (MR_Box) (packed_word_4);
                MR_hl_field(2, RHS_29, 1) = ((MR_Box) (Var_154));
                MR_hl_field(2, RHS_29, 2) = ((MR_Box) (Var_155));
                MR_hl_field(2, RHS_29, 3) = (MR_Box) ((MR_Unsigned) (Var_156));
                MR_hl_field(2, RHS_29, 4) = ((MR_Box) (LambdaGoal_28));
              }
              Var_158 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 0))));
              Var_160 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 2))));
              Var_161 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 3))));
              Var_162 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 4))));
              {
                GoalExpr_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_30, 0) = ((MR_Box) (Var_158));
                MR_hl_field(1, GoalExpr_30, 1) = ((MR_Box) (RHS_29));
                MR_hl_field(1, GoalExpr_30, 2) = ((MR_Box) (Var_160));
                MR_hl_field(1, GoalExpr_30, 3) = ((MR_Box) (Var_161));
                MR_hl_field(1, GoalExpr_30, 4) = ((MR_Box) (Var_162));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_30 = GoalExpr0_12;
        *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_30 = GoalExpr0_12;
            *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_53 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Conjuncts_55;

            check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap0_7, Conjuncts0_54, &Conjuncts_55, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) (ConjType_53));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Conjuncts_55));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));

            if ((Disjuncts0_56 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              GoalExpr_30 = GoalExpr0_12;
              *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
            }
            else
              check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_7, MaybeRequiredVar_8, Disjuncts0_56, GoalInfo0_13, &GoalExpr_30, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word CanFail_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
            MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Cases_62;

            check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_59, InstMap0_7, Cases0_61, &Cases_62, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Var_59));
              MR_hl_field(3, GoalExpr_30, 2) = (MR_Box) ((MR_Unsigned) (CanFail_60));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Cases_62));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word SubGoal0_143 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word SubGoal_144;

            switch (MR_tag((MR_Word) Reason_72)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 1:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 2:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_72, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 1:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word RequiredVar_95 = ((MR_Word) ((MR_hl_field(3, Reason_72, 1))));
                      MR_Word Var_133;

                      {
                        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_133, 0) = ((MR_Box) (RequiredVar_95));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, Var_133, SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RequiredVar_177 = ((MR_Word) ((MR_hl_field(3, Reason_72, 1))));
                      MR_Word Var_178;

                      {
                        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_178, 0) = ((MR_Box) (RequiredVar_177));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, Var_178, SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    }
                    break;
                  case (MR_Integer) 4:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 5:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_175 = ((MR_Unsigned) ((MR_hl_field(3, Reason_72, 2))) & (MR_Integer) 3);

                      switch (Var_175) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            SubGoal_144 = SubGoal0_143;
                            *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
                          }
                          break;
                        case (MR_Integer) 2:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                        case (MR_Integer) 0:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                        case (MR_Integer) 3:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 8:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_143, &SubGoal_144, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason_72));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_144));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
            MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));
            MR_Word Cond_69;
            MR_Word Then_70;
            MR_Word Else_71;
            MR_Word STATE_VARIABLE_LocalInfo_6_122;
            MR_Word STATE_VARIABLE_LocalInfo_7_124;
            MR_Word InstMap1_142;

            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), Cond0_66, &Cond_69, STATE_VARIABLE_LocalInfo_0_112, &STATE_VARIABLE_LocalInfo_6_122);
            hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond0_66, InstMap0_7, &InstMap1_142);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_142, (MR_Word) ((MR_Unsigned) 0U), Then0_67, &Then_70, STATE_VARIABLE_LocalInfo_6_122, &STATE_VARIABLE_LocalInfo_7_124);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), Else0_68, &Else_71, STATE_VARIABLE_LocalInfo_7_124, STATE_VARIABLE_LocalInfo_113);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Vars_65));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Cond_69));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Then_70));
              MR_hl_field(3, GoalExpr_30, 4) = ((MR_Box) (Else_71));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
            MR_Word ShortHand_107;

            switch (MR_tag((MR_Word) ShortHand0_97)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.detect_switches_in_goal\'/6", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_98 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_97, 0))) & (MR_Integer) 3);
                  MR_Word Outer_99 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 1))));
                  MR_Word Inner_100 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 2))));
                  MR_Word MaybeOutputVars_101 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 3))));
                  MR_Word MainGoal0_102 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 4))));
                  MR_Word OrElseGoals0_103 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 5))));
                  MR_Word OrElseInners_104 = ((MR_Word) ((MR_hl_field(1, ShortHand0_97, 6))));
                  MR_Word MainGoal_105;
                  MR_Word OrElseGoals_106;
                  MR_Word STATE_VARIABLE_LocalInfo_11_136;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), MainGoal0_102, &MainGoal_105, STATE_VARIABLE_LocalInfo_0_112, &STATE_VARIABLE_LocalInfo_11_136);
                  check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap0_7, OrElseGoals0_103, &OrElseGoals_106, STATE_VARIABLE_LocalInfo_11_136, STATE_VARIABLE_LocalInfo_113);
                  {
                    ShortHand_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_107, 0) = (MR_Box) ((MR_Unsigned) (GoalType_98));
                    MR_hl_field(1, ShortHand_107, 1) = ((MR_Box) (Outer_99));
                    MR_hl_field(1, ShortHand_107, 2) = ((MR_Box) (Inner_100));
                    MR_hl_field(1, ShortHand_107, 3) = ((MR_Box) (MaybeOutputVars_101));
                    MR_hl_field(1, ShortHand_107, 4) = ((MR_Box) (MainGoal_105));
                    MR_hl_field(1, ShortHand_107, 5) = ((MR_Box) (OrElseGoals_106));
                    MR_hl_field(1, ShortHand_107, 6) = ((MR_Box) (OrElseInners_104));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_108 = ((MR_Word) ((MR_hl_field(2, ShortHand0_97, 0))));
                  MR_Word ResultVar_109 = ((MR_Word) ((MR_hl_field(2, ShortHand0_97, 1))));
                  MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(2, ShortHand0_97, 2))));
                  MR_Word SubGoal_146;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                  {
                    ShortHand_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_107, 0) = ((MR_Box) (MaybeIO_108));
                    MR_hl_field(2, ShortHand_107, 1) = ((MR_Box) (ResultVar_109));
                    MR_hl_field(2, ShortHand_107, 2) = ((MR_Box) (SubGoal_146));
                  }
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (ShortHand_107));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switch_candidates_in_disj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Candidates_0_7,
  MR_Word * STATE_VARIABLE_Candidates_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Candidates_8 = STATE_VARIABLE_Candidates_0_7;
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
      MR_Word VarInst0_26;
      MR_Word STATE_VARIABLE_Candidates_1_35;
      MR_Word Left_27;
      MR_Word Cases_28;
      MR_Word Requant_29;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Candidates_0_7;

      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__4_4, Var_22, &VarInst0_26);
      succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_25, VarInst0_26);
      if (succeeded)
      {
        succeeded = check_hlds__switch_detection__partition_disj_7_p_0(HeadVar__1_1, Var_22, HeadVar__3_3, HeadVar__2_2, &Left_27, &Cases_28, &Requant_29);
        if (succeeded)
          succeeded = check_hlds__switch_candidates__is_candidate_switch_2_p_0(Cases_28, Left_27);
      }
      if (succeeded)
      {
        MR_Word VarTable_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
        MR_Word VarType_31;
        MR_Word Candidate_32;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_30, Var_22, &VarType_31);
        check_hlds__switch_candidates__categorize_candidate_switch_9_p_0(ModuleInfo_25, HeadVar__5_5, Var_22, VarType_31, VarInst0_26, Cases_28, Left_27, Requant_29, &Candidate_32);
        STATE_VARIABLE_Candidates_1_35 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0), STATE_VARIABLE_Candidates_0_7, ((MR_Box) (Candidate_32)));
      }
      else
        STATE_VARIABLE_Candidates_1_35 = STATE_VARIABLE_Candidates_0_7;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Vars_23;
      next_value_of_STATE_VARIABLE_Candidates_0_7 = STATE_VARIABLE_Candidates_1_35;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Candidates_0_7 = next_value_of_STATE_VARIABLE_Candidates_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Cases_48;
  MR_Word conv0_STATE_VARIABLE_AlreadyHandledConsIds_50;

  check_hlds__switch_detection__accumulate_case_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Cases_48, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_AlreadyHandledConsIds_50);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_48));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyHandledConsIds_50));
}

static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
  MR_Word LocalInfo_8,
  MR_Word Var_9,
  MR_Word Disjuncts0_10,
  MR_Word GoalInfo_11,
  MR_Word * Left_12,
  MR_Word * Cases_13,
  MR_Word * Requant_14)
{
  MR_bool succeeded;
  MR_Word CasesTable0_15;
  MR_Word Left1_16;
  MR_Word CasesTable1_17;
  MR_Word Var_28;
  MR_Word Var_29;

  Var_28 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0));
  Var_29 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
  {
    CasesTable0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CasesTable0_15, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, CasesTable0_15, 1) = ((MR_Box) (Var_29));
  }
  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0(Var_9, Disjuncts0_10, (MR_Word) ((MR_Unsigned) 0U), &Left1_16, CasesTable0_15, &CasesTable1_17);
  if ((Left1_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeCtorInfo_19_83;
    MR_Word TypeCtorInfo_20_84;
    MR_Word TypeInfo_26_85;
    MR_Word TypeInfo_27_86;
    MR_Word TypeInfo_28_87;
    MR_Word TypeCtorInfo_29_88;
    MR_Integer Var_31;
    MR_Word CasesMap_71 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 0))));
    MR_Word CasesMap_75;
    MR_Word ConflictIds_76;
    MR_Word CasesAssocList_77;
    MR_Word Cases_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Box conv3_Cases_78;
    MR_Box conv2__AlreadyHandledConsIds_79;

    Var_31 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_71);
    succeeded = (Var_31 >= (MR_Integer) 1);
    if (succeeded)
    {
      *Left_12 = Left1_16;
      CasesMap_75 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 0))));
      ConflictIds_76 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 1))));
      TypeCtorInfo_19_83 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
      TypeCtorInfo_20_84 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
      mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_19_83, TypeCtorInfo_20_84, CasesMap_75, &CasesAssocList_77);
      Var_81 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_80, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0]));
        MR_hl_field(0, Var_80, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
        MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_80, 3) = ((MR_Box) (LocalInfo_8));
        MR_hl_field(0, Var_80, 4) = ((MR_Box) (Var_9));
        MR_hl_field(0, Var_80, 5) = ((MR_Box) (GoalInfo_11));
        MR_hl_field(0, Var_80, 6) = ((MR_Box) (ConflictIds_76));
      }
      Var_82 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_19_83);
      TypeInfo_26_85 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]);
      TypeInfo_27_86 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]);
      TypeInfo_28_87 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]);
      mercury__list__foldl2_6_p_0(TypeInfo_26_85, TypeInfo_27_86, TypeInfo_28_87, Var_80, CasesAssocList_77, ((MR_Box) (Var_81)), &conv3_Cases_78, ((MR_Box) (Var_82)), &conv2__AlreadyHandledConsIds_79);
      Cases_78 = ((MR_Word) (conv3_Cases_78));
      TypeCtorInfo_29_88 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
      mercury__list__sort_2_p_0(TypeCtorInfo_29_88, Cases_78, Cases_13);
      *Requant_14 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word CasesTable_20;

    succeeded = check_hlds__switch_detection__expand_sub_disjs_5_p_0(LocalInfo_8, Var_9, Left1_16, CasesTable1_17, &CasesTable_20);
    if (succeeded)
    {
      MR_Integer Var_33;
      MR_Word CasesMap_89;

      *Left_12 = (MR_Word) ((MR_Unsigned) 0U);
      CasesMap_89 = ((MR_Word) ((MR_hl_field(0, CasesTable_20, 0))));
      Var_33 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_89);
      succeeded = (Var_33 >= (MR_Integer) 1);
      if (succeeded)
      {
        *Cases_13 = check_hlds__switch_detection__cases_table_to_cases_4_f_0(LocalInfo_8, Var_9, GoalInfo_11, CasesTable_20);
        *Requant_14 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      *Left_12 = Left1_16;
      *Cases_13 = check_hlds__switch_detection__cases_table_to_cases_4_f_0(LocalInfo_8, Var_9, GoalInfo_11, CasesTable1_17);
      *Requant_14 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection__cases_table_to_cases_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Cases_48;
  MR_Word conv0_STATE_VARIABLE_AlreadyHandledConsIds_50;

  check_hlds__switch_detection__accumulate_case_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Cases_48, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_AlreadyHandledConsIds_50);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_48));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyHandledConsIds_50));
}

static MR_Word MR_CALL 
check_hlds__switch_detection__cases_table_to_cases_4_f_0(
  MR_Word LocalInfo_6,
  MR_Word Var_7,
  MR_Word GoalInfo_8,
  MR_Word CasesTable_9)
{
  MR_Word SortedCases_10;
  MR_Word CasesMap_11 = ((MR_Word) ((MR_hl_field(0, CasesTable_9, 0))));
  MR_Word ConflictIds_12 = ((MR_Word) ((MR_hl_field(0, CasesTable_9, 1))));
  MR_Word CasesAssocList_13;
  MR_Word Cases_14;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Box conv3_Cases_14;
  MR_Box conv2__AlreadyHandledConsIds_15;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_11, &CasesAssocList_13);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__switch_detection__cases_table_to_cases_4_f_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (LocalInfo_6));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (Var_7));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (GoalInfo_8));
    MR_hl_field(0, Var_16, 6) = ((MR_Box) (ConflictIds_12));
  }
  Var_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), Var_16, CasesAssocList_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Cases_14, ((MR_Box) (Var_18)), &conv2__AlreadyHandledConsIds_15);
  Cases_14 = ((MR_Word) (conv3_Cases_14));
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_14, &SortedCases_10);
  return SortedCases_10;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
  MR_Word LocalInfo_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesTable_0_4,
  MR_Word * STATE_VARIABLE_CasesTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CasesTable_5 = STATE_VARIABLE_CasesTable_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word LeftGoal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word LeftGoals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_CasesTable_1_18;
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(0, LeftGoal_13, 0))));
      MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, LeftGoal_13, 1))));
      MR_Word GoalInfo_21;
      MR_Word SubGoals_22;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_4;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, GoalInfo0_20, &GoalInfo_21);
      succeeded = ((((MR_tag((MR_Word) GoalExpr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_19, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_25 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_19, 1))) & (MR_Integer) 1);
        SubGoals_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_19, 2))));
        succeeded = (Var_25 == (MR_Integer) 0);
      }
      if (succeeded)
        succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(LocalInfo_1, Var_2, SubGoals_22, GoalInfo_21, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_1_18);
      else
      {
        MR_Word Var_27;
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) GoalExpr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_19, 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_28 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (LeftGoal_13));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
          }
          succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(LocalInfo_1, Var_2, Var_27, GoalInfo_21, Var_28, STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_1_18);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = LeftGoals_14;
        next_value_of_STATE_VARIABLE_CasesTable_0_4 = STATE_VARIABLE_CasesTable_1_18;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_CasesTable_0_4 = next_value_of_STATE_VARIABLE_CasesTable_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Goal_10;

  check_hlds__switch_detection__create_expanded_conjunction_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_Goal_10);
  *wrapper_arg_2 = ((MR_Box) (conv7_Goal_10));
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_CasesTable_19;

  check_hlds__switch_detection__add_multi_entry_for_cons_id_to_cases_table_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_CasesTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_CasesTable_19));
}

static MR_Box MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = check_hlds__scout_disjunctions__switchable_cons_id_to_cons_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CasesTable_19;

  check_hlds__switch_detection__add_multi_entry_for_cons_id_to_cases_table_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CasesTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CasesTable_19));
}

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
  MR_Word LocalInfo_8,
  MR_Word Var_9,
  MR_Word ConjGoals_10,
  MR_Word GoalInfo_11,
  MR_Word STATE_VARIABLE_RevUnifies_0_47,
  MR_Word STATE_VARIABLE_CasesTable_0_48,
  MR_Word * STATE_VARIABLE_CasesTable_49)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ConjGoals_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word FirstGoal_14;
    MR_Word LaterGoals_15;
    MR_Word FirstGoalExpr_16;
    MR_Word FirstGoalInfo_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FirstGoal_14 = ((MR_Word) ((MR_hl_field(1, ConjGoals_10, 0))));
      LaterGoals_15 = ((MR_Word) ((MR_hl_field(1, ConjGoals_10, 1))));
      FirstGoalExpr_16 = ((MR_Word) ((MR_hl_field(0, FirstGoal_14, 0))));
      FirstGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, FirstGoal_14, 1))));
      if (((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_RevUnifies_1_50;
        MR_Word next_value_of_ConjGoals_10;
        MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_47;

        {
          STATE_VARIABLE_RevUnifies_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevUnifies_1_50, 0) = ((MR_Box) (FirstGoal_14));
          MR_hl_field(1, STATE_VARIABLE_RevUnifies_1_50, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_47));
        }
        // direct tailcall eliminated
        ;
        next_value_of_ConjGoals_10 = LaterGoals_15;
        next_value_of_STATE_VARIABLE_RevUnifies_0_47 = STATE_VARIABLE_RevUnifies_1_50;
        ConjGoals_10 = next_value_of_ConjGoals_10;
        STATE_VARIABLE_RevUnifies_0_47 = next_value_of_STATE_VARIABLE_RevUnifies_0_47;
        continue;
      }
      else
      if (((((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstGoalExpr_16, 0)))) == (MR_Integer) 3))))
      {
        MR_Word Disjuncts_23 = ((MR_Word) ((MR_hl_field(3, FirstGoalExpr_16, 1))));
        MR_Word SortedDisjConsIds_29;
        MR_Word MainConsId_30;
        MR_Word OtherConsIds_31;
        MR_Word TypeCtorInfo_74_74;
        MR_Word TypeCtorInfo_75_75;
        MR_Word TypeInfo_22_118;
        MR_Word NonLocals_26;
        MR_Word OtherNonLocals_27;
        MR_Word DisjConsIds_28;
        MR_Word Goal_102;
        MR_Word Goals_103;
        MR_Word ConsId_104;
        MR_Word ConsIds_105;
        MR_Word GoalExpr_106;
        MR_Word UnifyInfo0_111;
        MR_Word Var_117;

        succeeded = (Disjuncts_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_RevUnifies_0_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_17);
            TypeCtorInfo_74_74 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_74_74, Var_9, NonLocals_26, &OtherNonLocals_27);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_74_74, OtherNonLocals_27);
            if (succeeded)
            {
              Goal_102 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 0))));
              Goals_103 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 1))));
              GoalExpr_106 = ((MR_Word) ((MR_hl_field(0, Goal_102, 0))));
              succeeded = ((MR_tag((MR_Word) GoalExpr_106)) == (MR_Integer) 1);
              if (succeeded)
              {
                UnifyInfo0_111 = ((MR_Word) ((MR_hl_field(1, GoalExpr_106, 3))));
                succeeded = ((MR_tag((MR_Word) UnifyInfo0_111)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_117 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_111, 0))));
                  ConsId_104 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_111, 1))));
                  TypeInfo_22_118 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_118, ((MR_Box) (Var_9)), ((MR_Box) (Var_117)));
                  if (succeeded)
                  {
                    succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(Var_9, Goals_103, &ConsIds_105);
                    if (succeeded)
                    {
                      TypeCtorInfo_75_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
                      {
                        DisjConsIds_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, DisjConsIds_28, 0) = ((MR_Box) (ConsId_104));
                        MR_hl_field(1, DisjConsIds_28, 1) = ((MR_Box) (ConsIds_105));
                      }
                      mercury__list__sort_2_p_0(TypeCtorInfo_75_75, DisjConsIds_28, &SortedDisjConsIds_29);
                      succeeded = (SortedDisjConsIds_29 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        MainConsId_30 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_29, 0))));
                        OtherConsIds_31 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_29, 1))));
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word SharedGoal_32;
            MR_Word Var_52;
            MR_Word Arm_90;
            MR_Word Var_91;
            MR_Box conv1_STATE_VARIABLE_CasesTable_49;

            {
              Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Var_52, 2) = ((MR_Box) (LaterGoals_15));
            }
            {
              SharedGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SharedGoal_32, 0) = ((MR_Box) (Var_52));
              MR_hl_field(0, SharedGoal_32, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              Arm_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Arm_90, 0) = ((MR_Box) (MainConsId_30));
              MR_hl_field(1, Arm_90, 1) = ((MR_Box) (OtherConsIds_31));
              MR_hl_field(1, Arm_90, 2) = ((MR_Box) (SharedGoal_32));
            }
            {
              Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_91, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
              MR_hl_field(0, Var_91, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1));
              MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_91, 3) = ((MR_Box) (Arm_90));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0), Var_91, SortedDisjConsIds_29, ((MR_Box) (STATE_VARIABLE_CasesTable_0_48)), &conv1_STATE_VARIABLE_CasesTable_49);
            *STATE_VARIABLE_CasesTable_49 = ((MR_Word) (conv1_STATE_VARIABLE_CasesTable_49));
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word SortedDisjConsIds_63;
            MR_Word MainConsId_66;
            MR_Word OtherConsIds_67;
            MR_Word TypeCtorInfo_76_76;
            MR_Word TypeCtorInfo_77_77;
            MR_Word TypeCtorInfo_78_78;
            MR_Word TypeCtorInfo_79_79;
            MR_Word TypeInfo_80_80;
            MR_Word TypeCtorInfo_81_81;
            MR_Word TypeCtorInfo_82_82;
            MR_Word CasesTableMap_33;
            MR_Word CasesConsIds_34;
            MR_Word DisjunctionMap_35;
            MR_Word FirstGoalId_36;
            MR_Word FirstGoalDisjunctionInfo_37;
            MR_Word FirstGoalSummary_38;
            MR_Word VarSummary_39;
            MR_Word SummaryConsIds0_40;
            MR_Word SubDisj_41;
            MR_Word SummaryConsIds_42;
            MR_Word NewConflictConsIds_43;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Box conv2_FirstGoalDisjunctionInfo_37;
            MR_Box conv3_VarSummary_39;

            succeeded = (STATE_VARIABLE_RevUnifies_0_47 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CasesTableMap_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_48, 0))));
              TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
              TypeCtorInfo_77_77 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
              mercury__map__keys_as_set_2_p_0(TypeCtorInfo_76_76, TypeCtorInfo_77_77, CasesTableMap_33, &CasesConsIds_34);
              succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_76_76, CasesConsIds_34);
              if (succeeded)
              {
                DisjunctionMap_35 = ((MR_Word) ((MR_hl_field(0, LocalInfo_8, 1))));
                FirstGoalId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(FirstGoalInfo_17);
                TypeCtorInfo_78_78 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0);
                TypeCtorInfo_79_79 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0);
                Var_55 = (MR_Word) (FirstGoalId_36);
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_78_78, TypeCtorInfo_79_79, DisjunctionMap_35, ((MR_Box) (Var_55)), &conv2_FirstGoalDisjunctionInfo_37);
                if (succeeded)
                {
                  FirstGoalDisjunctionInfo_37 = ((MR_Word) (conv2_FirstGoalDisjunctionInfo_37));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  FirstGoalSummary_38 = ((MR_Word) ((MR_hl_field(0, FirstGoalDisjunctionInfo_37, 1))));
                  TypeInfo_80_80 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]);
                  TypeCtorInfo_81_81 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0);
                  succeeded = mercury__map__search_3_p_0(TypeInfo_80_80, TypeCtorInfo_81_81, FirstGoalSummary_38, ((MR_Box) (Var_9)), &conv3_VarSummary_39);
                  if (succeeded)
                  {
                    VarSummary_39 = ((MR_Word) (conv3_VarSummary_39));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    SummaryConsIds0_40 = ((MR_Word) ((MR_hl_field(0, VarSummary_39, 0))));
                    SubDisj_41 = ((MR_Unsigned) ((MR_hl_field(0, VarSummary_39, 1))) & (MR_Integer) 1);
                    TypeCtorInfo_82_82 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0);
                    Var_56 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[4]);
                    SummaryConsIds_42 = mercury__set__map_2_f_0(TypeCtorInfo_82_82, TypeCtorInfo_76_76, Var_56, SummaryConsIds0_40);
                    succeeded = (SubDisj_41 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      mercury__set__intersect_3_p_0(TypeCtorInfo_76_76, SummaryConsIds_42, CasesConsIds_34, &NewConflictConsIds_43);
                      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_76_76, NewConflictConsIds_43);
                      if (succeeded)
                      {
                        mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_76_76, SummaryConsIds_42, &SortedDisjConsIds_63);
                        succeeded = (SortedDisjConsIds_63 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          MainConsId_66 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_63, 0))));
                          OtherConsIds_67 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_63, 1))));
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_57;
              MR_Word SharedGoal_64;
              MR_Word Arm_95;
              MR_Word Var_96;
              MR_Box conv6_STATE_VARIABLE_CasesTable_49;

              {
                Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, Var_57, 2) = ((MR_Box) (ConjGoals_10));
              }
              {
                SharedGoal_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SharedGoal_64, 0) = ((MR_Box) (Var_57));
                MR_hl_field(0, SharedGoal_64, 1) = ((MR_Box) (GoalInfo_11));
              }
              {
                Arm_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Arm_95, 0) = ((MR_Box) (MainConsId_66));
                MR_hl_field(1, Arm_95, 1) = ((MR_Box) (OtherConsIds_67));
                MR_hl_field(1, Arm_95, 2) = ((MR_Box) (SharedGoal_64));
              }
              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_96, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
                MR_hl_field(0, Var_96, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_3));
                MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_96, 3) = ((MR_Box) (Arm_95));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0), Var_96, SortedDisjConsIds_63, ((MR_Box) (STATE_VARIABLE_CasesTable_0_48)), &conv6_STATE_VARIABLE_CasesTable_49);
              *STATE_VARIABLE_CasesTable_49 = ((MR_Word) (conv6_STATE_VARIABLE_CasesTable_49));
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Unifies_44;
              MR_Word ExpandedConjunctions_45;
              MR_Word Left_46;
              MR_Word Var_60;

              mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_RevUnifies_0_47, &Unifies_44);
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0]));
                MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_4));
                MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_60, 3) = ((MR_Box) (Unifies_44));
                MR_hl_field(0, Var_60, 4) = ((MR_Box) (LaterGoals_15));
                MR_hl_field(0, Var_60, 5) = ((MR_Box) (GoalInfo_11));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_60, Disjuncts_23, &ExpandedConjunctions_45);
              check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0(Var_9, ExpandedConjunctions_45, (MR_Word) ((MR_Unsigned) 0U), &Left_46, STATE_VARIABLE_CasesTable_0_48, STATE_VARIABLE_CasesTable_49);
              succeeded = (Left_46 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goals_12;
  MR_Word conv0_Result_14;

  check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_Goals_12, ((MR_Word) (wrapper_arg_5)), &conv0_Result_14);
  *wrapper_arg_4 = ((MR_Box) (conv1_Goals_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_Result_14));
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Left_0_4,
  MR_Word * STATE_VARIABLE_Left_5,
  MR_Word STATE_VARIABLE_CasesTable_0_6,
  MR_Word * STATE_VARIABLE_CasesTable_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CasesTable_7 = STATE_VARIABLE_CasesTable_0_6;
      *STATE_VARIABLE_Left_5 = STATE_VARIABLE_Left_0_4;
    }
    else
    {
      MR_Word Disjunct0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Disjuncts0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Disjunct_22;
      MR_Word MaybeConsId_23;
      MR_Word STATE_VARIABLE_CasesTable_1_60;
      MR_Word STATE_VARIABLE_Left_1_61;
      MR_Word Var_25;
      MR_Box conv3_MaybeConsId_23;
      MR_Box conv2_Var_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Left_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_6;

      check_hlds__find_bind_var__find_bind_var_9_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Var_2, (MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]), Disjunct0_18, &Disjunct_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_MaybeConsId_23, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_24, &Var_25);
      MaybeConsId_23 = ((MR_Word) (conv3_MaybeConsId_23));
      if ((MaybeConsId_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_Left_1_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Left_1_61, 0) = ((MR_Box) (Disjunct0_18));
          MR_hl_field(1, STATE_VARIABLE_Left_1_61, 1) = ((MR_Box) (STATE_VARIABLE_Left_0_4));
        }
        STATE_VARIABLE_CasesTable_1_60 = STATE_VARIABLE_CasesTable_0_6;
      }
      else
      {
        MR_Word ConsId_33 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_23, 0))));
        MR_Word CasesMap0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_6, 0))));
        MR_Word ConflictConsIds0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_6, 1))));
        MR_Word Arm_82;
        MR_Word ConflictConsIds_87;
        MR_Word CasesMap_90;
        MR_Word Entry0_83;
        MR_Box conv4_Entry0_83;

        {
          Arm_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arm_82, 0) = ((MR_Box) (ConsId_33));
          MR_hl_field(0, Arm_82, 1) = ((MR_Box) (Disjunct_22));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap0_80, ((MR_Box) (ConsId_33)), &conv4_Entry0_83);
        if (succeeded)
        {
          Entry0_83 = ((MR_Word) (conv4_Entry0_83));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word State0_84 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_83, 0))) & (MR_Integer) 3);
          MR_Word Arms0_85 = ((MR_Word) ((MR_hl_field(0, Entry0_83, 1))));
          MR_Word State_86;
          MR_Word Arms_88;
          MR_Word Entry_89;

          switch (State0_84) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                State_86 = (MR_Integer) 0;
                ConflictConsIds_87 = ConflictConsIds0_81;
              }
              break;
            case (MR_Integer) 2:
              {
                State_86 = (MR_Integer) 2;
                ConflictConsIds_87 = ConflictConsIds0_81;
              }
              break;
            case (MR_Integer) 1:
              {
                State_86 = (MR_Integer) 2;
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_33)), ConflictConsIds0_81, &ConflictConsIds_87);
              }
              break;
          }
          Arms_88 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Arms0_85, ((MR_Box) (Arm_82)));
          {
            Entry_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_89, 0) = (MR_Box) ((MR_Unsigned) (State_86));
            MR_hl_field(0, Entry_89, 1) = ((MR_Box) (Arms_88));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_33)), ((MR_Box) (Entry_89)), CasesMap0_80, &CasesMap_90);
        }
        else
        {
          MR_Word Arms_92;
          MR_Word Entry_93;

          Arms_92 = mercury__cord__singleton_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_82)));
          {
            Entry_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_93, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Entry_93, 1) = ((MR_Box) (Arms_92));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_33)), ((MR_Box) (Entry_93)), CasesMap0_80, &CasesMap_90);
          ConflictConsIds_87 = ConflictConsIds0_81;
        }
        {
          STATE_VARIABLE_CasesTable_1_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_CasesTable_1_60, 0) = ((MR_Box) (CasesMap_90));
          MR_hl_field(0, STATE_VARIABLE_CasesTable_1_60, 1) = ((MR_Box) (ConflictConsIds_87));
        }
        STATE_VARIABLE_Left_1_61 = STATE_VARIABLE_Left_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Disjuncts0_19;
      next_value_of_STATE_VARIABLE_Left_0_4 = STATE_VARIABLE_Left_1_61;
      next_value_of_STATE_VARIABLE_CasesTable_0_6 = STATE_VARIABLE_CasesTable_1_60;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Left_0_4 = next_value_of_STATE_VARIABLE_Left_0_4;
      STATE_VARIABLE_CasesTable_0_6 = next_value_of_STATE_VARIABLE_CasesTable_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ConsId_8;
    MR_Word ConsIds_9;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
    MR_Word UnifyInfo0_15;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      UnifyInfo0_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 3))));
      succeeded = ((MR_tag((MR_Word) UnifyInfo0_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_15, 0))));
        ConsId_8 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_15, 1))));
        TypeInfo_22_22 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (Var_21)));
        if (succeeded)
        {
          succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(HeadVar__1_1, Goals_7, &ConsIds_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_8));
              MR_hl_field(1, base, 1) = ((MR_Box) (ConsIds_9));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__switch_detection__init_switch_detect_info_1_f_0(
  MR_Word ModuleInfo_3)
{
  MR_Word Info_4 = (MR_Word) (ModuleInfo_3);

  return Info_4;
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____case_arm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____case_arm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cases_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cases_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cons_id_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cons_id_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cons_id_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cons_id_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____switch_detect_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__switch_detection__init(void)
{
}

void mercury__check_hlds__switch_detection__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0);
}

void mercury__check_hlds__switch_detection__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__switch_detection__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.switch_detection.
