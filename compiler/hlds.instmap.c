/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2024-10-28
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


// :- module hlds.instmap.
// :- implementation.

/*
INIT mercury__hlds__instmap__init
REQUIRED_INIT mercury__hlds__instmap__required_init
ENDINIT
*/

#include "hlds.instmap.mih"
#include "hlds.instmap.mh"


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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_merge.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_ordinal_ordered_overlay_how_0[3];

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_restrict_stats_0_0[4];

static const MR_ConstString hlds__instmap__hlds__instmap__field_names_restrict_stats_0_0[4];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_restrict_stats_0_0;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_restrict_stats_0_0[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_restrict_stats_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_restrict_stats_0[1];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_restrict_stats_0[1];

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_var_init_final_insts_0_0[3];

static const MR_ConstString hlds__instmap__hlds__instmap__field_names_var_init_final_insts_0_0[3];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_var_init_final_insts_0_0;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_var_init_final_insts_0_0[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_var_init_final_insts_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_var_init_final_insts_0[1];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_var_init_final_insts_0[1];

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__638__1_2_p_0(
  MR_Word Inst_10,
  MR_Word HeadVar__2_19);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__627__1_2_p_0(
  MR_Word Inst_8,
  MR_Word HeadVar__2_17);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__615__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__584__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16);

static void MR_CALL 
hlds__instmap____Compare____restrict_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____restrict_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__instmap__unsafe_set_instmap_delta_restrict_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
hlds__instmap__unsafe_get_instmap_delta_restrict_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
hlds__instmap__unlock_instmap_delta_restrict_stats_0_p_0(void);

static void MR_CALL 
hlds__instmap__lock_instmap_delta_restrict_stats_0_p_0(void);

static void MR_CALL 
hlds__instmap__pre_initialise_mutable_instmap_delta_restrict_stats_0_p_0(void);

static void MR_CALL 
hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0(void);

static void MR_CALL 
hlds__instmap__unify_instmap_delta_8_p_0(
  MR_Word VarTable_9,
  MR_Word _InstMap0_10,
  MR_Word NonLocals_11,
  MR_Word InstMapDeltaA_12,
  MR_Word InstMapDeltaB_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_50_93_95_48_8_p_0(
  MR_Word VarTable_9,
  MR_Word NonLocals_11,
  MR_Word InstMapDeltaA_12,
  MR_Word InstMapDeltaB_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
hlds__instmap__unify_instmapping_delta_loop_8_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word ArmErrorInfo_3,
  MR_Word * Context_4);

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word ArmInstMap_5,
  MR_Word * Inst_6);

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word Var_3);

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDeltaMap_9,
  MR_Word Var_10);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_BoundVars_0_10,
  MR_Word * STATE_VARIABLE_BoundVars_11);

static void MR_CALL 
hlds__instmap__instmapping_apply_sub_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapping_0_4,
  MR_Word * STATE_VARIABLE_InstMapping_5);

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_fixpoint_6_p_0(
  MR_Word VarsTypes_7,
  MR_Word InstMapping0_8,
  MR_Word Deltas_9,
  MR_Word * MergedDelta_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_pass_7_p_0(
  MR_Word VarsTypes_8,
  MR_Word InstMapping0_9,
  MR_Word Deltas_10,
  MR_Word STATE_VARIABLE_MergedDeltas_0_22,
  MR_Word * STATE_VARIABLE_MergedDeltas_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25);

static void MR_CALL 
hlds__instmap__merge_instmapping_typed_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapping0_2,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
hlds__instmap__pair_vars_with_their_types_3_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__instmap__prepare_for_merge_instmap_deltas_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * STATE_VARIABLE_Vars_3,
  MR_Word STATE_VARIABLE_InstMappings_0_4,
  MR_Word * STATE_VARIABLE_InstMappings_5);

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_vars_9_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap_3,
  MR_Word InstMappingA_4,
  MR_Word InstMappingB_5,
  MR_Word STATE_VARIABLE_InstMapping_0_6,
  MR_Word * STATE_VARIABLE_InstMapping_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArmInstMaps_2,
  MR_Word VarTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_2,
  MR_Word InstMappingB_3,
  MR_Word STATE_VARIABLE_InstMappingDeltaRevAL_0_4,
  MR_Word * STATE_VARIABLE_InstMappingDeltaRevAL_5);

static void MR_CALL 
hlds__instmap__var_modes_get_inital_insts_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__instmap__instmap_changed_vars_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * ChangedVars_6);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word Inst_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapping_0_3,
  MR_Word * STATE_VARIABLE_InstMapping_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMapping_0_2,
  MR_Word * STATE_VARIABLE_InstMapping_3);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_118_97_114_95_105_110_105_116_95_102_105_110_97_108_95_105_110_115_116_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapDelta_0_3,
  MR_Word * STATE_VARIABLE_InstMapDelta_4);

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_loop_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5);

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____restrict_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____restrict_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____var_init_final_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____var_init_final_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__instmap_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__instmap_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__instmap_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][4];

static /* final */ const MR_Box hlds__instmap_scalar_common_5[3][5];

static /* final */ const MR_Box hlds__instmap_scalar_common_6[2][8];

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][6];




static /* final */ const MR_Box hlds__instmap_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__instmap_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__instmap_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__instmap_scalar_common_5[1])),
    ((MR_Box) (hlds__instmap__instmap_delta_bind_vars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__instmap_scalar_common_5[2])),
    ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__instmap____vpti_pred_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "hlds.instmap.mh"
#include "io.stream_ops.mh"
#line 1633 "instmap.m"
MR_Word hlds__instmap__mutable_variable_instmap_delta_restrict_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock;
#endif


#line 1633 "instmap.m"
void 
hlds__instmap__user_init_pred_262_0(void)
#line 1633 "instmap.m"
{
#line 1633 "instmap.m"
	hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)
};

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0 = {
  (MR_String) "arm_instmap",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0 };

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0 };

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____arm_instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____arm_instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "arm_instmap",
  { hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0 },
  { hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) };

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0 = {
  (MR_String) "reachable",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__instmap__hlds__instmap__field_types_instmap_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1 = {
  (MR_String) "unreachable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1 };

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0 };

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmap",
  { hlds__instmap__hlds__instmap__du_name_ordered_instmap_0 },
  { hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__instmap__hlds__instmap__functor_number_map_instmap_0,

};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__instmap____Unify____instmap_delta_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmap_delta_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmap_delta",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__instmap____Unify____instmapping_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmapping_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmapping",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_ordinal_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__instmap____Unify____overlay_how_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____overlay_how_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "overlay_how",
  { hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0 },
  { hlds__instmap__hlds__instmap__enum_ordinal_ordered_overlay_how_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0,

};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_restrict_stats_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__instmap__hlds__instmap__field_names_restrict_stats_0_0[4] = {
  (MR_String) "calls_no_change",
  (MR_String) "calls_some_change",
  (MR_String) "total_vars_before",
  (MR_String) "total_vars_after"
};

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_restrict_stats_0_0 = {
  (MR_String) "restrict_stats",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__instmap__hlds__instmap__field_types_restrict_stats_0_0,
  hlds__instmap__hlds__instmap__field_names_restrict_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_restrict_stats_0_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_restrict_stats_0_0 };

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_restrict_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_restrict_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_restrict_stats_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_restrict_stats_0_0 };

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_restrict_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_restrict_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____restrict_stats_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____restrict_stats_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "restrict_stats",
  { hlds__instmap__hlds__instmap__du_name_ordered_restrict_stats_0 },
  { hlds__instmap__hlds__instmap__du_ptag_ordered_restrict_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__instmap__hlds__instmap__functor_number_map_restrict_stats_0,

};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_var_init_final_insts_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_ConstString hlds__instmap__hlds__instmap__field_names_var_init_final_insts_0_0[3] = {
  (MR_String) "vifi_var",
  (MR_String) "vifi_init_inst",
  (MR_String) "vifi_final_inst"
};

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_var_init_final_insts_0_0 = {
  (MR_String) "var_init_final_insts",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__instmap__hlds__instmap__field_types_var_init_final_insts_0_0,
  hlds__instmap__hlds__instmap__field_names_var_init_final_insts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_var_init_final_insts_0_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_var_init_final_insts_0_0 };

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_var_init_final_insts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_var_init_final_insts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_var_init_final_insts_0[1] = { &hlds__instmap__hlds__instmap__du_functor_desc_var_init_final_insts_0_0 };

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_var_init_final_insts_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_var_init_final_insts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____var_init_final_insts_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____var_init_final_insts_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "var_init_final_insts",
  { hlds__instmap__hlds__instmap__du_name_ordered_var_init_final_insts_0 },
  { hlds__instmap__hlds__instmap__du_ptag_ordered_var_init_final_insts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__instmap__hlds__instmap__functor_number_map_var_init_final_insts_0,

};

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__638__1_2_p_0(
  MR_Word Inst_10,
  MR_Word HeadVar__2_19)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_10, HeadVar__2_19);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__627__1_2_p_0(
  MR_Word Inst_8,
  MR_Word HeadVar__2_17)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_8, HeadVar__2_17);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__615__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_5, HeadVar__2_16);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__584__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_5, HeadVar__2_16);
  return succeeded;
}

void MR_CALL 
hlds__instmap____Compare____var_init_final_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____var_init_final_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____restrict_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
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
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

static MR_bool MR_CALL 
hlds__instmap____Unify____restrict_stats_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
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

MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__instmap_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__instmap_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = hlds__instmap____Unify____instmap_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__instmap_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&hlds__instmap_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__instmap__unsafe_set_instmap_delta_restrict_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL hlds__instmap__unsafe_set_instmap_delta_restrict_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
hlds__instmap__mutable_variable_instmap_delta_restrict_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
hlds__instmap__unsafe_get_instmap_delta_restrict_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL hlds__instmap__unsafe_get_instmap_delta_restrict_stats_1_p_0

	MR_Word X;

		{
X = hlds__instmap__mutable_variable_instmap_delta_restrict_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
hlds__instmap__unlock_instmap_delta_restrict_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL hlds__instmap__unlock_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
hlds__instmap__lock_instmap_delta_restrict_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL hlds__instmap__lock_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
hlds__instmap__pre_initialise_mutable_instmap_delta_restrict_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL hlds__instmap__pre_initialise_mutable_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0

	MR_Word X;

	X = (MR_Word) (&hlds__instmap_scalar_common_4[0]) ;
		{
hlds__instmap__mutable_variable_instmap_delta_restrict_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL hlds__instmap__initialise_mutable_instmap_delta_restrict_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
hlds__instmap__unify_instmap_delta_8_p_0(
  MR_Word VarTable_9,
  MR_Word _InstMap0_10,
  MR_Word NonLocals_11,
  MR_Word InstMapDeltaA_12,
  MR_Word InstMapDeltaB_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_50_93_95_48_8_p_0(VarTable_9, NonLocals_11, InstMapDeltaA_12, InstMapDeltaB_13, InstMapDelta_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_50_93_95_48_8_p_0(
  MR_Word VarTable_9,
  MR_Word NonLocals_11,
  MR_Word InstMapDeltaA_12,
  MR_Word InstMapDeltaB_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  if ((InstMapDeltaA_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *InstMapDelta_14 = InstMapDeltaB_13;
    *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
  }
  else
  {
    MR_Word InstMappingA_16 = ((MR_Word) ((MR_hl_field(1, InstMapDeltaA_12, (MR_Integer) 0))));

    if ((InstMapDeltaB_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InstMapDelta_14 = InstMapDeltaA_12;
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
    }
    else
    {
      MR_Word InstMappingB_17 = ((MR_Word) ((MR_hl_field(1, InstMapDeltaB_13, (MR_Integer) 0))));
      MR_Word InstMapping_18;
      MR_Word VarsInA_21;
      MR_Word VarsInB_22;
      MR_Word SetOfVarsInA_23;
      MR_Word SetOfVars0_24;
      MR_Word SetOfVars_25;
      MR_Word ListOfVars_26;
      MR_Word Var_27;

      mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_16, &VarsInA_21);
      mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_17, &VarsInB_22);
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsInA_21, &SetOfVarsInA_23);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsInB_22, SetOfVarsInA_23, &SetOfVars0_24);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVars0_24, NonLocals_11, &SetOfVars_25);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVars_25, &ListOfVars_26);
      Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
      hlds__instmap__unify_instmapping_delta_loop_8_p_0(VarTable_9, ListOfVars_26, InstMappingA_16, InstMappingB_17, Var_27, &InstMapping_18, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstMapDelta_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_18));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__unify_instmapping_delta_loop_8_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      *STATE_VARIABLE_InstMapping_6 = STATE_VARIABLE_InstMapping_0_5;
    }
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InstMapping_37_37;
      MR_Word STATE_VARIABLE_ModuleInfo_40_40;
      MR_Word InstA_25;
      MR_Box conv0_InstA_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_3, ((MR_Box) (Var_19)), &conv0_InstA_25);
      if (succeeded)
      {
        InstA_25 = ((MR_Word) (conv0_InstA_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InstB_26;
        MR_Box conv1_InstB_26;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_4, ((MR_Box) (Var_19)), &conv1_InstB_26);
        if (succeeded)
        {
          InstB_26 = ((MR_Word) (conv1_InstB_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Type_27;
          MR_Word Inst_28;
          MR_Word STATE_VARIABLE_ModuleInfo_36_36;
          MR_Word _Det_29;

          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Var_19, &Type_27);
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_27, (MR_Integer) 0, (MR_Integer) 1, InstA_25, InstB_26, &Inst_28, &_Det_29, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_36_36);
          if (succeeded)
          {
            STATE_VARIABLE_ModuleInfo_40_40 = STATE_VARIABLE_ModuleInfo_36_36;
            mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_19)), ((MR_Box) (Inst_28)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_37_37);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_loop\'/8", (MR_String) "unexpected error");
              return;
            }
        }
        else
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_19)), ((MR_Box) (InstA_25)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_37_37);
          STATE_VARIABLE_ModuleInfo_40_40 = STATE_VARIABLE_ModuleInfo_0_7;
        }
      }
      else
      {
        MR_Word InstB_45;
        MR_Box conv2_InstB_45;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_4, ((MR_Box) (Var_19)), &conv2_InstB_45);
        if (succeeded)
        {
          InstB_45 = ((MR_Word) (conv2_InstB_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_19)), ((MR_Box) (InstB_45)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_37_37);
        else
          STATE_VARIABLE_InstMapping_37_37 = STATE_VARIABLE_InstMapping_0_5;
        STATE_VARIABLE_ModuleInfo_40_40 = STATE_VARIABLE_ModuleInfo_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_20;
      next_value_of_STATE_VARIABLE_InstMapping_0_5 = STATE_VARIABLE_InstMapping_37_37;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_40_40;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMapping_0_5 = next_value_of_STATE_VARIABLE_InstMapping_0_5;
      STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word ArmErrorInfo_3,
  MR_Word * Context_4)
{
  *Context_4 = ((MR_Word) ((MR_hl_field(0, ArmErrorInfo_3, (MR_Integer) 0))));
}

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word ArmInstMap_5,
  MR_Word * Inst_6)
{
  MR_Word InstMap_8 = ((MR_Word) ((MR_hl_field(0, ArmInstMap_5, (MR_Integer) 1))));

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_4, Inst_6);
}

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word Var_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(1, &hlds__instmap_scalar_common_1[2])));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDeltaMap_9,
  MR_Word Var_10)
{
  MR_bool succeeded;
  MR_Word OldInst_11;
  MR_Word NewInst_12;
  MR_Box conv0_NewInst_12;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_8, Var_10, &OldInst_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapDeltaMap_9, ((MR_Box) (Var_10)), &conv0_NewInst_12);
  if (succeeded)
  {
    NewInst_12 = ((MR_Word) (conv0_NewInst_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Type_13;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_7, Var_10, &Type_13);
    succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_6, Type_13, NewInst_12, OldInst_11);
  }
  else
  {
    succeeded = check_hlds__inst_test__inst_contains_any_2_p_0(ModuleInfo_6, OldInst_11);
    succeeded = !(succeeded);
  }
  return succeeded;
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_BoundVars_0_10,
  MR_Word * STATE_VARIABLE_BoundVars_11)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_6, Inst_8);
  if (succeeded)
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, STATE_VARIABLE_BoundVars_0_10, STATE_VARIABLE_BoundVars_11);
  else
    *STATE_VARIABLE_BoundVars_11 = STATE_VARIABLE_BoundVars_0_10;
}

void MR_CALL 
hlds__instmap__record_instmap_delta_restrict_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Stats_4;
  MR_Integer CountSame_5;
  MR_Integer CountChanged_6;
  MR_Integer TotalBefore_7;
  MR_Integer TotalAfter_8;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL hlds__instmap__record_instmap_delta_restrict_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL hlds__instmap__record_instmap_delta_restrict_stats_2_p_0

	MR_Word X;

		{
X = hlds__instmap__mutable_variable_instmap_delta_restrict_stats;


		;}
#undef MR_PROC_LABEL
	Stats_4  = X;
}
{
#define MR_PROC_LABEL hlds__instmap__record_instmap_delta_restrict_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock, "hlds__instmap__mutable_variable_instmap_delta_restrict_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  CountSame_5 = ((MR_Integer) ((MR_hl_field(0, Stats_4, (MR_Integer) 0))));
  CountChanged_6 = ((MR_Integer) ((MR_hl_field(0, Stats_4, (MR_Integer) 1))));
  TotalBefore_7 = ((MR_Integer) ((MR_hl_field(0, Stats_4, (MR_Integer) 2))));
  TotalAfter_8 = ((MR_Integer) ((MR_hl_field(0, Stats_4, (MR_Integer) 3))));
  Var_15 = (MR_Integer) ((MR_Unsigned) CountSame_5 + (MR_Unsigned) CountChanged_6);
  succeeded = (Var_15 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Result_9;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/RESTRICT_STATS", &Result_9);
    if (!(((MR_tag((MR_Word) Result_9)) == (MR_Integer) 1)))
    {
      MR_Word Stream_11 = ((MR_Word) ((MR_hl_field(0, Result_9, (MR_Integer) 0))));
      MR_String Var_31;
      MR_String Var_41;
      MR_String Var_51;
      MR_String Var_61;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), CountSame_5, &Var_31);
      mercury__io__write_string_4_p_0(Stream_11, Var_31);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), CountChanged_6, &Var_41);
      mercury__io__write_string_4_p_0(Stream_11, Var_41);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), TotalBefore_7, &Var_51);
      mercury__io__write_string_4_p_0(Stream_11, Var_51);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), TotalAfter_8, &Var_61);
      mercury__io__write_string_4_p_0(Stream_11, Var_61);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      mercury__io__close_output_3_p_0(Stream_11);
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Word InstMapDelta0_7,
  MR_Word * InstMapDelta_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  if ((InstMapDelta0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *InstMapDelta_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
  }
  else
  {
    MR_Word InstMapping0_10 = ((MR_Word) ((MR_hl_field(1, InstMapDelta0_7, (MR_Integer) 0))));
    MR_Word InstMapping_11;

    mercury__map__map_foldl_5_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), TypeInfo_for_T_14, Pred_6, InstMapping0_10, &InstMapping_11, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstMapDelta_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_11));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word InstMap0_7,
  MR_Word * InstMap_8)
{
  hlds__instmap__instmap_delta_apply_sub_4_p_0(Must_5, Renaming_6, InstMap0_7, InstMap_8);
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OldInstMapping_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstMapping_10;
    MR_Word InstMappingAL_11;
    MR_Word Var_12;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), OldInstMapping_9, &InstMappingAL_11);
    Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    hlds__instmap__instmapping_apply_sub_loop_5_p_0(InstMappingAL_11, HeadVar__1_1, HeadVar__2_2, Var_12, &InstMapping_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_10));
    }
  }
}

