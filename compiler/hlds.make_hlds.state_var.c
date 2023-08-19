/*
** Automatically generated from `state_var.m'
** by the Mercury compiler,
** version rotd-2023-08-19
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


// :- module hlds.make_hlds.state_var.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__state_var__init
ENDINIT
*/

#include "hlds.make_hlds.state_var.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0[1];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2094__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1356__1_2_p_0(
  MR_Word StatusBefore_82,
  MR_Word StatusAfterThen_84);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1136__1_2_p_0(
  MR_Word AfterAllArmsStatus_23,
  MR_Word AfterArmStatus_25);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1027__1_1_p_0(
  MR_Word StatusMapAfterGoal_12);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1272__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterElse_45);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1270__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterThen_44);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1268__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterCond_43);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Spec_4);

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word DelayedRenamingToAdd_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * STATE_VARIABLE_NextGoalId_22,
  MR_Word STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * STATE_VARIABLE_DelayedRenamingMap_24);

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word STATE_VARIABLE_Status_0_10,
  MR_Word * STATE_VARIABLE_Status_11);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word ItemClause0_3,
  MR_Word * ItemClause_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0(
  MR_Word LocKind_3,
  MR_Word QuantStateVars_4,
  MR_Word HeadVar__5_5,
  MR_Word StatusMapBefore_6,
  MR_Word StatusMapAfterCond_7,
  MR_Word StatusMapAfterThen_8,
  MR_Word StatusMapAfterElse_9,
  MR_Word STATE_VARIABLE_StatusMapAfterITE_0_10,
  MR_Word * STATE_VARIABLE_StatusMapAfterITE_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_14,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_15,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_16,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_17,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_18,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_19,
  MR_Word STATE_VARIABLE_ThenRenames_0_20,
  MR_Word * STATE_VARIABLE_ThenRenames_21,
  MR_Word STATE_VARIABLE_ElseRenames_0_22,
  MR_Word * STATE_VARIABLE_ElseRenames_23,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_24,
  MR_Word * STATE_VARIABLE_ThenMissingInits_25,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_26,
  MR_Word * STATE_VARIABLE_ElseMissingInits_27);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_25_p_0(
  MR_Word LocKind_28,
  MR_Word SVar_29,
  MR_Word StatusBefore_30,
  MR_Word StatusAfterCond_31,
  MR_Word StatusAfterThen_32,
  MR_Word StatusAfterElse_33,
  MR_Word * StatusAfterITE_34,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word * STATE_VARIABLE_VarSet_79,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_80,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_81,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_82,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_83,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_84,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_85,
  MR_Word STATE_VARIABLE_ThenRenames_0_86,
  MR_Word * STATE_VARIABLE_ThenRenames_87,
  MR_Word STATE_VARIABLE_ElseRenames_0_88,
  MR_Word * STATE_VARIABLE_ElseRenames_89,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_90,
  MR_Word * STATE_VARIABLE_ThenMissingInits_91,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_92,
  MR_Word * STATE_VARIABLE_ElseMissingInits_93);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word LocKind_4,
  MR_Word Status_5);

