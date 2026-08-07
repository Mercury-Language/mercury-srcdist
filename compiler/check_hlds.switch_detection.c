/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2026-08-07
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
REQUIRED_INIT mercury__check_hlds__switch_detection__required_init
ENDINIT
*/

#include "check_hlds.switch_detection.mih"
#include "check_hlds.switch_detection.mh"


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
#include "uint.mih"
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
#include "parse_tree.prog_util.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__switch_detection__type_ctor_info_hit_and_miss_0;

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

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_hit_and_miss_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_hit_and_miss_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_hit_and_miss_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_hit_and_miss_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_hit_and_miss_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_hit_and_miss_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_hit_and_miss_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__switch_detection__type_ctor_info_hit_and_miss_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[6];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[6];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

static const MR_NotagFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__notag_functor_desc_switch_detect_info_0;

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__1000__1_2_p_0(
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__2_110);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__967__1_2_p_0(
  MR_Word IsMember_22,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__975__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word IsMember_84);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__959__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word HeadVar__2_116);

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
check_hlds__switch_detection____Compare____hit_and_miss_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_0_0(
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

static void MR_CALL 
check_hlds__switch_detection__unsafe_set_ham_map_1_p_0(
  MR_Word X_1);

static void MR_CALL 
check_hlds__switch_detection__unsafe_get_ham_map_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
check_hlds__switch_detection__unlock_ham_map_0_p_0(void);

static void MR_CALL 
check_hlds__switch_detection__lock_ham_map_0_p_0(void);

static void MR_CALL 
check_hlds__switch_detection__pre_initialise_mutable_ham_map_0_p_0(void);

static void MR_CALL 
check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0(void);

static MR_String MR_CALL 
check_hlds__switch_detection__hit_and_miss_to_string_1_f_0(
  MR_Word HeadVar__1_1);

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

static MR_Box MR_CALL 
check_hlds__switch_detection__record_switch_search_depth_results_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_LocalInfo_0_31,
  MR_Word * STATE_VARIABLE_LocalInfo_32);

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
  MR_Word STATE_VARIABLE_BestCandidateSoFar_0_7,
  MR_Word * STATE_VARIABLE_BestCandidateSoFar_8);

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
check_hlds__switch_detection____Unify____hit_and_miss_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_map_0_0_10001(
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


static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[10][3];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[8][2];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][11];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[6][5];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][8];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_8[1][12];