static void MR_CALL 
hlds__instmap__instmapping_apply_sub_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapping_0_4,
  MR_Word * STATE_VARIABLE_InstMapping_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMapping_5 = STATE_VARIABLE_InstMapping_0_4;
    else
    {
      MR_Word Var0_11;
      MR_Word Inst_12;
      MR_Word VarInsts0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_InstMapping_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_4;

      Var0_11 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      Inst_12 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
      parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, HeadVar__3_3, Var0_11, &Var_17);
      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_17)), ((MR_Box) (Inst_12)), STATE_VARIABLE_InstMapping_0_4, &STATE_VARIABLE_InstMapping_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarInsts0_13;
      next_value_of_STATE_VARIABLE_InstMapping_0_4 = STATE_VARIABLE_InstMapping_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_4 = next_value_of_STATE_VARIABLE_InstMapping_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
  MR_Word VarTable_8,
  MR_Word NonLocals_9,
  MR_Word InstMap0_10,
  MR_Word Deltas_11,
  MR_Word * MergedDelta_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
  if ((InstMap0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MergedDelta_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
  }
  else
  {
    MR_Word InstMapping0_14 = ((MR_Word) ((MR_hl_field(1, InstMap0_10, (MR_Integer) 0))));

    if ((Deltas_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list");
        return;
      }
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, Deltas_11, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Deltas_11, (MR_Integer) 0))));

      if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *MergedDelta_12 = Var_52;
        *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
      }
      else
      {
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));

        if ((Var_53 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__instmap__merge_instmap_delta_8_p_0(VarTable_8, NonLocals_9, InstMap0_10, Var_52, Var_54, MergedDelta_12, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
        else
        {
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));

          if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word STATE_VARIABLE_ModuleInfo_41_41;
            MR_Word Delta12_50;

            hlds__instmap__merge_instmap_delta_8_p_0(VarTable_8, NonLocals_9, InstMap0_10, Var_52, Var_54, &Delta12_50, STATE_VARIABLE_ModuleInfo_0_30, &STATE_VARIABLE_ModuleInfo_41_41);
            hlds__instmap__merge_instmap_delta_8_p_0(VarTable_8, NonLocals_9, InstMap0_10, Delta12_50, Var_56, MergedDelta_12, STATE_VARIABLE_ModuleInfo_41_41, STATE_VARIABLE_ModuleInfo_31);
          }
          else
          {
            MR_Word VarsTypes_25;
            MR_Word ReachableInstMappings_26;
            MR_Word InstMappingsVars_57;
            MR_Word SetOfVars_58;
            MR_Word ListOfVars_59;
            MR_Word Var_60;

            Var_60 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__instmap__prepare_for_merge_instmap_deltas_loop_5_p_0(Deltas_11, Var_60, &InstMappingsVars_57, (MR_Word) ((MR_Unsigned) 0U), &ReachableInstMappings_26);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstMappingsVars_57, NonLocals_9, &SetOfVars_58);
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVars_58, &ListOfVars_59);
            hlds__instmap__pair_vars_with_their_types_3_p_0(VarTable_8, ListOfVars_59, &VarsTypes_25);
            if ((ReachableInstMappings_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *MergedDelta_12 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
            }
            else
            {
              MR_Word MergedInstMapping_29;

              hlds__instmap__merge_instmap_deltas_fixpoint_6_p_0(VarsTypes_25, InstMapping0_14, ReachableInstMappings_26, &MergedInstMapping_29, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MergedDelta_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MergedInstMapping_29));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_fixpoint_6_p_0(
  MR_Word VarsTypes_7,
  MR_Word InstMapping0_8,
  MR_Word Deltas_9,
  MR_Word * MergedDelta_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  while (MR_TRUE)
  {
    MR_Word MergedDeltas_12;
    MR_Word STATE_VARIABLE_ModuleInfo_19_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__instmap__merge_instmap_deltas_pass_7_p_0(VarsTypes_7, InstMapping0_8, Deltas_9, (MR_Word) ((MR_Unsigned) 0U), &MergedDeltas_12, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_19_19);
    if ((MergedDeltas_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmap_deltas_fixpoint\'/6", (MR_String) "empty instmap_delta list.");
        return;
      }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, MergedDeltas_12, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, MergedDeltas_12, (MR_Integer) 0))));

      if ((Var_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *MergedDelta_10 = Var_25;
        *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_19_19;
      }
      else
      {
        MR_Word next_value_of_Deltas_9 = MergedDeltas_12;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_16 = STATE_VARIABLE_ModuleInfo_19_19;

        // direct tailcall eliminated
        ;
        Deltas_9 = next_value_of_Deltas_9;
        STATE_VARIABLE_ModuleInfo_0_16 = next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_pass_7_p_0(
  MR_Word VarsTypes_8,
  MR_Word InstMapping0_9,
  MR_Word Deltas_10,
  MR_Word STATE_VARIABLE_MergedDeltas_0_22,
  MR_Word * STATE_VARIABLE_MergedDeltas_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Deltas_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MergedDeltas_23 = STATE_VARIABLE_MergedDeltas_0_22;
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, Deltas_10, (MR_Integer) 1))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Deltas_10, (MR_Integer) 0))));

      if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MergedDeltas_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_22));
        }
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      }
      else
      {
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 1))));
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 0))));

        if ((Var_69 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Delta12_15;
          MR_Word Var_30;

          Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
          hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Var_68, Var_70, Var_30, &Delta12_15, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MergedDeltas_23 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Delta12_15));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_22));
          }
        }
        else
        {
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
          MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 0))));

          if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Delta123_17;
            MR_Word Var_36;
            MR_Word STATE_VARIABLE_ModuleInfo_37_37;
            MR_Word Var_38;
            MR_Word Delta12_56;

            Var_36 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
            hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Var_68, Var_70, Var_36, &Delta12_56, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_37_37);
            Var_38 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
            hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Delta12_56, Var_72, Var_38, &Delta123_17, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MergedDeltas_23 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Delta123_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_22));
            }
          }
          else
          {
            MR_Word Delta4_18 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
            MR_Word MoreDeltas_19 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
            MR_Word Delta34_20;
            MR_Word Delta1234_21;
            MR_Word Var_44;
            MR_Word STATE_VARIABLE_ModuleInfo_45_45;
            MR_Word Var_46;
            MR_Word STATE_VARIABLE_ModuleInfo_47_47;
            MR_Word Var_48;
            MR_Word STATE_VARIABLE_ModuleInfo_49_49;
            MR_Word STATE_VARIABLE_MergedDeltas_50_50;
            MR_Word Delta12_59;
            MR_Word next_value_of_Deltas_10;
            MR_Word next_value_of_STATE_VARIABLE_MergedDeltas_0_22;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_24;

            Var_44 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
            hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Var_68, Var_70, Var_44, &Delta12_59, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_45_45);
            Var_46 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
            hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Var_72, Delta4_18, Var_46, &Delta34_20, STATE_VARIABLE_ModuleInfo_45_45, &STATE_VARIABLE_ModuleInfo_47_47);
            Var_48 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
            hlds__instmap__merge_instmapping_typed_vars_8_p_0(VarsTypes_8, InstMapping0_9, Delta12_59, Delta34_20, Var_48, &Delta1234_21, STATE_VARIABLE_ModuleInfo_47_47, &STATE_VARIABLE_ModuleInfo_49_49);
            {
              STATE_VARIABLE_MergedDeltas_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_MergedDeltas_50_50, 0) = ((MR_Box) (Delta1234_21));
              MR_hl_field(1, STATE_VARIABLE_MergedDeltas_50_50, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_22));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Deltas_10 = MoreDeltas_19;
            next_value_of_STATE_VARIABLE_MergedDeltas_0_22 = STATE_VARIABLE_MergedDeltas_50_50;
            next_value_of_STATE_VARIABLE_ModuleInfo_0_24 = STATE_VARIABLE_ModuleInfo_49_49;
            Deltas_10 = next_value_of_Deltas_10;
            STATE_VARIABLE_MergedDeltas_0_22 = next_value_of_STATE_VARIABLE_MergedDeltas_0_22;
            STATE_VARIABLE_ModuleInfo_0_24 = next_value_of_STATE_VARIABLE_ModuleInfo_0_24;
            continue;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__merge_instmapping_typed_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapping0_2,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      *STATE_VARIABLE_InstMapping_6 = STATE_VARIABLE_InstMapping_0_5;
    }
    else
    {
      MR_Word Var_18;
      MR_Word Type_19;
      MR_Word VarsTypes_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_InstMapping_31_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word InstA_34;
      MR_Word InstB_36;
      MR_Word InstInA_33;
      MR_Box conv0_InstInA_33;
      MR_Word InstInB_35;
      MR_Box conv2_InstInB_35;
      MR_Word InstAB_37;
      MR_Word STATE_VARIABLE_ModuleInfo_29_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;

      Var_18 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      Type_19 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_3, ((MR_Box) (Var_18)), &conv0_InstInA_33);
      if (succeeded)
      {
        InstInA_33 = ((MR_Word) (conv0_InstInA_33));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstA_34 = InstInA_33;
      else
      {
        MR_Word VarInst_62;
        MR_Box conv1_VarInst_62;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping0_2, ((MR_Box) (Var_18)), &conv1_VarInst_62);
        if (succeeded)
        {
          VarInst_62 = ((MR_Word) (conv1_VarInst_62));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          InstA_34 = VarInst_62;
        else
          InstA_34 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_4, ((MR_Box) (Var_18)), &conv2_InstInB_35);
      if (succeeded)
      {
        InstInB_35 = ((MR_Word) (conv2_InstInB_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstB_36 = InstInB_35;
      else
      {
        MR_Word VarInst_65;
        MR_Box conv3_VarInst_65;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping0_2, ((MR_Box) (Var_18)), &conv3_VarInst_65);
        if (succeeded)
        {
          VarInst_65 = ((MR_Word) (conv3_VarInst_65));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          InstB_36 = VarInst_65;
        else
          InstB_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_19, InstA_34, InstB_36, &InstAB_37, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_29_41);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_29_41;
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_18)), ((MR_Box) (InstAB_37)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_31_31);
      }
      else
      {
        MR_Integer VarInt_39;
        MR_String Msg_40;
        MR_String Var_54;

        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, &VarInt_39);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), VarInt_39, &Var_54);
        Msg_40 = mercury__string__f_43_43_2_f_0((MR_String) "error merging var ", Var_54);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_var\'/9", Msg_40);
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsTypes_20;
      next_value_of_STATE_VARIABLE_InstMapping_0_5 = STATE_VARIABLE_InstMapping_31_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_5 = next_value_of_STATE_VARIABLE_InstMapping_0_5;
      STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__pair_vars_with_their_types_3_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word VarsTypes_9;
    MR_Word Var_10;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Var_6, &Type_8);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_6));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (Type_8));
    }
    hlds__instmap__pair_vars_with_their_types_3_p_0(VarTable_1, Vars_7, &VarsTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarsTypes_9));
    }
  }
}