static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
  MR_Word FromVar_4,
  MR_Word ToVar_5,
  MR_Word * CopyGoal_6);

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word Context_7,
  MR_Word NextStateVars_8,
  MR_String WhenMissing_9,
  MR_String WhenNotMissing_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevArms_0_5,
  MR_Word * STATE_VARIABLE_RevArms_6,
  MR_Word STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * STATE_VARIABLE_NextGoalId_8,
  MR_Word STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * STATE_VARIABLE_DelayedRenamings_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBefore_2,
  MR_Word StatusMapAfterArm_3,
  MR_Word VarSet_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6);

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapAfterArm_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * STATE_VARIABLE_RevDisjuncts_3);

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBeforeOutside_2,
  MR_Word STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * STATE_VARIABLE_StatusMapAfterOutside_4);

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StatusMap_0_4,
  MR_Word * STATE_VARIABLE_StatusMap_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_99_108_97_117_115_101_95_98_111_100_121_95_95_91_50_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_98_111_100_121_95_95_91_49_44_32_50_93_95_48_10_p_0(
  MR_Word Context_13,
  MR_Word FinalMap_14,
  MR_Word Goals0_15,
  MR_Word * Goal_16,
  MR_Word InitialSVarState_17,
  MR_Word FinalSVarState_18,
  MR_Word STATE_VARIABLE_Store_0_45,
  MR_Word * STATE_VARIABLE_Store_46);

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitialStatusMap_2,
  MR_Word FinalStatusMap_3,
  MR_Word STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * STATE_VARIABLE_CopyGoals_7);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8);

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
  MR_Word Term0_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_FinalMap_0_46,
  MR_Word * STATE_VARIABLE_FinalMap_47,
  MR_Word STATE_VARIABLE_State_0_48,
  MR_Word * STATE_VARIABLE_State_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_FinalMap_0_3,
  MR_Word * STATE_VARIABLE_FinalMap_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
  MR_Word Context_6,
  MR_Word VarSet_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[52][2];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[6][3];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[5][5];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[1][7];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][4];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[52][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: cannot use"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be a function result."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: reference to uninitialized state variable"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the if-then-else defines"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but not this one."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[11])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[50])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "!.")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "!:")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "state variable")) },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 = {
  (MR_String) "hlds_goal_svar_state",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "hlds_goal_svar_state",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
  (MR_String) "roc_lambda",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 };

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "readonly_context_kind",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
  (MR_String) "name_initial",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
  (MR_String) "name_middle",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
  (MR_String) "name_final",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "state_var_name_source",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_String) "siasi_state_var",
  (MR_String) "siasi_di_var",
  (MR_String) "siasi_state_before"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 = {
  (MR_String) "svar_inner_atomic_scope_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_inner_atomic_scope_info",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_String) "soasi_state_var",
  (MR_String) "soasi_before_status",
  (MR_String) "soasi_after_status"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 = {
  (MR_String) "svar_outer_atomic_scope_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 = {
  (MR_String) "no_svar_outer_atomic_scope_info",
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

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_outer_atomic_scope_info",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0,

};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
  }
};

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 = {
  (MR_String) "svar_state",
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0),
  (MR_String) "state_status_map",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_state",
  { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 = {
  (MR_String) "status_unknown",
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

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 = {
  (MR_String) "status_unknown_updated",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 = {
  (MR_String) "status_known_ro",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3 = {
  (MR_String) "status_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4 = {
  (MR_String) "status_known_updated",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_status",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[3] = {
  (MR_String) "store_next_goal_id",
  (MR_String) "store_final_remap",
  (MR_String) "store_specs"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 = {
  (MR_String) "svar_store",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_store_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_store_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_store",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2094__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[5]), ((MR_Box) (OrElseInners_91)), ((MR_Box) (HeadVar__2_118)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1356__1_2_p_0(
  MR_Word StatusBefore_82,
  MR_Word StatusAfterThen_84)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusBefore_82, StatusAfterThen_84);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1136__1_2_p_0(
  MR_Word AfterAllArmsStatus_23,
  MR_Word AfterArmStatus_25)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(AfterArmStatus_25, AfterAllArmsStatus_23);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1027__1_1_p_0(
  MR_Word StatusMapAfterGoal_12)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterGoal_12);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1272__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterElse_45)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[3]), ((MR_Box) (SVarsBefore_42)), ((MR_Box) (SVarsAfterElse_45)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1270__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterThen_44)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[3]), ((MR_Box) (SVarsBefore_42)), ((MR_Box) (SVarsAfterThen_44)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1268__1_2_p_0(
  MR_Word SVarsBefore_42,
  MR_Word SVarsAfterCond_43)
{
  MR_bool succeeded;

  succeeded = mercury__list__sublist_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), SVarsBefore_42, SVarsAfterCond_43);
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0(
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

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__make_hlds__state_var____Compare____svar_status_0_0(&SubResult2_9, Var_24, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__make_hlds__state_var____Compare____svar_status_0_0(HeadVar__1_1, Var_23, ArgY3_11);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_76 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_77 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_76 == CastY_77);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_90)), ((MR_Box) (ArgY1_13)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_31 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_32;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_32, ((MR_Box) (Var_87)), ((MR_Box) (ArgY1_31)));
                succeeded = (SubResult1_32 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_32;
                else
                  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_85, ArgY3_36);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_84)), ((MR_Box) (ArgY1_54)));
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_73;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_73, ((MR_Box) (Var_89)), ((MR_Box) (ArgY1_72)));
                        succeeded = (SubResult1_73 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_73;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_88)), ((MR_Box) (ArgY2_75)));
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__make_hlds__state_var____Compare____svar_state_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
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
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * HeadVar__1_1)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(
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

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__make_hlds__state_var____Compare____svar_state_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(
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

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__severity_is_error_2_p_0(
  MR_Word Globals_3,
  MR_Word Spec_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;

  Var_5 = parse_tree__error_util__actual_spec_severity_2_f_0(Globals_3, Spec_4);
  succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(1, Var_5, (MR_Integer) 0))));
    succeeded = (Var_6 == (MR_Integer) 0);
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word DelayedRenamingToAdd_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * STATE_VARIABLE_NextGoalId_22,
  MR_Word STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * STATE_VARIABLE_DelayedRenamingMap_24)
{
  MR_bool succeeded;
  MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word GoalId0_15;
  MR_Word DelayedRenaming0_16;
  MR_Box conv0_DelayedRenaming0_16;

  GoalId0_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_14);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), STATE_VARIABLE_DelayedRenamingMap_0_23, ((MR_Box) (GoalId0_15)), &conv0_DelayedRenaming0_16);
  if (succeeded)
  {
    DelayedRenaming0_16 = ((MR_Word) (conv0_DelayedRenaming0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DelayedRenaming_17;

    DelayedRenaming_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[0]), DelayedRenamingToAdd_8, DelayedRenaming0_16);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId0_15)), ((MR_Box) (DelayedRenaming_17)), STATE_VARIABLE_DelayedRenamingMap_0_23, STATE_VARIABLE_DelayedRenamingMap_24);
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_NextGoalId_22 = STATE_VARIABLE_NextGoalId_0_21;
  }
  else
  {
    MR_Integer GoalIdNum_18;
    MR_Word GoalId_19;
    MR_Word GoalInfo_20;

    mercury__counter__allocate_3_p_0(&GoalIdNum_18, STATE_VARIABLE_NextGoalId_0_21, STATE_VARIABLE_NextGoalId_22);
    GoalId_19 = (MR_Word) (GoalIdNum_18);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_19, GoalInfo0_14, &GoalInfo_20);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId_19)), ((MR_Box) (DelayedRenamingToAdd_8)), STATE_VARIABLE_DelayedRenamingMap_0_23, STATE_VARIABLE_DelayedRenamingMap_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_20));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word STATE_VARIABLE_Status_0_10,
  MR_Word * STATE_VARIABLE_Status_11)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Status_0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NewProgVar_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Status_0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Status_11 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (NewProgVar_8));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Status_0_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewProgVar_14 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Status_0_10, (MR_Integer) 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Status_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NewProgVar_14));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word ItemClause0_3,
  MR_Word * ItemClause_4)
{
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 1))));
  MR_Word Args0_7 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 2))));
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 3))));
  MR_Word MaybeBody_9 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 4))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 5))));
  MR_Word SeqNum_11 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, (MR_Integer) 6))));
  MR_Word Args_12;

  hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(Args0_7, &Args_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *ItemClause_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (SymName_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (Args_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeBody_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (SeqNum_11));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(
  MR_Word Context_9,
  MR_Word StateVar_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_String Name_14;
  MR_Word Pieces_15;
  MR_Word Spec_16;
  MR_Word StatusMap0_17;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_String Var_32;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_44;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_51;
  MR_Word OldStatus_18;
  MR_Box conv0_OldStatus_18;

  Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_22, StateVar_10);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_14);
  {
    Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_31, 0) = ((MR_Box) (Var_32));
  }
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_14);
  {
    Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_43, 0) = ((MR_Box) (Var_44));
  }
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_14);
  {
    Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_50, 0) = ((MR_Box) (Var_51));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[25])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[23])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[20])));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[24])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_34));
  }
  {
    Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[18])));
    MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_30));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_svar_unify_error\'/8"));
    MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Context_9));
    MR_hl_field(1, Spec_16, 4) = ((MR_Box) (Pieces_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
  StatusMap0_17 = (MR_Word) (STATE_VARIABLE_State_0_24);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_17, ((MR_Box) (StateVar_10)), &conv0_OldStatus_18);
  if (succeeded)
  {
    OldStatus_18 = ((MR_Word) (conv0_OldStatus_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = (OldStatus_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_0_24;
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
  }
  else
  {
    MR_Word Var_19;
    MR_Word Status_20;
    MR_Word StatusMap_21;
    MR_String SVarName_67;
    MR_String ProgVarName_68;
    MR_String Var_86;

    SVarName_67 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_22, StateVar_10);
    Var_86 = mercury__string__f_43_43_2_f_0(SVarName_67, (MR_String) "_0");
    ProgVarName_68 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_86);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_68, &Var_19, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
    {
      Status_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Status_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Status_20, 1) = ((MR_Box) (Var_19));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_10)), ((MR_Box) (Status_20)), StatusMap0_17, &StatusMap_21);
    *STATE_VARIABLE_State_25 = (MR_Word) (StatusMap_21);
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(
  MR_Word Context_6,
  MR_Word VarSet_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_String Name_10;
  MR_Word Pieces_11;
  MR_Word Spec_12;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_38;

  Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, StateVar_8);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_10);
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_19));
  }
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_10);
  {
    Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_30, 0) = ((MR_Box) (Var_31));
  }
  Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_10);
  {
    Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_37, 0) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[23])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[22])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[21])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_21));
  }
  {
    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[18])));
    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_17));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_illegal_bang_svar_lambda_arg\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(
  MR_Word Context_6,
  MR_Word VarSet_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_String Name_10;
  MR_Word Pieces_11;
  MR_Word Spec_12;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_31;

  Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, StateVar_8);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_10);
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_19));
  }
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_10);
  {
    Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_30, 0) = ((MR_Box) (Var_31));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[20])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[19])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_21));
  }
  {
    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[18])));
    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_17));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_illegal_func_svar_result\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__is_term_a_bang_state_pair_3_p_0(
  MR_Word ArgTerm_4,
  MR_Word * StateVar_5,
  MR_Word * Context_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgTerm_4)) == (MR_Integer) 0);
  MR_Word Var_8;
  MR_String Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_9 = ((MR_String) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
      succeeded = (strcmp(Var_9, (MR_String) "!") == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            *StateVar_5 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            *Context_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgTerms_5,
  MR_Word * StateVar_6,
  MR_Word * Context_7)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Integer) 1);
  MR_Word TypeInfo_9_9;
  MR_Word LastArgTerm_8;
  MR_Word Var_11;
  MR_String Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_LastArgTerm_8;

  if (succeeded)
  {
    TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[0]);
    succeeded = mercury__list__last_2_p_0(TypeInfo_9_9, ArgTerms_5, &conv0_LastArgTerm_8);
    if (succeeded)
    {
      LastArgTerm_8 = ((MR_Word) (conv0_LastArgTerm_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) LastArgTerm_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, (MR_Integer) 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_12 = ((MR_String) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
          succeeded = (strcmp(Var_12, (MR_String) "!") == 0);
          if (succeeded)
          {
            succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
              succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  *StateVar_6 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
                  *Context_7 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Arg0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Arg_20;
    MR_Word Args_21;
    MR_Word STATE_VARIABLE_VarSet_31_31;
    MR_Word STATE_VARIABLE_State_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;

    hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(Arg0_18, &Arg_20, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_31_31, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
    hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(Args0_19, &Args_21, STATE_VARIABLE_VarSet_31_31, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_State_32_32, STATE_VARIABLE_State_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_21));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(
  MR_Word Arg0_9,
  MR_Word * Arg_10,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 0);
  MR_Word StateVar_14;
  MR_Word Context_16;
  MR_Word Var_25;
  MR_String Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 1))));
    Context_16 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      succeeded = (strcmp(Var_26, (MR_String) "!.") == 0);
      if (succeeded)
      {
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 1);
          if (succeeded)
          {
            StateVar_14 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_17;

    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_16, StateVar_14, &Var_17, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Arg_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_16));
    }
  }
  else
  {
    MR_Word StateVar_42;
    MR_Word Context_43;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    succeeded = ((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 1))));
      Context_43 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = ((MR_String) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
        succeeded = (strcmp(Var_34, (MR_String) "!:") == 0);
        if (succeeded)
        {
          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 1);
            if (succeeded)
            {
              StateVar_42 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
              succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_41;

      hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(Context_43, StateVar_42, &Var_41, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Arg_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, base, 1) = ((MR_Box) (Context_43));
      }
    }
    else
    {
      *Arg_10 = Arg0_9;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_0_21;
      *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_colon_state_var_9_p_0(
  MR_Word Context_10,
  MR_Word StateVar_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;
  MR_Word StatusMap0_16 = (MR_Word) (STATE_VARIABLE_State_0_26);
  MR_Word Status_17;
  MR_Box conv0_Status_17;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_16, ((MR_Box) (StateVar_11)), &conv0_Status_17);
  if (succeeded)
  {
    Status_17 = ((MR_Word) (conv0_Status_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Status_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StatusMap_18;
          MR_Word Var_32;
          MR_String SVarName_118;
          MR_String ProgVarBaseName_120;

          SVarName_118 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_24, StateVar_11);
          ProgVarBaseName_120 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_118);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_120, Var_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (*Var_12));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_11)), ((MR_Box) (Var_32)), StatusMap0_16, &StatusMap_18);
          *STATE_VARIABLE_State_27 = (MR_Word) (StatusMap_18);
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          *Var_12 = ((MR_Word) ((MR_hl_field(1, Status_17, (MR_Integer) 0))));
          *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
          *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RO_Context_21 = ((MR_Word) ((MR_hl_field(2, Status_17, (MR_Integer) 2))));
          MR_Word Var_41;
          MR_Word StatusMap_46;
          MR_Word OldVar_47 = ((MR_Word) ((MR_hl_field(2, Status_17, (MR_Integer) 0))));
          MR_String SVarName_96;
          MR_String ProgVarBaseName_98;

          hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(Context_10, (MR_String) "lambda expression", RO_Context_21, STATE_VARIABLE_VarSet_0_24, StateVar_11, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
          SVarName_96 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_24, StateVar_11);
          ProgVarBaseName_98 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_96);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_98, Var_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
          {
            Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_41, 1) = ((MR_Box) (OldVar_47));
            MR_hl_field(3, Var_41, 2) = ((MR_Box) (*Var_12));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_11)), ((MR_Box) (Var_41)), StatusMap0_16, &StatusMap_46);
          *STATE_VARIABLE_State_27 = (MR_Word) (StatusMap_46);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Status_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OldVar_19 = ((MR_Word) ((MR_hl_field(3, Status_17, (MR_Integer) 1))));
              MR_Word Var_36;
              MR_Word StatusMap_45;
              MR_String SVarName_74;
              MR_String ProgVarBaseName_76;

              SVarName_74 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_24, StateVar_11);
              ProgVarBaseName_76 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_74);
              mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_76, Var_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
              {
                Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_36, 1) = ((MR_Box) (OldVar_19));
                MR_hl_field(3, Var_36, 2) = ((MR_Box) (*Var_12));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_11)), ((MR_Box) (Var_36)), StatusMap0_16, &StatusMap_45);
              *STATE_VARIABLE_State_27 = (MR_Word) (StatusMap_45);
              *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
            }
            break;
          case (MR_Integer) 1:
            {
              *Var_12 = ((MR_Word) ((MR_hl_field(3, Status_17, (MR_Integer) 2))));
              *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
              *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
              *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
            }
            break;
        }
        break;
    }
  else
  {
    MR_String Name_59;
    MR_Word Pieces_60;
    MR_Word Spec_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_String Var_68;

    Name_59 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_24, StateVar_11);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ":", Name_59);
    Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_68);
    {
      Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_65, 0) = ((MR_Box) (Var_66));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[30])));
    }
    {
      Pieces_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[28])));
      MR_hl_field(1, Pieces_60, 1) = ((MR_Box) (Var_64));
    }
    {
      Spec_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_non_visible_state_var\'/6"));
      MR_hl_field(1, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_61, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_61, 4) = ((MR_Box) (Pieces_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_29 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_61));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
    }
    *Var_12 = StateVar_11;
    *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
    *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(
  MR_Word Context_10,
  MR_Word StateVar_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word StatusMap0_16 = (MR_Word) (STATE_VARIABLE_State_0_25);
  MR_Word Status_17;
  MR_Box conv0_Status_17;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_16, ((MR_Box) (StateVar_11)), &conv0_Status_17);
  if (succeeded)
  {
    Status_17 = ((MR_Word) (conv0_Status_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Status_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StatusMap_18;
          MR_Word Var_32;
          MR_String Name_50;
          MR_Word Pieces_51;
          MR_Word Spec_52;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_String Var_57;
          MR_String SVarName_93;
          MR_String ProgVarBaseName_95;

          Name_50 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_23, StateVar_11);
          Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_50);
          {
            Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_56, 0) = ((MR_Box) (Var_57));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
          }
          {
            Pieces_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[31])));
            MR_hl_field(1, Pieces_51, 1) = ((MR_Box) (Var_55));
          }
          {
            Spec_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
            MR_hl_field(1, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(1, Spec_52, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_52, 4) = ((MR_Box) (Pieces_51));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
          }
          SVarName_93 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_23, StateVar_11);
          ProgVarBaseName_95 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_93);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_95, Var_12, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
          {
            Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_32, 1) = ((MR_Box) (*Var_12));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_11)), ((MR_Box) (Var_32)), StatusMap0_16, &StatusMap_18);
          *STATE_VARIABLE_State_26 = (MR_Word) (StatusMap_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NewVar_19 = ((MR_Word) ((MR_hl_field(1, Status_17, (MR_Integer) 0))));
          MR_Word Var_37;
          MR_Word StatusMap_41;
          MR_String Name_64;
          MR_Word Pieces_65;
          MR_Word Spec_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_String Var_71;
          MR_String SVarName_115;
          MR_String ProgVarBaseName_117;

          Name_64 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_23, StateVar_11);
          Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_64);
          {
            Var_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_70, 0) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
          }
          {
            Pieces_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_65, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[31])));
            MR_hl_field(1, Pieces_65, 1) = ((MR_Box) (Var_69));
          }
          {
            Spec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
            MR_hl_field(1, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(1, Spec_66, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_66, 4) = ((MR_Box) (Pieces_65));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_66));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
          }
          SVarName_115 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_23, StateVar_11);
          ProgVarBaseName_117 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_115);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_117, Var_12, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
          {
            Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_37, 1) = ((MR_Box) (*Var_12));
            MR_hl_field(3, Var_37, 2) = ((MR_Box) (NewVar_19));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_11)), ((MR_Box) (Var_37)), StatusMap0_16, &StatusMap_41);
          *STATE_VARIABLE_State_26 = (MR_Word) (StatusMap_41);
        }
        break;
      case (MR_Integer) 2:
        {
          *Var_12 = ((MR_Word) ((MR_hl_field(2, Status_17, (MR_Integer) 0))));
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
          *STATE_VARIABLE_State_26 = STATE_VARIABLE_State_0_25;
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Status_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Var_12 = ((MR_Word) ((MR_hl_field(3, Status_17, (MR_Integer) 1))));
              *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
              *STATE_VARIABLE_State_26 = STATE_VARIABLE_State_0_25;
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              *Var_12 = ((MR_Word) ((MR_hl_field(3, Status_17, (MR_Integer) 1))));
              *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
              *STATE_VARIABLE_State_26 = STATE_VARIABLE_State_0_25;
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
            }
            break;
        }
        break;
    }
  else
  {
    MR_String Name_78;
    MR_Word Pieces_79;
    MR_Word Spec_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_String Var_85;
    MR_String Var_87;

    Name_78 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_23, StateVar_11);
    Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ".", Name_78);
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_87);
    {
      Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_84, 0) = ((MR_Box) (Var_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[30])));
    }
    {
      Pieces_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[28])));
      MR_hl_field(1, Pieces_79, 1) = ((MR_Box) (Var_83));
    }
    {
      Spec_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_non_visible_state_var\'/6"));
      MR_hl_field(1, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_80, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_80, 4) = ((MR_Box) (Pieces_79));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_80));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
    *Var_12 = StateVar_11;
    *STATE_VARIABLE_State_26 = STATE_VARIABLE_State_0_25;
    *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(
  MR_Word _Context_11,
  MR_Word InnerScopeInfo_12,
  MR_Word * InnerDIVar_13,
  MR_Word * InnerUOVar_14,
  MR_Word STATE_VARIABLE_State_0_28,
  MR_Word * STATE_VARIABLE_State_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(InnerScopeInfo_12, InnerDIVar_13, InnerUOVar_14, STATE_VARIABLE_State_0_28, STATE_VARIABLE_State_29, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_p_0(
  MR_Word InnerScopeInfo_12,
  MR_Word * InnerDIVar_13,
  MR_Word * InnerUOVar_14,
  MR_Word STATE_VARIABLE_State_0_28,
  MR_Word * STATE_VARIABLE_State_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word InnerStateVar_18 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_12, (MR_Integer) 0))));
  MR_Word StatusMap0_20;
  MR_Word Status_21;
  MR_Box conv0_Status_21;

  *InnerDIVar_13 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_12, (MR_Integer) 1))));
  *STATE_VARIABLE_State_29 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_12, (MR_Integer) 2))));
  StatusMap0_20 = (MR_Word) (STATE_VARIABLE_State_0_28);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_20, ((MR_Box) (InnerStateVar_18)), &conv0_Status_21);
  Status_21 = ((MR_Word) (conv0_Status_21));
  switch (MR_tag((MR_Word) Status_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
        return;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Status_21, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *InnerUOVar_14 = ((MR_Word) ((MR_hl_field(3, Status_21, (MR_Integer) 1))));
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", (MR_String) "status != known");
            return;
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
  *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_0_30;
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(
  MR_Word _Context_10,
  MR_Word InnerStateVar_11,
  MR_Word * InnerScopeInfo_12,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(InnerStateVar_11, InnerScopeInfo_12, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_p_0(
  MR_Word InnerStateVar_11,
  MR_Word * InnerScopeInfo_12,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word InnerDIVar_17;
  MR_Word StatusMap0_18;
  MR_Word StatusMap_19;
  MR_Word Var_28;
  MR_String SVarName_32;
  MR_String ProgVarName_33;
  MR_String Var_51;

  SVarName_32 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_22, InnerStateVar_11);
  Var_51 = mercury__string__f_43_43_2_f_0(SVarName_32, (MR_String) "_0");
  ProgVarName_33 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_51);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_33, &InnerDIVar_17, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
  StatusMap0_18 = (MR_Word) (STATE_VARIABLE_State_0_20);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (InnerDIVar_17));
  }
  mercury__map__set_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (InnerStateVar_11)), ((MR_Box) (Var_28)), StatusMap0_18, &StatusMap_19);
  *STATE_VARIABLE_State_21 = (MR_Word) (StatusMap_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *InnerScopeInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InnerStateVar_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (InnerDIVar_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_State_0_20));
  }
  *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(
  MR_Word OuterScopeInfo_4,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  if ((OuterScopeInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_0_11;
  else
  {
    MR_Word OuterStateVar_6 = ((MR_Word) ((MR_hl_field(1, OuterScopeInfo_4, (MR_Integer) 0))));
    MR_Word AfterStatus_8 = ((MR_Word) ((MR_hl_field(1, OuterScopeInfo_4, (MR_Integer) 2))));
    MR_Word StatusMap0_9 = (MR_Word) (STATE_VARIABLE_State_0_11);
    MR_Word StatusMap_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (OuterStateVar_6)), ((MR_Box) (AfterStatus_8)), StatusMap0_9, &StatusMap_10);
    *STATE_VARIABLE_State_12 = (MR_Word) (StatusMap_10);
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(
  MR_Word Context_12,
  MR_Word OuterStateVar_13,
  MR_Word * OuterDIVar_14,
  MR_Word * OuterUOVar_15,
  MR_Word * OuterScopeInfo_16,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;
  MR_Word StatusMap0_20 = (MR_Word) (STATE_VARIABLE_State_0_29);
  MR_Word BeforeStatus_21;
  MR_Word StatusMap_22;
  MR_Box conv0_BeforeStatus_21;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (OuterStateVar_13)), &conv0_BeforeStatus_21, StatusMap0_20, &StatusMap_22);
  if (succeeded)
  {
    BeforeStatus_21 = ((MR_Word) (conv0_BeforeStatus_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_State_30 = (MR_Word) (StatusMap_22);
    switch (MR_tag((MR_Word) BeforeStatus_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_VarSet_38_38;
          MR_String Name_59;
          MR_Word Pieces_60;
          MR_Word Spec_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_String Var_66;
          MR_String SVarName_132;
          MR_String ProgVarBaseName_134;
          MR_String SVarName_154;
          MR_String ProgVarBaseName_156;

          Name_59 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
          Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_59);
          {
            Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_65, 0) = ((MR_Box) (Var_66));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
          }
          {
            Pieces_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[31])));
            MR_hl_field(1, Pieces_60, 1) = ((MR_Box) (Var_64));
          }
          {
            Spec_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
            MR_hl_field(1, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(1, Spec_61, 3) = ((MR_Box) (Context_12));
            MR_hl_field(1, Spec_61, 4) = ((MR_Box) (Pieces_60));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_34 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_61));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
          }
          SVarName_132 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
          ProgVarBaseName_134 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_132);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_134, OuterDIVar_14, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_38_38);
          SVarName_154 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_38_38, OuterStateVar_13);
          ProgVarBaseName_156 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_154);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_156, OuterUOVar_15, STATE_VARIABLE_VarSet_38_38, STATE_VARIABLE_VarSet_32);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *OuterScopeInfo_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_13));
            MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_21));
            MR_hl_field(1, base, 2) = ((MR_Box) (BeforeStatus_21));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RO_Context_24;
          MR_String SVarName_110;
          MR_String ProgVarBaseName_112;

          *OuterDIVar_14 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_21, (MR_Integer) 0))));
          RO_Context_24 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_21, (MR_Integer) 2))));
          hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(Context_12, (MR_String) "lambda expression", RO_Context_24, STATE_VARIABLE_VarSet_0_31, OuterStateVar_13, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
          SVarName_110 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
          ProgVarBaseName_112 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_110);
          mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_112, OuterUOVar_15, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *OuterScopeInfo_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_13));
            MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_21));
            MR_hl_field(1, base, 2) = ((MR_Box) (BeforeStatus_21));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, BeforeStatus_21, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AfterStatus_25;
              MR_String SVarName_88;
              MR_String ProgVarBaseName_90;

              *OuterDIVar_14 = ((MR_Word) ((MR_hl_field(3, BeforeStatus_21, (MR_Integer) 1))));
              SVarName_88 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
              ProgVarBaseName_90 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_88);
              mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_90, OuterUOVar_15, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32);
              {
                AfterStatus_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, AfterStatus_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, AfterStatus_25, 1) = ((MR_Box) (*OuterUOVar_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *OuterScopeInfo_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_13));
                MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_21));
                MR_hl_field(1, base, 2) = ((MR_Box) (AfterStatus_25));
              }
              *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", (MR_String) "status updated");
              return;
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word STATE_VARIABLE_VarSet_54_54;
    MR_String Name_73;
    MR_Word Pieces_74;
    MR_Word Spec_75;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_String Var_80;
    MR_String Var_82;
    MR_String SVarName_176;
    MR_String ProgVarBaseName_178;
    MR_String SVarName_198;
    MR_String ProgVarBaseName_200;

    Name_73 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "", Name_73);
    Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_82);
    {
      Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_79, 0) = ((MR_Box) (Var_80));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[30])));
    }
    {
      Pieces_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_74, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[28])));
      MR_hl_field(1, Pieces_74, 1) = ((MR_Box) (Var_78));
    }
    {
      Spec_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_non_visible_state_var\'/6"));
      MR_hl_field(1, Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(1, Spec_75, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_75, 4) = ((MR_Box) (Pieces_74));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_34 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_75));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
    }
    SVarName_176 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_31, OuterStateVar_13);
    ProgVarBaseName_178 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_176);
    mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_178, OuterDIVar_14, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_54_54);
    SVarName_198 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_54_54, OuterStateVar_13);
    ProgVarBaseName_200 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_198);
    mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_200, OuterUOVar_15, STATE_VARIABLE_VarSet_54_54, STATE_VARIABLE_VarSet_32);
    *OuterScopeInfo_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_State_30 = STATE_VARIABLE_State_0_29;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_state_var_update_7_p_0(
  MR_Word Context_8,
  MR_String RO_Construct_9,
  MR_Word RO_Context_10,
  MR_Word VarSet_11,
  MR_Word StateVar_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_String Name_14;
  MR_Word Pieces1_15;
  MR_Word Msg1_16;
  MR_Word Pieces2_17;
  MR_Word Msg2_18;
  MR_Word Spec_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_String Var_26;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_String Var_41;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_65;
  MR_Word Var_66;

  Name_14 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, StateVar_12);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_14);
  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (Var_26));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (RO_Construct_9));
  }
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_14);
  {
    Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_40, 0) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[10])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[9])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[8])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_28));
  }
  {
    Pieces1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces1_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[7])));
    MR_hl_field(1, Pieces1_15, 1) = ((MR_Box) (Var_24));
  }
  {
    Msg1_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg1_16, 0) = ((MR_Box) (Context_8));
    MR_hl_field(0, Msg1_16, 1) = ((MR_Box) (Pieces1_15));
  }
  {
    Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_55, 0) = ((MR_Box) (Name_14));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[17])));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[15])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
  }
  {
    Pieces2_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces2_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[14])));
    MR_hl_field(1, Pieces2_17, 1) = ((MR_Box) (Var_51));
  }
  {
    Msg2_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg2_18, 0) = ((MR_Box) (RO_Context_10));
    MR_hl_field(0, Msg2_18, 1) = ((MR_Box) (Pieces2_17));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Msg2_18));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Msg1_16));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  {
    Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_illegal_state_var_update\'/7"));
    MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Var_65));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(
  MR_Word Globals_21,
  MR_Word ModuleName_22,
  MR_Word LocKind_23,
  MR_Word Context_24,
  MR_Word QuantStateVars_25,
  MR_Word ThenGoal0_26,
  MR_Word * ThenGoal_27,
  MR_Word ElseGoal0_28,
  MR_Word * ElseGoal_29,
  MR_Word StateBefore_30,
  MR_Word StateAfterCond_31,
  MR_Word StateAfterThen_32,
  MR_Word StateAfterElse_33,
  MR_Word * StateAfterITE_34,
  MR_Word STATE_VARIABLE_VarSet_0_82,
  MR_Word * STATE_VARIABLE_VarSet_83,
  MR_Word STATE_VARIABLE_Store_0_84,
  MR_Word * STATE_VARIABLE_Store_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0(LocKind_23, Context_24, QuantStateVars_25, ThenGoal0_26, ThenGoal_27, ElseGoal0_28, ElseGoal_29, StateBefore_30, StateAfterCond_31, StateAfterThen_32, StateAfterElse_33, StateAfterITE_34, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, STATE_VARIABLE_Store_0_84, STATE_VARIABLE_Store_85, STATE_VARIABLE_Specs_0_86, STATE_VARIABLE_Specs_87);
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1272__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1270__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1268__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0(
  MR_Word LocKind_23,
  MR_Word Context_24,
  MR_Word QuantStateVars_25,
  MR_Word ThenGoal0_26,
  MR_Word * ThenGoal_27,
  MR_Word ElseGoal0_28,
  MR_Word * ElseGoal_29,
  MR_Word StateBefore_30,
  MR_Word StateAfterCond_31,
  MR_Word StateAfterThen_32,
  MR_Word StateAfterElse_33,
  MR_Word * StateAfterITE_34,
  MR_Word STATE_VARIABLE_VarSet_0_82,
  MR_Word * STATE_VARIABLE_VarSet_83,
  MR_Word STATE_VARIABLE_Store_0_84,
  MR_Word * STATE_VARIABLE_Store_85,
  MR_Word STATE_VARIABLE_Specs_0_86,
  MR_Word * STATE_VARIABLE_Specs_87)
{
  MR_bool succeeded;
  MR_Word Specs_37;
  MR_Word StatusMapBefore_38 = (MR_Word) (StateBefore_30);
  MR_Word StatusMapAfterCond_39 = (MR_Word) (StateAfterCond_31);
  MR_Word StatusMapAfterThen_40 = (MR_Word) (StateAfterThen_32);
  MR_Word StatusMapAfterElse_41 = (MR_Word) (StateAfterElse_33);
  MR_Word SVarsBefore_42;
  MR_Word SVarsAfterCond_43;
  MR_Word SVarsAfterThen_44;
  MR_Word SVarsAfterElse_45;
  MR_Word StatusMapAfterITE_46;
  MR_Word NeckCopyGoals_47;
  MR_Word ThenEndCopyGoals_48;
  MR_Word ElseEndCopyGoals_49;
  MR_Word ThenRenames_50;
  MR_Word ElseRenames_51;
  MR_Word ThenMissingInits_52;
  MR_Word ElseMissingInits_53;
  MR_Word ThenGoals0_62;
  MR_Word ElseGoals0_63;
  MR_Word ThenGoals_64;
  MR_Word ElseGoals_65;
  MR_Word ThenInfo0_67;
  MR_Word ElseInfo0_69;
  MR_Word ThenGoal1_70;
  MR_Word ElseGoal1_71;
  MR_Word NextGoalId0_72;
  MR_Word DelayedRenamings0_73;
  MR_Integer ThenGoalIdNum_74;
  MR_Word NextGoalId1_75;
  MR_Integer ElseGoalIdNum_76;
  MR_Word NextGoalId_77;
  MR_Word ThenGoalId_78;
  MR_Word ElseGoalId_79;
  MR_Word DelayedRenamings1_80;
  MR_Word DelayedRenamings_81;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_Store_108_108;
  MR_Word STATE_VARIABLE_Store_111_111;
  MR_Word STATE_VARIABLE_Store_112_112;
  MR_Word STATE_VARIABLE_Store_113_113;
  MR_Word Var_114;

  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_38, &SVarsBefore_42);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterCond_39, &SVarsAfterCond_43);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterThen_40, &SVarsAfterThen_44);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterElse_41, &SVarsAfterElse_45);
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[4]));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_1));
    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_88, 3) = ((MR_Box) (SVarsBefore_42));
    MR_hl_field(0, Var_88, 4) = ((MR_Box) (SVarsAfterCond_43));
  }
  mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/20", (MR_String) "vars Before not sublist of Cond");
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[4]));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_2));
    MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_91, 3) = ((MR_Box) (SVarsBefore_42));
    MR_hl_field(0, Var_91, 4) = ((MR_Box) (SVarsAfterThen_44));
  }
  mercury__require__expect_3_p_0(Var_91, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/20", (MR_String) "vars Before != AfterThen");
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[4]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_102_95_116_104_101_110_95_101_108_115_101_95_95_91_49_44_32_50_93_95_48_20_p_0_3));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (SVarsBefore_42));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) (SVarsAfterElse_45));
  }
  mercury__require__expect_3_p_0(Var_94, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/20", (MR_String) "vars Before != AfterElse");
  Var_97 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0(LocKind_23, QuantStateVars_25, SVarsBefore_42, StatusMapBefore_38, StatusMapAfterCond_39, StatusMapAfterThen_40, StatusMapAfterElse_41, Var_97, &StatusMapAfterITE_46, STATE_VARIABLE_VarSet_0_82, STATE_VARIABLE_VarSet_83, (MR_Word) ((MR_Unsigned) 0U), &NeckCopyGoals_47, (MR_Word) ((MR_Unsigned) 0U), &ThenEndCopyGoals_48, (MR_Word) ((MR_Unsigned) 0U), &ElseEndCopyGoals_49, (MR_Word) ((MR_Unsigned) 0U), &ThenRenames_50, (MR_Word) ((MR_Unsigned) 0U), &ElseRenames_51, (MR_Word) ((MR_Unsigned) 0U), &ThenMissingInits_52, (MR_Word) ((MR_Unsigned) 0U), &ElseMissingInits_53);
  *StateAfterITE_34 = (MR_Word) (StatusMapAfterITE_46);
  if ((ThenMissingInits_52 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Store_108_108 = STATE_VARIABLE_Store_0_84;
  else
  {
    MR_Word ThenSpecs0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_84, (MR_Integer) 2))));
    MR_Word ThenSpecs_57;
    MR_Word Var_117;
    MR_Word Var_118;

    hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(Context_24, ThenMissingInits_52, (MR_String) "succeeds", (MR_String) "fails", ThenSpecs0_56, &ThenSpecs_57);
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_84, (MR_Integer) 0))));
    Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_84, (MR_Integer) 1))));
    {
      STATE_VARIABLE_Store_108_108 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Store_108_108, 0) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Store_108_108, 1) = ((MR_Box) (Var_118));
      MR_hl_field(0, STATE_VARIABLE_Store_108_108, 2) = ((MR_Box) (ThenSpecs_57));
    }
  }
  if ((ElseMissingInits_53 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Store_111_111 = STATE_VARIABLE_Store_108_108;
  else
  {
    MR_Word ElseSpecs0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_108_108, (MR_Integer) 2))));
    MR_Word ElseSpecs_61;
    MR_Word Var_122;
    MR_Word Var_123;

    hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(Context_24, ElseMissingInits_53, (MR_String) "fails", (MR_String) "succeeds", ElseSpecs0_60, &ElseSpecs_61);
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_108_108, (MR_Integer) 0))));
    Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_108_108, (MR_Integer) 1))));
    {
      STATE_VARIABLE_Store_111_111 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Store_111_111, 0) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Store_111_111, 1) = ((MR_Box) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Store_111_111, 2) = ((MR_Box) (ElseSpecs_61));
    }
  }
  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(ThenGoal0_26, &ThenGoals0_62, STATE_VARIABLE_Store_111_111, &STATE_VARIABLE_Store_112_112);
  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(ElseGoal0_28, &ElseGoals0_63, STATE_VARIABLE_Store_112_112, &STATE_VARIABLE_Store_113_113);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ThenGoals0_62, ThenEndCopyGoals_48);
  ThenGoals_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NeckCopyGoals_47, Var_114);
  ElseGoals_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ElseGoals0_63, ElseEndCopyGoals_49);
  ThenInfo0_67 = ((MR_Word) ((MR_hl_field(0, ThenGoal0_26, (MR_Integer) 1))));
  ElseInfo0_69 = ((MR_Word) ((MR_hl_field(0, ElseGoal0_28, (MR_Integer) 1))));
  hlds__hlds_goal__conj_list_to_goal_3_p_0(ThenGoals_64, ThenInfo0_67, &ThenGoal1_70);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(ElseGoals_65, ElseInfo0_69, &ElseGoal1_71);
  NextGoalId0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_113_113, (MR_Integer) 0))));
  DelayedRenamings0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_113_113, (MR_Integer) 1))));
  Specs_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_113_113, (MR_Integer) 2))));
  mercury__counter__allocate_3_p_0(&ThenGoalIdNum_74, NextGoalId0_72, &NextGoalId1_75);
  mercury__counter__allocate_3_p_0(&ElseGoalIdNum_76, NextGoalId1_75, &NextGoalId_77);
  ThenGoalId_78 = (MR_Word) (ThenGoalIdNum_74);
  ElseGoalId_79 = (MR_Word) (ElseGoalIdNum_76);
  hlds__hlds_goal__goal_set_goal_id_3_p_0(ThenGoalId_78, ThenGoal1_70, ThenGoal_27);
  hlds__hlds_goal__goal_set_goal_id_3_p_0(ElseGoalId_79, ElseGoal1_71, ElseGoal_29);
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ThenGoalId_78)), ((MR_Box) (ThenRenames_50)), DelayedRenamings0_73, &DelayedRenamings1_80);
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ElseGoalId_79)), ((MR_Box) (ElseRenames_51)), DelayedRenamings1_80, &DelayedRenamings_81);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Store_85 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NextGoalId_77));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedRenamings_81));
    MR_hl_field(0, base, 2) = ((MR_Box) (Specs_37));
  }
  *STATE_VARIABLE_Specs_87 = STATE_VARIABLE_Specs_0_86;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1356__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0(
  MR_Word LocKind_3,
  MR_Word QuantStateVars_4,
  MR_Word HeadVar__5_5,
  MR_Word StatusMapBefore_6,
  MR_Word StatusMapAfterCond_7,
  MR_Word StatusMapAfterThen_8,
  MR_Word StatusMapAfterElse_9,
  MR_Word STATE_VARIABLE_StatusMapAfterITE_0_10,
  MR_Word * STATE_VARIABLE_StatusMapAfterITE_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_14,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_15,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_16,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_17,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_18,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_19,
  MR_Word STATE_VARIABLE_ThenRenames_0_20,
  MR_Word * STATE_VARIABLE_ThenRenames_21,
  MR_Word STATE_VARIABLE_ElseRenames_0_22,
  MR_Word * STATE_VARIABLE_ElseRenames_23,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_24,
  MR_Word * STATE_VARIABLE_ThenMissingInits_25,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_26,
  MR_Word * STATE_VARIABLE_ElseMissingInits_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ElseMissingInits_27 = STATE_VARIABLE_ElseMissingInits_0_26;
      *STATE_VARIABLE_ThenMissingInits_25 = STATE_VARIABLE_ThenMissingInits_0_24;
      *STATE_VARIABLE_ElseRenames_23 = STATE_VARIABLE_ElseRenames_0_22;
      *STATE_VARIABLE_ThenRenames_21 = STATE_VARIABLE_ThenRenames_0_20;
      *STATE_VARIABLE_ElseEndCopyGoals_19 = STATE_VARIABLE_ElseEndCopyGoals_0_18;
      *STATE_VARIABLE_ThenEndCopyGoals_17 = STATE_VARIABLE_ThenEndCopyGoals_0_16;
      *STATE_VARIABLE_NeckCopyGoals_15 = STATE_VARIABLE_NeckCopyGoals_0_14;
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
      *STATE_VARIABLE_StatusMapAfterITE_11 = STATE_VARIABLE_StatusMapAfterITE_0_10;
    }
    else
    {
      MR_Word SVar_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word StatusBefore_82;
      MR_Word StatusAfterCond_83;
      MR_Word StatusAfterThen_84;
      MR_Word StatusAfterElse_85;
      MR_Word StatusAfterITE_86;
      MR_Word STATE_VARIABLE_VarSet_110_110;
      MR_Word STATE_VARIABLE_NeckCopyGoals_111_111;
      MR_Word STATE_VARIABLE_ThenEndCopyGoals_112_112;
      MR_Word STATE_VARIABLE_ElseEndCopyGoals_113_113;
      MR_Word STATE_VARIABLE_ThenRenames_114_114;
      MR_Word STATE_VARIABLE_ElseRenames_115_115;
      MR_Word STATE_VARIABLE_ThenMissingInits_116_116;
      MR_Word STATE_VARIABLE_ElseMissingInits_117_117;
      MR_Word STATE_VARIABLE_StatusMapAfterITE_126_126;
      MR_Box conv0_StatusBefore_82;
      MR_Box conv1_StatusAfterCond_83;
      MR_Box conv2_StatusAfterThen_84;
      MR_Box conv3_StatusAfterElse_85;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_10;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_12;
      MR_Word next_value_of_STATE_VARIABLE_NeckCopyGoals_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_16;
      MR_Word next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_18;
      MR_Word next_value_of_STATE_VARIABLE_ThenRenames_0_20;
      MR_Word next_value_of_STATE_VARIABLE_ElseRenames_0_22;
      MR_Word next_value_of_STATE_VARIABLE_ThenMissingInits_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ElseMissingInits_0_26;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_6, ((MR_Box) (SVar_67)), &conv0_StatusBefore_82);
      StatusBefore_82 = ((MR_Word) (conv0_StatusBefore_82));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterCond_7, ((MR_Box) (SVar_67)), &conv1_StatusAfterCond_83);
      StatusAfterCond_83 = ((MR_Word) (conv1_StatusAfterCond_83));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterThen_8, ((MR_Box) (SVar_67)), &conv2_StatusAfterThen_84);
      StatusAfterThen_84 = ((MR_Word) (conv2_StatusAfterThen_84));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterElse_9, ((MR_Box) (SVar_67)), &conv3_StatusAfterElse_85);
      StatusAfterElse_85 = ((MR_Word) (conv3_StatusAfterElse_85));
      succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (SVar_67)), QuantStateVars_4);
      if (succeeded)
      {
        MR_Word Var_105;

        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_105, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3]));
          MR_hl_field(0, Var_105, 1) = ((MR_Box) (hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_115_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_27_p_0_1));
          MR_hl_field(0, Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_105, 3) = ((MR_Box) (StatusBefore_82));
          MR_hl_field(0, Var_105, 4) = ((MR_Box) (StatusAfterThen_84));
        }
        mercury__require__expect_3_p_0(Var_105, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_vars_in_ite\'/27", (MR_String) "state var shadowed in if-then-else is nevertheless updated");
        hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_25_p_0(LocKind_3, SVar_67, StatusBefore_82, StatusBefore_82, StatusBefore_82, StatusAfterElse_85, &StatusAfterITE_86, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_110_110, STATE_VARIABLE_NeckCopyGoals_0_14, &STATE_VARIABLE_NeckCopyGoals_111_111, STATE_VARIABLE_ThenEndCopyGoals_0_16, &STATE_VARIABLE_ThenEndCopyGoals_112_112, STATE_VARIABLE_ElseEndCopyGoals_0_18, &STATE_VARIABLE_ElseEndCopyGoals_113_113, STATE_VARIABLE_ThenRenames_0_20, &STATE_VARIABLE_ThenRenames_114_114, STATE_VARIABLE_ElseRenames_0_22, &STATE_VARIABLE_ElseRenames_115_115, STATE_VARIABLE_ThenMissingInits_0_24, &STATE_VARIABLE_ThenMissingInits_116_116, STATE_VARIABLE_ElseMissingInits_0_26, &STATE_VARIABLE_ElseMissingInits_117_117);
      }
      else
        hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_25_p_0(LocKind_3, SVar_67, StatusBefore_82, StatusAfterCond_83, StatusAfterThen_84, StatusAfterElse_85, &StatusAfterITE_86, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_110_110, STATE_VARIABLE_NeckCopyGoals_0_14, &STATE_VARIABLE_NeckCopyGoals_111_111, STATE_VARIABLE_ThenEndCopyGoals_0_16, &STATE_VARIABLE_ThenEndCopyGoals_112_112, STATE_VARIABLE_ElseEndCopyGoals_0_18, &STATE_VARIABLE_ElseEndCopyGoals_113_113, STATE_VARIABLE_ThenRenames_0_20, &STATE_VARIABLE_ThenRenames_114_114, STATE_VARIABLE_ElseRenames_0_22, &STATE_VARIABLE_ElseRenames_115_115, STATE_VARIABLE_ThenMissingInits_0_24, &STATE_VARIABLE_ThenMissingInits_116_116, STATE_VARIABLE_ElseMissingInits_0_26, &STATE_VARIABLE_ElseMissingInits_117_117);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_67)), ((MR_Box) (StatusAfterITE_86)), STATE_VARIABLE_StatusMapAfterITE_0_10, &STATE_VARIABLE_StatusMapAfterITE_126_126);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = SVars_68;
      next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_10 = STATE_VARIABLE_StatusMapAfterITE_126_126;
      next_value_of_STATE_VARIABLE_VarSet_0_12 = STATE_VARIABLE_VarSet_110_110;
      next_value_of_STATE_VARIABLE_NeckCopyGoals_0_14 = STATE_VARIABLE_NeckCopyGoals_111_111;
      next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_16 = STATE_VARIABLE_ThenEndCopyGoals_112_112;
      next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_18 = STATE_VARIABLE_ElseEndCopyGoals_113_113;
      next_value_of_STATE_VARIABLE_ThenRenames_0_20 = STATE_VARIABLE_ThenRenames_114_114;
      next_value_of_STATE_VARIABLE_ElseRenames_0_22 = STATE_VARIABLE_ElseRenames_115_115;
      next_value_of_STATE_VARIABLE_ThenMissingInits_0_24 = STATE_VARIABLE_ThenMissingInits_116_116;
      next_value_of_STATE_VARIABLE_ElseMissingInits_0_26 = STATE_VARIABLE_ElseMissingInits_117_117;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_StatusMapAfterITE_0_10 = next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_10;
      STATE_VARIABLE_VarSet_0_12 = next_value_of_STATE_VARIABLE_VarSet_0_12;
      STATE_VARIABLE_NeckCopyGoals_0_14 = next_value_of_STATE_VARIABLE_NeckCopyGoals_0_14;
      STATE_VARIABLE_ThenEndCopyGoals_0_16 = next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_16;
      STATE_VARIABLE_ElseEndCopyGoals_0_18 = next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_18;
      STATE_VARIABLE_ThenRenames_0_20 = next_value_of_STATE_VARIABLE_ThenRenames_0_20;
      STATE_VARIABLE_ElseRenames_0_22 = next_value_of_STATE_VARIABLE_ElseRenames_0_22;
      STATE_VARIABLE_ThenMissingInits_0_24 = next_value_of_STATE_VARIABLE_ThenMissingInits_0_24;
      STATE_VARIABLE_ElseMissingInits_0_26 = next_value_of_STATE_VARIABLE_ElseMissingInits_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_116_97_116_101_95_118_97_114_95_105_110_95_105_116_101_95_95_91_49_44_32_50_93_95_48_25_p_0(
  MR_Word LocKind_28,
  MR_Word SVar_29,
  MR_Word StatusBefore_30,
  MR_Word StatusAfterCond_31,
  MR_Word StatusAfterThen_32,
  MR_Word StatusAfterElse_33,
  MR_Word * StatusAfterITE_34,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word * STATE_VARIABLE_VarSet_79,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_80,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_81,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_82,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_83,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_84,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_85,
  MR_Word STATE_VARIABLE_ThenRenames_0_86,
  MR_Word * STATE_VARIABLE_ThenRenames_87,
  MR_Word STATE_VARIABLE_ElseRenames_0_88,
  MR_Word * STATE_VARIABLE_ElseRenames_89,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_90,
  MR_Word * STATE_VARIABLE_ThenMissingInits_91,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_92,
  MR_Word * STATE_VARIABLE_ElseMissingInits_93)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterCond_31, StatusBefore_30);
  if (succeeded)
  {
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterThen_32, StatusAfterCond_31);
    if (succeeded)
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_33, StatusBefore_30);
      if (succeeded)
      {
        *StatusAfterITE_34 = StatusBefore_30;
        *STATE_VARIABLE_ThenMissingInits_91 = STATE_VARIABLE_ThenMissingInits_0_90;
        *STATE_VARIABLE_ThenEndCopyGoals_83 = STATE_VARIABLE_ThenEndCopyGoals_0_82;
      }
      else
        switch (MR_tag((MR_Word) StatusBefore_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String SVarName_48;
              MR_String Var_113;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29, &SVarName_48);
              Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_48);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ThenMissingInits_91 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_113));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ThenMissingInits_0_90));
              }
              *StatusAfterITE_34 = StatusAfterElse_33;
              *STATE_VARIABLE_ThenEndCopyGoals_83 = STATE_VARIABLE_ThenEndCopyGoals_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 2)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_34 = StatusBefore_30;
              *STATE_VARIABLE_ThenEndCopyGoals_83 = STATE_VARIABLE_ThenEndCopyGoals_0_82;
              *STATE_VARIABLE_ThenMissingInits_91 = STATE_VARIABLE_ThenMissingInits_0_90;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarBefore_45 = ((MR_Word) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 1))));
                  MR_Word VarAfterElse_46;
                  MR_Word CopyGoal_47;

                  VarAfterElse_46 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterElse_33);
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarBefore_45, VarAfterElse_46, &CopyGoal_47);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ThenEndCopyGoals_83 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_47));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ThenEndCopyGoals_0_82));
                  }
                  *StatusAfterITE_34 = StatusAfterElse_33;
                  *STATE_VARIABLE_ThenMissingInits_91 = STATE_VARIABLE_ThenMissingInits_0_90;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 2)");
                  return;
                }
                break;
            }
            break;
        }
      *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
      *STATE_VARIABLE_ElseRenames_89 = STATE_VARIABLE_ElseRenames_0_88;
      *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
    }
    else
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_33, StatusBefore_30);
      if (succeeded)
      {
        switch (MR_tag((MR_Word) StatusBefore_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_119;
              MR_String SVarName_148;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29, &SVarName_148);
              Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_148);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ElseMissingInits_93 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_119));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseMissingInits_0_92));
              }
              *StatusAfterITE_34 = StatusAfterThen_32;
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 3)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_34 = StatusBefore_30;
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
              *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarAfterThen_55;
                  MR_Word VarBefore_146 = ((MR_Word) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 1))));
                  MR_Word CopyGoal_147;

                  VarAfterThen_55 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterThen_32);
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarBefore_146, VarAfterThen_55, &CopyGoal_147);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ElseEndCopyGoals_85 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_147));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseEndCopyGoals_0_84));
                  }
                  *StatusAfterITE_34 = StatusAfterThen_32;
                  *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 3)");
                  return;
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_ElseRenames_89 = STATE_VARIABLE_ElseRenames_0_88;
      }
      else
      {
        MR_Word Var_124;
        MR_Word VarAfterElse_155;
        MR_Word VarAfterThen_156;

        VarAfterThen_156 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterThen_32);
        VarAfterElse_155 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterElse_33);
        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_124, 0) = ((MR_Box) (VarAfterElse_155));
          MR_hl_field(0, Var_124, 1) = ((MR_Box) (VarAfterThen_156));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ElseRenames_89 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseRenames_0_88));
        }
        *StatusAfterITE_34 = StatusAfterThen_32;
        *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
        *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
      }
      *STATE_VARIABLE_ThenMissingInits_91 = STATE_VARIABLE_ThenMissingInits_0_90;
      *STATE_VARIABLE_ThenEndCopyGoals_83 = STATE_VARIABLE_ThenEndCopyGoals_0_82;
    }
    *STATE_VARIABLE_NeckCopyGoals_81 = STATE_VARIABLE_NeckCopyGoals_0_80;
    *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
  }
  else
  {
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterThen_32, StatusAfterCond_31);
    if (succeeded)
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_33, StatusBefore_30);
      if (succeeded)
        switch (MR_tag((MR_Word) StatusBefore_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_130;
              MR_String SVarName_166;
              MR_Word FinalVar_167;
              MR_Word VarAfterCond_168;
              MR_Word NeckCopyGoal_169;
              MR_String SVarName_225;
              MR_String ProgVarBaseName_227;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29, &SVarName_166);
              Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_166);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ElseMissingInits_93 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_130));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseMissingInits_0_92));
              }
              SVarName_225 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29);
              ProgVarBaseName_227 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_225);
              mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_227, &FinalVar_167, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79);
              VarAfterCond_168 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterCond_31);
              hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarAfterCond_168, FinalVar_167, &NeckCopyGoal_169);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_NeckCopyGoals_81 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NeckCopyGoal_169));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_80));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *StatusAfterITE_34 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (FinalVar_167));
              }
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 5)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_34 = StatusBefore_30;
              *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
              *STATE_VARIABLE_NeckCopyGoals_81 = STATE_VARIABLE_NeckCopyGoals_0_80;
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
              *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FinalVar_62;
                  MR_Word VarAfterCond_63;
                  MR_Word NeckCopyGoal_64;
                  MR_Word ElseCopyGoal_65;
                  MR_Word VarBefore_165 = ((MR_Word) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 1))));
                  MR_String SVarName_203;
                  MR_String ProgVarBaseName_205;

                  SVarName_203 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29);
                  ProgVarBaseName_205 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_203);
                  mercury__varset__new_uniquely_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarBaseName_205, &FinalVar_62, STATE_VARIABLE_VarSet_0_78, STATE_VARIABLE_VarSet_79);
                  VarAfterCond_63 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterCond_31);
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarAfterCond_63, FinalVar_62, &NeckCopyGoal_64);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_NeckCopyGoals_81 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (NeckCopyGoal_64));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_80));
                  }
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarBefore_165, FinalVar_62, &ElseCopyGoal_65);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ElseEndCopyGoals_85 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ElseCopyGoal_65));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseEndCopyGoals_0_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *StatusAfterITE_34 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (FinalVar_62));
                  }
                  *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 5)");
                  return;
                }
                break;
            }
            break;
        }
      else
      {
        MR_Word VarAfterElse_172;
        MR_Word CopyGoal_173;
        MR_Word VarAfterCond_174;

        VarAfterCond_174 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterCond_31);
        VarAfterElse_172 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterElse_33);
        hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarAfterCond_174, VarAfterElse_172, &CopyGoal_173);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_NeckCopyGoals_81 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_173));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_80));
        }
        *StatusAfterITE_34 = StatusAfterElse_33;
        *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
        *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
        *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
      }
      *STATE_VARIABLE_ElseRenames_89 = STATE_VARIABLE_ElseRenames_0_88;
    }
    else
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_33, StatusBefore_30);
      if (succeeded)
      {
        switch (MR_tag((MR_Word) StatusBefore_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_140;
              MR_String SVarName_186;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_78, SVar_29, &SVarName_186);
              Var_140 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_186);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ElseMissingInits_93 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_140));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseMissingInits_0_92));
              }
              *StatusAfterITE_34 = StatusAfterThen_32;
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 7)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_34 = StatusBefore_30;
              *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
              *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarBefore_183 = ((MR_Word) ((MR_hl_field(3, StatusBefore_30, (MR_Integer) 1))));
                  MR_Word CopyGoal_184;
                  MR_Word VarAfterThen_185;

                  VarAfterThen_185 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterThen_32);
                  hlds__make_hlds__state_var__make_copy_goal_3_p_0(VarBefore_183, VarAfterThen_185, &CopyGoal_184);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ElseEndCopyGoals_85 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_184));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseEndCopyGoals_0_84));
                  }
                  *StatusAfterITE_34 = StatusAfterThen_32;
                  *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/25", (MR_String) "updated before (case 7)");
                  return;
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_ElseRenames_89 = STATE_VARIABLE_ElseRenames_0_88;
      }
      else
      {
        MR_Word Var_145;
        MR_Word VarAfterElse_195;
        MR_Word VarAfterThen_196;

        VarAfterThen_196 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterThen_32);
        VarAfterElse_195 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_28, StatusAfterElse_33);
        {
          Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_145, 0) = ((MR_Box) (VarAfterElse_195));
          MR_hl_field(0, Var_145, 1) = ((MR_Box) (VarAfterThen_196));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ElseRenames_89 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_145));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseRenames_0_88));
        }
        *StatusAfterITE_34 = StatusAfterThen_32;
        *STATE_VARIABLE_ElseMissingInits_93 = STATE_VARIABLE_ElseMissingInits_0_92;
        *STATE_VARIABLE_ElseEndCopyGoals_85 = STATE_VARIABLE_ElseEndCopyGoals_0_84;
      }
      *STATE_VARIABLE_NeckCopyGoals_81 = STATE_VARIABLE_NeckCopyGoals_0_80;
      *STATE_VARIABLE_VarSet_79 = STATE_VARIABLE_VarSet_0_78;
    }
    *STATE_VARIABLE_ThenMissingInits_91 = STATE_VARIABLE_ThenMissingInits_0_90;
    *STATE_VARIABLE_ThenEndCopyGoals_83 = STATE_VARIABLE_ThenEndCopyGoals_0_82;
  }
  *STATE_VARIABLE_ThenRenames_87 = STATE_VARIABLE_ThenRenames_0_86;
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word LocKind_4,
  MR_Word Status_5)
{
  MR_Word ProgVar_6;

  switch (LocKind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) Status_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
          break;
        case (MR_Integer) 1:
          ProgVar_6 = ((MR_Word) ((MR_hl_field(1, Status_5, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Status_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, (MR_Integer) 1))));
              break;
            case (MR_Integer) 1:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, (MR_Integer) 2))));
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) Status_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Status_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, (MR_Integer) 1))));
              break;
            case (MR_Integer) 1:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              break;
          }
          break;
      }
      break;
  }
  return ProgVar_6;
}