static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_105_115_106_95_116_114_105_97_108_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0])),
    ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[1])),
    ((MR_Box) (check_hlds__switch_detection__record_switch_search_depth_results_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[4])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[4])),
    ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[8][2] = {
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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][11] = {
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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7] = {
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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[6][5] = {
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
    ((MR_Box) (&check_hlds__switch_detection__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__switch_detection__type_ctor_info_hit_and_miss_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_8[1][12] = {
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
#include "check_hlds.switch_detection.mh"
#include "io.stream_ops.mh"
#line 1114 "switch_detection.m"
MR_Word check_hlds__switch_detection__mutable_variable_ham_map;
#ifdef MR_THREAD_SAFE
    MercuryLock check_hlds__switch_detection__mutable_variable_ham_map_lock;
#endif


#line 1114 "switch_detection.m"
void 
check_hlds__switch_detection__user_init_pred_144_0(void)
#line 1114 "switch_detection.m"
{
#line 1114 "switch_detection.m"
	check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0();
}


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

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_check_hlds__switch_detection__type_ctor_info_hit_and_miss_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0)
  }
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

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_hit_and_miss_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_hit_and_miss_0_0[2] = {
  (MR_String) "ham_hit",
  (MR_String) "ham_miss"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_hit_and_miss_0_0 = {
  (MR_String) "hit_and_miss",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_hit_and_miss_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_hit_and_miss_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_hit_and_miss_0_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_hit_and_miss_0_0 };

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_hit_and_miss_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_hit_and_miss_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_hit_and_miss_0[1] = { &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_hit_and_miss_0_0 };

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_hit_and_miss_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____hit_and_miss_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____hit_and_miss_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "hit_and_miss",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_hit_and_miss_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_hit_and_miss_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_hit_and_miss_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__switch_detection__type_ctor_info_hit_and_miss_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_TypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__switch_detection____Unify____hit_and_miss_map_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____hit_and_miss_map_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "hit_and_miss_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__switch_detection__tree234__ti_tree234_2builtin__type_ctor_info_uint_0check_hlds__switch_detection__type_ctor_info_hit_and_miss_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[6] = {
  (MR_String) "lsdi_var_table",
  (MR_String) "lsdi_disjunction_info_map",
  (MR_String) "lsdi_depth",
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_requant",
  (MR_String) "lsdi_deleted_callees"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[6] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 = {
  (MR_String) "local_switch_detect_info",
  INT16_C(6),
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
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__1000__1_2_p_0(
  MR_Word ConflictConsIds_13,
  MR_Word HeadVar__2_110)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (HeadVar__2_110)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__967__1_2_p_0(
  MR_Word IsMember_22,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded = (IsMember_22 == HeadVar__2_58);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__975__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word IsMember_84)
{
  MR_bool succeeded = (IsMember_84 == HeadVar__1_64);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__959__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word HeadVar__2_116)
{
  MR_bool succeeded = (HeadVar__2_116 == HeadVar__1_54);

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
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    parse_tree__var_table____Compare____var_table_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

          hlds__hlds_module____Compare____module_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
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
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_0_0(
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
      TypeInfo_9_9 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[5]);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[4]), &SubResult2_14, ((MR_Box) (ArgX2_12)), ((MR_Box) (ArgY2_13)));
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
        TypeInfo_16_16 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[4]);
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

static void MR_CALL 
check_hlds__switch_detection__unsafe_set_ham_map_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL check_hlds__switch_detection__unsafe_set_ham_map_1_p_0

	MR_Word X;

	X = X_1 ;
		{
check_hlds__switch_detection__mutable_variable_ham_map = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__switch_detection__unsafe_get_ham_map_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL check_hlds__switch_detection__unsafe_get_ham_map_1_p_0

	MR_Word X;

		{
X = check_hlds__switch_detection__mutable_variable_ham_map;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
check_hlds__switch_detection__unlock_ham_map_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__switch_detection__unlock_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__switch_detection__lock_ham_map_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__switch_detection__lock_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__switch_detection__pre_initialise_mutable_ham_map_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__switch_detection__pre_initialise_mutable_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__switch_detection__mutable_variable_ham_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__switch_detection__mutable_variable_ham_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0));
{
#define MR_PROC_LABEL check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0

	MR_Word X;

	X = X_1 ;
		{
check_hlds__switch_detection__mutable_variable_ham_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__switch_detection__initialise_mutable_ham_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static MR_String MR_CALL 
check_hlds__switch_detection__hit_and_miss_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_6;
  MR_Unsigned Depth_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Unsigned Hit_4;
  MR_Unsigned Miss_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String Var_18;
  MR_String Var_26;
  MR_String Var_28;
  MR_String Var_30;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_49;

  Hit_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, 0))));
  Miss_5 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, 1))));
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_3[0]), (MR_Integer) 3, (MR_Integer) 1, Miss_5, &Var_18);
  Var_26 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "\n");
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " miss ", Var_26);
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_3[0]), (MR_Integer) 3, (MR_Integer) 1, Hit_4, &Var_30);
  Var_38 = mercury__string__f_43_43_2_f_0(Var_30, Var_28);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " hit ", Var_38);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_3[0]), (MR_Integer) 1, Depth_3, &Var_42);
  Var_49 = mercury__string__f_43_43_2_f_0(Var_42, Var_40);
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", Var_49);
  return Str_6;
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

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__1000__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__967__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__975__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__accumulate_case__959__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
  MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, Entry_15, 1))));
  MR_Word Var_116 = ((MR_Unsigned) ((MR_hl_field(0, Entry_15, 0))) & (MR_Integer) 3);

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), STATE_VARIABLE_AlreadyHandledConsIds_0_49, ((MR_Box) (ConsId_14)));
  if (succeeded)
  {
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[2]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (Var_116));
    }
    mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "already handled but not cons_id_has_one_multi");
    *STATE_VARIABLE_AlreadyHandledConsIds_50 = STATE_VARIABLE_AlreadyHandledConsIds_0_49;
    *STATE_VARIABLE_Cases_48 = STATE_VARIABLE_Cases_0_47;
  }
  else
  {
    MR_Word Arms_21;

    Arms_21 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Var_115);
    switch (Var_116) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Case_24;
          MR_Word Var_61;
          MR_Word IsMember_84;
          MR_Word Disjuncts_85;
          MR_Word GoalInfo_119;
          MR_Word Goal_120;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (ConsId_14)), &IsMember_84);
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[3]));
            MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_2));
            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_61, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, Var_61, 4) = ((MR_Box) (IsMember_84));
          }
          mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "singles status but in ConflictConsIds");
          Disjuncts_85 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[8]), Arms_21);
          if ((Disjuncts_85 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_119 = GoalInfo0_12;
          else
          {
            MR_Word FirstDisjunct_122 = ((MR_Word) ((MR_hl_field(1, Disjuncts_85, 0))));
            MR_Word LaterDisjuncts_123 = ((MR_Word) ((MR_hl_field(1, Disjuncts_85, 1))));
            MR_Word FirstGoalInfo_125 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_122, 1))));
            MR_Word FirstContext_126;
            MR_Word SmallestContext_127;

            FirstContext_126 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_125);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_123, FirstContext_126, &SmallestContext_127);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_127, GoalInfo0_12, &GoalInfo_119);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_85, GoalInfo_119, &Goal_120);
          {
            Case_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_24, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(0, Case_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_24, 2) = ((MR_Box) (Goal_120));
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
          MR_Word Case_117;
          MR_Word GoalInfo_128;
          MR_Word Goal_129;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_13, ((MR_Box) (ConsId_14)), &IsMember_22);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[3]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_99_97_115_101_95_95_91_49_44_32_50_93_95_48_9_p_0_4));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (IsMember_22));
            MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140check_hlds.switch_detection.accumulate_case\'/9", (MR_String) "conflict status but not in ConflictConsIds");
          Disjuncts_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[9]), Arms_21);
          if ((Disjuncts_23 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_128 = GoalInfo0_12;
          else
          {
            MR_Word FirstDisjunct_131 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 0))));
            MR_Word LaterDisjuncts_132 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 1))));
            MR_Word FirstGoalInfo_134 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_131, 1))));
            MR_Word FirstContext_135;
            MR_Word SmallestContext_136;

            FirstContext_135 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_134);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_132, FirstContext_135, &SmallestContext_136);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_136, GoalInfo0_12, &GoalInfo_128);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_23, GoalInfo_128, &Goal_129);
          {
            Case_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_117, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(0, Case_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_117, 2) = ((MR_Box) (Goal_129));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Cases_48 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_117));
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
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[5]));
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
              MR_Word Case_118;

              {
                Case_118 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Case_118, 0) = ((MR_Box) (MainConsId_32));
                MR_hl_field(0, Case_118, 1) = ((MR_Box) (OtherConsIds_33));
                MR_hl_field(0, Case_118, 2) = ((MR_Box) (Goal_28));
              }
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_33, STATE_VARIABLE_AlreadyHandledConsIds_0_49, STATE_VARIABLE_AlreadyHandledConsIds_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Cases_48 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Case_118));
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
    TypeInfo_43_43 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]);
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