static void MR_CALL 
hlds__instmap__prepare_for_merge_instmap_deltas_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * STATE_VARIABLE_Vars_3,
  MR_Word STATE_VARIABLE_InstMappings_0_4,
  MR_Word * STATE_VARIABLE_InstMappings_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InstMappings_5 = STATE_VARIABLE_InstMappings_0_4;
      *STATE_VARIABLE_Vars_3 = STATE_VARIABLE_Vars_0_2;
    }
    else
    {
      MR_Word InstMapDelta_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstMapDeltas_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vars_23_23;
      MR_Word STATE_VARIABLE_InstMappings_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMappings_0_4;

      if ((InstMapDelta_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_Vars_23_23 = STATE_VARIABLE_Vars_0_2;
        STATE_VARIABLE_InstMappings_24_24 = STATE_VARIABLE_InstMappings_0_4;
      }
      else
      {
        MR_Word InstMapping_16 = ((MR_Word) ((MR_hl_field(1, InstMapDelta_12, (MR_Integer) 0))));
        MR_Word InstMappingVars_17;
        MR_Word SetOfInstMappingVars_18;

        mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_16, &InstMappingVars_17);
        parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstMappingVars_17, &SetOfInstMappingVars_18);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfInstMappingVars_18, STATE_VARIABLE_Vars_0_2, &STATE_VARIABLE_Vars_23_23);
        {
          STATE_VARIABLE_InstMappings_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_InstMappings_24_24, 0) = ((MR_Box) (InstMapping_16));
          MR_hl_field(1, STATE_VARIABLE_InstMappings_24_24, 1) = ((MR_Box) (STATE_VARIABLE_InstMappings_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstMapDeltas_13;
      next_value_of_STATE_VARIABLE_Vars_0_2 = STATE_VARIABLE_Vars_23_23;
      next_value_of_STATE_VARIABLE_InstMappings_0_4 = STATE_VARIABLE_InstMappings_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Vars_0_2 = next_value_of_STATE_VARIABLE_Vars_0_2;
      STATE_VARIABLE_InstMappings_0_4 = next_value_of_STATE_VARIABLE_InstMappings_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
  MR_Word VarTable_9,
  MR_Word NonLocals_10,
  MR_Word InstMap0_11,
  MR_Word InstMapDeltaA_12,
  MR_Word InstMapDeltaB_13,
  MR_Word * InstMapDelta_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  if ((InstMap0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *InstMapDelta_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
  }
  else
  {
    MR_Word InstMapping0_16 = ((MR_Word) ((MR_hl_field(1, InstMap0_11, (MR_Integer) 0))));

    if ((InstMapDeltaA_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InstMapDelta_14 = InstMapDeltaB_13;
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
    }
    else
    {
      MR_Word InstMappingA_17 = ((MR_Word) ((MR_hl_field(1, InstMapDeltaA_12, (MR_Integer) 0))));

      if ((InstMapDeltaB_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *InstMapDelta_14 = InstMapDeltaA_12;
        *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      }
      else
      {
        MR_Word InstMappingB_18 = ((MR_Word) ((MR_hl_field(1, InstMapDeltaB_13, (MR_Integer) 0))));
        MR_Word InstMapping_19;
        MR_Word VarsInA_22;
        MR_Word VarsInB_23;
        MR_Word SetOfVarsInA_24;
        MR_Word SetOfVarsInB_25;
        MR_Word SetOfVars0_26;
        MR_Word SetOfVars_27;
        MR_Word ListOfVars_28;
        MR_Word Var_29;

        mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_17, &VarsInA_22);
        mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_18, &VarsInB_23);
        parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsInA_22, &SetOfVarsInA_24);
        parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsInB_23, &SetOfVarsInB_25);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVarsInA_24, SetOfVarsInB_25, &SetOfVars0_26);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVars0_26, NonLocals_10, &SetOfVars_27);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SetOfVars_27, &ListOfVars_28);
        Var_29 = mercury__map__init_0_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
        hlds__instmap__merge_instmapping_delta_vars_9_p_0(VarTable_9, ListOfVars_28, InstMapping0_16, InstMappingA_17, InstMappingB_18, Var_29, &InstMapping_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *InstMapDelta_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_19));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_vars_9_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap_3,
  MR_Word InstMappingA_4,
  MR_Word InstMappingB_5,
  MR_Word STATE_VARIABLE_InstMapping_0_6,
  MR_Word * STATE_VARIABLE_InstMapping_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_InstMapping_7 = STATE_VARIABLE_InstMapping_0_6;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word VarType_28;
      MR_Word STATE_VARIABLE_InstMapping_33_33;
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word InstA_36;
      MR_Word InstB_38;
      MR_Word InstInA_35;
      MR_Box conv0_InstInA_35;
      MR_Word InstInB_37;
      MR_Box conv2_InstInB_37;
      MR_Word InstAB_39;
      MR_Word STATE_VARIABLE_ModuleInfo_29_43;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Var_21, &VarType_28);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_4, ((MR_Box) (Var_21)), &conv0_InstInA_35);
      if (succeeded)
      {
        InstInA_35 = ((MR_Word) (conv0_InstInA_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstA_36 = InstInA_35;
      else
      {
        MR_Word VarInst_64;
        MR_Box conv1_VarInst_64;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMap_3, ((MR_Box) (Var_21)), &conv1_VarInst_64);
        if (succeeded)
        {
          VarInst_64 = ((MR_Word) (conv1_VarInst_64));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          InstA_36 = VarInst_64;
        else
          InstA_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_5, ((MR_Box) (Var_21)), &conv2_InstInB_37);
      if (succeeded)
      {
        InstInB_37 = ((MR_Word) (conv2_InstInB_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstB_38 = InstInB_37;
      else
      {
        MR_Word VarInst_67;
        MR_Box conv3_VarInst_67;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMap_3, ((MR_Box) (Var_21)), &conv3_VarInst_67);
        if (succeeded)
        {
          VarInst_67 = ((MR_Word) (conv3_VarInst_67));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          InstB_38 = VarInst_67;
        else
          InstB_38 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(VarType_28, InstA_36, InstB_38, &InstAB_39, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_29_43);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_34_34 = STATE_VARIABLE_ModuleInfo_29_43;
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_21)), ((MR_Box) (InstAB_39)), STATE_VARIABLE_InstMapping_0_6, &STATE_VARIABLE_InstMapping_33_33);
      }
      else
      {
        MR_Integer VarInt_41;
        MR_String Msg_42;
        MR_String Var_56;

        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_21, &VarInt_41);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__instmap_scalar_common_3[0]), VarInt_41, &Var_56);
        Msg_42 = mercury__string__f_43_43_2_f_0((MR_String) "error merging var ", Var_56);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_var\'/9", Msg_42);
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_22;
      next_value_of_STATE_VARIABLE_InstMapping_0_6 = STATE_VARIABLE_InstMapping_33_33;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_34_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMapping_0_6 = next_value_of_STATE_VARIABLE_InstMapping_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
  MR_Word NonLocals_6,
  MR_Word ArmInstMaps_7,
  MR_Word MergeContext_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30)
{
  MR_bool succeeded;
  MR_Word InstMap0_10;
  MR_Word ModuleInfo0_11;
  MR_Word ReachableInstMappingList_12;
  MR_Word InstMap_28;
  MR_Word STATE_VARIABLE_ModeInfo_32_32;
  MR_Word InstMapping0_13;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &InstMap0_10);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &ModuleInfo0_11);
  hlds__instmap__get_reachable_instmaps_2_p_0(ArmInstMaps_7, &ReachableInstMappingList_12);
  succeeded = (ReachableInstMappingList_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (InstMap0_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      InstMapping0_13 = ((MR_Word) ((MR_hl_field(1, InstMap0_10, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word NonLocalsList_16;
    MR_Word VarTable_17;
    MR_Word InstMapping_18;
    MR_Word ModuleInfo_19;
    MR_Word Errors_20;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_6, &NonLocalsList_16);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &VarTable_17);
    hlds__instmap__merge_insts_of_vars_8_p_0(NonLocalsList_16, ArmInstMaps_7, VarTable_17, InstMapping0_13, &InstMapping_18, ModuleInfo0_11, &ModuleInfo_19, &Errors_20);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_19, STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_31_31);
    if ((Errors_20 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ModeInfo_32_32 = STATE_VARIABLE_ModeInfo_31_31;
    else
    {
      MR_Word HeadError_21 = ((MR_Word) ((MR_hl_field(1, Errors_20, (MR_Integer) 0))));
      MR_Word TailErrors_22 = ((MR_Word) ((MR_hl_field(1, Errors_20, (MR_Integer) 1))));
      MR_Word OoMErrors_23;
      MR_Word Var_24;
      MR_Word WaitingVars_26;
      MR_Word ModeError_27;

      {
        OoMErrors_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMErrors_23, 0) = ((MR_Box) (HeadError_21));
        MR_hl_field(0, OoMErrors_23, 1) = ((MR_Box) (TailErrors_22));
      }
      Var_24 = ((MR_Word) ((MR_hl_field(0, HeadError_21, (MR_Integer) 0))));
      WaitingVars_26 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24);
      {
        ModeError_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, ModeError_27, 1) = (MR_Box) ((MR_Unsigned) (MergeContext_8));
        MR_hl_field(3, ModeError_27, 2) = ((MR_Box) (OoMErrors_23));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, ModeError_27, STATE_VARIABLE_ModeInfo_31_31, &STATE_VARIABLE_ModeInfo_32_32);
    }
    {
      InstMap_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstMap_28, 0) = ((MR_Box) (InstMapping_18));
    }
  }
  else
  {
    InstMap_28 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModeInfo_32_32 = STATE_VARIABLE_ModeInfo_0_29;
  }
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_28, STATE_VARIABLE_ModeInfo_32_32, STATE_VARIABLE_ModeInfo_30);
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Context_4;

  hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Context_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_Context_4));
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArmInstMaps_2,
  MR_Word VarTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarType_24;
    MR_Word VarInsts_25;
    MR_Word HeadVarInst_26;
    MR_Word TailVarInsts_27;
    MR_Word MaybeInst_28;
    MR_Word STATE_VARIABLE_InstMapping_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word STATE_VARIABLE_ErrorList_39_39;
    MR_Word Var_40;
    MR_Box conv1_HeadVarInst_26;

    hlds__instmap__merge_insts_of_vars_8_p_0(Vars_18, ArmInstMaps_2, VarTable_3, HeadVar__4_4, &STATE_VARIABLE_InstMapping_37_37, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_38_38, &STATE_VARIABLE_ErrorList_39_39);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_17, &VarType_24);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&hlds__instmap_scalar_common_7[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (Var_17));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_40, ArmInstMaps_2, &VarInsts_25);
    mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), VarInsts_25, &conv1_HeadVarInst_26, &TailVarInsts_27);
    HeadVarInst_26 = ((MR_Word) (conv1_HeadVarInst_26));
    check_hlds__inst_merge__insts_merge_6_p_0(VarType_24, HeadVarInst_26, TailVarInsts_27, &MaybeInst_28, STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_ModuleInfo_7);
    if ((MaybeInst_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Contexts_29;
      MR_Word ContextsInsts_30;
      MR_Word Var_44;

      mercury__list__map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&hlds__instmap_scalar_common_2[3]), ArmInstMaps_2, &Contexts_29);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Contexts_29, VarInsts_25, &ContextsInsts_30);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_17));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (ContextsInsts_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorList_39_39));
      }
      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Unsigned) 4U)), STATE_VARIABLE_InstMapping_37_37, HeadVar__5_5);
    }
    else
    {
      MR_Word Inst_31 = ((MR_Word) ((MR_hl_field(1, MaybeInst_28, (MR_Integer) 0))));

      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_17)), ((MR_Box) (Inst_31)), STATE_VARIABLE_InstMapping_37_37, HeadVar__5_5);
      *HeadVar__8_8 = STATE_VARIABLE_ErrorList_39_39;
    }
  }
}

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArmInstMap_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArmInstMaps_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstMap_7 = ((MR_Word) ((MR_hl_field(0, ArmInstMap_3, (MR_Integer) 1))));

      if ((InstMap_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = ArmInstMaps_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word InstMapping_8 = ((MR_Word) ((MR_hl_field(1, InstMap_7, (MR_Integer) 0))));
        MR_Word ReachablesTail_9;

        hlds__instmap__get_reachable_instmaps_2_p_0(ArmInstMaps_4, &ReachablesTail_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (ReachablesTail_9));
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word InstMap_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstMaps_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArmInfo_18;
      MR_Word ArmInfos_19;
      MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 2))));
      MR_Word GoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Goal_22, (MR_Integer) 1))));
      MR_Word Context_25;

      Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_24);
      {
        ArmInfo_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArmInfo_18, 0) = ((MR_Box) (Context_25));
        MR_hl_field(0, ArmInfo_18, 1) = ((MR_Box) (InstMap_16));
      }
      hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Var_26, InstMaps_17, &ArmInfos_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArmInfo_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArmInfos_19));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word InstMap_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstMaps_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArmInfo_18;
      MR_Word ArmInfos_19;
      MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
      MR_Word Context_22;

      Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
      {
        ArmInfo_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArmInfo_18, 0) = ((MR_Box) (Context_22));
        MR_hl_field(0, ArmInfo_18, 1) = ((MR_Box) (InstMap_16));
      }
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_23, InstMaps_17, &ArmInfos_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArmInfo_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArmInfos_19));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
  MR_Word InstMap1_5,
  MR_Word InstMap2_6,
  MR_Word How_7,
  MR_Word * InstMap_8)
{
  MR_bool succeeded;

  if ((InstMap1_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMap_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, InstMap1_5, (MR_Integer) 0))));

    if ((InstMap2_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *InstMap_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstMappingDelta2_11 = ((MR_Word) ((MR_hl_field(1, InstMap2_6, (MR_Integer) 0))));
      MR_Word InstMappingDelta_12;

      switch (How_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__map__overlay_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
          break;
        case (MR_Integer) 1:
          mercury__map__overlay_large_map_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Count1_13;
            MR_Integer Count2_14;

            mercury__map__count_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_25, &Count1_13);
            mercury__map__count_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingDelta2_11, &Count2_14);
            succeeded = (Count1_13 >= Count2_14);
            if (succeeded)
              mercury__map__overlay_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
            else
              mercury__map__overlay_large_map_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstMap_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMappingDelta_12));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstMappingDelta_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstMapping_8;

      mercury__map__overlay_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_11, InstMappingDelta_6, &InstMapping_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_8));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
  MR_Word InstMapA_5,
  MR_Word InstMapB_6,
  MR_Word NonLocals_7,
  MR_Word * InstMapDelta_8)
{
  if ((InstMapA_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMapDelta_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, InstMapA_5, (MR_Integer) 0))));

    if ((InstMapB_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *InstMapDelta_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstMappingB_11 = ((MR_Word) ((MR_hl_field(1, InstMapB_6, (MR_Integer) 0))));
      MR_Word NonLocalsList_12;
      MR_Word InstMappingDeltaRevAL_13;
      MR_Word InstMappingDelta_14;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_7, &NonLocalsList_12);
      hlds__instmap__compute_instmap_delta_for_vars_5_p_0(NonLocalsList_12, Var_19, InstMappingB_11, (MR_Word) ((MR_Unsigned) 0U), &InstMappingDeltaRevAL_13);
      mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingDeltaRevAL_13, &InstMappingDelta_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstMapDelta_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMappingDelta_14));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_2,
  MR_Word InstMappingB_3,
  MR_Word STATE_VARIABLE_InstMappingDeltaRevAL_0_4,
  MR_Word * STATE_VARIABLE_InstMappingDeltaRevAL_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMappingDeltaRevAL_5 = STATE_VARIABLE_InstMappingDeltaRevAL_0_4;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstA_16;
      MR_Word InstB_17;
      MR_Word STATE_VARIABLE_InstMappingDeltaRevAL_20_20;
      MR_Word VarInst_23;
      MR_Box conv0_VarInst_23;
      MR_Word VarInst_26;
      MR_Box conv1_VarInst_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMappingDeltaRevAL_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingA_2, ((MR_Box) (Var_11)), &conv0_VarInst_23);
      if (succeeded)
      {
        VarInst_23 = ((MR_Word) (conv0_VarInst_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstA_16 = VarInst_23;
      else
        InstA_16 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingB_3, ((MR_Box) (Var_11)), &conv1_VarInst_26);
      if (succeeded)
      {
        VarInst_26 = ((MR_Word) (conv1_VarInst_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstB_17 = VarInst_26;
      else
        InstB_17 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_16, InstB_17);
      if (succeeded)
        STATE_VARIABLE_InstMappingDeltaRevAL_20_20 = STATE_VARIABLE_InstMappingDeltaRevAL_0_4;
      else
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (Var_11));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (InstB_17));
        }
        {
          STATE_VARIABLE_InstMappingDeltaRevAL_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_InstMappingDeltaRevAL_20_20, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, STATE_VARIABLE_InstMappingDeltaRevAL_20_20, 1) = ((MR_Box) (STATE_VARIABLE_InstMappingDeltaRevAL_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_12;
      next_value_of_STATE_VARIABLE_InstMappingDeltaRevAL_0_4 = STATE_VARIABLE_InstMappingDeltaRevAL_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMappingDeltaRevAL_0_4 = next_value_of_STATE_VARIABLE_InstMappingDeltaRevAL_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__pre_lambda_update_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarsModes_6,
  MR_Word InstMap0_7,
  MR_Word * InstMap_8)
{
  MR_Word VarsInitialInsts_9;
  MR_Word InstMapping_11;

  hlds__instmap__var_modes_get_inital_insts_3_p_0(ModuleInfo_5, VarsModes_6, &VarsInitialInsts_9);
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), VarsInitialInsts_9, &InstMapping_11);
  if ((InstMap0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMap_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMappingDelta_16 = ((MR_Word) ((MR_hl_field(1, InstMap0_7, (MR_Integer) 0))));
    MR_Word InstMapping_18;

    mercury__map__overlay_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_11, InstMappingDelta_16, &InstMapping_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstMap_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_18));
    }
  }
}