static void MR_CALL 
hlds__make_hlds__state_var__make_copy_goal_3_p_0(
  MR_Word FromVar_4,
  MR_Word ToVar_5,
  MR_Word * CopyGoal_6)
{
  MR_Word CopyGoal0_7;
  MR_Word Var_8;
  MR_Word Var_9;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (FromVar_4));
  }
  Var_9 = mercury__term_context__dummy_context_0_f_0();
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ToVar_5, Var_8, Var_9, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[2])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_7);
  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[27])), CopyGoal0_7, CopyGoal_6);
}

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word Context_7,
  MR_Word NextStateVars_8,
  MR_String WhenMissing_9,
  MR_String WhenNotMissing_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;

  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (WhenNotMissing_10));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[38])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Var_29 = parse_tree__error_spec__list_to_pieces_1_f_0(NextStateVars_8);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (WhenMissing_9));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[46])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[43])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[41])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_28);
  {
    Spec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_missing_inits_in_ite\'/6"));
    MR_hl_field(1, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_13, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_10;
  MR_Word conv2_STATE_VARIABLE_NextGoalId_22;
  MR_Word conv1_STATE_VARIABLE_DelayedRenamingMap_24;

  hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_DelayedRenamingMap_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NextGoalId_22));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DelayedRenamingMap_24));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(
  MR_Word Goal_5,
  MR_Word * Conjuncts_6,
  MR_Word STATE_VARIABLE_Store_0_18,
  MR_Word * STATE_VARIABLE_Store_19)
{
  MR_bool succeeded;
  MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 1))));
  MR_Word Conjuncts0_10;
  MR_Word Var_20;

  succeeded = ((((MR_tag((MR_Word) GoalExpr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
    Conjuncts0_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
    succeeded = (Var_20 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word NextGoalId0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_18, (MR_Integer) 0))));
    MR_Word DelayedRenamingMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_18, (MR_Integer) 1))));
    MR_Word Specs_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_18, (MR_Integer) 2))));
    MR_Word GoalId_14;
    MR_Word GoalDelayedRenaming_15;
    MR_Box conv0_GoalDelayedRenaming_15;

    GoalId_14 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_9);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), DelayedRenamingMap0_12, ((MR_Box) (GoalId_14)), &conv0_GoalDelayedRenaming_15);
    if (succeeded)
    {
      GoalDelayedRenaming_15 = ((MR_Word) (conv0_GoalDelayedRenaming_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NextGoalId_16;
      MR_Word DelayedRenamingMap_17;
      MR_Word Var_21;
      MR_Box conv5_NextGoalId_16;
      MR_Box conv4_DelayedRenamingMap_17;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (GoalDelayedRenaming_15));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), Var_21, Conjuncts0_10, Conjuncts_6, ((MR_Box) (NextGoalId0_11)), &conv5_NextGoalId_16, ((MR_Box) (DelayedRenamingMap0_12)), &conv4_DelayedRenamingMap_17);
      NextGoalId_16 = ((MR_Word) (conv5_NextGoalId_16));
      DelayedRenamingMap_17 = ((MR_Word) (conv4_DelayedRenamingMap_17));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Store_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (NextGoalId_16));
        MR_hl_field(0, base, 1) = ((MR_Box) (DelayedRenamingMap_17));
        MR_hl_field(0, base, 2) = ((MR_Box) (Specs_13));
      }
    }
    else
    {
      *Conjuncts_6 = Conjuncts0_10;
      *STATE_VARIABLE_Store_19 = STATE_VARIABLE_Store_0_18;
    }
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Conjuncts_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Store_19 = STATE_VARIABLE_Store_0_18;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(
  MR_Word DisjStates_9,
  MR_Word * Disjs_10,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word StateBefore_12,
  MR_Word * StateAfter_13,
  MR_Word STATE_VARIABLE_Store_0_29,
  MR_Word * STATE_VARIABLE_Store_30)
{
  MR_bool succeeded;
  MR_Word StatusMapBefore_15 = (MR_Word) (StateBefore_12);

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_15);
  if (succeeded)
  {
    MR_Word RevDisjs_16;

    hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(DisjStates_9, (MR_Word) ((MR_Unsigned) 0U), &RevDisjs_16);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevDisjs_16, Disjs_10);
    *StateAfter_13 = StateBefore_12;
    *STATE_VARIABLE_Store_30 = STATE_VARIABLE_Store_0_29;
  }
  else
  {
    MR_Word StatusListBefore_17;
    MR_Word ChangedStatusMapAfter_18;
    MR_Word StatusMapAfter_19;
    MR_Word ChangedStatusListAfter_20;
    MR_Word NextGoalId0_21;
    MR_Word DelayedRenamings0_22;
    MR_Word Specs0_23;
    MR_Word NextGoalId_24;
    MR_Word DelayedRenamings_25;
    MR_Word Specs_26;
    MR_Word Var_32;
    MR_Word RevDisjs_35;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_15, &StatusListBefore_17);
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
    hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(StatusListBefore_17, DisjStates_9, Var_32, &ChangedStatusMapAfter_18, StatusMapBefore_15, &StatusMapAfter_19);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ChangedStatusMapAfter_18, &ChangedStatusListAfter_20);
    *StateAfter_13 = (MR_Word) (StatusMapAfter_19);
    NextGoalId0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_29, (MR_Integer) 0))));
    DelayedRenamings0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_29, (MR_Integer) 1))));
    Specs0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_0_29, (MR_Integer) 2))));
    hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(DisjStates_9, StatusMapBefore_15, ChangedStatusListAfter_20, STATE_VARIABLE_VarSet_0_27, (MR_Word) ((MR_Unsigned) 0U), &RevDisjs_35, NextGoalId0_21, &NextGoalId_24, DelayedRenamings0_22, &DelayedRenamings_25, Specs0_23, &Specs_26);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevDisjs_35, Disjs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Store_30 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NextGoalId_24));
      MR_hl_field(0, base, 1) = ((MR_Box) (DelayedRenamings_25));
      MR_hl_field(0, base, 2) = ((MR_Box) (Specs_26));
    }
  }
  *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
}

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_10;
  MR_Word conv2_STATE_VARIABLE_NextGoalId_22;
  MR_Word conv1_STATE_VARIABLE_DelayedRenamingMap_24;

  hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_DelayedRenamingMap_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NextGoalId_22));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DelayedRenamingMap_24));
}

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevArms_0_5,
  MR_Word * STATE_VARIABLE_RevArms_6,
  MR_Word STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * STATE_VARIABLE_NextGoalId_8,
  MR_Word STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * STATE_VARIABLE_DelayedRenamings_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_DelayedRenamings_10 = STATE_VARIABLE_DelayedRenamings_0_9;
      *STATE_VARIABLE_NextGoalId_8 = STATE_VARIABLE_NextGoalId_0_7;
      *STATE_VARIABLE_RevArms_6 = STATE_VARIABLE_RevArms_0_5;
    }
    else
    {
      MR_Word ArmState_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArmStates_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Arm0_37 = ((MR_Word) ((MR_hl_field(0, ArmState_28, (MR_Integer) 0))));
      MR_Word StateAfterArm_38 = ((MR_Word) ((MR_hl_field(0, ArmState_28, (MR_Integer) 1))));
      MR_Word StatusMapAfterArm_39 = (MR_Word) (StateAfterArm_38);
      MR_Integer ArmIdNum_40;
      MR_Word ArmId_41;
      MR_Word UninitVarNames_42;
      MR_Word CopyGoals_43;
      MR_Word ArmRenames_44;
      MR_Word ArmExpr0_45;
      MR_Word ArmInfo0_46;
      MR_Word ArmExpr_47;
      MR_Word ArmInfo_54;
      MR_Word Arm_55;
      MR_Word STATE_VARIABLE_NextGoalId_64_64;
      MR_Word STATE_VARIABLE_DelayedRenamings_65_65;
      MR_Word STATE_VARIABLE_NextGoalId_66_66;
      MR_Word STATE_VARIABLE_DelayedRenamings_67_67;
      MR_Word STATE_VARIABLE_Specs_70_70;
      MR_Word STATE_VARIABLE_RevArms_71_71;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevArms_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NextGoalId_0_7;
      MR_Word next_value_of_STATE_VARIABLE_DelayedRenamings_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      mercury__counter__allocate_3_p_0(&ArmIdNum_40, STATE_VARIABLE_NextGoalId_0_7, &STATE_VARIABLE_NextGoalId_64_64);
      ArmId_41 = (MR_Word) (ArmIdNum_40);
      hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(HeadVar__3_3, HeadVar__2_2, StatusMapAfterArm_39, HeadVar__4_4, &UninitVarNames_42, &CopyGoals_43, &ArmRenames_44);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ArmId_41)), ((MR_Box) (ArmRenames_44)), STATE_VARIABLE_DelayedRenamings_0_9, &STATE_VARIABLE_DelayedRenamings_65_65);
      ArmExpr0_45 = ((MR_Word) ((MR_hl_field(0, Arm0_37, (MR_Integer) 0))));
      ArmInfo0_46 = ((MR_Word) ((MR_hl_field(0, Arm0_37, (MR_Integer) 1))));
      if ((CopyGoals_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ArmExpr_47 = ArmExpr0_45;
        STATE_VARIABLE_NextGoalId_66_66 = STATE_VARIABLE_NextGoalId_64_64;
        STATE_VARIABLE_DelayedRenamings_67_67 = STATE_VARIABLE_DelayedRenamings_65_65;
      }
      else
      {
        MR_Word ArmGoals0_50;
        MR_Word Var_69;
        MR_Word Conjuncts0_77;
        MR_Word Var_80;

        succeeded = ((((MR_tag((MR_Word) ArmExpr0_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArmExpr0_45, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_80 = ((MR_Unsigned) ((MR_hl_field(3, ArmExpr0_45, (MR_Integer) 1))) & (MR_Integer) 1);
          Conjuncts0_77 = ((MR_Word) ((MR_hl_field(3, ArmExpr0_45, (MR_Integer) 2))));
          succeeded = (Var_80 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word GoalId_78;
          MR_Word GoalDelayedRenaming_79;
          MR_Box conv0_GoalDelayedRenaming_79;

          GoalId_78 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ArmInfo0_46);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), STATE_VARIABLE_DelayedRenamings_65_65, ((MR_Box) (GoalId_78)), &conv0_GoalDelayedRenaming_79);
          if (succeeded)
          {
            GoalDelayedRenaming_79 = ((MR_Word) (conv0_GoalDelayedRenaming_79));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_81;
            MR_Box conv5_STATE_VARIABLE_NextGoalId_66_66;
            MR_Box conv4_STATE_VARIABLE_DelayedRenamings_67_67;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (GoalDelayedRenaming_79));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), Var_81, Conjuncts0_77, &ArmGoals0_50, ((MR_Box) (STATE_VARIABLE_NextGoalId_64_64)), &conv5_STATE_VARIABLE_NextGoalId_66_66, ((MR_Box) (STATE_VARIABLE_DelayedRenamings_65_65)), &conv4_STATE_VARIABLE_DelayedRenamings_67_67);
            STATE_VARIABLE_NextGoalId_66_66 = ((MR_Word) (conv5_STATE_VARIABLE_NextGoalId_66_66));
            STATE_VARIABLE_DelayedRenamings_67_67 = ((MR_Word) (conv4_STATE_VARIABLE_DelayedRenamings_67_67));
          }
          else
          {
            ArmGoals0_50 = Conjuncts0_77;
            STATE_VARIABLE_DelayedRenamings_67_67 = STATE_VARIABLE_DelayedRenamings_65_65;
            STATE_VARIABLE_NextGoalId_66_66 = STATE_VARIABLE_NextGoalId_64_64;
          }
        }
        else
        {
          {
            ArmGoals0_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArmGoals0_50, 0) = ((MR_Box) (Arm0_37));
            MR_hl_field(1, ArmGoals0_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DelayedRenamings_67_67 = STATE_VARIABLE_DelayedRenamings_65_65;
          STATE_VARIABLE_NextGoalId_66_66 = STATE_VARIABLE_NextGoalId_64_64;
        }
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArmGoals0_50, CopyGoals_43);
        {
          ArmExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArmExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ArmExpr_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ArmExpr_47, 2) = ((MR_Box) (Var_69));
        }
      }
      if ((UninitVarNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_11;
      else
      {
        MR_Word ArmContext_53;
        MR_Word Pieces_88;
        MR_Word Spec_89;
        MR_Word Var_94;
        MR_Word Var_95;

        ArmContext_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(ArmInfo0_46);
        Var_95 = parse_tree__error_spec__list_to_pieces_1_f_0(UninitVarNames_42);
        Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[51])));
        Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[48])), Var_94);
        {
          Spec_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_missing_inits_in_disjunct\'/4"));
          MR_hl_field(1, Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(1, Spec_89, 3) = ((MR_Box) (ArmContext_53));
          MR_hl_field(1, Spec_89, 4) = ((MR_Box) (Pieces_88));
        }
        {
          STATE_VARIABLE_Specs_70_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_70_70, 0) = ((MR_Box) (Spec_89));
          MR_hl_field(1, STATE_VARIABLE_Specs_70_70, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
        }
      }
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(ArmId_41, ArmInfo0_46, &ArmInfo_54);
      {
        Arm_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arm_55, 0) = ((MR_Box) (ArmExpr_47));
        MR_hl_field(0, Arm_55, 1) = ((MR_Box) (ArmInfo_54));
      }
      {
        STATE_VARIABLE_RevArms_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevArms_71_71, 0) = ((MR_Box) (Arm_55));
        MR_hl_field(1, STATE_VARIABLE_RevArms_71_71, 1) = ((MR_Box) (STATE_VARIABLE_RevArms_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArmStates_29;
      next_value_of_STATE_VARIABLE_RevArms_0_5 = STATE_VARIABLE_RevArms_71_71;
      next_value_of_STATE_VARIABLE_NextGoalId_0_7 = STATE_VARIABLE_NextGoalId_66_66;
      next_value_of_STATE_VARIABLE_DelayedRenamings_0_9 = STATE_VARIABLE_DelayedRenamings_67_67;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_70_70;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevArms_0_5 = next_value_of_STATE_VARIABLE_RevArms_0_5;
      STATE_VARIABLE_NextGoalId_0_7 = next_value_of_STATE_VARIABLE_NextGoalId_0_7;
      STATE_VARIABLE_DelayedRenamings_0_9 = next_value_of_STATE_VARIABLE_DelayedRenamings_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1136__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBefore_2,
  MR_Word StatusMapAfterArm_3,
  MR_Word VarSet_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Change_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Changes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word UninitVarNamesTail_19;
    MR_Word CopyGoalsTail_20;
    MR_Word RenamesTail_21;
    MR_Word StateVar_22;
    MR_Word AfterAllArmsStatus_23;
    MR_Word BeforeStatus_24;
    MR_Word AfterArmStatus_25;
    MR_Box conv0_BeforeStatus_24;
    MR_Box conv1_AfterArmStatus_25;

    hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(Changes_12, StatusMapBefore_2, StatusMapAfterArm_3, VarSet_4, &UninitVarNamesTail_19, &CopyGoalsTail_20, &RenamesTail_21);
    StateVar_22 = ((MR_Word) ((MR_hl_field(0, Change_11, (MR_Integer) 0))));
    AfterAllArmsStatus_23 = ((MR_Word) ((MR_hl_field(0, Change_11, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_2, ((MR_Box) (StateVar_22)), &conv0_BeforeStatus_24);
    BeforeStatus_24 = ((MR_Word) (conv0_BeforeStatus_24));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterArm_3, ((MR_Box) (StateVar_22)), &conv1_AfterArmStatus_25);
    AfterArmStatus_25 = ((MR_Word) (conv1_AfterArmStatus_25));
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(AfterArmStatus_25, BeforeStatus_24);
    if (succeeded)
    {
      MR_Word Var_55;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (AfterAllArmsStatus_23));
        MR_hl_field(0, Var_55, 4) = ((MR_Box) (AfterArmStatus_25));
      }
      mercury__require__expect_not_3_p_0(Var_55, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = AfterAllArmsStatus");
      switch (MR_tag((MR_Word) BeforeStatus_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Name_37;
            MR_String UninitVarName_38;

            mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, StateVar_22, &Name_37);
            UninitVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_37);
            *HeadVar__6_6 = CopyGoalsTail_20;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (UninitVarName_38));
              MR_hl_field(1, base, 1) = ((MR_Box) (UninitVarNamesTail_19));
            }
            *HeadVar__7_7 = RenamesTail_21;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BeforeVar_87 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_24, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                  return;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word AfterAllVar_79 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 1))));
                      MR_Word CopyGoal_80;
                      MR_Word CopyGoal0_100;
                      MR_Word Var_101;
                      MR_Word Var_102;

                      {
                        Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_101, 0) = ((MR_Box) (BeforeVar_87));
                      }
                      Var_102 = mercury__term_context__dummy_context_0_f_0();
                      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(AfterAllVar_79, Var_101, Var_102, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[2])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_100);
                      hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[27])), CopyGoal0_100, &CopyGoal_80);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__6_6 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_80));
                        MR_hl_field(1, base, 1) = ((MR_Box) (CopyGoalsTail_20));
                      }
                      *HeadVar__5_5 = UninitVarNamesTail_19;
                      *HeadVar__7_7 = RenamesTail_21;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                      return;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, BeforeStatus_24, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BeforeVar_26 = ((MR_Word) ((MR_hl_field(3, BeforeStatus_24, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word AfterAllVar_29 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 1))));
                          MR_Word CopyGoal_30;
                          MR_Word CopyGoal0_93;
                          MR_Word Var_94;
                          MR_Word Var_95;

                          {
                            Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_94, 0) = ((MR_Box) (BeforeVar_26));
                          }
                          Var_95 = mercury__term_context__dummy_context_0_f_0();
                          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(AfterAllVar_29, Var_94, Var_95, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[2])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_93);
                          hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[27])), CopyGoal0_93, &CopyGoal_30);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__6_6 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_30));
                            MR_hl_field(1, base, 1) = ((MR_Box) (CopyGoalsTail_20));
                          }
                          *HeadVar__5_5 = UninitVarNamesTail_19;
                          *HeadVar__7_7 = RenamesTail_21;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
                return;
              }
              break;
          }
          break;
      }
    }
    else
      switch (MR_tag((MR_Word) AfterArmStatus_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_ro");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, AfterArmStatus_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AfterArmVar_42 = ((MR_Word) ((MR_hl_field(3, AfterArmStatus_25, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word AfterAllVar_74 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, (MR_Integer) 1))));

                          *HeadVar__6_6 = CopyGoalsTail_20;
                          *HeadVar__5_5 = UninitVarNamesTail_19;
                          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (AfterArmVar_42)), ((MR_Box) (AfterAllVar_74)));
                          if (succeeded)
                            *HeadVar__7_7 = RenamesTail_21;
                          else
                          {
                            MR_Word Var_63;

                            {
                              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_63, 0) = ((MR_Box) (AfterArmVar_42));
                              MR_hl_field(0, Var_63, 1) = ((MR_Box) (AfterAllVar_74));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__7_7 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
                              MR_hl_field(1, base, 1) = ((MR_Box) (RenamesTail_21));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_updated");
                return;
              }
              break;
          }
          break;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_StatusMapAfter_6 = STATE_VARIABLE_StatusMapAfter_0_5;
      *STATE_VARIABLE_ChangedStatusMapAfter_4 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
    }
    else
    {
      MR_Word ArmState_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArmStates_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word StateAfterArm_20 = ((MR_Word) ((MR_hl_field(0, ArmState_15, (MR_Integer) 1))));
      MR_Word StatusMapAfterArm_21 = (MR_Word) (StateAfterArm_20);
      MR_Word STATE_VARIABLE_ChangedStatusMapAfter_26_26;
      MR_Word STATE_VARIABLE_StatusMapAfter_27_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;

      hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(HeadVar__1_1, StatusMapAfterArm_21, STATE_VARIABLE_ChangedStatusMapAfter_0_3, &STATE_VARIABLE_ChangedStatusMapAfter_26_26, STATE_VARIABLE_StatusMapAfter_0_5, &STATE_VARIABLE_StatusMapAfter_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArmStates_16;
      next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = STATE_VARIABLE_ChangedStatusMapAfter_26_26;
      next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = STATE_VARIABLE_StatusMapAfter_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ChangedStatusMapAfter_0_3 = next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      STATE_VARIABLE_StatusMapAfter_0_5 = next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapAfterArm_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_StatusMapAfter_6 = STATE_VARIABLE_StatusMapAfter_0_5;
      *STATE_VARIABLE_ChangedStatusMapAfter_4 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
    }
    else
    {
      MR_Word Before_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Befores_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(0, Before_14, (MR_Integer) 0))));
      MR_Word StatusBefore_20 = ((MR_Word) ((MR_hl_field(0, Before_14, (MR_Integer) 1))));
      MR_Word StatusAfter_21;
      MR_Word STATE_VARIABLE_ChangedStatusMapAfter_27_27;
      MR_Word STATE_VARIABLE_StatusMapAfter_28_28;
      MR_Box conv0_StatusAfter_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterArm_2, ((MR_Box) (SVar_19)), &conv0_StatusAfter_21);
      StatusAfter_21 = ((MR_Word) (conv0_StatusAfter_21));
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusBefore_20, StatusAfter_21);
      if (succeeded)
      {
        STATE_VARIABLE_StatusMapAfter_28_28 = STATE_VARIABLE_StatusMapAfter_0_5;
        STATE_VARIABLE_ChangedStatusMapAfter_27_27 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      }
      else
      {
        MR_Box conv1__AlreadyUpdated_22;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), STATE_VARIABLE_ChangedStatusMapAfter_0_3, ((MR_Box) (SVar_19)), &conv1__AlreadyUpdated_22);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
        {
          STATE_VARIABLE_StatusMapAfter_28_28 = STATE_VARIABLE_StatusMapAfter_0_5;
          STATE_VARIABLE_ChangedStatusMapAfter_27_27 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
        }
        else
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_19)), ((MR_Box) (StatusAfter_21)), STATE_VARIABLE_ChangedStatusMapAfter_0_3, &STATE_VARIABLE_ChangedStatusMapAfter_27_27);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_19)), ((MR_Box) (StatusAfter_21)), STATE_VARIABLE_StatusMapAfter_0_5, &STATE_VARIABLE_StatusMapAfter_28_28);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Befores_15;
      next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = STATE_VARIABLE_ChangedStatusMapAfter_27_27;
      next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = STATE_VARIABLE_StatusMapAfter_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ChangedStatusMapAfter_0_3 = next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      STATE_VARIABLE_StatusMapAfter_0_5 = next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1027__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * STATE_VARIABLE_RevDisjuncts_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevDisjuncts_3 = STATE_VARIABLE_RevDisjuncts_0_2;
    else
    {
      MR_Word GoalState_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalStates_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, GoalState_7, (MR_Integer) 0))));
      MR_Word State_11 = ((MR_Word) ((MR_hl_field(0, GoalState_7, (MR_Integer) 1))));
      MR_Word StatusMapAfterGoal_12 = (MR_Word) (State_11);
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_RevDisjuncts_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevDisjuncts_0_2;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_6[0]));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1));
        MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_15, 3) = ((MR_Box) (StatusMapAfterGoal_12));
      }
      mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140hlds.make_hlds.state_var.get_disjuncts_with_empty_states\'/3", (MR_String) "map after goal not empty");
      {
        STATE_VARIABLE_RevDisjuncts_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevDisjuncts_18_18, 0) = ((MR_Box) (Goal_10));
        MR_hl_field(1, STATE_VARIABLE_RevDisjuncts_18_18, 1) = ((MR_Box) (STATE_VARIABLE_RevDisjuncts_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = GoalStates_8;
      next_value_of_STATE_VARIABLE_RevDisjuncts_0_2 = STATE_VARIABLE_RevDisjuncts_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevDisjuncts_0_2 = next_value_of_STATE_VARIABLE_RevDisjuncts_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word StateVars_9,
  MR_Word StateBeforeOutside_10,
  MR_Word StateAfterInside_11,
  MR_Word * StateAfterOutside_12)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_111_99_97_108_95_115_116_97_116_101_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(StateVars_9, StateBeforeOutside_10, StateAfterInside_11, StateAfterOutside_12);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_111_99_97_108_95_115_116_97_116_101_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word StateVars_9,
  MR_Word StateBeforeOutside_10,
  MR_Word StateAfterInside_11,
  MR_Word * StateAfterOutside_12)
{
  MR_Word StatusMapBeforeOutside_13 = (MR_Word) (StateBeforeOutside_10);
  MR_Word StatusMapAfterOutside0_19 = (MR_Word) (StateAfterInside_11);
  MR_Word StatusMapAfterOutside_20;

  hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(StateVars_9, StatusMapBeforeOutside_13, StatusMapAfterOutside0_19, &StatusMapAfterOutside_20);
  *StateAfterOutside_12 = (MR_Word) (StatusMapAfterOutside_20);
}

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBeforeOutside_2,
  MR_Word STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * STATE_VARIABLE_StatusMapAfterOutside_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StatusMapAfterOutside_4 = STATE_VARIABLE_StatusMapAfterOutside_0_3;
    else
    {
      MR_Word SVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_StatusMapAfterOutside_17_17;
      MR_Word BeforeOutsideStatus_13;
      MR_Box conv0_BeforeOutsideStatus_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBeforeOutside_2, ((MR_Box) (SVar_9)), &conv0_BeforeOutsideStatus_13);
      if (succeeded)
      {
        BeforeOutsideStatus_13 = ((MR_Word) (conv0_BeforeOutsideStatus_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_9)), ((MR_Box) (BeforeOutsideStatus_13)), STATE_VARIABLE_StatusMapAfterOutside_0_3, &STATE_VARIABLE_StatusMapAfterOutside_17_17);
      else
      {
        MR_Box conv1_Var_14;

        mercury__map__det_remove_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_9)), &conv1_Var_14, STATE_VARIABLE_StatusMapAfterOutside_0_3, &STATE_VARIABLE_StatusMapAfterOutside_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SVars_10;
      next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3 = STATE_VARIABLE_StatusMapAfterOutside_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_StatusMapAfterOutside_0_3 = next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(
  MR_Word Context_8,
  MR_Word VarSet_9,
  MR_Word StateVars_10,
  MR_Word OutsideState_11,
  MR_Word * InsideState_12,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word StatusMapOutside_14 = (MR_Word) (OutsideState_11);
  MR_Word StatusMapInside_15;

  hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(Context_8, VarSet_9, StateVars_10, StatusMapOutside_14, &StatusMapInside_15, STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
  *InsideState_12 = (MR_Word) (StatusMapInside_15);
}

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StatusMap_0_4,
  MR_Word * STATE_VARIABLE_StatusMap_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_StatusMap_5 = STATE_VARIABLE_StatusMap_0_4;
    }
    else
    {
      MR_Word SVar_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SVars_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_27_27;
      MR_Word STATE_VARIABLE_StatusMap_29_29;
      MR_Box conv0__OldStatus_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), STATE_VARIABLE_StatusMap_0_4, ((MR_Box) (SVar_18)), &conv0__OldStatus_22);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_String Name_37;
        MR_Word Pieces_38;
        MR_Word Spec_39;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_50;
        MR_Word Var_51;

        Name_37 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, SVar_18);
        {
          Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_43, 0) = ((MR_Box) (Name_37));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[37])));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[35])));
          MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (Pieces_38));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_state_var_shadow\'/5"));
          MR_hl_field(3, Spec_39, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 60) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Spec_39, 3) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(3, Spec_39, 4) = ((MR_Box) (Var_50));
        }
        {
          STATE_VARIABLE_Specs_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_27_27, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(1, STATE_VARIABLE_Specs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_18)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_StatusMap_0_4, &STATE_VARIABLE_StatusMap_29_29);
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_18)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_StatusMap_0_4, &STATE_VARIABLE_StatusMap_29_29);
        STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = SVars_19;
      next_value_of_STATE_VARIABLE_StatusMap_0_4 = STATE_VARIABLE_StatusMap_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StatusMap_0_4 = next_value_of_STATE_VARIABLE_StatusMap_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_11;

  hlds__make_hlds__state_var__reset_updated_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Status_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Status_11));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(
  MR_Word Loc_4,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  switch (Loc_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_State_9 = STATE_VARIABLE_State_0_8;
      break;
    case (MR_Integer) 0:
      {
        MR_Word StatusMap0_6 = (MR_Word) (STATE_VARIABLE_State_0_8);
        MR_Word StatusMap_7;

        mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[5]), StatusMap0_6, &StatusMap_7);
        *STATE_VARIABLE_State_9 = (MR_Word) (StatusMap_7);
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Context_13,
  MR_Word FinalMap_14,
  MR_Word Goals0_15,
  MR_Word * Goal_16,
  MR_Word InitialSVarState_17,
  MR_Word FinalSVarState_18,
  MR_Word STATE_VARIABLE_SVarStore_0_20,
  MR_Word * STATE_VARIABLE_SVarStore_21)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_97_109_98_100_97_95_98_111_100_121_95_95_91_49_44_32_50_93_95_48_10_p_0(Context_13, FinalMap_14, Goals0_15, Goal_16, InitialSVarState_17, FinalSVarState_18, STATE_VARIABLE_SVarStore_0_20, STATE_VARIABLE_SVarStore_21);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_97_109_98_100_97_95_98_111_100_121_95_95_91_49_44_32_50_93_95_48_10_p_0(
  MR_Word Context_13,
  MR_Word FinalMap_14,
  MR_Word Goals0_15,
  MR_Word * Goal_16,
  MR_Word InitialSVarState_17,
  MR_Word FinalSVarState_18,
  MR_Word STATE_VARIABLE_SVarStore_0_20,
  MR_Word * STATE_VARIABLE_SVarStore_21)
{
  MR_bool succeeded;
  MR_Word FinalAssocList_22;
  MR_Word InitialSVarStatusMap_23;
  MR_Word FinalSVarStatusMap_24;
  MR_Word FinalSVarSubn_25;
  MR_Word CopyGoals_26;
  MR_Word Goals1_27;
  MR_Word Goal1_30;
  MR_Word GoalExpr1_31;
  MR_Word GoalInfo1_32;
  MR_Word GoalId1_33;
  MR_Word NextGoalId1_34;
  MR_Word DelayedRenamingMap1_35;
  MR_Word Specs_36;
  MR_Word DelayedRenamingMap_38;
  MR_Word NextGoalId_39;
  MR_Word STATE_VARIABLE_Store_49_47;
  MR_Word DelayedRenaming0_37;
  MR_Box conv0_DelayedRenaming0_37;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), FinalMap_14, &FinalAssocList_22);
  InitialSVarStatusMap_23 = (MR_Word) (InitialSVarState_17);
  FinalSVarStatusMap_24 = (MR_Word) (FinalSVarState_18);
  hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(FinalAssocList_22, InitialSVarStatusMap_23, FinalSVarStatusMap_24, (MR_Word) ((MR_Unsigned) 0U), &FinalSVarSubn_25, (MR_Word) ((MR_Unsigned) 0U), &CopyGoals_26);
  if ((CopyGoals_26 == (MR_Word) ((MR_Unsigned) 0U)))
    Goals1_27 = Goals0_15;
  else
    Goals1_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_15, CopyGoals_26);
  hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(Context_13, Goals1_27, &Goal1_30, STATE_VARIABLE_SVarStore_0_20, &STATE_VARIABLE_Store_49_47);
  GoalExpr1_31 = ((MR_Word) ((MR_hl_field(0, Goal1_30, (MR_Integer) 0))));
  GoalInfo1_32 = ((MR_Word) ((MR_hl_field(0, Goal1_30, (MR_Integer) 1))));
  GoalId1_33 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo1_32);
  NextGoalId1_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_47, (MR_Integer) 0))));
  DelayedRenamingMap1_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_47, (MR_Integer) 1))));
  Specs_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_47, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), DelayedRenamingMap1_35, ((MR_Box) (GoalId1_33)), &conv0_DelayedRenaming0_37);
  if (succeeded)
  {
    DelayedRenaming0_37 = ((MR_Word) (conv0_DelayedRenaming0_37));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_58;

    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[0]), DelayedRenaming0_37, FinalSVarSubn_25);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId1_33)), ((MR_Box) (Var_58)), DelayedRenamingMap1_35, &DelayedRenamingMap_38);
    NextGoalId_39 = NextGoalId1_34;
    *Goal_16 = Goal1_30;
  }
  else
  if ((FinalSVarSubn_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    NextGoalId_39 = NextGoalId1_34;
    DelayedRenamingMap_38 = DelayedRenamingMap1_35;
    *Goal_16 = Goal1_30;
  }
  else
  {
    MR_Integer GoalIdNum_42;
    MR_Word GoalId_43;
    MR_Word GoalInfo_44;

    mercury__counter__allocate_3_p_0(&GoalIdNum_42, NextGoalId1_34, &NextGoalId_39);
    GoalId_43 = (MR_Word) (GoalIdNum_42);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId_43)), ((MR_Box) (FinalSVarSubn_25)), DelayedRenamingMap1_35, &DelayedRenamingMap_38);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_43, GoalInfo1_32, &GoalInfo_44);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr1_31));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_44));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SVarStore_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NextGoalId_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedRenamingMap_38));
    MR_hl_field(0, base, 2) = ((MR_Box) (Specs_36));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word Context_15,
  MR_Word FinalMap_16,
  MR_Word HeadGoal0_17,
  MR_Word BodyGoal0_18,
  MR_Word * Goal_19,
  MR_Word InitialSVarState_20,
  MR_Word FinalSVarState_21,
  MR_Word STATE_VARIABLE_SVarStore_0_37,
  MR_Word * WarningSpecs_23,
  MR_Word * ErrorSpecs_24)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_99_108_97_117_115_101_95_98_111_100_121_95_95_91_50_93_95_48_12_p_0(Globals_13, Context_15, FinalMap_16, HeadGoal0_17, BodyGoal0_18, Goal_19, InitialSVarState_20, FinalSVarState_21, STATE_VARIABLE_SVarStore_0_37, WarningSpecs_23, ErrorSpecs_24);
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_99_108_97_117_115_101_95_98_111_100_121_95_95_91_50_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__severity_is_error_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_99_108_97_117_115_101_95_98_111_100_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word Context_15,
  MR_Word FinalMap_16,
  MR_Word HeadGoal0_17,
  MR_Word BodyGoal0_18,
  MR_Word * Goal_19,
  MR_Word InitialSVarState_20,
  MR_Word FinalSVarState_21,
  MR_Word STATE_VARIABLE_SVarStore_0_37,
  MR_Word * WarningSpecs_23,
  MR_Word * ErrorSpecs_24)
{
  MR_bool succeeded;
  MR_Word Goal1_25;
  MR_Word DelayedRenamings_27;
  MR_Word Specs_28;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_SVarStore_39_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word TypeCtorInfo_58_58;
  MR_Word TypeInfo_59_59;

  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (BodyGoal0_18));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadGoal0_17));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_98_111_100_121_95_95_91_49_44_32_50_93_95_48_10_p_0(Context_15, FinalMap_16, Var_38, &Goal1_25, InitialSVarState_20, FinalSVarState_21, STATE_VARIABLE_SVarStore_0_37, &STATE_VARIABLE_SVarStore_39_39);
  DelayedRenamings_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SVarStore_39_39, (MR_Integer) 1))));
  Specs_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SVarStore_39_39, (MR_Integer) 2))));
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[2]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_99_108_97_117_115_101_95_98_111_100_121_95_95_91_50_93_95_48_12_p_0_1));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Globals_13));
  }
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_42, Specs_28, ErrorSpecs_24, WarningSpecs_23);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), FinalMap_16);
  if (succeeded)
  {
    TypeCtorInfo_58_58 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    TypeInfo_59_59 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_58_58, TypeInfo_59_59, DelayedRenamings_27);
  }
  if (succeeded)
    *Goal_19 = Goal1_25;
  else
  {
    MR_Word Goal2_33;
    MR_Word SeenLater0_35;
    MR_Word Var_54;
    MR_Word _SeenLater_36;

    Var_54 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
    hlds__hlds_goal__incremental_rename_vars_in_goal_4_p_0(Var_54, DelayedRenamings_27, Goal1_25, &Goal2_33);
    hlds__goal_util__goal_vars_2_p_0(HeadGoal0_17, &SeenLater0_35);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Goal2_33, Goal_19, SeenLater0_35, &_SeenLater_36);
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_98_111_100_121_95_95_91_49_44_32_50_93_95_48_10_p_0(
  MR_Word Context_13,
  MR_Word FinalMap_14,
  MR_Word Goals0_15,
  MR_Word * Goal_16,
  MR_Word InitialSVarState_17,
  MR_Word FinalSVarState_18,
  MR_Word STATE_VARIABLE_Store_0_45,
  MR_Word * STATE_VARIABLE_Store_46)
{
  MR_bool succeeded;
  MR_Word FinalAssocList_20;
  MR_Word InitialSVarStatusMap_21;
  MR_Word FinalSVarStatusMap_22;
  MR_Word FinalSVarSubn_23;
  MR_Word CopyGoals_24;
  MR_Word Goals1_25;
  MR_Word Goal1_28;
  MR_Word GoalExpr1_29;
  MR_Word GoalInfo1_30;
  MR_Word GoalId1_31;
  MR_Word NextGoalId1_32;
  MR_Word DelayedRenamingMap1_33;
  MR_Word Specs_34;
  MR_Word DelayedRenamingMap_38;
  MR_Word NextGoalId_39;
  MR_Word STATE_VARIABLE_Store_49_49;
  MR_Word DelayedRenaming0_35;
  MR_Box conv0_DelayedRenaming0_35;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), FinalMap_14, &FinalAssocList_20);
  InitialSVarStatusMap_21 = (MR_Word) (InitialSVarState_17);
  FinalSVarStatusMap_22 = (MR_Word) (FinalSVarState_18);
  hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(FinalAssocList_20, InitialSVarStatusMap_21, FinalSVarStatusMap_22, (MR_Word) ((MR_Unsigned) 0U), &FinalSVarSubn_23, (MR_Word) ((MR_Unsigned) 0U), &CopyGoals_24);
  if ((CopyGoals_24 == (MR_Word) ((MR_Unsigned) 0U)))
    Goals1_25 = Goals0_15;
  else
    Goals1_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_15, CopyGoals_24);
  hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(Context_13, Goals1_25, &Goal1_28, STATE_VARIABLE_Store_0_45, &STATE_VARIABLE_Store_49_49);
  GoalExpr1_29 = ((MR_Word) ((MR_hl_field(0, Goal1_28, (MR_Integer) 0))));
  GoalInfo1_30 = ((MR_Word) ((MR_hl_field(0, Goal1_28, (MR_Integer) 1))));
  GoalId1_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo1_30);
  NextGoalId1_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_49, (MR_Integer) 0))));
  DelayedRenamingMap1_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_49, (MR_Integer) 1))));
  Specs_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Store_49_49, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), DelayedRenamingMap1_33, ((MR_Box) (GoalId1_31)), &conv0_DelayedRenaming0_35);
  if (succeeded)
  {
    DelayedRenaming0_35 = ((MR_Word) (conv0_DelayedRenaming0_35));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_60;

    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[0]), DelayedRenaming0_35, FinalSVarSubn_23);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId1_31)), ((MR_Box) (Var_60)), DelayedRenamingMap1_33, &DelayedRenamingMap_38);
    NextGoalId_39 = NextGoalId1_32;
    *Goal_16 = Goal1_28;
  }
  else
  if ((FinalSVarSubn_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    NextGoalId_39 = NextGoalId1_32;
    DelayedRenamingMap_38 = DelayedRenamingMap1_33;
    *Goal_16 = Goal1_28;
  }
  else
  {
    MR_Integer GoalIdNum_42;
    MR_Word GoalId_43;
    MR_Word GoalInfo_44;

    mercury__counter__allocate_3_p_0(&GoalIdNum_42, NextGoalId1_32, &NextGoalId_39);
    GoalId_43 = (MR_Word) (GoalIdNum_42);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId_43)), ((MR_Box) (FinalSVarSubn_23)), DelayedRenamingMap1_33, &DelayedRenamingMap_38);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_43, GoalInfo1_30, &GoalInfo_44);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr1_29));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_44));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Store_46 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NextGoalId_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedRenamingMap_38));
    MR_hl_field(0, base, 2) = ((MR_Box) (Specs_34));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitialStatusMap_2,
  MR_Word FinalStatusMap_3,
  MR_Word STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * STATE_VARIABLE_CopyGoals_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CopyGoals_7 = STATE_VARIABLE_CopyGoals_0_6;
      *STATE_VARIABLE_FinalSVarSubn_5 = STATE_VARIABLE_FinalSVarSubn_0_4;
    }
    else
    {
      MR_Word Head_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SVar_22 = ((MR_Word) ((MR_hl_field(0, Head_16, (MR_Integer) 0))));
      MR_Word FinalHeadVar_23 = ((MR_Word) ((MR_hl_field(0, Head_16, (MR_Integer) 1))));
      MR_Word InitialStatus_24;
      MR_Word FinalStatus_25;
      MR_Word STATE_VARIABLE_CopyGoals_38_38;
      MR_Word STATE_VARIABLE_FinalSVarSubn_39_39;
      MR_Box conv0_InitialStatus_24;
      MR_Box conv1_FinalStatus_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CopyGoals_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), InitialStatusMap_2, ((MR_Box) (SVar_22)), &conv0_InitialStatus_24);
      InitialStatus_24 = ((MR_Word) (conv0_InitialStatus_24));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), FinalStatusMap_3, ((MR_Box) (SVar_22)), &conv1_FinalStatus_25);
      FinalStatus_25 = ((MR_Word) (conv1_FinalStatus_25));
      switch (MR_tag((MR_Word) FinalStatus_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_FinalSVarSubn_39_39 = STATE_VARIABLE_FinalSVarSubn_0_4;
            STATE_VARIABLE_CopyGoals_38_38 = STATE_VARIABLE_CopyGoals_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "readonly status");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, FinalStatus_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LastVar_26 = ((MR_Word) ((MR_hl_field(3, FinalStatus_25, (MR_Integer) 1))));

                succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(FinalStatus_25, InitialStatus_24);
                if (succeeded)
                {
                  MR_Word CopyGoal_27;
                  MR_Word CopyGoal0_47;
                  MR_Word Var_48;
                  MR_Word Var_49;

                  {
                    Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_48, 0) = ((MR_Box) (LastVar_26));
                  }
                  Var_49 = mercury__term_context__dummy_context_0_f_0();
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FinalHeadVar_23, Var_48, Var_49, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[2])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_47);
                  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[27])), CopyGoal0_47, &CopyGoal_27);
                  {
                    STATE_VARIABLE_CopyGoals_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CopyGoals_38_38, 0) = ((MR_Box) (CopyGoal_27));
                    MR_hl_field(1, STATE_VARIABLE_CopyGoals_38_38, 1) = ((MR_Box) (STATE_VARIABLE_CopyGoals_0_6));
                  }
                  STATE_VARIABLE_FinalSVarSubn_39_39 = STATE_VARIABLE_FinalSVarSubn_0_4;
                }
                else
                {
                  MR_Word Var_40;

                  {
                    Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_40, 0) = ((MR_Box) (LastVar_26));
                    MR_hl_field(0, Var_40, 1) = ((MR_Box) (FinalHeadVar_23));
                  }
                  {
                    STATE_VARIABLE_FinalSVarSubn_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_FinalSVarSubn_39_39, 0) = ((MR_Box) (Var_40));
                    MR_hl_field(1, STATE_VARIABLE_FinalSVarSubn_39_39, 1) = ((MR_Box) (STATE_VARIABLE_FinalSVarSubn_0_4));
                  }
                  STATE_VARIABLE_CopyGoals_38_38 = STATE_VARIABLE_CopyGoals_0_6;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
                return;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_17;
      next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4 = STATE_VARIABLE_FinalSVarSubn_39_39;
      next_value_of_STATE_VARIABLE_CopyGoals_0_6 = STATE_VARIABLE_CopyGoals_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FinalSVarSubn_0_4 = next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4;
      STATE_VARIABLE_CopyGoals_0_6 = next_value_of_STATE_VARIABLE_CopyGoals_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
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
          MR_Word TypeInfo_26_26;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_22_22;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_11, ArgY3_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_21_21;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_24_24;
              MR_Word TypeInfo_25_25;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Conjuncts_6;
  MR_Word conv0_STATE_VARIABLE_Store_19;

  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Conjuncts_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Store_19);
  *wrapper_arg_2 = ((MR_Box) (conv1_Conjuncts_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Store_19));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(
  MR_Word Context_6,
  MR_Word Goals_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Store_0_14,
  MR_Word * STATE_VARIABLE_Store_15)
{
  MR_Word GoalConjuncts_10;
  MR_Word Conjuncts_11;
  MR_Word GoalExpr_12;
  MR_Word GoalInfo_13;
  MR_Box conv2_STATE_VARIABLE_Store_15;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[4]), Goals_7, &GoalConjuncts_10, ((MR_Box) (STATE_VARIABLE_Store_0_14)), &conv2_STATE_VARIABLE_Store_15);
  *STATE_VARIABLE_Store_15 = ((MR_Word) (conv2_STATE_VARIABLE_Store_15));
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalConjuncts_10, &Conjuncts_11);
  {
    GoalExpr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_12, 2) = ((MR_Box) (Conjuncts_11));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_6, &GoalInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_8;
    MR_Word Cases_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 2))));
    MR_Word Goal_16;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Goal0_15, &Goal_16, SeenAfter_3, &SeenBefore_11);
    {
      Case_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_8, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_8, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_8, 2) = ((MR_Box) (Goal_16));
    }
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(Cases0_7, &Cases_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Disjunct0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Disjunct_8;
    MR_Word Disjuncts_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Disjunct0_6, &Disjunct_8, SeenAfter_3, &SeenBefore_11);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_7, &Disjuncts_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *SeenBefore_4 = SeenAfter_3;
  }
  else
  {
    MR_Word RevConjunct0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word RevConjuncts0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RevConjunct_9;
    MR_Word RevConjuncts_10;
    MR_Word SeenBetween_13;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(RevConjunct0_7, &RevConjunct_9, SeenAfter_3, &SeenBetween_13);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_8, &RevConjuncts_10, SeenBetween_13, SeenBefore_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RevConjunct_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevConjuncts_10));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2094__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_60;
        MR_Word GoalExpr_135;

        hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_59, &SubGoal_60, SeenAfter_7, SeenBefore_8);
        GoalExpr_135 = (MR_Word) ((MR_Word) (SubGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_135));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word GoalVars0_16;
        MR_Word TypeCtorInfo_159_159;

        hlds__goal_util__goal_vars_2_p_0(Goal0_5, &GoalVars0_16);
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 15);
        if (succeeded)
        {
          TypeCtorInfo_159_159 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_159_159, SeenAfter_7, LHSVar_11);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Var_109;

          Var_109 = hlds__make_goal__true_goal_expr_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
          }
          *SeenBefore_8 = SeenAfter_7;
        }
        else
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_16, SeenAfter_7, SeenBefore_8);
          *Goal_6 = Goal0_5;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalVars0_129;

        hlds__goal_util__goal_vars_2_p_0(Goal0_5, &GoalVars0_129);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
        *Goal_6 = Goal0_5;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word GoalVars0_129;

            hlds__goal_util__goal_vars_2_p_0(Goal0_5, &GoalVars0_129);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
            *Goal_6 = Goal0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjKind_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word RevConjuncts0_37;
            MR_Word RevConjuncts_38;
            MR_Word Conjuncts_39;
            MR_Word GoalExpr_40;

            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_36, &RevConjuncts0_37);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_37, &RevConjuncts_38, SeenAfter_7, SeenBefore_8);
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevConjuncts_38, &Conjuncts_39);
            {
              GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_40, 1) = (MR_Box) ((MR_Unsigned) (ConjKind_35));
              MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (Conjuncts_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Disjuncts_42;
            MR_Word SeenBefores_43;
            MR_Word GoalExpr_130;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_41, &Disjuncts_42, SeenAfter_7, &SeenBefores_43);
            {
              GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Disjuncts_42));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_43, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_130));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CanFail_45 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_47;
            MR_Word SeenBefore0_48;
            MR_Word GoalExpr_131;
            MR_Word SeenBefores_132;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(Cases0_46, &Cases_47, SeenAfter_7, &SeenBefores_132);
            {
              GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (SwitchVar_44));
              MR_hl_field(3, GoalExpr_131, 2) = (MR_Box) ((MR_Unsigned) (CanFail_45));
              MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Cases_47));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_132, &SeenBefore0_48);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_44, SeenBefore0_48, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_131));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word GoalExpr_140;
            MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_143;

            switch (MR_tag((MR_Word) Reason_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ScopeVars_69 = ((MR_Word) ((MR_hl_field(0, Reason_61, (MR_Integer) 0))));
                  MR_Word SeenBefore0_138;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_138);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_69, SeenBefore0_138, SeenBefore_8);
                }
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ScopeVars_174 = ((MR_Word) ((MR_hl_field(2, Reason_61, (MR_Integer) 0))));
                  MR_Word SeenBefore0_175;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_175);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_174, SeenBefore0_175, SeenBefore_8);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_61, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ScopeVar_64 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 1))));
                      MR_Word SeenBefore0_136;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_136);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_64, SeenBefore0_136, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ScopeVar_177 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 1))));
                      MR_Word SeenBefore0_178;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_178);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_177, SeenBefore0_178, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_62 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 1))));

                      SubGoal_143 = SubGoal0_142;
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_62, SeenAfter_7, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ScopeVars_180 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 5))));
                      MR_Word SeenBefore0_181;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_181);
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_180, SeenBefore0_181, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_66 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 1))));
                      MR_Word LCSVar_67 = ((MR_Word) ((MR_hl_field(3, Reason_61, (MR_Integer) 2))));
                      MR_Word Var_110;
                      MR_Word Var_111;
                      MR_Word SeenBefore0_137;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_137);
                      {
                        Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_111, 0) = ((MR_Box) (LCSVar_67));
                        MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_110, 0) = ((MR_Box) (LCVar_66));
                        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_110, SeenBefore0_137, SeenBefore_8);
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (SubGoal_143));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ITEVars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word Else_53;
            MR_Word SeenBeforeElse_54;
            MR_Word Then_55;
            MR_Word SeenAfterThen_56;
            MR_Word Cond_57;
            MR_Word SeenBeforeCond_58;
            MR_Word GoalExpr_133;
            MR_Word SeenBefore0_134;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Else0_52, &Else_53, SeenAfter_7, &SeenBeforeElse_54);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Then0_51, &Then_55, SeenAfter_7, &SeenAfterThen_56);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Cond0_50, &Cond_57, SeenAfterThen_56, &SeenBeforeCond_58);
            {
              GoalExpr_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_133, 1) = ((MR_Box) (ITEVars_49));
              MR_hl_field(3, GoalExpr_133, 2) = ((MR_Box) (Cond_57));
              MR_hl_field(3, GoalExpr_133, 3) = ((MR_Box) (Then_55));
              MR_hl_field(3, GoalExpr_133, 4) = ((MR_Box) (Else_53));
            }
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeCond_58, SeenBeforeElse_54, &SeenBefore0_134);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITEVars_49, SeenBefore0_134, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_133));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word ShortHand_94;
            MR_Word GoalExpr_158;

            switch (MR_tag((MR_Word) ShortHand0_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_102 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, (MR_Integer) 0))));
                  MR_Word RightGoal0_103 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word LeftGoal_104;
                  MR_Word SeenBeforeLeft_105;
                  MR_Word RightGoal_106;
                  MR_Word SeenBeforeRight_107;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(LeftGoal0_102, &LeftGoal_104, SeenAfter_7, &SeenBeforeLeft_105);
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(RightGoal0_103, &RightGoal_106, SeenAfter_7, &SeenBeforeRight_107);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeLeft_105, SeenBeforeRight_107, SeenBefore_8);
                  {
                    ShortHand_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_94, 0) = ((MR_Box) (LeftGoal_104));
                    MR_hl_field(0, ShortHand_94, 1) = ((MR_Box) (RightGoal_106));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicType_83 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word OuterInitVar_84;
                  MR_Word OuterFinalVar_85;
                  MR_Word InnerInitVar_86;
                  MR_Word InnerFinalVar_87;
                  MR_Word MaybeOutputVars_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 3))));
                  MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 6))));
                  MR_Word MainGoal_92;
                  MR_Word OrElseGoals_93;
                  MR_Word SeenBefore1_95;
                  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 2))));
                  MR_Word Var_115;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_125;
                  MR_Word Var_126;
                  MR_Word SeenBefores_146;
                  MR_Word SeenBefore0_147;
                  MR_Word Disjunct0_184 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 4))));
                  MR_Word Disjuncts0_185 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, (MR_Integer) 5))));
                  MR_Word SeenBefore_189;
                  MR_Word SeenBefores_190;

                  OuterInitVar_84 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
                  OuterFinalVar_85 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 1))));
                  InnerInitVar_86 = ((MR_Word) ((MR_hl_field(0, Var_114, (MR_Integer) 0))));
                  InnerFinalVar_87 = ((MR_Word) ((MR_hl_field(0, Var_114, (MR_Integer) 1))));
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_115, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[1]));
                    MR_hl_field(0, Var_115, 1) = ((MR_Box) (hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1));
                    MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_115, 3) = ((MR_Box) (OrElseInners_91));
                    MR_hl_field(0, Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140hlds.make_hlds.state_var.delete_unneeded_copy_goals\'/4", (MR_String) "OrElseInners != []");
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Disjunct0_184, &MainGoal_92, SeenAfter_7, &SeenBefore_189);
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_185, &OrElseGoals_93, SeenAfter_7, &SeenBefores_190);
                  {
                    SeenBefores_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SeenBefores_146, 0) = ((MR_Box) (SeenBefore_189));
                    MR_hl_field(1, SeenBefores_146, 1) = ((MR_Box) (SeenBefores_190));
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_94, 0) = (MR_Box) ((MR_Unsigned) (AtomicType_83));
                    MR_hl_field(1, ShortHand_94, 1) = ((MR_Box) (Var_113));
                    MR_hl_field(1, ShortHand_94, 2) = ((MR_Box) (Var_114));
                    MR_hl_field(1, ShortHand_94, 3) = ((MR_Box) (MaybeOutputVars_88));
                    MR_hl_field(1, ShortHand_94, 4) = ((MR_Box) (MainGoal_92));
                    MR_hl_field(1, ShortHand_94, 5) = ((MR_Box) (OrElseGoals_93));
                    MR_hl_field(1, ShortHand_94, 6) = ((MR_Box) (OrElseInners_91));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_146, &SeenBefore0_147);
                  {
                    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_126, 0) = ((MR_Box) (InnerFinalVar_87));
                    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_125, 0) = ((MR_Box) (InnerInitVar_86));
                    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
                  }
                  {
                    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_124, 0) = ((MR_Box) (OuterFinalVar_85));
                    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
                  }
                  {
                    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_123, 0) = ((MR_Box) (OuterInitVar_84));
                    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_124));
                  }
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_123, SeenBefore0_147, &SeenBefore1_95);
                  if ((MaybeOutputVars_88 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_95;
                  else
                  {
                    MR_Word OutputVars_96 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_88, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_96, SeenBefore1_95, SeenBefore_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOStateVars_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 0))));
                  MR_Word ResultVar_98 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 1))));
                  MR_Word SeenBefore0_148;
                  MR_Word SubGoal0_149 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, (MR_Integer) 2))));
                  MR_Word SubGoal_150;
                  MR_Word SeenBefore1_151;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_149, &SubGoal_150, SeenAfter_7, &SeenBefore0_148);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_98, SeenBefore0_148, &SeenBefore1_151);
                  if ((MaybeIOStateVars_97 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_151;
                  else
                  {
                    MR_Word InitVar_99;
                    MR_Word FinalVar_100;
                    MR_Word SeenBefore2_101;
                    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, MaybeIOStateVars_97, (MR_Integer) 0))));

                    InitVar_99 = ((MR_Word) ((MR_hl_field(0, Var_128, (MR_Integer) 0))));
                    FinalVar_100 = ((MR_Word) ((MR_hl_field(0, Var_128, (MR_Integer) 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InitVar_99, SeenBefore1_151, &SeenBefore2_101);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_100, SeenBefore2_101, SeenBefore_8);
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_94, 0) = ((MR_Box) (MaybeIOStateVars_97));
                    MR_hl_field(2, ShortHand_94, 1) = ((MR_Box) (ResultVar_98));
                    MR_hl_field(2, ShortHand_94, 2) = ((MR_Box) (SubGoal_150));
                  }
                }
                break;
            }
            {
              GoalExpr_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_158, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_158, 1) = ((MR_Box) (ShortHand_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_158));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(
  MR_Word Context_11,
  MR_Word Args0_12,
  MR_Word * Args_13,
  MR_Word * FinalMap_14,
  MR_Word OutsideState_15,
  MR_Word * InsideState_16,
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word OutsideStatusMap_19 = (MR_Word) (OutsideState_15);
  MR_Word OutsideStatusList_20;
  MR_Word InsideStatusList_21;
  MR_Word InsideStatusMap_22;
  MR_Word InsideState0_23;
  MR_Word Var_29;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), OutsideStatusMap_19, &OutsideStatusList_20);
  hlds__make_hlds__state_var__make_svars_read_only_4_p_0(Context_11, OutsideStatusList_20, &InsideStatusList_21);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), InsideStatusList_21, &InsideStatusMap_22);
  InsideState0_23 = (MR_Word) (InsideStatusMap_22);
  Var_29 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
  hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(Args0_12, Args_13, Var_29, FinalMap_14, InsideState0_23, InsideState_16, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
}

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SVar_9;
    MR_Word CurStatus_10;
    MR_Word CurTail_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word LambdaTail_13;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    SVar_9 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    CurStatus_10 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    hlds__make_hlds__state_var__make_svars_read_only_4_p_0(HeadVar__2_2, CurTail_11, &LambdaTail_13);
    switch (MR_tag((MR_Word) CurStatus_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = LambdaTail_13;
        break;
      case (MR_Integer) 1:
        *HeadVar__4_4 = LambdaTail_13;
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CurStatus_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(3, CurStatus_10, (MR_Integer) 1))));
              MR_Word LambdaStatus_20;
              MR_Word Var_23;

              {
                LambdaStatus_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, LambdaStatus_20, 0) = ((MR_Box) (Var_18));
                MR_hl_field(2, LambdaStatus_20, 1) = NULL;
                MR_hl_field(2, LambdaStatus_20, 2) = ((MR_Box) (HeadVar__2_2));
              }
              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_23, 0) = ((MR_Box) (SVar_9));
                MR_hl_field(0, Var_23, 1) = ((MR_Box) (LambdaStatus_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_24 = ((MR_Word) ((MR_hl_field(3, CurStatus_10, (MR_Integer) 1))));
              MR_Word LambdaStatus_25;
              MR_Word Var_26;

              {
                LambdaStatus_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, LambdaStatus_25, 0) = ((MR_Box) (Var_24));
                MR_hl_field(2, LambdaStatus_25, 1) = NULL;
                MR_hl_field(2, LambdaStatus_25, 2) = ((MR_Box) (HeadVar__2_2));
              }
              {
                Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_26, 0) = ((MR_Box) (SVar_9));
                MR_hl_field(0, Var_26, 1) = ((MR_Box) (LambdaStatus_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
                MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(
  MR_Word Args0_10,
  MR_Word * Args_11,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word * FinalMap_13,
  MR_Word * STATE_VARIABLE_State_19,
  MR_Word * STATE_VARIABLE_Store_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word STATE_VARIABLE_State_23_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_32;

  Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
  STATE_VARIABLE_State_23_23 = (MR_Word) (Var_27);
  Var_30 = mercury__counter__init_1_f_0((MR_Integer) 1);
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Store_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_25 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
  hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(Args0_10, Args_11, Var_25, FinalMap_13, STATE_VARIABLE_State_23_23, STATE_VARIABLE_State_19, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(
  MR_Word Term0_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_FinalMap_0_46,
  MR_Word * STATE_VARIABLE_FinalMap_47,
  MR_Word STATE_VARIABLE_State_0_48,
  MR_Word * STATE_VARIABLE_State_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_11)) == (MR_Integer) 0))
  {
    MR_Word Functor_19 = ((MR_Word) ((MR_hl_field(0, Term0_11, (MR_Integer) 0))));
    MR_Word SubTerms0_20 = ((MR_Word) ((MR_hl_field(0, Term0_11, (MR_Integer) 1))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Term0_11, (MR_Integer) 2))));
    MR_Word StateVar_22;
    MR_String Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    succeeded = ((MR_tag((MR_Word) Functor_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_54 = ((MR_String) ((MR_hl_field(0, Functor_19, (MR_Integer) 0))));
      succeeded = (strcmp(Var_54, (MR_String) "!.") == 0);
      if (succeeded)
      {
        succeeded = (SubTerms0_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_55 = ((MR_Word) ((MR_hl_field(1, SubTerms0_20, (MR_Integer) 0))));
          Var_56 = ((MR_Word) ((MR_hl_field(1, SubTerms0_20, (MR_Integer) 1))));
          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 1);
            if (succeeded)
              StateVar_22 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word StatusMap0_24 = (MR_Word) (STATE_VARIABLE_State_0_48);
      MR_Word StatusMap_28;
      MR_Word OldStatus_25;
      MR_Box conv0_OldStatus_25;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_24, ((MR_Box) (StateVar_22)), &conv0_OldStatus_25);
      if (succeeded)
      {
        OldStatus_25 = ((MR_Word) (conv0_OldStatus_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (MR_tag((MR_Word) OldStatus_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_26;
              MR_Word Status_27;
              MR_String SVarName_133;
              MR_String ProgVarName_134;
              MR_String Var_152;

              SVarName_133 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_50, StateVar_22);
              Var_152 = mercury__string__f_43_43_2_f_0(SVarName_133, (MR_String) "_0");
              ProgVarName_134 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_152);
              mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_134, &Var_26, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
                MR_hl_field(1, base, 1) = ((MR_Box) (Context_21));
              }
              {
                Status_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Status_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Status_27, 1) = ((MR_Box) (Var_26));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_22)), ((MR_Box) (Status_27)), StatusMap0_24, &StatusMap_28);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !.");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_85;
              MR_Word Status_86;
              MR_String SVarName_111;
              MR_String ProgVarName_112;
              MR_String Var_130;

              SVarName_111 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_50, StateVar_22);
              Var_130 = mercury__string__f_43_43_2_f_0(SVarName_111, (MR_String) "_0");
              ProgVarName_112 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_130);
              mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_112, &Var_85, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_85));
                MR_hl_field(1, base, 1) = ((MR_Box) (Context_21));
              }
              {
                Status_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Status_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Status_86, 1) = ((MR_Box) (Var_85));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_22)), ((MR_Box) (Status_86)), StatusMap0_24, &StatusMap_28);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldStatus_25, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, OldStatus_25, (MR_Integer) 1))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Term_12 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_84));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Context_21));
                  }
                  StatusMap_28 = StatusMap0_24;
                  *STATE_VARIABLE_VarSet_51 = STATE_VARIABLE_VarSet_0_50;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !.");
                  return;
                }
                break;
            }
            break;
        }
      else
      {
        MR_Word Var_87;
        MR_Word Status_88;
        MR_String SVarName_155;
        MR_String ProgVarName_156;
        MR_String Var_174;

        SVarName_155 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_50, StateVar_22);
        Var_174 = mercury__string__f_43_43_2_f_0(SVarName_155, (MR_String) "_0");
        ProgVarName_156 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_174);
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_156, &Var_87, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_87));
          MR_hl_field(1, base, 1) = ((MR_Box) (Context_21));
        }
        {
          Status_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Status_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Status_88, 1) = ((MR_Box) (Var_87));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_22)), ((MR_Box) (Status_88)), StatusMap0_24, &StatusMap_28);
      }
      *STATE_VARIABLE_State_49 = (MR_Word) (StatusMap_28);
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
      *STATE_VARIABLE_FinalMap_47 = STATE_VARIABLE_FinalMap_0_46;
    }
    else
    {
      MR_Word StateVar_95;
      MR_String Var_68;
      MR_Word Var_69;
      MR_Word Var_70;

      succeeded = ((MR_tag((MR_Word) Functor_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_68 = ((MR_String) ((MR_hl_field(0, Functor_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_68, (MR_String) "!:") == 0);
        if (succeeded)
        {
          succeeded = (SubTerms0_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(1, SubTerms0_20, (MR_Integer) 0))));
            Var_70 = ((MR_Word) ((MR_hl_field(1, SubTerms0_20, (MR_Integer) 1))));
            succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 1);
              if (succeeded)
                StateVar_95 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 0))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeOldVar_43;
        MR_Word StatusMap0_90;
        MR_Word Var_92;
        MR_Word StatusMap_94;
        MR_String SVarName_177;
        MR_String ProgVarName_192;
        MR_Word OldStatus_89;
        MR_Box conv1_OldStatus_89;

        SVarName_177 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_50, StateVar_95);
        ProgVarName_192 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_177);
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_192, &Var_92, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_92));
          MR_hl_field(1, base, 1) = ((MR_Box) (Context_21));
        }
        StatusMap0_90 = (MR_Word) (STATE_VARIABLE_State_0_48);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_90, ((MR_Box) (StateVar_95)), &conv1_OldStatus_89);
        if (succeeded)
        {
          OldStatus_89 = ((MR_Word) (conv1_OldStatus_89));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          switch (MR_tag((MR_Word) OldStatus_89)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              StatusMap_94 = StatusMap0_90;
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_unknown_updated for !:");
                return;
              }
              break;
            case (MR_Integer) 2:
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_95)), ((MR_Box) ((MR_Unsigned) 0U)), StatusMap0_90, &StatusMap_94);
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, OldStatus_89, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  StatusMap_94 = StatusMap0_90;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", (MR_String) "status_known_updated for !:");
                    return;
                  }
                  break;
              }
              break;
          }
        else
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_95)), ((MR_Box) ((MR_Unsigned) 0U)), StatusMap0_90, &StatusMap_94);
        *STATE_VARIABLE_State_49 = (MR_Word) (StatusMap_94);
        mercury__map__search_insert_5_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (StateVar_95)), ((MR_Box) (Var_92)), &MaybeOldVar_43, STATE_VARIABLE_FinalMap_0_46, STATE_VARIABLE_FinalMap_47);
        if ((MaybeOldVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
        else
          hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(Context_21, *STATE_VARIABLE_VarSet_51, StateVar_95, STATE_VARIABLE_Specs_0_52, STATE_VARIABLE_Specs_53);
      }
      else
      {
        MR_Word SubTerms_45;

        hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(SubTerms0_20, &SubTerms_45, STATE_VARIABLE_FinalMap_0_46, STATE_VARIABLE_FinalMap_47, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_Specs_0_52, STATE_VARIABLE_Specs_53);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Functor_19));
          MR_hl_field(0, base, 1) = ((MR_Box) (SubTerms_45));
          MR_hl_field(0, base, 2) = ((MR_Box) (Context_21));
        }
      }
    }
  }
  else
  {
    *Term_12 = Term0_11;
    *STATE_VARIABLE_FinalMap_47 = STATE_VARIABLE_FinalMap_0_46;
    *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_0_48;
    *STATE_VARIABLE_VarSet_51 = STATE_VARIABLE_VarSet_0_50;
    *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_FinalMap_0_3,
  MR_Word * STATE_VARIABLE_FinalMap_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_VarSet_8 = STATE_VARIABLE_VarSet_0_7;
    *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    *STATE_VARIABLE_FinalMap_4 = STATE_VARIABLE_FinalMap_0_3;
  }
  else
  {
    MR_Word Term0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Terms0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Term_25;
    MR_Word Terms_26;
    MR_Word STATE_VARIABLE_FinalMap_39_39;
    MR_Word STATE_VARIABLE_State_40_40;
    MR_Word STATE_VARIABLE_VarSet_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;

    hlds__make_hlds__state_var__svar_prepare_head_term_10_p_0(Term0_23, &Term_25, STATE_VARIABLE_FinalMap_0_3, &STATE_VARIABLE_FinalMap_39_39, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_40_40, STATE_VARIABLE_VarSet_0_7, &STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_42_42);
    hlds__make_hlds__state_var__svar_prepare_head_terms_10_p_0(Terms0_24, &Terms_26, STATE_VARIABLE_FinalMap_39_39, STATE_VARIABLE_FinalMap_4, STATE_VARIABLE_State_40_40, STATE_VARIABLE_State_6, STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarSet_8, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_26));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_5_p_0(
  MR_Word Context_6,
  MR_Word VarSet_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_String Name_10;
  MR_Word Pieces_11;
  MR_Word Spec_12;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;

  Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, StateVar_8);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (Name_10));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[34])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[15])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[32])));
    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Var_17));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_repeated_head_state_var\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Pieces_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ItemClause_4;

  hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ItemClause_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_ItemClause_4));
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0(
  MR_Word IM0_3,
  MR_Word * IM_4)
{
  MR_bool succeeded;
  MR_Word MethodId0_5 = ((MR_Word) ((MR_hl_field(0, IM0_3, (MR_Integer) 0))));
  MR_Word ProcDef0_6 = ((MR_Word) ((MR_hl_field(0, IM0_3, (MR_Integer) 1))));
  MR_Word Context_7 = ((MR_Word) ((MR_hl_field(0, IM0_3, (MR_Integer) 2))));
  MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(0, MethodId0_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word MethodSymName_9 = ((MR_Word) ((MR_hl_field(0, MethodId0_5, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) ProcDef0_6)) == (MR_Integer) 1))
  {
    MR_Word ItemClausesCord0_12 = ((MR_Word) ((MR_hl_field(1, ProcDef0_6, (MR_Integer) 0))));
    MR_Word ItemClausesCord_13;
    MR_Word MethodId_18;
    MR_Word ProcDef_19;
    MR_Word ItemClause_14;
    MR_Box conv1_ItemClause_14;

    mercury__cord__map_pred_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[3]), ItemClausesCord0_12, &ItemClausesCord_13);
    succeeded = mercury__cord__head_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemClausesCord_13, &conv1_ItemClause_14);
    if (succeeded)
    {
      ItemClause_14 = ((MR_Word) (conv1_ItemClause_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_14, (MR_Integer) 2))));
      MR_Word PredFormArity_16;
      MR_Word UserArity_17;

      PredFormArity_16 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[0]), Args_15);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_8, &UserArity_17, PredFormArity_16);
      {
        MethodId_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MethodId_18, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_8));
        MR_hl_field(0, MethodId_18, 1) = ((MR_Box) (MethodSymName_9));
        MR_hl_field(0, MethodId_18, 2) = ((MR_Box) (UserArity_17));
      }
    }
    else
      MethodId_18 = MethodId0_5;
    {
      ProcDef_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ProcDef_19, 0) = ((MR_Box) (ItemClausesCord_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *IM_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MethodId_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (ProcDef_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
    }
  }
  else
    *IM_4 = IM0_3;
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadArg0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailArgs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailArgs_6;

    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(TailArgs0_4, &TailArgs_6);
    if (((MR_tag((MR_Word) HeadArg0_3)) == (MR_Integer) 0))
    {
      MR_Word Const_9 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, (MR_Integer) 0))));
      MR_Word FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, (MR_Integer) 1))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, (MR_Integer) 2))));
      MR_String Var_16;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) Const_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(0, Const_9, (MR_Integer) 0))));
        succeeded = (strcmp(Var_16, (MR_String) "!") == 0);
        if (succeeded)
        {
          succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
            if (succeeded)
              succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadArg1_14;
        MR_Word HeadArg2_15;
        MR_Word Var_23;

        {
          HeadArg1_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadArg1_14, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[0]));
          MR_hl_field(0, HeadArg1_14, 1) = ((MR_Box) (FunctorArgs_10));
          MR_hl_field(0, HeadArg1_14, 2) = ((MR_Box) (Context_11));
        }
        {
          HeadArg2_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadArg2_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[1]));
          MR_hl_field(0, HeadArg2_15, 1) = ((MR_Box) (FunctorArgs_10));
          MR_hl_field(0, HeadArg2_15, 2) = ((MR_Box) (Context_11));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadArg2_15));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (TailArgs_6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg1_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg0_3));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_6));
        }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_6));
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0();
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_store_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__state_var__init(void)
{
}

void mercury__hlds__make_hlds__state_var__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
	MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0);
}

void mercury__hlds__make_hlds__state_var__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__state_var__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.state_var.