static MR_Box MR_CALL 
check_hlds__switch_detection__record_switch_search_depth_results_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = check_hlds__switch_detection__hit_and_miss_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__switch_detection__record_switch_search_depth_results_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word HamMap_4;
  MR_Word HamAL_5;
  MR_Word DescStrs_6;
  MR_String DescsStr_7;

{
#define MR_PROC_LABEL check_hlds__switch_detection__record_switch_search_depth_results_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__switch_detection__record_switch_search_depth_results_2_p_0

	MR_Word X;

		{
X = check_hlds__switch_detection__mutable_variable_ham_map;


		;}
#undef MR_PROC_LABEL
	HamMap_4  = X;
}
{
#define MR_PROC_LABEL check_hlds__switch_detection__record_switch_search_depth_results_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__switch_detection__mutable_variable_ham_map_lock, "check_hlds__switch_detection__mutable_variable_ham_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0), HamMap_4, &HamAL_5);
  DescStrs_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[7]), HamAL_5);
  mercury__string__append_list_2_p_0(DescStrs_6, &DescsStr_7);
  succeeded = (strcmp(DescsStr_7, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word Result_8;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/SWITCH_DEPTH_RESULTS", &Result_8);
    if (!(((MR_tag((MR_Word) Result_8)) == (MR_Integer) 1)))
    {
      MR_Word OutStream_10 = ((MR_Word) ((MR_hl_field(0, Result_8, 0))));

      mercury__io__write_string_4_p_0(OutStream_10, DescsStr_7);
      mercury__io__close_output_3_p_0(OutStream_10);
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

      NonImportedProcIds_20 = hlds__hlds_pred__pred_info_will_codegen_proc_ids_1_f_0(PredInfo0_17);
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
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25)
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
  MR_Word Requant_20;
  MR_Word BodyDeletedCallCallees_21;
  MR_Word DeletedCallCallees0_22;
  MR_Word DeletedCallCallees_23;
  MR_Word STATE_VARIABLE_ProcInfo_1_26;
  MR_Word STATE_VARIABLE_ProcInfo_2_29;
  MR_Word STATE_VARIABLE_ProcInfo_3_31;

  check_hlds__scout_disjunctions__scout_disjunctions_in_proc_4_p_0(ModuleInfo_6, STATE_VARIABLE_ProcInfo_0_24, &STATE_VARIABLE_ProcInfo_1_26, &DisjunctionInfoMap_7);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_6, STATE_VARIABLE_ProcInfo_1_26, &InstMap0_8);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_26, &VarTable_9);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_26, &Goal0_10);
  BodyDeletedCallCallees0_12 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  {
    LocalInfo0_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LocalInfo0_13, 0) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, LocalInfo0_13, 1) = ((MR_Box) (DisjunctionInfoMap_7));
    MR_hl_field(0, LocalInfo0_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LocalInfo0_13, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, LocalInfo0_13, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, LocalInfo0_13, 5) = ((MR_Box) (BodyDeletedCallCallees0_12));
  }
  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), Goal0_10, &Goal_14, LocalInfo0_13, &LocalInfo_15);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_1_26, &STATE_VARIABLE_ProcInfo_2_29);
  Requant_20 = ((MR_Unsigned) ((MR_hl_field(0, LocalInfo_15, 4))) & (MR_Integer) 1);
  BodyDeletedCallCallees_21 = ((MR_Word) ((MR_hl_field(0, LocalInfo_15, 5))));
  switch (Requant_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_ProcInfo_3_31 = STATE_VARIABLE_ProcInfo_2_29;
      break;
    case (MR_Integer) 0:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_2_29, &STATE_VARIABLE_ProcInfo_3_31);
      break;
  }
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_3_31, &DeletedCallCallees0_22);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), BodyDeletedCallCallees_21, DeletedCallCallees0_22, &DeletedCallCallees_23);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_23, STATE_VARIABLE_ProcInfo_3_31, STATE_VARIABLE_ProcInfo_25);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_7_p_0(
  MR_Word InstMap0_8,
  MR_Word MaybeRequiredVar_9,
  MR_Word Disjuncts0_10,
  MR_Word GoalInfo_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_31,
  MR_Word * STATE_VARIABLE_LocalInfo_32)
{
  MR_Word NonLocals_14;
  MR_Word VarsToTry_15;
  MR_Word BestCandidateSoFar_16;
  MR_Unsigned CurDepth_17;

  NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, &VarsToTry_15);
  check_hlds__switch_detection__detect_switch_candidates_in_disj_8_p_0(STATE_VARIABLE_LocalInfo_0_31, GoalInfo_11, Disjuncts0_10, InstMap0_8, MaybeRequiredVar_9, VarsToTry_15, (MR_Word) ((MR_Unsigned) 0U), &BestCandidateSoFar_16);
  CurDepth_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 2))));
  if ((BestCandidateSoFar_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Disjuncts_19;

    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap0_8, Disjuncts0_10, &Disjuncts_19, STATE_VARIABLE_LocalInfo_0_31, STATE_VARIABLE_LocalInfo_32);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_12 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_19));
    }
  }
  else
  {
    MR_Word BestCandidate_20 = (MR_Word) (MR_body((MR_Word) (BestCandidateSoFar_16), (MR_Integer) 1));
    MR_Word BestRank_21 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 4))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 0))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 1))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 2))));
    MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, BestCandidate_20, 5))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(0, BestCandidate_20, 5))) & (MR_Integer) 1);

    switch (MR_tag((MR_Word) BestRank_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BestRank_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word SwitchGoalExpr_24;
              MR_Word LeftDisjuncts0_25;
              MR_Word STATE_VARIABLE_LocalInfo_2_39;
              MR_Word Cases_82;
              MR_Word STATE_VARIABLE_LocalInfo_1_85;
              MR_Word STATE_VARIABLE_LocalInfo_2_86;

              if ((Var_53 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_LocalInfo_1_85 = STATE_VARIABLE_LocalInfo_0_31;
              else
              {
                MR_Word UnreachableCalledProcs_79;
                MR_Word DeletedCallCallees0_80;
                MR_Word DeletedCallCallees_81;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Unsigned Var_96;
                MR_Word Var_97;
                MR_Word Var_98;

                UnreachableCalledProcs_79 = hlds__goal_refs__goals_proc_refs_1_f_0(Var_53);
                DeletedCallCallees0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 5))));
                mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_79, DeletedCallCallees0_80, &DeletedCallCallees_81);
                Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 0))));
                Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 1))));
                Var_96 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 2))));
                Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 3))));
                Var_98 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 4))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_LocalInfo_1_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 1) = ((MR_Box) (Var_95));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 2) = ((MR_Box) (Var_96));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 3) = ((MR_Box) (Var_97));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 4) = (MR_Box) ((MR_Unsigned) (Var_98));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 5) = ((MR_Box) (DeletedCallCallees_81));
                }
              }
              switch (Var_56) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_LocalInfo_2_86 = STATE_VARIABLE_LocalInfo_1_85;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 0))));
                    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 1))));
                    MR_Unsigned Var_102 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 2))));
                    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 3))));
                    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 5))));

                    {
                      STATE_VARIABLE_LocalInfo_2_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 0) = ((MR_Box) (Var_100));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 1) = ((MR_Box) (Var_101));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 2) = ((MR_Box) (Var_102));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 3) = ((MR_Box) (Var_103));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 5) = ((MR_Box) (Var_105));
                    }
                  }
                  break;
              }
              check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_51, InstMap0_8, Var_52, &Cases_82, STATE_VARIABLE_LocalInfo_2_86, &STATE_VARIABLE_LocalInfo_2_39);
              if ((Cases_82 == (MR_Word) ((MR_Unsigned) 0U)))
                SwitchGoalExpr_24 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_2[7]));
              else
                {
                  SwitchGoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SwitchGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, SwitchGoalExpr_24, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(3, SwitchGoalExpr_24, 2) = (MR_Box) ((MR_Unsigned) (Var_55));
                  MR_hl_field(3, SwitchGoalExpr_24, 3) = ((MR_Box) (Cases_82));
                }
              LeftDisjuncts0_25 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 3))));
              if ((LeftDisjuncts0_25 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *GoalExpr_12 = SwitchGoalExpr_24;
                *STATE_VARIABLE_LocalInfo_32 = STATE_VARIABLE_LocalInfo_2_39;
              }
              else
              {
                MR_Word LeftGoal_28;
                MR_Word LeftDisjuncts_29;
                MR_Word SwitchGoal_30;
                MR_Word STATE_VARIABLE_LocalInfo_3_40;
                MR_Unsigned Var_41 = (CurDepth_17 + (MR_Unsigned) 1U);
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 0))));
                MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 1))));
                MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 3))));
                MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 4))) & (MR_Integer) 1);
                MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 5))));

                {
                  STATE_VARIABLE_LocalInfo_3_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 0) = ((MR_Box) (Var_63));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 1) = ((MR_Box) (Var_64));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 2) = ((MR_Box) (Var_41));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 3) = ((MR_Box) (Var_66));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 4) = (MR_Box) ((MR_Unsigned) (Var_67));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 5) = ((MR_Box) (Var_68));
                }
                check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_8, MaybeRequiredVar_9, LeftDisjuncts0_25, GoalInfo_11, &LeftGoal_28, STATE_VARIABLE_LocalInfo_3_40, STATE_VARIABLE_LocalInfo_32);
                {
                  Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_44, 0) = ((MR_Box) (LeftGoal_28));
                  MR_hl_field(0, Var_44, 1) = ((MR_Box) (GoalInfo_11));
                }
                hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_44, &LeftDisjuncts_29);
                {
                  SwitchGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SwitchGoal_30, 0) = ((MR_Box) (SwitchGoalExpr_24));
                  MR_hl_field(0, SwitchGoal_30, 1) = ((MR_Box) (GoalInfo_11));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (SwitchGoal_30));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (LeftDisjuncts_29));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
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
              *STATE_VARIABLE_LocalInfo_32 = STATE_VARIABLE_LocalInfo_0_31;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word SwitchGoalExpr_24;
          MR_Word LeftDisjuncts0_25;
          MR_Word STATE_VARIABLE_LocalInfo_2_39;
          MR_Word Cases_82;
          MR_Word STATE_VARIABLE_LocalInfo_1_85;
          MR_Word STATE_VARIABLE_LocalInfo_2_86;

          if ((Var_53 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LocalInfo_1_85 = STATE_VARIABLE_LocalInfo_0_31;
          else
          {
            MR_Word UnreachableCalledProcs_79;
            MR_Word DeletedCallCallees0_80;
            MR_Word DeletedCallCallees_81;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Unsigned Var_96;
            MR_Word Var_97;
            MR_Word Var_98;

            UnreachableCalledProcs_79 = hlds__goal_refs__goals_proc_refs_1_f_0(Var_53);
            DeletedCallCallees0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 5))));
            mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_79, DeletedCallCallees0_80, &DeletedCallCallees_81);
            Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 0))));
            Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 1))));
            Var_96 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 2))));
            Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 3))));
            Var_98 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_31, 4))) & (MR_Integer) 1);
            {
              STATE_VARIABLE_LocalInfo_1_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 0) = ((MR_Box) (Var_94));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 1) = ((MR_Box) (Var_95));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 2) = ((MR_Box) (Var_96));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 3) = ((MR_Box) (Var_97));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 4) = (MR_Box) ((MR_Unsigned) (Var_98));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 5) = ((MR_Box) (DeletedCallCallees_81));
            }
          }
          switch (Var_56) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_LocalInfo_2_86 = STATE_VARIABLE_LocalInfo_1_85;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 0))));
                MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 1))));
                MR_Unsigned Var_102 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 2))));
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 3))));
                MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_85, 5))));

                {
                  STATE_VARIABLE_LocalInfo_2_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 0) = ((MR_Box) (Var_100));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 1) = ((MR_Box) (Var_101));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 2) = ((MR_Box) (Var_102));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 3) = ((MR_Box) (Var_103));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_86, 5) = ((MR_Box) (Var_105));
                }
              }
              break;
          }
          check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_51, InstMap0_8, Var_52, &Cases_82, STATE_VARIABLE_LocalInfo_2_86, &STATE_VARIABLE_LocalInfo_2_39);
          if ((Cases_82 == (MR_Word) ((MR_Unsigned) 0U)))
            SwitchGoalExpr_24 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_2[7]));
          else
            {
              SwitchGoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SwitchGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, SwitchGoalExpr_24, 1) = ((MR_Box) (Var_51));
              MR_hl_field(3, SwitchGoalExpr_24, 2) = (MR_Box) ((MR_Unsigned) (Var_55));
              MR_hl_field(3, SwitchGoalExpr_24, 3) = ((MR_Box) (Cases_82));
            }
          LeftDisjuncts0_25 = ((MR_Word) ((MR_hl_field(0, BestCandidate_20, 3))));
          if ((LeftDisjuncts0_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *GoalExpr_12 = SwitchGoalExpr_24;
            *STATE_VARIABLE_LocalInfo_32 = STATE_VARIABLE_LocalInfo_2_39;
          }
          else
          {
            MR_Word LeftGoal_28;
            MR_Word LeftDisjuncts_29;
            MR_Word SwitchGoal_30;
            MR_Word STATE_VARIABLE_LocalInfo_3_40;
            MR_Unsigned Var_41 = (CurDepth_17 + (MR_Unsigned) 1U);
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 0))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 1))));
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 3))));
            MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 4))) & (MR_Integer) 1);
            MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_2_39, 5))));

            {
              STATE_VARIABLE_LocalInfo_3_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 0) = ((MR_Box) (Var_63));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 1) = ((MR_Box) (Var_64));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 2) = ((MR_Box) (Var_41));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 3) = ((MR_Box) (Var_66));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 4) = (MR_Box) ((MR_Unsigned) (Var_67));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_40, 5) = ((MR_Box) (Var_68));
            }
            check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_8, MaybeRequiredVar_9, LeftDisjuncts0_25, GoalInfo_11, &LeftGoal_28, STATE_VARIABLE_LocalInfo_3_40, STATE_VARIABLE_LocalInfo_32);
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (LeftGoal_28));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (GoalInfo_11));
            }
            hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_44, &LeftDisjuncts_29);
            {
              SwitchGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SwitchGoal_30, 0) = ((MR_Box) (SwitchGoalExpr_24));
              MR_hl_field(0, SwitchGoal_30, 1) = ((MR_Box) (GoalInfo_11));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (SwitchGoal_30));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (LeftDisjuncts_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
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
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned Var_45;
    MR_Word Var_47;
    MR_Word Var_48;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_1, &VarType_23);
    ModuleInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 3))));
    hlds__instmap__bind_var_to_functors_8_p_0(Var_1, VarType_23, MainConsId_19, OtherConsIds_20, InstMap0_2, &InstMap1_25, ModuleInfo0_24, &ModuleInfo_26);
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 1))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 2))));
    Var_47 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 4))) & (MR_Integer) 1);
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, 5))));
    {
      STATE_VARIABLE_LocalInfo_1_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 1) = ((MR_Box) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 3) = ((MR_Box) (ModuleInfo_26));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 4) = (MR_Box) ((MR_Unsigned) (Var_47));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_1_30, 5) = ((MR_Box) (Var_48));
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
              MR_Word ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 3))));
              MR_Word InstMap1_27;
              MR_Word LambdaGoal_28;
              MR_Word RHS_29;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Unsigned packed_word_5;
              MR_Word Var_161;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;

              hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_26, VarsModes_23, InstMap0_7, &InstMap1_27);
              check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_27, (MR_Word) ((MR_Unsigned) 0U), LambdaGoal0_25, &LambdaGoal_28, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
              packed_word_5 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, 0)));
              Var_157 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 1))));
              Var_158 = ((MR_Word) ((MR_hl_field(2, RHS0_15, 2))));
              Var_159 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, 3))) & (MR_Integer) 7);
              {
                RHS_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_29, 0) = (MR_Box) (packed_word_5);
                MR_hl_field(2, RHS_29, 1) = ((MR_Box) (Var_157));
                MR_hl_field(2, RHS_29, 2) = ((MR_Box) (Var_158));
                MR_hl_field(2, RHS_29, 3) = (MR_Box) ((MR_Unsigned) (Var_159));
                MR_hl_field(2, RHS_29, 4) = ((MR_Box) (LambdaGoal_28));
              }
              Var_161 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 0))));
              Var_163 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 2))));
              Var_164 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 3))));
              Var_165 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, 4))));
              {
                GoalExpr_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_30, 0) = ((MR_Box) (Var_161));
                MR_hl_field(1, GoalExpr_30, 1) = ((MR_Box) (RHS_29));
                MR_hl_field(1, GoalExpr_30, 2) = ((MR_Box) (Var_163));
                MR_hl_field(1, GoalExpr_30, 3) = ((MR_Box) (Var_164));
                MR_hl_field(1, GoalExpr_30, 4) = ((MR_Box) (Var_165));
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
            {
              MR_Word STATE_VARIABLE_LocalInfo_3_117;
              MR_Word Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 0))));
              MR_Word Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 1))));
              MR_Word Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 3))));
              MR_Word Var_170 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 4))) & (MR_Integer) 1);
              MR_Word Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_112, 5))));

              {
                STATE_VARIABLE_LocalInfo_3_117 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 0) = ((MR_Box) (Var_166));
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 1) = ((MR_Box) (Var_167));
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 3) = ((MR_Box) (Var_169));
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 4) = (MR_Box) ((MR_Unsigned) (Var_170));
                MR_hl_field(0, STATE_VARIABLE_LocalInfo_3_117, 5) = ((MR_Box) (Var_171));
              }
              check_hlds__switch_detection__detect_switches_in_disj_7_p_0(InstMap0_7, MaybeRequiredVar_8, Disjuncts0_56, GoalInfo0_13, &GoalExpr_30, STATE_VARIABLE_LocalInfo_3_117, STATE_VARIABLE_LocalInfo_113);
            }
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
            MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
            MR_Word SubGoal_146;

            switch (MR_tag((MR_Word) Reason_72)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 1:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 2:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_72, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 1:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word RequiredVar_95 = ((MR_Word) ((MR_hl_field(3, Reason_72, 1))));
                      MR_Word Var_135;

                      {
                        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_135, 0) = ((MR_Box) (RequiredVar_95));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, Var_135, SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RequiredVar_186 = ((MR_Word) ((MR_hl_field(3, Reason_72, 1))));
                      MR_Word Var_187;

                      {
                        Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_187, 0) = ((MR_Box) (RequiredVar_186));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, Var_187, SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    }
                    break;
                  case (MR_Integer) 4:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 5:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_184 = ((MR_Unsigned) ((MR_hl_field(3, Reason_72, 2))) & (MR_Integer) 3);

                      switch (Var_184) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            SubGoal_146 = SubGoal0_145;
                            *STATE_VARIABLE_LocalInfo_113 = STATE_VARIABLE_LocalInfo_0_112;
                          }
                          break;
                        case (MR_Integer) 2:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                        case (MR_Integer) 0:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                        case (MR_Integer) 3:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                  case (MR_Integer) 8:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_145, &SubGoal_146, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                    break;
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason_72));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_146));
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
            MR_Word STATE_VARIABLE_LocalInfo_7_124;
            MR_Word STATE_VARIABLE_LocalInfo_8_126;
            MR_Word InstMap1_144;

            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), Cond0_66, &Cond_69, STATE_VARIABLE_LocalInfo_0_112, &STATE_VARIABLE_LocalInfo_7_124);
            hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond0_66, InstMap0_7, &InstMap1_144);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_144, (MR_Word) ((MR_Unsigned) 0U), Then0_67, &Then_70, STATE_VARIABLE_LocalInfo_7_124, &STATE_VARIABLE_LocalInfo_8_126);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), Else0_68, &Else_71, STATE_VARIABLE_LocalInfo_8_126, STATE_VARIABLE_LocalInfo_113);
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
                  MR_Word STATE_VARIABLE_LocalInfo_12_138;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), MainGoal0_102, &MainGoal_105, STATE_VARIABLE_LocalInfo_0_112, &STATE_VARIABLE_LocalInfo_12_138);
                  check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap0_7, OrElseGoals0_103, &OrElseGoals_106, STATE_VARIABLE_LocalInfo_12_138, STATE_VARIABLE_LocalInfo_113);
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
                  MR_Word SubGoal0_147 = ((MR_Word) ((MR_hl_field(2, ShortHand0_97, 2))));
                  MR_Word SubGoal_148;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_7, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_147, &SubGoal_148, STATE_VARIABLE_LocalInfo_0_112, STATE_VARIABLE_LocalInfo_113);
                  {
                    ShortHand_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_107, 0) = ((MR_Box) (MaybeIO_108));
                    MR_hl_field(2, ShortHand_107, 1) = ((MR_Box) (ResultVar_109));
                    MR_hl_field(2, ShortHand_107, 2) = ((MR_Box) (SubGoal_148));
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
  MR_Word STATE_VARIABLE_BestCandidateSoFar_0_7,
  MR_Word * STATE_VARIABLE_BestCandidateSoFar_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BestCandidateSoFar_8 = STATE_VARIABLE_BestCandidateSoFar_0_7;
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
      MR_Word VarInst0_26;
      MR_Word STATE_VARIABLE_BestCandidateSoFar_1_35;
      MR_Word Left_27;
      MR_Word Cases_28;
      MR_Word Requant_29;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_BestCandidateSoFar_0_7;

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
        check_hlds__switch_candidates__record_candidate_switch_3_p_0(Candidate_32, STATE_VARIABLE_BestCandidateSoFar_0_7, &STATE_VARIABLE_BestCandidateSoFar_1_35);
      }
      else
        STATE_VARIABLE_BestCandidateSoFar_1_35 = STATE_VARIABLE_BestCandidateSoFar_0_7;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Vars_23;
      next_value_of_STATE_VARIABLE_BestCandidateSoFar_0_7 = STATE_VARIABLE_BestCandidateSoFar_1_35;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_BestCandidateSoFar_0_7 = next_value_of_STATE_VARIABLE_BestCandidateSoFar_0_7;
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
    MR_Word TypeCtorInfo_19_85;
    MR_Word TypeCtorInfo_20_86;
    MR_Word TypeInfo_26_87;
    MR_Word TypeInfo_27_88;
    MR_Word TypeInfo_28_89;
    MR_Word TypeCtorInfo_29_90;
    MR_Integer Var_31;
    MR_Word CasesMap_73 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 0))));
    MR_Word CasesMap_77;
    MR_Word ConflictIds_78;
    MR_Word CasesAssocList_79;
    MR_Word Cases_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Box conv3_Cases_80;
    MR_Box conv2__AlreadyHandledConsIds_81;

    Var_31 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_73);
    succeeded = (Var_31 >= (MR_Integer) 1);
    if (succeeded)
    {
      *Left_12 = Left1_16;
      CasesMap_77 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 0))));
      ConflictIds_78 = ((MR_Word) ((MR_hl_field(0, CasesTable1_17, 1))));
      TypeCtorInfo_19_85 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
      TypeCtorInfo_20_86 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
      mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_19_85, TypeCtorInfo_20_86, CasesMap_77, &CasesAssocList_79);
      Var_83 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_82, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_8[0]));
        MR_hl_field(0, Var_82, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
        MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_82, 3) = ((MR_Box) (LocalInfo_8));
        MR_hl_field(0, Var_82, 4) = ((MR_Box) (Var_9));
        MR_hl_field(0, Var_82, 5) = ((MR_Box) (GoalInfo_11));
        MR_hl_field(0, Var_82, 6) = ((MR_Box) (ConflictIds_78));
      }
      Var_84 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_19_85);
      TypeInfo_26_87 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]);
      TypeInfo_27_88 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[2]);
      TypeInfo_28_89 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]);
      mercury__list__foldl2_6_p_0(TypeInfo_26_87, TypeInfo_27_88, TypeInfo_28_89, Var_82, CasesAssocList_79, ((MR_Box) (Var_83)), &conv3_Cases_80, ((MR_Box) (Var_84)), &conv2__AlreadyHandledConsIds_81);
      Cases_80 = ((MR_Word) (conv3_Cases_80));
      TypeCtorInfo_29_90 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
      mercury__list__sort_2_p_0(TypeCtorInfo_29_90, Cases_80, Cases_13);
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
      MR_Word CasesMap_91;

      *Left_12 = (MR_Word) ((MR_Unsigned) 0U);
      CasesMap_91 = ((MR_Word) ((MR_hl_field(0, CasesTable_20, 0))));
      Var_33 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_91);
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
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_8[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__switch_detection__cases_table_to_cases_4_f_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (LocalInfo_6));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (Var_7));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (GoalInfo_8));
    MR_hl_field(0, Var_16, 6) = ((MR_Box) (ConflictIds_12));
  }
  Var_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[2]), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]), Var_16, CasesAssocList_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Cases_14, ((MR_Box) (Var_18)), &conv2__AlreadyHandledConsIds_15);
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
        MR_Word TypeCtorInfo_75_75;
        MR_Word TypeCtorInfo_76_76;
        MR_Word TypeInfo_22_119;
        MR_Word NonLocals_26;
        MR_Word OtherNonLocals_27;
        MR_Word DisjConsIds_28;
        MR_Word Goal_103;
        MR_Word Goals_104;
        MR_Word ConsId_105;
        MR_Word ConsIds_106;
        MR_Word GoalExpr_107;
        MR_Word UnifyInfo0_112;
        MR_Word Var_118;

        succeeded = (Disjuncts_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_RevUnifies_0_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_17);
            TypeCtorInfo_75_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_75_75, Var_9, NonLocals_26, &OtherNonLocals_27);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_75_75, OtherNonLocals_27);
            if (succeeded)
            {
              Goal_103 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 0))));
              Goals_104 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, 1))));
              GoalExpr_107 = ((MR_Word) ((MR_hl_field(0, Goal_103, 0))));
              succeeded = ((MR_tag((MR_Word) GoalExpr_107)) == (MR_Integer) 1);
              if (succeeded)
              {
                UnifyInfo0_112 = ((MR_Word) ((MR_hl_field(1, GoalExpr_107, 3))));
                succeeded = ((MR_tag((MR_Word) UnifyInfo0_112)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_118 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_112, 0))));
                  ConsId_105 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_112, 1))));
                  TypeInfo_22_119 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_119, ((MR_Box) (Var_9)), ((MR_Box) (Var_118)));
                  if (succeeded)
                  {
                    succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(Var_9, Goals_104, &ConsIds_106);
                    if (succeeded)
                    {
                      TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
                      {
                        DisjConsIds_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, DisjConsIds_28, 0) = ((MR_Box) (ConsId_105));
                        MR_hl_field(1, DisjConsIds_28, 1) = ((MR_Box) (ConsIds_106));
                      }
                      mercury__list__sort_2_p_0(TypeCtorInfo_76_76, DisjConsIds_28, &SortedDisjConsIds_29);
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
            MR_Word Arm_91;
            MR_Word Var_92;
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
              Arm_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Arm_91, 0) = ((MR_Box) (MainConsId_30));
              MR_hl_field(1, Arm_91, 1) = ((MR_Box) (OtherConsIds_31));
              MR_hl_field(1, Arm_91, 2) = ((MR_Box) (SharedGoal_32));
            }
            {
              Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_92, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0]));
              MR_hl_field(0, Var_92, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1));
              MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_92, 3) = ((MR_Box) (Arm_91));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0), Var_92, SortedDisjConsIds_29, ((MR_Box) (STATE_VARIABLE_CasesTable_0_48)), &conv1_STATE_VARIABLE_CasesTable_49);
            *STATE_VARIABLE_CasesTable_49 = ((MR_Word) (conv1_STATE_VARIABLE_CasesTable_49));
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word SortedDisjConsIds_63;
            MR_Word MainConsId_66;
            MR_Word OtherConsIds_67;
            MR_Word TypeCtorInfo_77_77;
            MR_Word TypeCtorInfo_78_78;
            MR_Word TypeCtorInfo_79_79;
            MR_Word TypeCtorInfo_80_80;
            MR_Word TypeInfo_81_81;
            MR_Word TypeCtorInfo_82_82;
            MR_Word TypeCtorInfo_83_83;
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
              TypeCtorInfo_77_77 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
              TypeCtorInfo_78_78 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
              mercury__map__keys_as_set_2_p_0(TypeCtorInfo_77_77, TypeCtorInfo_78_78, CasesTableMap_33, &CasesConsIds_34);
              succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_77_77, CasesConsIds_34);
              if (succeeded)
              {
                DisjunctionMap_35 = ((MR_Word) ((MR_hl_field(0, LocalInfo_8, 1))));
                FirstGoalId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(FirstGoalInfo_17);
                TypeCtorInfo_79_79 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0);
                TypeCtorInfo_80_80 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0);
                Var_55 = (MR_Word) (FirstGoalId_36);
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_79_79, TypeCtorInfo_80_80, DisjunctionMap_35, ((MR_Box) (Var_55)), &conv2_FirstGoalDisjunctionInfo_37);
                if (succeeded)
                {
                  FirstGoalDisjunctionInfo_37 = ((MR_Word) (conv2_FirstGoalDisjunctionInfo_37));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  FirstGoalSummary_38 = ((MR_Word) ((MR_hl_field(0, FirstGoalDisjunctionInfo_37, 1))));
                  TypeInfo_81_81 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]);
                  TypeCtorInfo_82_82 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0);
                  succeeded = mercury__map__search_3_p_0(TypeInfo_81_81, TypeCtorInfo_82_82, FirstGoalSummary_38, ((MR_Box) (Var_9)), &conv3_VarSummary_39);
                  if (succeeded)
                  {
                    VarSummary_39 = ((MR_Word) (conv3_VarSummary_39));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    SummaryConsIds0_40 = ((MR_Word) ((MR_hl_field(0, VarSummary_39, 0))));
                    SubDisj_41 = ((MR_Unsigned) ((MR_hl_field(0, VarSummary_39, 1))) & (MR_Integer) 1);
                    TypeCtorInfo_83_83 = (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0);
                    Var_56 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[6]);
                    SummaryConsIds_42 = mercury__set__map_2_f_0(TypeCtorInfo_83_83, TypeCtorInfo_77_77, Var_56, SummaryConsIds0_40);
                    succeeded = (SubDisj_41 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      mercury__set__intersect_3_p_0(TypeCtorInfo_77_77, SummaryConsIds_42, CasesConsIds_34, &NewConflictConsIds_43);
                      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_77_77, NewConflictConsIds_43);
                      if (succeeded)
                      {
                        mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_77_77, SummaryConsIds_42, &SortedDisjConsIds_63);
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
              MR_Word Arm_96;
              MR_Word Var_97;
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
                Arm_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Arm_96, 0) = ((MR_Box) (MainConsId_66));
                MR_hl_field(1, Arm_96, 1) = ((MR_Box) (OtherConsIds_67));
                MR_hl_field(1, Arm_96, 2) = ((MR_Box) (SharedGoal_64));
              }
              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_3));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (Arm_96));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0), Var_97, SortedDisjConsIds_63, ((MR_Box) (STATE_VARIABLE_CasesTable_0_48)), &conv6_STATE_VARIABLE_CasesTable_49);
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
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0]));
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

      check_hlds__find_bind_var__find_bind_var_9_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Var_2, (MR_Word) (&check_hlds__switch_detection_scalar_common_1[5]), Disjunct0_18, &Disjunct_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_MaybeConsId_23, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_24, &Var_25);
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
        MR_Word CasesMap0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_6, 0))));
        MR_Word ConflictConsIds0_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_6, 1))));
        MR_Word Arm_84;
        MR_Word ConflictConsIds_89;
        MR_Word CasesMap_92;
        MR_Word Entry0_85;
        MR_Box conv4_Entry0_85;

        {
          Arm_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arm_84, 0) = ((MR_Box) (ConsId_33));
          MR_hl_field(0, Arm_84, 1) = ((MR_Box) (Disjunct_22));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap0_82, ((MR_Box) (ConsId_33)), &conv4_Entry0_85);
        if (succeeded)
        {
          Entry0_85 = ((MR_Word) (conv4_Entry0_85));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word State0_86 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_85, 0))) & (MR_Integer) 3);
          MR_Word Arms0_87 = ((MR_Word) ((MR_hl_field(0, Entry0_85, 1))));
          MR_Word State_88;
          MR_Word Arms_90;
          MR_Word Entry_91;

          switch (State0_86) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                State_88 = (MR_Integer) 0;
                ConflictConsIds_89 = ConflictConsIds0_83;
              }
              break;
            case (MR_Integer) 2:
              {
                State_88 = (MR_Integer) 2;
                ConflictConsIds_89 = ConflictConsIds0_83;
              }
              break;
            case (MR_Integer) 1:
              {
                State_88 = (MR_Integer) 2;
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_33)), ConflictConsIds0_83, &ConflictConsIds_89);
              }
              break;
          }
          Arms_90 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Arms0_87, ((MR_Box) (Arm_84)));
          {
            Entry_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_91, 0) = (MR_Box) ((MR_Unsigned) (State_88));
            MR_hl_field(0, Entry_91, 1) = ((MR_Box) (Arms_90));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_33)), ((MR_Box) (Entry_91)), CasesMap0_82, &CasesMap_92);
        }
        else
        {
          MR_Word Arms_94;
          MR_Word Entry_95;

          Arms_94 = mercury__cord__singleton_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_84)));
          {
            Entry_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_95, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Entry_95, 1) = ((MR_Box) (Arms_94));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_33)), ((MR_Box) (Entry_95)), CasesMap0_82, &CasesMap_92);
          ConflictConsIds_89 = ConflictConsIds0_83;
        }
        {
          STATE_VARIABLE_CasesTable_1_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_CasesTable_1_60, 0) = ((MR_Box) (CasesMap_92));
          MR_hl_field(0, STATE_VARIABLE_CasesTable_1_60, 1) = ((MR_Box) (ConflictConsIds_89));
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
        TypeInfo_22_22 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]);
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
check_hlds__switch_detection____Unify____hit_and_miss_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____hit_and_miss_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____hit_and_miss_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____hit_and_miss_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____hit_and_miss_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____hit_and_miss_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____hit_and_miss_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_hit_and_miss_map_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0);
  MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0);
}

void mercury__check_hlds__switch_detection__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__check_hlds__switch_detection__required_init(void)
{
  check_hlds__switch_detection__user_init_pred_144_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__switch_detection__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.switch_detection.