static void MR_CALL 
hlds__instmap__var_modes_get_inital_insts_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6;
    MR_Word Mode_7;
    MR_Word VarsModes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word InitialInst_9;
    MR_Word VarInitialInsts_10;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_13;
    MR_Word _FinalInst_11;

    Var_6 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
    Mode_7 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_7, &InitialInst_9, &_FinalInst_11);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_6));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (InitialInst_9));
    }
    hlds__instmap__var_modes_get_inital_insts_3_p_0(ModuleInfo_1, VarsModes_8, &VarInitialInsts_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarInitialInsts_10));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
  MR_Word Var_10,
  MR_Word Type_11,
  MR_Word MainConsId_12,
  MR_Word OtherConsIds_13,
  MR_Word InstMap_14,
  MR_Word STATE_VARIABLE_InstMapDelta_0_22,
  MR_Word * STATE_VARIABLE_InstMapDelta_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_InstMapDelta_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_InstMapDelta_23 = STATE_VARIABLE_InstMapDelta_0_22;
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word InstMappingDelta0_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMapDelta_0_22, (MR_Integer) 0))));
    MR_Word OldInst_18;
    MR_Word NewInst1_20;
    MR_Word NewInst_21;
    MR_Word MainFinalInst_29;
    MR_Word OtherFinalInsts_30;
    MR_Word MaybeMergedInst_31;
    MR_Word STATE_VARIABLE_ModuleInfo_19_32;
    MR_Word STATE_VARIABLE_ModuleInfo_20_33;
    MR_Integer Arity_37;
    MR_Word ArgLives_38;
    MR_Word ArgInsts_39;
    MR_Word NewInst0_19;
    MR_Box conv0_NewInst0_19;
    MR_Word DuCtor_36;
    MR_Word STATE_VARIABLE_Inst_24_45;
    MR_Word STATE_VARIABLE_ModuleInfo_25_46;
    MR_Word _Det_40;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_14, Var_10, &OldInst_18);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingDelta0_17, ((MR_Box) (Var_10)), &conv0_NewInst0_19);
    if (succeeded)
    {
      NewInst0_19 = ((MR_Word) (conv0_NewInst0_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      NewInst1_20 = NewInst0_19;
    else
      NewInst1_20 = OldInst_18;
    succeeded = ((MR_tag((MR_Word) MainConsId_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      DuCtor_36 = (MR_Word) (MR_body((MR_Word) (MainConsId_12), (MR_Integer) 1));
      Arity_37 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_24, Type_11, DuCtor_36);
    }
    else
      Arity_37 = parse_tree__prog_util__cons_id_arity_1_f_0(MainConsId_12);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0), Arity_37, ((MR_Box) ((MR_Integer) 1)), &ArgLives_38);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_37, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_39);
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Type_11, (MR_Integer) 1, (MR_Integer) 0, NewInst1_20, MainConsId_12, ArgInsts_39, ArgLives_38, &STATE_VARIABLE_Inst_24_45, &_Det_40, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_25_46);
    if (succeeded)
    {
      STATE_VARIABLE_ModuleInfo_19_32 = STATE_VARIABLE_ModuleInfo_25_46;
      MainFinalInst_29 = STATE_VARIABLE_Inst_24_45;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
        return;
      }
    hlds__instmap__bind_inst_to_functors_others_6_p_0(Type_11, OtherConsIds_13, NewInst1_20, &OtherFinalInsts_30, STATE_VARIABLE_ModuleInfo_19_32, &STATE_VARIABLE_ModuleInfo_20_33);
    check_hlds__inst_merge__insts_merge_6_p_0(Type_11, MainFinalInst_29, OtherFinalInsts_30, &MaybeMergedInst_31, STATE_VARIABLE_ModuleInfo_20_33, STATE_VARIABLE_ModuleInfo_25);
    if ((MaybeMergedInst_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
        return;
      }
    else
      NewInst_21 = ((MR_Word) ((MR_hl_field(1, MaybeMergedInst_31, (MR_Integer) 0))));
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(NewInst_21, OldInst_18);
    if (succeeded)
      *STATE_VARIABLE_InstMapDelta_23 = STATE_VARIABLE_InstMapDelta_0_22;
    else
    {
      MR_Word InstMapping0_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMapDelta_0_22, (MR_Integer) 0))));

      succeeded = (NewInst_21 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        *STATE_VARIABLE_InstMapDelta_23 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word InstMapping_57;

        mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_10)), ((MR_Box) (NewInst_21)), InstMapping0_55, &InstMapping_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_InstMapDelta_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_57));
        }
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
  MR_Word Var_9,
  MR_Word Type_10,
  MR_Word ConsId_11,
  MR_Word InstMap_12,
  MR_Word STATE_VARIABLE_InstMapDelta_0_20,
  MR_Word * STATE_VARIABLE_InstMapDelta_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_InstMapDelta_0_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_InstMapDelta_21 = STATE_VARIABLE_InstMapDelta_0_20;
    *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
  }
  else
  {
    MR_Word InstMappingDelta0_15 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMapDelta_0_20, (MR_Integer) 0))));
    MR_Word OldInst_16;
    MR_Word NewInst1_18;
    MR_Word NewInst_19;
    MR_Integer Arity_28;
    MR_Word ArgLives_29;
    MR_Word ArgInsts_30;
    MR_Word NewInst0_17;
    MR_Box conv0_NewInst0_17;
    MR_Word DuCtor_27;
    MR_Word STATE_VARIABLE_Inst_24_36;
    MR_Word STATE_VARIABLE_ModuleInfo_25_37;
    MR_Word _Det_31;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_12, Var_9, &OldInst_16);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMappingDelta0_15, ((MR_Box) (Var_9)), &conv0_NewInst0_17);
    if (succeeded)
    {
      NewInst0_17 = ((MR_Word) (conv0_NewInst0_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      NewInst1_18 = NewInst0_17;
    else
      NewInst1_18 = OldInst_16;
    succeeded = ((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      DuCtor_27 = (MR_Word) (MR_body((MR_Word) (ConsId_11), (MR_Integer) 1));
      Arity_28 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_22, Type_10, DuCtor_27);
    }
    else
      Arity_28 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_11);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0), Arity_28, ((MR_Box) ((MR_Integer) 1)), &ArgLives_29);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_28, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_30);
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Type_10, (MR_Integer) 1, (MR_Integer) 0, NewInst1_18, ConsId_11, ArgInsts_30, ArgLives_29, &STATE_VARIABLE_Inst_24_36, &_Det_31, STATE_VARIABLE_ModuleInfo_0_22, &STATE_VARIABLE_ModuleInfo_25_37);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_25_37;
      NewInst_19 = STATE_VARIABLE_Inst_24_36;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
        return;
      }
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(NewInst_19, OldInst_16);
    if (succeeded)
      *STATE_VARIABLE_InstMapDelta_21 = STATE_VARIABLE_InstMapDelta_0_20;
    else
    {
      MR_Word InstMapping0_46 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMapDelta_0_20, (MR_Integer) 0))));

      succeeded = (NewInst_19 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        *STATE_VARIABLE_InstMapDelta_21 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word InstMapping_48;

        mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_9)), ((MR_Box) (NewInst_19)), InstMapping0_46, &InstMapping_48);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_InstMapDelta_21 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_48));
        }
      }
    }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
  MR_Word Var_9,
  MR_Word Type_10,
  MR_Word MainConsId_11,
  MR_Word OtherConsIds_12,
  MR_Word STATE_VARIABLE_InstMap_0_17,
  MR_Word * STATE_VARIABLE_InstMap_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  MR_bool succeeded;
  MR_Word Inst0_15;
  MR_Word Inst_16;
  MR_Word MainFinalInst_21;
  MR_Word OtherFinalInsts_22;
  MR_Word MaybeMergedInst_23;
  MR_Word STATE_VARIABLE_ModuleInfo_19_24;
  MR_Word STATE_VARIABLE_ModuleInfo_20_25;
  MR_Integer Arity_29;
  MR_Word ArgLives_30;
  MR_Word ArgInsts_31;
  MR_Word DuCtor_28;
  MR_Word STATE_VARIABLE_Inst_24_37;
  MR_Word STATE_VARIABLE_ModuleInfo_25_38;
  MR_Word _Det_32;

  hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_17, Var_9, &Inst0_15);
  succeeded = ((MR_tag((MR_Word) MainConsId_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_28 = (MR_Word) (MR_body((MR_Word) (MainConsId_11), (MR_Integer) 1));
    Arity_29 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_19, Type_10, DuCtor_28);
  }
  else
    Arity_29 = parse_tree__prog_util__cons_id_arity_1_f_0(MainConsId_11);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0), Arity_29, ((MR_Box) ((MR_Integer) 1)), &ArgLives_30);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_29, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_31);
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Type_10, (MR_Integer) 1, (MR_Integer) 0, Inst0_15, MainConsId_11, ArgInsts_31, ArgLives_30, &STATE_VARIABLE_Inst_24_37, &_Det_32, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_25_38);
  if (succeeded)
  {
    STATE_VARIABLE_ModuleInfo_19_24 = STATE_VARIABLE_ModuleInfo_25_38;
    MainFinalInst_21 = STATE_VARIABLE_Inst_24_37;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
      return;
    }
  hlds__instmap__bind_inst_to_functors_others_6_p_0(Type_10, OtherConsIds_12, Inst0_15, &OtherFinalInsts_22, STATE_VARIABLE_ModuleInfo_19_24, &STATE_VARIABLE_ModuleInfo_20_25);
  check_hlds__inst_merge__insts_merge_6_p_0(Type_10, MainFinalInst_21, OtherFinalInsts_22, &MaybeMergedInst_23, STATE_VARIABLE_ModuleInfo_20_25, STATE_VARIABLE_ModuleInfo_20);
  if ((MaybeMergedInst_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
      return;
    }
  else
    Inst_16 = ((MR_Word) ((MR_hl_field(1, MaybeMergedInst_23, (MR_Integer) 0))));
  if ((STATE_VARIABLE_InstMap_0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMap_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_47 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0))));
    MR_Word InstMapping_48;

    mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_9)), ((MR_Box) (Inst_16)), InstMapping0_47, &InstMapping_48);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_48));
    }
  }
}

static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
  }
  else
  {
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ConsIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word FinalInst_16;
    MR_Word FinalInsts_17;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Integer Arity_23;
    MR_Word ArgLives_24;
    MR_Word ArgInsts_25;
    MR_Word DuCtor_22;
    MR_Word STATE_VARIABLE_Inst_24_31;
    MR_Word STATE_VARIABLE_ModuleInfo_25_32;
    MR_Word _Det_26;

    succeeded = ((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      DuCtor_22 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 1));
      Arity_23 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_5, HeadVar__1_1, DuCtor_22);
    }
    else
      Arity_23 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_13);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0), Arity_23, ((MR_Box) ((MR_Integer) 1)), &ArgLives_24);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_23, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_25);
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(HeadVar__1_1, (MR_Integer) 1, (MR_Integer) 0, HeadVar__3_3, ConsId_13, ArgInsts_25, ArgLives_24, &STATE_VARIABLE_Inst_24_31, &_Det_26, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_25_32);
    if (succeeded)
    {
      STATE_VARIABLE_ModuleInfo_21_21 = STATE_VARIABLE_ModuleInfo_25_32;
      FinalInst_16 = STATE_VARIABLE_Inst_24_31;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
        return;
      }
    hlds__instmap__bind_inst_to_functors_others_6_p_0(HeadVar__1_1, ConsIds_14, HeadVar__3_3, &FinalInsts_17, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FinalInst_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (FinalInsts_17));
    }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
  MR_Word Var_8,
  MR_Word Type_9,
  MR_Word ConsId_10,
  MR_Word STATE_VARIABLE_InstMap_0_15,
  MR_Word * STATE_VARIABLE_InstMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_bool succeeded;
  MR_Word Inst0_13;
  MR_Word Inst_14;
  MR_Integer Arity_20;
  MR_Word ArgLives_21;
  MR_Word ArgInsts_22;
  MR_Word DuCtor_19;
  MR_Word STATE_VARIABLE_Inst_24_28;
  MR_Word STATE_VARIABLE_ModuleInfo_25_29;
  MR_Word _Det_23;

  hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_15, Var_8, &Inst0_13);
  succeeded = ((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_19 = (MR_Word) (MR_body((MR_Word) (ConsId_10), (MR_Integer) 1));
    Arity_20 = check_hlds__type_util__du_ctor_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_17, Type_9, DuCtor_19);
  }
  else
    Arity_20 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_10);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0), Arity_20, ((MR_Box) ((MR_Integer) 1)), &ArgLives_21);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_20, ((MR_Box) ((MR_Unsigned) 0U)), &ArgInsts_22);
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Type_9, (MR_Integer) 1, (MR_Integer) 0, Inst0_13, ConsId_10, ArgInsts_22, ArgLives_21, &STATE_VARIABLE_Inst_24_28, &_Det_23, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_25_29);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_25_29;
    Inst_14 = STATE_VARIABLE_Inst_24_28;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
      return;
    }
  if ((STATE_VARIABLE_InstMap_0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMap_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_38 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0))));
    MR_Word InstMapping_39;

    mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_8)), ((MR_Box) (Inst_14)), InstMapping0_38, &InstMapping_39);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_39));
    }
  }
}

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
  MR_Word Vars_3)
{
  MR_Word InstMapDelta_4;
  MR_Word VarsAndGround_5;
  MR_Word InstMapping_9;

  VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&hlds__instmap_scalar_common_2[0]), (MR_Word) (&hlds__instmap_scalar_common_2[2]), Vars_3);
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), VarsAndGround_5, &InstMapping_9);
  {
    InstMapDelta_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstMapDelta_4, 0) = ((MR_Box) (InstMapping_9));
  }
  return InstMapDelta_4;
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
  MR_Word Var_3)
{
  MR_Word InstMapDelta_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word InstMapping_11;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (MR_mkword(1, &hlds__instmap_scalar_common_1[2])));
  }
  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (Var_6));
    MR_hl_field(1, Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_5, &InstMapping_11);
  {
    InstMapDelta_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstMapDelta_4, 0) = ((MR_Box) (InstMapping_11));
  }
  return InstMapDelta_4;
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
{
  MR_Word InstMapDelta_2;
  MR_Word InstMapping_4;

  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) ((MR_Unsigned) 0U), &InstMapping_4);
  {
    InstMapDelta_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstMapDelta_2, 0) = ((MR_Box) (InstMapping_4));
  }
  return InstMapDelta_2;
}

void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ChangedVars_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_2);
  else
  {
    MR_Word InstMapping_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ChangedVarsList_6;

    mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_4, &ChangedVarsList_6);
    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVarsList_6, ChangedVars_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMapA_8,
  MR_Word InstMapB_9,
  MR_Word * ChangedVars_10)
{
  if ((InstMapB_9 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_10);
  else
  {
    MR_Word VarsB_11;
    MR_Word InstMapping_12 = ((MR_Word) ((MR_hl_field(1, InstMapB_9, (MR_Integer) 0))));

    mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_12, &VarsB_11);
    hlds__instmap__instmap_changed_vars_loop_6_p_0(ModuleInfo_6, VarTable_7, VarsB_11, InstMapA_8, InstMapB_9, ChangedVars_10);
  }
}

static void MR_CALL 
hlds__instmap__instmap_changed_vars_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * ChangedVars_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_6);
  else
  {
    MR_Word VarB_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word VarBs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ChangedVars0_19;
    MR_Word InitialInst_20;
    MR_Word FinalInst_21;
    MR_Word Type_22;

    hlds__instmap__instmap_changed_vars_loop_6_p_0(HeadVar__1_1, HeadVar__2_2, VarBs_15, HeadVar__4_4, HeadVar__5_5, &ChangedVars0_19);
    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__4_4, VarB_14, &InitialInst_20);
    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__5_5, VarB_14, &FinalInst_21);
    parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, VarB_14, &Type_22);
    succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(HeadVar__1_1, Type_22, InitialInst_20, FinalInst_21);
    if (succeeded)
      *ChangedVars_6 = ChangedVars0_19;
    else
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarB_14, ChangedVars0_19, ChangedVars_6);
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDelta_9,
  MR_Word Vars_10)
{
  MR_bool succeeded;

  if ((InstMapDelta_9 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word InstMapDeltaMap_11 = ((MR_Word) ((MR_hl_field(1, InstMapDelta_9, (MR_Integer) 0))));
    MR_Word Test_12;

    {
      Test_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[1]));
      MR_hl_field(0, Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
      MR_hl_field(0, Test_12, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Test_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(0, Test_12, 4) = ((MR_Box) (VarTable_7));
      MR_hl_field(0, Test_12, 5) = ((MR_Box) (InstMap0_8));
      MR_hl_field(0, Test_12, 6) = ((MR_Box) (InstMapDeltaMap_11));
    }
    succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Test_12, Vars_10);
  }
  return succeeded;
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BoundVars_11;

  hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_BoundVars_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_BoundVars_11));
}

void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word * BoundVars_6)
{
  if ((InstMap_5 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundVars_6);
  else
  {
    MR_Word InstMapping_7 = ((MR_Word) ((MR_hl_field(1, InstMap_5, (MR_Integer) 0))));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv1_BoundVars_6;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[0]));
      MR_hl_field(0, Var_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
      MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_4));
    }
    Var_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__instmap_scalar_common_1[1]), Var_8, InstMapping_7, ((MR_Box) (Var_9)), &conv1_BoundVars_6);
    *BoundVars_6 = ((MR_Word) (conv1_BoundVars_6));
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap_6,
  MR_Word InstMapDelta_7,
  MR_Word Var_8)
{
  MR_bool succeeded = (InstMap_6 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeInfo_8_17;
  MR_Word TypeCtorInfo_9_18;
  MR_Word OldVarInst_9;
  MR_Word VarInst_10;
  MR_Word InstMap_14;
  MR_Word InstMap_20;
  MR_Word VarInst_23;
  MR_Word TypeInfo_8_24;
  MR_Word TypeCtorInfo_9_25;
  MR_Box conv0_VarInst_23;
  MR_Box conv1_VarInst_10;

  if (succeeded)
  {
    InstMap_20 = ((MR_Word) ((MR_hl_field(1, InstMap_6, (MR_Integer) 0))));
    succeeded = (InstMapDelta_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeInfo_8_24 = (MR_Word) (&hlds__instmap_scalar_common_1[0]);
      TypeCtorInfo_9_25 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_8_24, TypeCtorInfo_9_25, InstMap_20, ((MR_Box) (Var_8)), &conv0_VarInst_23);
      if (succeeded)
      {
        VarInst_23 = ((MR_Word) (conv0_VarInst_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        OldVarInst_9 = VarInst_23;
      else
        OldVarInst_9 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, OldVarInst_9);
      if (succeeded)
      {
        InstMap_14 = ((MR_Word) ((MR_hl_field(1, InstMapDelta_7, (MR_Integer) 0))));
        TypeInfo_8_17 = (MR_Word) (&hlds__instmap_scalar_common_1[0]);
        TypeCtorInfo_9_18 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        succeeded = mercury__map__search_3_p_0(TypeInfo_8_17, TypeCtorInfo_9_18, InstMap_14, ((MR_Box) (Var_8)), &conv1_VarInst_10);
        if (succeeded)
        {
          VarInst_10 = ((MR_Word) (conv1_VarInst_10));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, VarInst_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Inst_7;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
  succeeded = check_hlds__inst_test__inst_is_any_2_p_0(ModuleInfo_4, Inst_7);
  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word InstMap_7,
  MR_Word Var_8)
{
  MR_bool succeeded;
  MR_Word Type_9;
  MR_Word Inst_10;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_6, Var_8, &Type_9);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_7, Var_8, &Inst_10);
  succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_5, Type_9, Inst_10);
  return succeeded;
}

void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
  MR_Word Vars_4,
  MR_Word InstMapDelta0_5,
  MR_Word * InstMapDelta_6)
{
  if ((InstMapDelta0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMapDelta_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_7 = ((MR_Word) ((MR_hl_field(1, InstMapDelta0_5, (MR_Integer) 0))));
    MR_Word InstMapping_8;

    mercury__map__delete_list_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Vars_4, InstMapping0_7, &InstMapping_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstMapDelta_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_8));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
  MR_Word Vars_4,
  MR_Word InstMapDelta0_5,
  MR_Word * InstMapDelta_6)
{
  MR_bool succeeded;

  if ((InstMapDelta0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMapDelta_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_7 = ((MR_Word) ((MR_hl_field(1, InstMapDelta0_5, (MR_Integer) 0))));
    MR_Word VarList_8;

    VarList_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4);
    succeeded = mercury__map__sorted_keys_match_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping0_7, VarList_8);
    if (succeeded)
      *InstMapDelta_6 = InstMapDelta0_5;
    else
    {
      MR_Word InstMapping_18;

      mercury__map__select_sorted_list_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping0_7, VarList_8, &InstMapping_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstMapDelta_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_18));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
  MR_Word Vars_4,
  MR_Word InstMap0_5,
  MR_Word * InstMap_6)
{
  if ((InstMap0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstMap_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_7 = ((MR_Word) ((MR_hl_field(1, InstMap0_5, (MR_Integer) 0))));
    MR_Word InstMapping_8;
    MR_Word Var_9;

    Var_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4);
    mercury__map__select_sorted_list_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping0_7, Var_9, &InstMapping_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstMap_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_8));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__std_util__negate_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__615__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_InstMapDelta_0_10,
  MR_Word * STATE_VARIABLE_InstMapDelta_11)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_InstMapDelta_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMapDelta_11 = STATE_VARIABLE_InstMapDelta_0_10;
  else
  {
    MR_Word InstMapping0_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0))));
    MR_Word InstMapping_9;
    MR_Word Var_12;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (Inst_5));
      MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_15));
    }
    mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
    hlds__instmap__instmapping_set_vars_same_4_p_0(Inst_5, Vars_6, InstMapping0_8, &InstMapping_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMapDelta_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_9));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
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
    MR_Word InstMapping0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstMapping_11;

      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_11));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__std_util__negate_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__584__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_InstMap_0_10,
  MR_Word * STATE_VARIABLE_InstMap_11)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_InstMap_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMap_11 = STATE_VARIABLE_InstMap_0_10;
  else
  {
    MR_Word InstMapping0_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0))));
    MR_Word InstMapping_9;
    MR_Word Var_12;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (Inst_5));
      MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_15));
    }
    mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
    hlds__instmap__instmapping_set_vars_same_4_p_0(Inst_5, Vars_6, InstMapping0_8, &InstMapping_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_9));
    }
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word Inst_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapping_0_3,
  MR_Word * STATE_VARIABLE_InstMapping_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMapping_4 = STATE_VARIABLE_InstMapping_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InstMapping_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_3;

      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_10)), ((MR_Box) (Inst_1)), STATE_VARIABLE_InstMapping_0_3, &STATE_VARIABLE_InstMapping_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_InstMapping_0_3 = STATE_VARIABLE_InstMapping_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMapping_0_3 = next_value_of_STATE_VARIABLE_InstMapping_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
  MR_Word Vars_5,
  MR_Word Insts_6,
  MR_Word STATE_VARIABLE_InstMap_0_10,
  MR_Word * STATE_VARIABLE_InstMap_11)
{
  if ((STATE_VARIABLE_InstMap_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMap_11 = STATE_VARIABLE_InstMap_0_10;
  else
  {
    MR_Word InstMapping0_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0))));
    MR_Word InstMapping_9;

    hlds__instmap__instmapping_set_vars_corresponding_4_p_0(Vars_5, Insts_6, InstMapping0_8, &InstMapping_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__std_util__negate_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__638__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadVar__3_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
          return;
        }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
          return;
        }
      else
      {
        MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_15;
        MR_Word Var_18;
        MR_Word STATE_VARIABLE_InstMapping_20_20;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
          MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_18, 3) = ((MR_Box) (Inst_10));
          MR_hl_field(0, Var_18, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        }
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_15, 3) = ((MR_Box) (Var_18));
        }
        mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
        mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_40)), ((MR_Box) (Inst_10)), HeadVar__3_3, &STATE_VARIABLE_InstMapping_20_20);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_InstMapping_20_20;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
  MR_Word VarsInsts_4,
  MR_Word STATE_VARIABLE_InstMap_0_8,
  MR_Word * STATE_VARIABLE_InstMap_9)
{
  if ((STATE_VARIABLE_InstMap_0_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstMap_9 = STATE_VARIABLE_InstMap_0_8;
  else
  {
    MR_Word InstMapping0_6 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0))));
    MR_Word InstMapping_7;

    hlds__instmap__instmapping_set_vars_3_p_0(VarsInsts_4, InstMapping0_6, &InstMapping_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_7));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__627__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMapping_0_2,
  MR_Word * STATE_VARIABLE_InstMapping_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMapping_3 = STATE_VARIABLE_InstMapping_0_2;
    else
    {
      MR_Word Var_7;
      MR_Word Inst_8;
      MR_Word VarsInsts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_InstMapping_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_2;

      Var_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Inst_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (Inst_8));
        MR_hl_field(0, Var_14, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      mercury__require__expect_not_3_p_0(Var_14, (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Var_7)), ((MR_Box) (Inst_8)), STATE_VARIABLE_InstMapping_0_2, &STATE_VARIABLE_InstMapping_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsInsts_9;
      next_value_of_STATE_VARIABLE_InstMapping_0_2 = STATE_VARIABLE_InstMapping_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_2 = next_value_of_STATE_VARIABLE_InstMapping_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstMapping_10;

    mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_10));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
  MR_Word InstMapDelta_4,
  MR_Word Var_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;
  MR_Word InstPrime_7;

  if ((InstMapDelta_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InstPrime_7 = (MR_Word) ((MR_Unsigned) 4U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word InstMap_11 = ((MR_Word) ((MR_hl_field(1, InstMapDelta_4, (MR_Integer) 0))));
    MR_Box conv0_InstPrime_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMap_11, ((MR_Box) (Var_5)), &conv0_InstPrime_7);
    if (succeeded)
    {
      InstPrime_7 = ((MR_Word) (conv0_InstPrime_7));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    *Inst_6 = InstPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
      return;
    }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 4U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word InstMap_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Box conv0_HeadVar__3_3;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMap_5, ((MR_Box) (Var_2)), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_8;
    MR_Word Insts_9;

    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__1_1, Arg_6, &Inst_8);
    hlds__instmap__instmap_lookup_vars_3_p_0(HeadVar__1_1, Args_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 4U);
  else
  {
    MR_Word InstMap_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarInst_8;
    MR_Box conv0_VarInst_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMap_5, ((MR_Box) (HeadVar__2_2)), &conv0_VarInst_8);
    if (succeeded)
    {
      VarInst_8 = ((MR_Word) (conv0_VarInst_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *HeadVar__3_3 = VarInst_8;
    else
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_3, HeadVar__2_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
  MR_Word InstMap_3,
  MR_Word * Vars_4)
{
  MR_Word VarsList_5;

  if ((InstMap_3 == (MR_Word) ((MR_Unsigned) 0U)))
    VarsList_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping_7 = ((MR_Word) ((MR_hl_field(1, InstMap_3, (MR_Integer) 0))));

    mercury__map__keys_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_7, &VarsList_5);
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsList_5, Vars_4);
}

void MR_CALL 
hlds__instmap__instmap_delta_from_var_init_final_insts_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarsInsts_5,
  MR_Word * InstMapDelta_6)
{
  hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_118_97_114_95_105_110_105_116_95_102_105_110_97_108_95_105_110_115_116_115_95_95_91_49_93_95_48_3_p_0(VarsInsts_5, InstMapDelta_6);
}

void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_118_97_114_95_105_110_105_116_95_102_105_110_97_108_95_105_110_115_116_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word VarsInsts_5,
  MR_Word * InstMapDelta_6)
{
  MR_Word InstMapDelta0_7;
  MR_Word InstMapping_8;

  mercury__map__init_1_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &InstMapping_8);
  {
    InstMapDelta0_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstMapDelta0_7, 0) = ((MR_Box) (InstMapping_8));
  }
  hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_118_97_114_95_105_110_105_116_95_102_105_110_97_108_95_105_110_115_116_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(VarsInsts_5, InstMapDelta0_7, InstMapDelta_6);
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_118_97_114_95_105_110_105_116_95_102_105_110_97_108_95_105_110_115_116_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapDelta_0_3,
  MR_Word * STATE_VARIABLE_InstMapDelta_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMapDelta_4 = STATE_VARIABLE_InstMapDelta_0_3;
    else
    {
      MR_Word VarInsts_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word VarsInsts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, VarInsts_10, (MR_Integer) 0))));
      MR_Word InitInst_14 = ((MR_Word) ((MR_hl_field(0, VarInsts_10, (MR_Integer) 1))));
      MR_Word FinalInst_15 = ((MR_Word) ((MR_hl_field(0, VarInsts_10, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_InstMapDelta_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMapDelta_0_3;

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitInst_14, FinalInst_15);
      if (succeeded)
        STATE_VARIABLE_InstMapDelta_18_18 = STATE_VARIABLE_InstMapDelta_0_3;
      else
        hlds__instmap__instmap_delta_set_var_4_p_0(Var_13, FinalInst_15, STATE_VARIABLE_InstMapDelta_0_3, &STATE_VARIABLE_InstMapDelta_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarsInsts_11;
      next_value_of_STATE_VARIABLE_InstMapDelta_0_3 = STATE_VARIABLE_InstMapDelta_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMapDelta_0_3 = next_value_of_STATE_VARIABLE_InstMapDelta_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Modes_7,
  MR_Word * InstMapDelta_8)
{
  MR_Word InstMapDelta0_9;
  MR_Word InstMapping_10;

  mercury__map__init_1_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &InstMapping_10);
  {
    InstMapDelta0_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstMapDelta0_9, 0) = ((MR_Box) (InstMapping_10));
  }
  hlds__instmap__instmap_delta_from_mode_list_loop_5_p_0(ModuleInfo_5, Var_6, Modes_7, InstMapDelta0_9, InstMapDelta_8);
}

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_loop_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_InstMapDelta_5 = STATE_VARIABLE_InstMapDelta_0_4;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_loop\'/5", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_loop\'/5", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Mode_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word InitInst_32;
        MR_Word FinalInst_33;
        MR_Word STATE_VARIABLE_InstMapDelta_36_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_InstMapDelta_0_4;

        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_29, &InitInst_32, &FinalInst_33);
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitInst_32, FinalInst_33);
        if (succeeded)
          STATE_VARIABLE_InstMapDelta_36_36 = STATE_VARIABLE_InstMapDelta_0_4;
        else
          hlds__instmap__instmap_delta_set_var_4_p_0(Var_38, FinalInst_33, STATE_VARIABLE_InstMapDelta_0_4, &STATE_VARIABLE_InstMapDelta_36_36);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_37;
        next_value_of_HeadVar__3_3 = Modes_30;
        next_value_of_STATE_VARIABLE_InstMapDelta_0_4 = STATE_VARIABLE_InstMapDelta_36_36;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_InstMapDelta_0_4 = next_value_of_STATE_VARIABLE_InstMapDelta_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
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
    MR_Word InstMapping0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstMapping_11;

      mercury__map__set_4_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_11));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_3, HeadVar__2_2);
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
  MR_Word AL_3)
{
  MR_Word HeadVar__2_2;
  MR_Word InstMapping_4;

  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), AL_3, &InstMapping_4);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (InstMapping_4));
  }
  return HeadVar__2_2;
}

void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstMapping_3, HeadVar__2_2);
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
  MR_Word AL_3)
{
  MR_Word HeadVar__2_2;
  MR_Word InstMapping_4;

  mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), AL_3, &InstMapping_4);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (InstMapping_4));
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  return succeeded;
}

void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word InstMapping_2;

  mercury__map__init_1_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &InstMapping_2);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_2));
  }
}

void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Word InstMapping_2;

  mercury__map__init_1_p_0((MR_Word) (&hlds__instmap_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &InstMapping_2);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__1_1 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (InstMapping_2));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____arm_instmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____instmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____instmap_delta_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____instmapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____overlay_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____restrict_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____restrict_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____restrict_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____restrict_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__instmap____Unify____var_init_final_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__instmap____Unify____var_init_final_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__instmap____Compare____var_init_final_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__instmap____Compare____var_init_final_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__instmap__init(void)
{
}

void mercury__hlds__instmap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_restrict_stats_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_var_init_final_insts_0);
}

void mercury__hlds__instmap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__hlds__instmap__required_init(void)
{
	hlds__instmap__user_init_pred_262_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__instmap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.instmap.
