/*
** Automatically generated from `quantification.m'
** by the Mercury compiler,
** version rotd-2022-04-17
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


// :- module hlds.quantification.
// :- implementation.

/*
INIT mercury__hlds__quantification__init
ENDINIT
*/

#include "hlds.quantification.mih"


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
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.var_table.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_0;

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_1;

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_2;

static const MR_EnumFunctorDescPtr hlds__quantification__hlds__quantification__enum_ordinal_ordered_nonlocals_to_recompute_0[3];

static const MR_EnumFunctorDescPtr hlds__quantification__hlds__quantification__enum_name_ordered_nonlocals_to_recompute_0[3];

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_nonlocals_to_recompute_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1hlds__quantification__type_ctor_info_quant_warning_0;

static const MR_PseudoTypeInfo hlds__quantification__hlds__quantification__field_types_quant_info_0_0[8];

static const MR_ConstString hlds__quantification__hlds__quantification__field_names_quant_info_0_0[8];

static const MR_DuFunctorDesc hlds__quantification__hlds__quantification__du_functor_desc_quant_info_0_0;

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_stag_ordered_quant_info_0_0[1];

static const MR_DuPtagLayout hlds__quantification__hlds__quantification__du_ptag_ordered_quant_info_0[1];

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_name_ordered_quant_info_0[1];

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_quant_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__quantification__hlds__quantification__field_types_quant_warning_0_0[2];

static const MR_DuFunctorDesc hlds__quantification__hlds__quantification__du_functor_desc_quant_warning_0_0;

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_stag_ordered_quant_warning_0_0[1];

static const MR_DuPtagLayout hlds__quantification__hlds__quantification__du_ptag_ordered_quant_warning_0[1];

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_name_ordered_quant_warning_0[1];

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_quant_warning_0[1];

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__3_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__3_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__2_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__2_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__1_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__1_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115);

static void MR_CALL 
hlds__quantification____Compare____quant_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_50_9_p_2(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_49_9_p_1(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_48_9_p_0(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_11_p_2(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_6_p_1(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2(
  MR_Word ReuseArgs_12,
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_50_6_p_2(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * Set_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(
  MR_Word Goal_5,
  MR_Word * Set_6);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_114,
  MR_Word * STATE_VARIABLE_Set_115);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_5_p_1(
  MR_Word RHS_7,
  MR_Word MaybeSetArgs_8,
  MR_Word STATE_VARIABLE_Set_0_24,
  MR_Word * STATE_VARIABLE_Set_25);

static void MR_CALL 
hlds__quantification__get_updated_fields_3_p_0(
  MR_Word SetArgs_4,
  MR_Word Args_5,
  MR_Word * ArgsToSet_6);

static void MR_CALL 
hlds__quantification__get_updated_fields_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsToSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsToSet_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_49_11_p_1(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1(
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_49_6_p_1(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(
  MR_Word GoalExpr_5,
  MR_Word * Set_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(
  MR_Word Goal_5,
  MR_Word * Set_6);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_114,
  MR_Word * STATE_VARIABLE_Set_115);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Word RHS_7,
  MR_Word STATE_VARIABLE_Set_0_24,
  MR_Word * STATE_VARIABLE_Set_25);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_48_11_p_0(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0(
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
hlds__quantification__quantify_goal_bi_implication_6_p_0(
  MR_Word LHS0_7,
  MR_Word RHS0_8,
  MR_Word * GoalExpr_9,
  MR_Word OldGoalInfo_10,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * LambdaSet_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word GoalExpr_6,
  MR_Word * Set_7,
  MR_Word * LambdaSet_8);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goal_6,
  MR_Word * Set_7,
  MR_Word * LambdaSet_8);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word GoalExpr_8,
  MR_Word STATE_VARIABLE_Set_0_122,
  MR_Word * STATE_VARIABLE_Set_123,
  MR_Word STATE_VARIABLE_LambdaSet_0_124,
  MR_Word * STATE_VARIABLE_LambdaSet_125);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4,
  MR_Word STATE_VARIABLE_LambdaSets_0_5,
  MR_Word * STATE_VARIABLE_LambdaSets_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4,
  MR_Word STATE_VARIABLE_LambdaSets_0_5,
  MR_Word * STATE_VARIABLE_LambdaSets_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4,
  MR_Word STATE_VARIABLE_LambdaSet_0_5,
  MR_Word * STATE_VARIABLE_LambdaSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word RHS_8,
  MR_Word STATE_VARIABLE_Set_0_25,
  MR_Word * STATE_VARIABLE_Set_26,
  MR_Word STATE_VARIABLE_LambdaSet_0_27,
  MR_Word * STATE_VARIABLE_LambdaSet_28);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word Cases_8,
  MR_Word STATE_VARIABLE_Set_0_19,
  MR_Word * STATE_VARIABLE_Set_20,
  MR_Word STATE_VARIABLE_LambdaSet_0_21,
  MR_Word * STATE_VARIABLE_LambdaSet_22);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word Goals_8,
  MR_Word STATE_VARIABLE_Set_0_19,
  MR_Word * STATE_VARIABLE_Set_20,
  MR_Word STATE_VARIABLE_LambdaSet_0_21,
  MR_Word * STATE_VARIABLE_LambdaSet_22);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
hlds__quantification__set_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7);

static void MR_CALL 
hlds__quantification__set_quant_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7);

static void MR_CALL 
hlds__quantification__set_lambda_outside_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7);

static void MR_CALL 
hlds__quantification__set_outside_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7);

static void MR_CALL 
hlds__quantification__get_nonlocals_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__quantification__get_quant_vars_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__quantification__get_lambda_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__quantification__get_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__quantification__warn_overlapping_scope_4_p_0(
  MR_Word OverlapVars_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
hlds__quantification__update_seen_vars_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
hlds__quantification__quantify_primitive_goal_3_p_0(
  MR_Word HeadVars_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
hlds__quantification__goal_vars_bitset_maybe_lambda_and_bi_impl_2_p_0(
  MR_Word Goal_3,
  MR_Word * BothSet_4);

static void MR_CALL 
hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(
  MR_Word GoalExpr_4,
  MR_Word * Set_5,
  MR_Word * LambdaSet_6);

static void MR_CALL 
hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(
  MR_Word Goal_4,
  MR_Word * Set_5,
  MR_Word * LambdaSet_6);

static MR_Box MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_119,
  MR_Word * STATE_VARIABLE_Set_120,
  MR_Word STATE_VARIABLE_LambdaSet_0_121,
  MR_Word * STATE_VARIABLE_LambdaSet_122);

static void MR_CALL 
hlds__quantification__compute_case_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Sets_0_2,
  MR_Word * STATE_VARIABLE_Sets_3,
  MR_Word STATE_VARIABLE_LambdaSets_0_4,
  MR_Word * STATE_VARIABLE_LambdaSets_5);

static void MR_CALL 
hlds__quantification__compute_disj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Sets_0_2,
  MR_Word * STATE_VARIABLE_Sets_3,
  MR_Word STATE_VARIABLE_LambdaSets_0_4,
  MR_Word * STATE_VARIABLE_LambdaSets_5);

static void MR_CALL 
hlds__quantification__conj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3,
  MR_Word STATE_VARIABLE_LambdaSet_0_4,
  MR_Word * STATE_VARIABLE_LambdaSet_5);

static void MR_CALL 
hlds__quantification__unify_rhs_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word RHS_6,
  MR_Word STATE_VARIABLE_Set_0_23,
  MR_Word * STATE_VARIABLE_Set_24,
  MR_Word STATE_VARIABLE_LambdaSet_0_25,
  MR_Word * STATE_VARIABLE_LambdaSet_26);

static void MR_CALL 
hlds__quantification__case_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18,
  MR_Word STATE_VARIABLE_LambdaSet_0_19,
  MR_Word * STATE_VARIABLE_LambdaSet_20);

static void MR_CALL 
hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18,
  MR_Word STATE_VARIABLE_LambdaSet_0_19,
  MR_Word * STATE_VARIABLE_LambdaSet_20);

static MR_bool MR_CALL 
hlds__quantification____Unify____nonlocals_to_recompute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__quantification____Compare____nonlocals_to_recompute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__quantification____Compare____quant_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__quantification____Compare____quant_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__quantification_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__quantification_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__quantification_scalar_common_3[18][3];

static /* final */ const MR_Box hlds__quantification_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__quantification_scalar_common_5[1][7];




static /* final */ const MR_Box hlds__quantification_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__quantification_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__quantification_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__quantification_scalar_common_2[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__quantification_scalar_common_3[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__quantification_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__quantification__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__quantification__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__quantification__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__quantification__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&hlds__quantification__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
};

static /* final */ const MR_Box hlds__quantification_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&hlds__quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__quantification__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__quantification__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_0 = {
  (MR_String) "ordinary_nonlocals_maybe_lambda",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_1 = {
  (MR_String) "ordinary_nonlocals_no_lambda",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_2 = {
  (MR_String) "code_gen_nonlocals_no_lambda",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__quantification__hlds__quantification__enum_ordinal_ordered_nonlocals_to_recompute_0[3] = {
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_0,
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_1,
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_2
};

static const MR_EnumFunctorDescPtr hlds__quantification__hlds__quantification__enum_name_ordered_nonlocals_to_recompute_0[3] = {
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_2,
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_0,
  &hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_1
};

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_nonlocals_to_recompute_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__quantification__hlds__quantification__type_ctor_info_nonlocals_to_recompute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__quantification____Unify____nonlocals_to_recompute_0_0_10001)),
  ((MR_Box) (hlds__quantification____Compare____nonlocals_to_recompute_0_0_10001)),
  (MR_String) "hlds.quantification",
  (MR_String) "nonlocals_to_recompute",
  { hlds__quantification__hlds__quantification__enum_name_ordered_nonlocals_to_recompute_0 },
  { hlds__quantification__hlds__quantification__enum_ordinal_ordered_nonlocals_to_recompute_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__quantification__hlds__quantification__functor_number_map_nonlocals_to_recompute_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&hlds__quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1hlds__quantification__type_ctor_info_quant_warning_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0)
  }
};

static const MR_PseudoTypeInfo hlds__quantification__hlds__quantification__field_types_quant_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__quantification__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__var_table__hlds__var_table__type_ctor_info_var_db_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__quantification__list__ti_list_1hlds__quantification__type_ctor_info_quant_warning_0)
};

static const MR_ConstString hlds__quantification__hlds__quantification__field_names_quant_info_0_0[8] = {
  (MR_String) "qi_outside",
  (MR_String) "qi_lambda_outside",
  (MR_String) "qi_quant_vars",
  (MR_String) "qi_nonlocals",
  (MR_String) "qi_seen",
  (MR_String) "qi_var_db",
  (MR_String) "qi_rtti_varmaps",
  (MR_String) "qi_warnings"
};

static const MR_DuFunctorDesc hlds__quantification__hlds__quantification__du_functor_desc_quant_info_0_0 = {
  (MR_String) "quant_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__quantification__hlds__quantification__field_types_quant_info_0_0,
  hlds__quantification__hlds__quantification__field_names_quant_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_stag_ordered_quant_info_0_0[1] = {
  &hlds__quantification__hlds__quantification__du_functor_desc_quant_info_0_0
};

static const MR_DuPtagLayout hlds__quantification__hlds__quantification__du_ptag_ordered_quant_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__quantification__hlds__quantification__du_stag_ordered_quant_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_name_ordered_quant_info_0[1] = {
  &hlds__quantification__hlds__quantification__du_functor_desc_quant_info_0_0
};

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_quant_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__quantification__hlds__quantification__type_ctor_info_quant_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__quantification____Unify____quant_info_0_0_10001)),
  ((MR_Box) (hlds__quantification____Compare____quant_info_0_0_10001)),
  (MR_String) "hlds.quantification",
  (MR_String) "quant_info",
  { hlds__quantification__hlds__quantification__du_name_ordered_quant_info_0 },
  { hlds__quantification__hlds__quantification__du_ptag_ordered_quant_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__quantification__hlds__quantification__functor_number_map_quant_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__quantification__hlds__quantification__field_types_quant_warning_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc hlds__quantification__hlds__quantification__du_functor_desc_quant_warning_0_0 = {
  (MR_String) "warn_overlap",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__quantification__hlds__quantification__field_types_quant_warning_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_stag_ordered_quant_warning_0_0[1] = {
  &hlds__quantification__hlds__quantification__du_functor_desc_quant_warning_0_0
};

static const MR_DuPtagLayout hlds__quantification__hlds__quantification__du_ptag_ordered_quant_warning_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__quantification__hlds__quantification__du_stag_ordered_quant_warning_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__quantification__hlds__quantification__du_name_ordered_quant_warning_0[1] = {
  &hlds__quantification__hlds__quantification__du_functor_desc_quant_warning_0_0
};

static const MR_Integer hlds__quantification__hlds__quantification__functor_number_map_quant_warning_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__quantification____Unify____quant_warning_0_0_10001)),
  ((MR_Box) (hlds__quantification____Compare____quant_warning_0_0_10001)),
  (MR_String) "hlds.quantification",
  (MR_String) "quant_warning",
  { hlds__quantification__hlds__quantification__du_name_ordered_quant_warning_0 },
  { hlds__quantification__hlds__quantification__du_ptag_ordered_quant_warning_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__quantification__hlds__quantification__functor_number_map_quant_warning_0,

};

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__3_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__3_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaGoalNonLocals_53, HeadVar__2_115);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__2_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__2_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaGoalNonLocals_53, HeadVar__2_115);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__1_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__1_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaGoalNonLocals_53, HeadVar__2_115);
  return succeeded;
}

void MR_CALL 
hlds__quantification____Compare____quant_warning_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
hlds__quantification____Unify____quant_warning_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
hlds__quantification____Compare____quant_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__var_table____Compare____var_db_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_info_0_0(
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
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_28_28;
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
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&hlds__quantification_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&hlds__quantification_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&hlds__quantification_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&hlds__quantification_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = hlds__var_table____Unify____var_db_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&hlds__quantification_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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
hlds__quantification____Compare____nonlocals_to_recompute_0_0(
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
hlds__quantification____Unify____nonlocals_to_recompute_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
hlds__quantification__free_goal_vars_1_f_0(
  MR_Word Goal_3)
{
  MR_Word HeadVar__2_2;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
  MR_Word Set_13;
  MR_Word LambdaSet_14;
  MR_Word Set0_20;
  MR_Word LambdaSet0_21;

  Set0_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_11, Set0_20, &Set_13, LambdaSet0_21, &LambdaSet_14);
  HeadVar__2_2 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_13, LambdaSet_14);
  return HeadVar__2_2;
}

void MR_CALL 
hlds__quantification__implicitly_quantify_clause_body_general_vt_9_p_0(
  MR_Word NonLocalsToRecompute_10,
  MR_Word HeadVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_21,
  MR_Word * STATE_VARIABLE_RttiVarMaps_22)
{
  MR_Word OutsideVars_16;

  OutsideVars_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_11);
  hlds__quantification__implicitly_quantify_goal_general_vt_9_p_0(NonLocalsToRecompute_10, OutsideVars_16, Warnings_12, STATE_VARIABLE_Goal_0_17, STATE_VARIABLE_Goal_18, STATE_VARIABLE_VarTable_0_19, STATE_VARIABLE_VarTable_20, STATE_VARIABLE_RttiVarMaps_0_21, STATE_VARIABLE_RttiVarMaps_22);
}

void MR_CALL 
hlds__quantification__implicitly_quantify_goal_general_vt_9_p_0(
  MR_Word NonLocalsToRecompute_10,
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_21,
  MR_Word * STATE_VARIABLE_RttiVarMaps_22)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Goal_28_28;
  MR_Word STATE_VARIABLE_VarTable_29_29;
  MR_Word STATE_VARIABLE_RttiVarMaps_30_30;
  MR_Word Var_31;
  MR_Word Var_36;

  switch (NonLocalsToRecompute_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_49_9_p_1(OutsideVars_11, Warnings_12, STATE_VARIABLE_Goal_0_17, &STATE_VARIABLE_Goal_28_28, STATE_VARIABLE_VarTable_0_19, &STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_RttiVarMaps_0_21, &STATE_VARIABLE_RttiVarMaps_30_30);
      break;
    case (MR_Integer) 0:
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_48_9_p_0(OutsideVars_11, Warnings_12, STATE_VARIABLE_Goal_0_17, &STATE_VARIABLE_Goal_28_28, STATE_VARIABLE_VarTable_0_19, &STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_RttiVarMaps_0_21, &STATE_VARIABLE_RttiVarMaps_30_30);
      break;
  }
  succeeded = (NonLocalsToRecompute_10 == (MR_Integer) 2);
  if (succeeded)
  {
    Var_31 = (MR_Integer) 1;
    hlds__goal_util__goal_contains_reconstruction_2_p_0(STATE_VARIABLE_Goal_28_28, &Var_36);
    succeeded = (Var_31 == Var_36);
  }
  if (succeeded)
  {
    MR_Word Var_16;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_50_9_p_2(OutsideVars_11, &Var_16, STATE_VARIABLE_Goal_28_28, STATE_VARIABLE_Goal_18, STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_VarTable_20, STATE_VARIABLE_RttiVarMaps_30_30, STATE_VARIABLE_RttiVarMaps_22);
  }
  else
  {
    *STATE_VARIABLE_RttiVarMaps_22 = STATE_VARIABLE_RttiVarMaps_30_30;
    *STATE_VARIABLE_VarTable_20 = STATE_VARIABLE_VarTable_29_29;
    *STATE_VARIABLE_Goal_18 = STATE_VARIABLE_Goal_28_28;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_50_9_p_2(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  MR_Word VarDb0_16;
  MR_Word QuantInfo0_17;
  MR_Word QuantInfo_18;
  MR_Word VarDb_19;
  MR_Word Warnings0_21;
  MR_Word LambdaOutsideVars_38;
  MR_Word QuantVars_39;
  MR_Word NonLocals_40;

  {
    VarDb0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), VarDb0_16, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_24));
  }
  LambdaOutsideVars_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_39 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_40 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 0) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 1) = ((MR_Box) (LambdaOutsideVars_38));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 2) = ((MR_Box) (QuantVars_39));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 3) = ((MR_Box) (NonLocals_40));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 4) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 5) = ((MR_Box) (VarDb0_16));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_26));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(STATE_VARIABLE_Goal_0_22, STATE_VARIABLE_Goal_23, QuantInfo0_17, &QuantInfo_18);
  VarDb_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 6))));
  Warnings0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_19)) == (MR_Integer) 1))
    *STATE_VARIABLE_VarTable_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_19, (MR_Integer) 0))));
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vt_2\'/9", (MR_String) "var_db_varset_vartypes");
      return;
    }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_21, Warnings_12);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_49_9_p_1(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  MR_Word VarDb0_16;
  MR_Word QuantInfo0_17;
  MR_Word QuantInfo_18;
  MR_Word VarDb_19;
  MR_Word Warnings0_21;
  MR_Word LambdaOutsideVars_38;
  MR_Word QuantVars_39;
  MR_Word NonLocals_40;

  {
    VarDb0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), VarDb0_16, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_24));
  }
  LambdaOutsideVars_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_39 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_40 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 0) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 1) = ((MR_Box) (LambdaOutsideVars_38));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 2) = ((MR_Box) (QuantVars_39));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 3) = ((MR_Box) (NonLocals_40));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 4) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 5) = ((MR_Box) (VarDb0_16));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_26));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(STATE_VARIABLE_Goal_0_22, STATE_VARIABLE_Goal_23, QuantInfo0_17, &QuantInfo_18);
  VarDb_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 6))));
  Warnings0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_19)) == (MR_Integer) 1))
    *STATE_VARIABLE_VarTable_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_19, (MR_Integer) 0))));
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vt_2\'/9", (MR_String) "var_db_varset_vartypes");
      return;
    }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_21, Warnings_12);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_116_95_50_95_95_91_49_93_95_48_9_p_0(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  MR_Word VarDb0_16;
  MR_Word QuantInfo0_17;
  MR_Word QuantInfo_18;
  MR_Word VarDb_19;
  MR_Word Warnings0_21;
  MR_Word LambdaOutsideVars_38;
  MR_Word QuantVars_39;
  MR_Word NonLocals_40;

  {
    VarDb0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), VarDb0_16, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_24));
  }
  LambdaOutsideVars_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_39 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_40 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 0) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 1) = ((MR_Box) (LambdaOutsideVars_38));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 2) = ((MR_Box) (QuantVars_39));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 3) = ((MR_Box) (NonLocals_40));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 4) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 5) = ((MR_Box) (VarDb0_16));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_26));
    MR_hl_field(MR_mktag(0), QuantInfo0_17, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_Goal_0_22, STATE_VARIABLE_Goal_23, QuantInfo0_17, &QuantInfo_18);
  VarDb_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 6))));
  Warnings0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_18, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_19)) == (MR_Integer) 1))
    *STATE_VARIABLE_VarTable_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb_19, (MR_Integer) 0))));
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vt_2\'/9", (MR_String) "var_db_varset_vartypes");
      return;
    }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_21, Warnings_12);
}

void MR_CALL 
hlds__quantification__implicitly_quantify_clause_body_general_11_p_0(
  MR_Word NonLocalsToRecompute_12,
  MR_Word HeadVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_20,
  MR_Word * STATE_VARIABLE_Goal_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  MR_Word OutsideVars_19;

  OutsideVars_19 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_13);
  hlds__quantification__implicitly_quantify_goal_general_11_p_0(NonLocalsToRecompute_12, OutsideVars_19, Warnings_14, STATE_VARIABLE_Goal_0_20, STATE_VARIABLE_Goal_21, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_VarTypes_0_24, STATE_VARIABLE_VarTypes_25, STATE_VARIABLE_RttiVarMaps_0_26, STATE_VARIABLE_RttiVarMaps_27);
}

void MR_CALL 
hlds__quantification__requantify_proc_general_3_p_0(
  MR_Word NonLocalsToRecompute_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17)
{
  MR_Word HeadVars_6;
  MR_Word VarSet0_7;
  MR_Word VarTypes0_8;
  MR_Word Goal0_9;
  MR_Word RttiVarmaps0_10;
  MR_Word Goal_12;
  MR_Word VarSet_13;
  MR_Word VarTypes_14;
  MR_Word RttiVarmaps_15;
  MR_Word STATE_VARIABLE_ProcInfo_18_18;
  MR_Word STATE_VARIABLE_ProcInfo_19_19;
  MR_Word OutsideVars_35;
  MR_Word Var_11;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_16, &HeadVars_6);
  hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(STATE_VARIABLE_ProcInfo_0_16, &VarSet0_7, &VarTypes0_8);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_16, &Goal0_9);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_16, &RttiVarmaps0_10);
  OutsideVars_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_6);
  hlds__quantification__implicitly_quantify_goal_general_11_p_0(NonLocalsToRecompute_4, OutsideVars_35, &Var_11, Goal0_9, &Goal_12, VarSet0_7, &VarSet_13, VarTypes0_8, &VarTypes_14, RttiVarmaps0_10, &RttiVarmaps_15);
  hlds__hlds_pred__proc_info_set_varset_vartypes_4_p_0(VarSet_13, VarTypes_14, STATE_VARIABLE_ProcInfo_0_16, &STATE_VARIABLE_ProcInfo_18_18);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_12, STATE_VARIABLE_ProcInfo_18_18, &STATE_VARIABLE_ProcInfo_19_19);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarmaps_15, STATE_VARIABLE_ProcInfo_19_19, STATE_VARIABLE_ProcInfo_17);
}

void MR_CALL 
hlds__quantification__implicitly_quantify_goal_general_11_p_0(
  MR_Word NonLocalsToRecompute_12,
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_20,
  MR_Word * STATE_VARIABLE_Goal_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Goal_34_34;
  MR_Word STATE_VARIABLE_VarSet_35_35;
  MR_Word STATE_VARIABLE_VarTypes_36_36;
  MR_Word STATE_VARIABLE_RttiVarMaps_37_37;
  MR_Word Var_38;
  MR_Word Var_44;

  switch (NonLocalsToRecompute_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_49_11_p_1(OutsideVars_13, Warnings_14, STATE_VARIABLE_Goal_0_20, &STATE_VARIABLE_Goal_34_34, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarTypes_0_24, &STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_RttiVarMaps_0_26, &STATE_VARIABLE_RttiVarMaps_37_37);
      break;
    case (MR_Integer) 0:
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_48_11_p_0(OutsideVars_13, Warnings_14, STATE_VARIABLE_Goal_0_20, &STATE_VARIABLE_Goal_34_34, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarTypes_0_24, &STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_RttiVarMaps_0_26, &STATE_VARIABLE_RttiVarMaps_37_37);
      break;
  }
  succeeded = (NonLocalsToRecompute_12 == (MR_Integer) 2);
  if (succeeded)
  {
    Var_38 = (MR_Integer) 1;
    hlds__goal_util__goal_contains_reconstruction_2_p_0(STATE_VARIABLE_Goal_34_34, &Var_44);
    succeeded = (Var_38 == Var_44);
  }
  if (succeeded)
  {
    MR_Word Var_19;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_11_p_2(OutsideVars_13, &Var_19, STATE_VARIABLE_Goal_34_34, STATE_VARIABLE_Goal_21, STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_VarTypes_25, STATE_VARIABLE_RttiVarMaps_37_37, STATE_VARIABLE_RttiVarMaps_27);
  }
  else
  {
    *STATE_VARIABLE_RttiVarMaps_27 = STATE_VARIABLE_RttiVarMaps_37_37;
    *STATE_VARIABLE_VarTypes_25 = STATE_VARIABLE_VarTypes_36_36;
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_35_35;
    *STATE_VARIABLE_Goal_21 = STATE_VARIABLE_Goal_34_34;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_11_p_2(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34)
{
  MR_Word VarSetTypes0_19;
  MR_Word VarDb0_20;
  MR_Word QuantInfo0_21;
  MR_Word QuantInfo_22;
  MR_Word VarDb_23;
  MR_Word Warnings0_26;
  MR_Word LambdaOutsideVars_46;
  MR_Word QuantVars_47;
  MR_Word NonLocals_48;

  {
    VarSetTypes0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_29));
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_31));
  }
  {
    VarDb0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarDb0_20, 0) = ((MR_Box) (VarSetTypes0_19));
  }
  LambdaOutsideVars_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 0) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 1) = ((MR_Box) (LambdaOutsideVars_46));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 2) = ((MR_Box) (QuantVars_47));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 3) = ((MR_Box) (NonLocals_48));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 4) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 5) = ((MR_Box) (VarDb0_20));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_33));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(STATE_VARIABLE_Goal_0_27, STATE_VARIABLE_Goal_28, QuantInfo0_21, &QuantInfo_22);
  VarDb_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 6))));
  Warnings0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_23)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/11", (MR_String) "var_db_var_table");
      return;
    }
  else
  {
    MR_Word VarSetTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_23, (MR_Integer) 0))));

    *STATE_VARIABLE_VarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 1))));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_26, Warnings_14);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16;
    MR_Word Inner0_17;
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_66));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NonLocalVars_10;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_61));
    }
  }
  else
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_no_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarsList_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word OutsideVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      MR_Word OutsideVars1_31;
      MR_Word NonLocalVars1_32;
      MR_Word OutsideVars2_33;
      MR_Word NonLocalVars2_34;
      MR_Word NonLocalVarsConj_35;
      MR_Word NonLocalVars_36;
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word STATE_VARIABLE_Info_42_42;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, FollowingVars_23, &OutsideVars1_31);
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars1_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_83));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Var_48, &Goal_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
      NonLocalVars1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, NonLocalVars1_32, &OutsideVars2_33);
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4))));
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 5))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 6))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (OutsideVars2_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 5) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 6) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 7) = ((MR_Box) (Var_105));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(FollowingVarsList_24, Var_47, &Goals_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_32, NonLocalVars2_34, &NonLocalVarsConj_35);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_35, OutsideVars_30, &NonLocalVars_36);
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
      Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutsideVars_30));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_36));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_127));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_6_p_1(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word FollowingVarsList_11;

  if ((STATE_VARIABLE_Goals_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    FollowingVarsList_11 = (MR_Word) ((MR_Unsigned) 0U);
    *PossiblyNonLocalGoalVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 0))));
    MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 1))));
    MR_Word Set_20;
    MR_Word Sets_21;
    MR_Word GoalSet_23;
    MR_Word GoalExpr_29;
    MR_Word Set0_34;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(Goals_19, &Set_20, &Sets_21);
    {
      FollowingVarsList_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 0) = ((MR_Box) (Set_20));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 1) = ((MR_Box) (Sets_21));
    }
    GoalExpr_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
    Set0_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_29, Set0_34, &GoalSet_23);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_23, Set_20, PossiblyNonLocalGoalVars_9);
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(FollowingVarsList_11, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2(
  MR_Word ReuseArgs_12,
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_RHS_0_81)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word SetArgs_22;

        succeeded = (ReuseArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SetArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseArgs_12, (MR_Integer) 0))));
          {
            MR_Word Vars0_23;

            hlds__quantification__get_updated_fields_3_p_0(SetArgs_22, ArgVars_21, &Vars0_23);
            *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_23);
          }
        }
        else
          *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
        MR_Word ArgVars0_32;
        MR_Word Modes_33;
        MR_Word OutsideVars0_34;
        MR_Word QVars_35;
        MR_Word RenameVars0_36;
        MR_Word Seen0_38;
        MR_Word RenameVars1_39;
        MR_Word RenameVars_40;
        MR_Word RenameMap_41;
        MR_Word Goal1_42;
        MR_Word QuantVars0_43;
        MR_Word OutsideVars1_44;
        MR_Word QuantVars_45;
        MR_Word OutsideVars_46;
        MR_Word LambdaOutsideVars0_47;
        MR_Word LambdaOutsideVars_48;
        MR_Word Goal_49;
        MR_Word RHSNonLocals0_50;
        MR_Word LambdaGoalInfo_52;
        MR_Word LambdaGoalNonLocals_53;
        MR_Word LambdaNonLocals_54;
        MR_Word ArgVarsModes_55;
        MR_Word STATE_VARIABLE_Info_87_87;
        MR_Word STATE_VARIABLE_Info_88_88;
        MR_Word STATE_VARIABLE_Info_90_90;
        MR_Word STATE_VARIABLE_Info_91_91;
        MR_Word STATE_VARIABLE_Info_92_92;
        MR_Word STATE_VARIABLE_Info_93_93;
        MR_Word STATE_VARIABLE_Info_94_94;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word Var_97;
        MR_Word ArgVars_108;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_151;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_195;
        MR_Word Var_226;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_261;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
        QVars_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_32);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QVars_35, &RenameVars0_36);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36);
        if (succeeded)
          STATE_VARIABLE_Info_87_87 = STATE_VARIABLE_Info_0_85;
        else
        {
          MR_Word Context_37;

          Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
          hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars0_36, Context_37, STATE_VARIABLE_Info_0_85, &STATE_VARIABLE_Info_87_87);
        }
        Seen0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_151));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_160));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_161));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_167));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_178));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_181));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_195));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_204));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_206));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_208));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_209));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_210));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_211));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_226));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_242));
          }
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_250));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_251));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_252));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_253));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_256));
        }
        Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_261));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_270));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_272));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_273));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_274));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_275));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_276));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_277));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_1));
          MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(MR_mktag(2), base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_2));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_3));
                  MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has size info");
              }
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args0_58, ArgModes0_59, &ArgModesMap_65);
              Args_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RHSNonLocals_16);
              mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args_66, ArgModesMap_65, &ArgModes_67);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Unification_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_62));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
            }
            break;
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_53 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_71_71;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word Var_202;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_242;
        MR_Word Var_243;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Word Var_250;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_202));
        if (succeeded)
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_71_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 0) = ((MR_Box) (Var_211));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 1) = ((MR_Box) (Var_212));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 3) = ((MR_Box) (Var_214));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 4) = ((MR_Box) (Var_215));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 5) = ((MR_Box) (Var_216));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 6) = ((MR_Box) (Var_217));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 7) = ((MR_Box) (Var_218));
          }
        }
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 1))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 2))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 3))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 4))));
        Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 5))));
        Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 6))));
        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_72_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 1) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 2) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 3) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 4) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 5) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 6) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 7) = ((MR_Box) (Var_232));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
        Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
        Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
        Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 4))));
        Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 5))));
        Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 6))));
        Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 1) = ((MR_Box) (Var_239));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_240));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_241));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (Var_242));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 5) = ((MR_Box) (Var_243));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 6) = ((MR_Box) (Var_244));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 7) = ((MR_Box) (Var_245));
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_250));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_74_74;
        else
        {
          MR_Word Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 0))));
          MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 1))));
          MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 3))));
          MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 4))));
          MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 5))));
          MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 6))));
          MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_420 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_421 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_425;
        MR_Word LambdaOutsideVars_426;
        MR_Word MaybeSetArgs_438;
        MR_Word AllButRHSGoalVars_457;
        MR_Word UnifyRHS_458;
        MR_Word Unification_459;
        MR_Word RHSGoalVars_460;
        MR_Word AllGoalVars_461;
        MR_Word ONonLocalVars_462;
        MR_Word LONonLocalVars_463;
        MR_Word NonLocalVars_464;
        MR_Word STATE_VARIABLE_GoalVars_61_465;
        MR_Word STATE_VARIABLE_Info_68_472;
        MR_Word STATE_VARIABLE_Info_69_473;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_425);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_426);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_420, &STATE_VARIABLE_GoalVars_61_465);
        switch (MR_tag((MR_Word) Unification0_423)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_432 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 4))));
              MR_Word SubInfo_434 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_65_469;
              MR_Word SizeVar_443;
              MR_Word MaybeSize_442;
              MR_Word Var_470;

              switch (MR_tag((MR_Word) How_432)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_435;
                    MR_Word SetArgs_437;
                    MR_Word Var_468 = (MR_Word) (MR_body((MR_Word) (How_432), (MR_Integer) 1));

                    ReuseVar_435 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_468, (MR_Integer) 0))));
                    SetArgs_437 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_468, (MR_Integer) 2))));
                    {
                      MaybeSetArgs_438 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeSetArgs_438, 0) = ((MR_Box) (SetArgs_437));
                    }
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_435, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_432, (MR_Integer) 0))));

                    MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_439, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
              }
              succeeded = (SubInfo_434 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_434, (MR_Integer) 1))));
                succeeded = (MaybeSize_442 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_470 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_442, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_470)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_470, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_443, STATE_VARIABLE_GoalVars_65_469, &AllButRHSGoalVars_457);
              else
                AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_65_469;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
              AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
                  AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_456 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_456, STATE_VARIABLE_GoalVars_61_465, &AllButRHSGoalVars_457);
                  MaybeSetArgs_438 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2(MaybeSetArgs_438, GoalInfo0_11, UnifyRHS0_421, &UnifyRHS_458, Unification0_423, &Unification_459, &RHSGoalVars_460, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_472);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_420));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyRHS_458));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_422));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_459));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_424));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_457, RHSGoalVars_460, &AllGoalVars_461);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_461, STATE_VARIABLE_Info_68_472, &STATE_VARIABLE_Info_69_473);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, OutsideVars_425, &ONonLocalVars_462);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, LambdaOutsideVars_426, &LONonLocalVars_463);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_462, LONonLocalVars_463, &NonLocalVars_464);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_464, STATE_VARIABLE_Info_69_473, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[16]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[17]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_88;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_6_p_1(Goals0_43, &Goals_88, PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_88));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_115));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_116));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_90));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_404;
            MR_Word Var_405;
            MR_Word Var_406;
            MR_Word Var_408;
            MR_Word Var_409;
            MR_Word Var_410;
            MR_Word Var_411;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_404));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_405));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_406));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_408));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_409));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_410));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_411));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_277 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_278;
            MR_Word STATE_VARIABLE_Info_60_320;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_278);
            switch (MR_tag((MR_Word) Reason0_276)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason0_276, (MR_Integer) 0))));
                  MR_Word Reason_281;
                  MR_Word SubGoal1_282;
                  MR_Word Vars_283;
                  MR_Word SubGoal_284;
                  MR_Word NonLocals0_285;
                  MR_Word NonLocals_286;
                  MR_Word STATE_VARIABLE_Info_58_318;
                  MR_Word STATE_VARIABLE_Info_59_319;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_281, SubGoal0_277, &SubGoal1_282, Vars0_279, &Vars_283, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_318);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal1_282, &SubGoal_284, STATE_VARIABLE_Info_58_318, &STATE_VARIABLE_Info_59_319);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_281));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_284));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_319, &NonLocals0_285);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_283, NonLocals0_285, &NonLocals_286);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_286, STATE_VARIABLE_Info_59_319, &STATE_VARIABLE_Info_60_320);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_329;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_329;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_287 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 1))));
                      MR_Word FGT_288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_288) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_289;
                            MR_Word LambdaOutsideVars_290;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_289);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_290);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_289, TermVar_287);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_290, TermVar_287);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_287);
                            }
                            else
                            {
                              switch (FGT_288) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_324;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_277, &SubGoal_324, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_324));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_49_309;
                      MR_Word STATE_VARIABLE_Info_50_310;
                      MR_Word Vars0_330 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 5))));
                      MR_Word Reason_331;
                      MR_Word SubGoal1_332;
                      MR_Word Vars_333;
                      MR_Word SubGoal_334;
                      MR_Word NonLocals0_335;
                      MR_Word NonLocals_336;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2(Reason0_276, &Reason_331, SubGoal0_277, &SubGoal1_332, Vars0_330, &Vars_333, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_49_309);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal1_332, &SubGoal_334, STATE_VARIABLE_Info_49_309, &STATE_VARIABLE_Info_50_310);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_331));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_334));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_50_310, &NonLocals0_335);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_333, NonLocals0_335, &NonLocals_336);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_336, STATE_VARIABLE_Info_50_310, &STATE_VARIABLE_Info_60_320);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_278, STATE_VARIABLE_Info_60_320, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_129;
            MR_Word OutsideVars0_130;
            MR_Word LambdaOutsideVars0_131;
            MR_Word QVars_132;
            MR_Word Cond1_133;
            MR_Word Then1_134;
            MR_Word QuantVars1_135;
            MR_Word VarsThen_144;
            MR_Word LambdaVarsThen_145;
            MR_Word OutsideVars1_146;
            MR_Word LambdaOutsideVars1_147;
            MR_Word Cond_148;
            MR_Word NonLocalsCond_149;
            MR_Word OutsideVars2_150;
            MR_Word Then_151;
            MR_Word NonLocalsThen_152;
            MR_Word Else_153;
            MR_Word NonLocalsElse_154;
            MR_Word NonLocalsIfThen_155;
            MR_Word NonLocalsIfThenElse_156;
            MR_Word NonLocalsO_157;
            MR_Word NonLocalsL_158;
            MR_Word NonLocals_159;
            MR_Word STATE_VARIABLE_Info_52_161;
            MR_Word STATE_VARIABLE_Info_54_163;
            MR_Word STATE_VARIABLE_Info_55_164;
            MR_Word STATE_VARIABLE_Info_56_165;
            MR_Word STATE_VARIABLE_Info_57_166;
            MR_Word STATE_VARIABLE_Info_58_167;
            MR_Word STATE_VARIABLE_Info_59_168;
            MR_Word STATE_VARIABLE_Info_60_169;
            MR_Word STATE_VARIABLE_Info_61_170;
            MR_Word STATE_VARIABLE_Info_62_171;
            MR_Word STATE_VARIABLE_Info_63_172;
            MR_Word STATE_VARIABLE_Info_64_173;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_129);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_130);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_131);
            if ((Vars0_125 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_132 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_133 = Cond0_126;
              Then1_134 = Then0_127;
              QuantVars1_135 = QuantVars0_129;
              STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_138;
              MR_Word RenameVars2_139;
              MR_Word RenameVars_140;
              MR_Word Vars_141;

              QVars_132 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_125);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, QVars_132, &RenameVars1_138);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, QVars_132, &RenameVars2_139);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_138, RenameVars2_139, &RenameVars_140);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_140);
              if (succeeded)
              {
                Cond1_133 = Cond0_126;
                Then1_134 = Then0_127;
                Vars_141 = Vars0_125;
                STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_142;
                MR_Word RenameMap_143;
                MR_Word STATE_VARIABLE_Info_51_160;

                Context_142 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_140, Context_142, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_160);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(RenameVars_140, &RenameMap_143, Cond0_126, &Cond1_133, STATE_VARIABLE_Info_51_160, &STATE_VARIABLE_Info_52_161);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_143, Then0_127, &Then1_134);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_143, Vars0_125, &Vars_141);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_141, QuantVars0_129, &QuantVars1_135);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Then1_134, &VarsThen_144);
            LambdaVarsThen_145 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, VarsThen_144, &OutsideVars1_146);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, LambdaVarsThen_145, &LambdaOutsideVars1_147);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_135, STATE_VARIABLE_Info_52_161, &STATE_VARIABLE_Info_54_163);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_146, STATE_VARIABLE_Info_54_163, &STATE_VARIABLE_Info_55_164);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_147, STATE_VARIABLE_Info_55_164, &STATE_VARIABLE_Info_56_165);
            hlds__quantification__update_seen_vars_3_p_0(QVars_132, STATE_VARIABLE_Info_56_165, &STATE_VARIABLE_Info_57_166);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Cond1_133, &Cond_148, STATE_VARIABLE_Info_57_166, &STATE_VARIABLE_Info_58_167);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_167, &NonLocalsCond_149);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, NonLocalsCond_149, &OutsideVars2_150);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_150, STATE_VARIABLE_Info_58_167, &STATE_VARIABLE_Info_59_168);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_131, STATE_VARIABLE_Info_59_168, &STATE_VARIABLE_Info_60_169);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Then1_134, &Then_151, STATE_VARIABLE_Info_60_169, &STATE_VARIABLE_Info_61_170);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_170, &NonLocalsThen_152);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_130, STATE_VARIABLE_Info_61_170, &STATE_VARIABLE_Info_62_171);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_129, STATE_VARIABLE_Info_62_171, &STATE_VARIABLE_Info_63_172);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Else0_128, &Else_153, STATE_VARIABLE_Info_63_172, &STATE_VARIABLE_Info_64_173);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_148));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_151));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_153));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_173, &NonLocalsElse_154);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_149, NonLocalsThen_152, &NonLocalsIfThen_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_155, NonLocalsElse_154, &NonLocalsIfThenElse_156);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, OutsideVars0_130, &NonLocalsO_157);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, LambdaOutsideVars0_131, &NonLocalsL_158);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_157, NonLocalsL_158, &NonLocals_159);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_159, STATE_VARIABLE_Info_64_173, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_351 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_351)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_352 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word Inner_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 3))));
                  MR_Word MainGoal0_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 5))));
                  MR_Word OrElseInners0_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_359;
                  MR_Word OrElseInners_360;
                  MR_Word AtomicGoalsWithInners0_363;
                  MR_Word AllAtomicGoals_365;
                  MR_Word NonLocalVarSets_366;
                  MR_Word MainGoal_367;
                  MR_Word OrElseGoals_368;
                  MR_Word NonLocalVars0_369;
                  MR_Word NonLocalVars_372;
                  MR_Word ShortHand_373;
                  MR_Word STATE_VARIABLE_Info_50_385;
                  MR_Word Var_386;
                  MR_Word Var_387;
                  MR_Word STATE_VARIABLE_Info_53_388;

                  if ((OrElseInners0_358 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(Inner_354, OrElseGoals0_357, &OrElseGoals1_359, &OrElseInners_360, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_385);
                  else
                  {
                    OrElseInners_360 = OrElseInners0_358;
                    OrElseGoals1_359 = OrElseGoals0_357;
                    STATE_VARIABLE_Info_50_385 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_386, 0) = ((MR_Box) (MainGoal0_356));
                    MR_hl_field(MR_mktag(1), Var_386, 1) = ((MR_Box) (OrElseGoals1_359));
                  }
                  {
                    Var_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_387, 0) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), Var_387, 1) = ((MR_Box) (OrElseInners_360));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_386, Var_387, &AtomicGoalsWithInners0_363);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(AtomicGoalsWithInners0_363, &AllAtomicGoals_365, STATE_VARIABLE_Info_50_385, &STATE_VARIABLE_Info_53_388, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_366);
                  if ((AllAtomicGoals_365 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_367 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 0))));
                    OrElseGoals_368 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_366, &NonLocalVars0_369);
                  switch (GoalType_352) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_372 = NonLocalVars0_369;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 0))));
                        MR_Word OuterUO_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 1))));
                        MR_Word Var_391;
                        MR_Word Var_392;

                        {
                          Var_392 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_392, 0) = ((MR_Box) (OuterUO_371));
                          MR_hl_field(MR_mktag(1), Var_392, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (OuterDI_370));
                          MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (Var_392));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_391, NonLocalVars0_369, &NonLocalVars_372);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_372, STATE_VARIABLE_Info_53_388, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 0) = (MR_Box) ((MR_Unsigned) (GoalType_352));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 1) = ((MR_Box) (Outer_353));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 2) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 3) = ((MR_Box) (MaybeOutputVars_355));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 4) = ((MR_Box) (MainGoal_367));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 5) = ((MR_Box) (OrElseGoals_368));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 6) = ((MR_Box) (OrElseInners_360));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_373));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_374 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 0))));
                  MR_Word ResultVar_375 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word SubGoal0_376 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word SubGoal_377;
                  MR_Word ShortHand_395;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_376, &SubGoal_377, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_395 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 0) = ((MR_Box) (MaybeIO_374));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 1) = ((MR_Box) (ResultVar_375));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 2) = ((MR_Box) (SubGoal_377));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_395));
                  }
                }
                break;
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word RenameMap_17;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_RttiVarMaps_32_32;
    MR_Word STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Box conv1_STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Word Var_106;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
    if (!(succeeded))
    {
    }
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap_17);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[15]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_106));
    if (succeeded)
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_26_26;
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4))));
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7))));

      {
        STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_122));
      }
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_50_6_p_2(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_22);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_50_6_p_2(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(NonLocals_8, STATE_VARIABLE_GoalInfo_0_11, STATE_VARIABLE_GoalInfo_12);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set0_14;

  Set0_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_5, Set0_14, BothSet_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *Set_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_12;
    MR_Word SetList0_13;
    MR_Word Set1_14;
    MR_Word GoalExpr_20;
    MR_Word Set0_25;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(Goals_9, &Set0_12, &SetList0_13);
    GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    Set0_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_20, Set0_25, &Set1_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_12, Set1_14, Set_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Set0_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetList0_13));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * Set_6)
{
  MR_Word Set0_7;

  Set0_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_5, Set0_7, Set_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(
  MR_Word Goal_5,
  MR_Word * Set_6)
{
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
  MR_Word Set0_12;

  Set0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_7, Set0_12, Set_6);
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_114,
  MR_Word * STATE_VARIABLE_Set_115)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word SubGoalExpr_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_77, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_78;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_Word MaybeSetArgs_23;
          MR_Word STATE_VARIABLE_Set_154_154;
          MR_Word STATE_VARIABLE_Set_160_160;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_8, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_154_154);
          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 4))));
                MR_Word SubInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_158_158;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_159;

                switch (MR_tag((MR_Word) How_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Set_158_158 = STATE_VARIABLE_Set_154_154;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_20;
                      MR_Word SetArgs_22;
                      MR_Word Var_157 = (MR_Word) (MR_body((MR_Word) (How_17), (MR_Integer) 1));

                      ReuseVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 0))));
                      SetArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 2))));
                      {
                        MaybeSetArgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeSetArgs_23, 0) = ((MR_Box) (SetArgs_22));
                      }
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_158_158);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Set_158_158 = STATE_VARIABLE_Set_154_154;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_17, (MR_Integer) 0))));

                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_158_158);
                    }
                    break;
                }
                succeeded = (SubInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_19, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_159)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_159, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_158_158, &STATE_VARIABLE_Set_160_160);
                else
                  STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_158_158;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_154_154;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_154_154;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_11, (MR_Integer) 3))));

                    MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_160_160);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_5_p_1(RHS_9, MaybeSetArgs_23, STATE_VARIABLE_Set_160_160, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_151_151;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_151_151);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_151_151, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word Vars_61;
              MR_Word ExtraVars_62;
              MR_Word AllVars_63;

              Vars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[13]), Args_57);
              ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[14]), ExtraArgs_58);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_61, ExtraVars_62, &AllVars_63);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_63, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals_65, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals_162, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_144_144;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_144_144);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Cases_68, STATE_VARIABLE_Set_144_144, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_139_139;
              MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_137_137;
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_164, STATE_VARIABLE_Set_137_137, &STATE_VARIABLE_Set_139_139);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_135_135;
                    MR_Word Vars_165 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_135_135);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_165, STATE_VARIABLE_Set_135_135, &STATE_VARIABLE_Set_139_139);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_133_133;
                        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_133_133);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_166, STATE_VARIABLE_Set_133_133, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_133_206;
                        MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_133_206);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_207, STATE_VARIABLE_Set_133_206, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));
                        MR_Word LCSVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_129_129;
                        MR_Word STATE_VARIABLE_Set_130_130;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_129_129);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_97, STATE_VARIABLE_Set_129_129, &STATE_VARIABLE_Set_130_130);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_98, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_139_139, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondSet_72;
              MR_Word ThenSet_73;
              MR_Word ElseSet_74;
              MR_Word CondThenSet_75;
              MR_Word SomeCondThenSet_76;
              MR_Word STATE_VARIABLE_Set_142_142;
              MR_Word Vars_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Cond_69, &CondSet_72);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Then_70, &ThenSet_73);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Else_71, &ElseSet_74);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_73, &CondThenSet_75);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_163, CondThenSet_75, &SomeCondThenSet_76);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, SomeCondThenSet_76, &STATE_VARIABLE_Set_142_142);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_142_142, ElseSet_74, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_116;
                    MR_Word Var_118;
                    MR_Word LHS_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_100, (MR_Integer) 0))));
                    MR_Word RHS_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_100, (MR_Integer) 1))));

                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (RHS_177));
                      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (LHS_176));
                      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Var_116, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 1))));
                    MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 2))));
                    MR_Word MainGoal_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 4))));
                    MR_Word OrElseGoals_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 5))));
                    MR_Word OuterDI_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_102, (MR_Integer) 0))));
                    MR_Word OuterUO_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_102, (MR_Integer) 1))));
                    MR_Word InnerDI_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_103, (MR_Integer) 0))));
                    MR_Word InnerUO_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_103, (MR_Integer) 1))));
                    MR_Word Var_121;
                    MR_Word STATE_VARIABLE_Set_122_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_127;

                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (InnerUO_111));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (InnerDI_110));
                      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
                    }
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (OuterUO_109));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (OuterDI_108));
                      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_121, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_122_122);
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MainGoal_105));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (OrElseGoals_106));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Var_127, STATE_VARIABLE_Set_122_122, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_173 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_100, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_173, (MR_Integer) 0))));
                    MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_174;

                    // direct tailcall eliminated
                    ;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 2))));
      MR_Word GoalSet_16;
      MR_Word STATE_VARIABLE_Sets_19_19;
      MR_Word GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(GoalExpr_23, &GoalSet_16);
      {
        STATE_VARIABLE_Sets_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_19_19, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_13;
      MR_Word STATE_VARIABLE_Sets_16_16;
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(GoalExpr_20, &GoalSet_13);
      {
        STATE_VARIABLE_Sets_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_16_16, 0) = ((MR_Box) (GoalSet_13));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_4 = STATE_VARIABLE_Set_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_13, STATE_VARIABLE_Set_0_3, &STATE_VARIABLE_Set_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Set_0_3 = STATE_VARIABLE_Set_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Set_0_3 = next_value_of_STATE_VARIABLE_Set_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13)
{
  MR_Word CaseSets_8;
  MR_Word CasesSet_11;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Cases_6, (MR_Word) ((MR_Unsigned) 0U), &CaseSets_8);
  if ((CaseSets_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_no_lambda\'/4", (MR_String) "no cases (1)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseSets_8, &CasesSet_11);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesSet_11, STATE_VARIABLE_Set_0_12, STATE_VARIABLE_Set_13);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13)
{
  MR_Word GoalSets_8;
  MR_Word GoalsSet_9;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals_6, (MR_Word) ((MR_Unsigned) 0U), &GoalSets_8);
  if ((GoalSets_8 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsSet_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSets_8, &GoalsSet_9);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsSet_9, STATE_VARIABLE_Set_0_12, STATE_VARIABLE_Set_13);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_5_p_1(
  MR_Word RHS_7,
  MR_Word MaybeSetArgs_8,
  MR_Word STATE_VARIABLE_Set_0_24,
  MR_Word * STATE_VARIABLE_Set_25)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_7, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_10, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_7, (MR_Integer) 2))));
        MR_Word SetArgs_14;

        succeeded = (MaybeSetArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SetArgs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSetArgs_8, (MR_Integer) 0))));
          {
            MR_Word ArgsToSet_15;

            hlds__quantification__get_updated_fields_4_p_0(SetArgs_14, ArgVars_13, (MR_Word) ((MR_Unsigned) 0U), &ArgsToSet_15);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgsToSet_15, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
          }
        }
        else
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_13, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.unify_rhs_vars_no_lambda\'/5", (MR_String) "found lambda");
        return;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__get_updated_fields_3_p_0(
  MR_Word SetArgs_4,
  MR_Word Args_5,
  MR_Word * ArgsToSet_6)
{
  hlds__quantification__get_updated_fields_4_p_0(SetArgs_4, Args_5, (MR_Word) ((MR_Unsigned) 0U), ArgsToSet_6);
}

static void MR_CALL 
hlds__quantification__get_updated_fields_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsToSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsToSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ArgsToSet_4 = STATE_VARIABLE_ArgsToSet_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.get_updated_fields\'/4", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.get_updated_fields\'/4", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_ArgsToSet_28_28;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_ArgsToSet_0_3;

        switch (Var_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_ArgsToSet_28_28 = STATE_VARIABLE_ArgsToSet_0_3;
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_ArgsToSet_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsToSet_28_28, 0) = ((MR_Box) (Arg_22));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsToSet_28_28, 1) = ((MR_Box) (STATE_VARIABLE_ArgsToSet_0_3));
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_30;
        next_value_of_HeadVar__2_2 = Args_23;
        next_value_of_STATE_VARIABLE_ArgsToSet_0_3 = STATE_VARIABLE_ArgsToSet_28_28;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_ArgsToSet_0_3 = next_value_of_STATE_VARIABLE_ArgsToSet_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 1))));
    MR_Word RenameVars_22;
    MR_Word RenameMap_23;
    MR_Word OrElseGoal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OrElseInnerDI_25;
    MR_Word OrElseInnerUO_26;
    MR_Word OrElseInner_27;
    MR_Word OrElseGoalsTail_28;
    MR_Word OrElseInnersTail_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Box conv0_OrElseInnerDI_25;
    MR_Box conv1_OrElseInnerUO_26;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    RenameVars_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_22);
    if (!(succeeded))
    {
    }
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap_23);
    conv0_OrElseInnerDI_25 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerDI_20)));
    OrElseInnerDI_25 = ((MR_Word) (conv0_OrElseInnerDI_25));
    conv1_OrElseInnerUO_26 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerUO_21)));
    OrElseInnerUO_26 = ((MR_Word) (conv1_OrElseInnerUO_26));
    {
      OrElseInner_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(MR_mktag(0), OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseGoalsTail_28));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_96;

  QVars_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_16);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_20, QVars_23, &RenameVars1_24);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_21, QVars_23, &RenameVars2_25);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_24, RenameVars2_25, &RenameVars_26);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
  if (succeeded)
  {
    *SubGoal_15 = SubGoal0_14;
    *Vars_17 = Vars0_16;
    *Reason_13 = Reason0_12;
    STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_0_53;
  }
  else
  {
    MR_Word Context_27;
    MR_Word RenameMap_28;
    MR_Word STATE_VARIABLE_Info_55_55;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_26, Context_27, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(RenameVars_26, &RenameMap_28, SubGoal0_14, SubGoal_15, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_56_56);
    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, Vars0_16, Vars_17);
    switch (MR_tag((MR_Word) Reason0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Reason_13 = (MR_Word) (&hlds__quantification_scalar_common_2[0]);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
              return;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_96));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_112));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
  if (!(succeeded))
  {
  }
  mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_10);
  *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  *STATE_VARIABLE_Goal_26 = STATE_VARIABLE_Goal_0_25;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_49_11_p_1(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34)
{
  MR_Word VarSetTypes0_19;
  MR_Word VarDb0_20;
  MR_Word QuantInfo0_21;
  MR_Word QuantInfo_22;
  MR_Word VarDb_23;
  MR_Word Warnings0_26;
  MR_Word LambdaOutsideVars_46;
  MR_Word QuantVars_47;
  MR_Word NonLocals_48;

  {
    VarSetTypes0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_29));
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_31));
  }
  {
    VarDb0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarDb0_20, 0) = ((MR_Box) (VarSetTypes0_19));
  }
  LambdaOutsideVars_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 0) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 1) = ((MR_Box) (LambdaOutsideVars_46));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 2) = ((MR_Box) (QuantVars_47));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 3) = ((MR_Box) (NonLocals_48));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 4) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 5) = ((MR_Box) (VarDb0_20));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_33));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(STATE_VARIABLE_Goal_0_27, STATE_VARIABLE_Goal_28, QuantInfo0_21, &QuantInfo_22);
  VarDb_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 6))));
  Warnings0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_23)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/11", (MR_String) "var_db_var_table");
      return;
    }
  else
  {
    MR_Word VarSetTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_23, (MR_Integer) 0))));

    *STATE_VARIABLE_VarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 1))));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_26, Warnings_14);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16;
    MR_Word Inner0_17;
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_66));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NonLocalVars_10;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_61));
    }
  }
  else
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_no_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarsList_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word OutsideVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      MR_Word OutsideVars1_31;
      MR_Word NonLocalVars1_32;
      MR_Word OutsideVars2_33;
      MR_Word NonLocalVars2_34;
      MR_Word NonLocalVarsConj_35;
      MR_Word NonLocalVars_36;
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word STATE_VARIABLE_Info_42_42;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, FollowingVars_23, &OutsideVars1_31);
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars1_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_83));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Var_48, &Goal_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
      NonLocalVars1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, NonLocalVars1_32, &OutsideVars2_33);
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4))));
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 5))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 6))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (OutsideVars2_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 5) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 6) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 7) = ((MR_Box) (Var_105));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_24, Var_47, &Goals_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_32, NonLocalVars2_34, &NonLocalVarsConj_35);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_35, OutsideVars_30, &NonLocalVars_36);
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
      Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutsideVars_30));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_36));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_127));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word FollowingVarsList_11;

  if ((STATE_VARIABLE_Goals_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    FollowingVarsList_11 = (MR_Word) ((MR_Unsigned) 0U);
    *PossiblyNonLocalGoalVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 0))));
    MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 1))));
    MR_Word Set_20;
    MR_Word Sets_21;
    MR_Word GoalSet_23;
    MR_Word GoalExpr_29;
    MR_Word Set0_34;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(Goals_19, &Set_20, &Sets_21);
    {
      FollowingVarsList_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 0) = ((MR_Box) (Set_20));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 1) = ((MR_Box) (Sets_21));
    }
    GoalExpr_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
    Set0_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_29, Set0_34, &GoalSet_23);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_23, Set_20, PossiblyNonLocalGoalVars_9);
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_11, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1(
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_RHS_0_81)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));

        *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
        MR_Word ArgVars0_32;
        MR_Word Modes_33;
        MR_Word OutsideVars0_34;
        MR_Word QVars_35;
        MR_Word RenameVars0_36;
        MR_Word Seen0_38;
        MR_Word RenameVars1_39;
        MR_Word RenameVars_40;
        MR_Word RenameMap_41;
        MR_Word Goal1_42;
        MR_Word QuantVars0_43;
        MR_Word OutsideVars1_44;
        MR_Word QuantVars_45;
        MR_Word OutsideVars_46;
        MR_Word LambdaOutsideVars0_47;
        MR_Word LambdaOutsideVars_48;
        MR_Word Goal_49;
        MR_Word RHSNonLocals0_50;
        MR_Word LambdaGoalInfo_52;
        MR_Word LambdaGoalNonLocals_53;
        MR_Word LambdaNonLocals_54;
        MR_Word ArgVarsModes_55;
        MR_Word STATE_VARIABLE_Info_87_87;
        MR_Word STATE_VARIABLE_Info_88_88;
        MR_Word STATE_VARIABLE_Info_90_90;
        MR_Word STATE_VARIABLE_Info_91_91;
        MR_Word STATE_VARIABLE_Info_92_92;
        MR_Word STATE_VARIABLE_Info_93_93;
        MR_Word STATE_VARIABLE_Info_94_94;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word Var_97;
        MR_Word ArgVars_108;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_151;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_195;
        MR_Word Var_226;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_261;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
        QVars_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_32);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QVars_35, &RenameVars0_36);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36);
        if (succeeded)
          STATE_VARIABLE_Info_87_87 = STATE_VARIABLE_Info_0_85;
        else
        {
          MR_Word Context_37;

          Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
          hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars0_36, Context_37, STATE_VARIABLE_Info_0_85, &STATE_VARIABLE_Info_87_87);
        }
        Seen0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_151));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_160));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_161));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_167));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_178));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_181));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_195));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_204));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_206));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_208));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_209));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_210));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_211));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_226));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_242));
          }
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_250));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_251));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_252));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_253));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_256));
        }
        Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_261));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_270));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_272));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_273));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_274));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_275));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_276));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_277));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_1));
          MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(MR_mktag(2), base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_2));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_3));
                  MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has size info");
              }
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args0_58, ArgModes0_59, &ArgModesMap_65);
              Args_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RHSNonLocals_16);
              mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args_66, ArgModesMap_65, &ArgModes_67);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Unification_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_62));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
            }
            break;
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_53 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_71_71;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word Var_202;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_242;
        MR_Word Var_243;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Word Var_250;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_202));
        if (succeeded)
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_71_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 0) = ((MR_Box) (Var_211));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 1) = ((MR_Box) (Var_212));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 3) = ((MR_Box) (Var_214));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 4) = ((MR_Box) (Var_215));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 5) = ((MR_Box) (Var_216));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 6) = ((MR_Box) (Var_217));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 7) = ((MR_Box) (Var_218));
          }
        }
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 1))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 2))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 3))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 4))));
        Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 5))));
        Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 6))));
        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_72_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 1) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 2) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 3) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 4) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 5) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 6) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 7) = ((MR_Box) (Var_232));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
        Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
        Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
        Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 4))));
        Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 5))));
        Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 6))));
        Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 1) = ((MR_Box) (Var_239));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_240));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_241));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (Var_242));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 5) = ((MR_Box) (Var_243));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 6) = ((MR_Box) (Var_244));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 7) = ((MR_Box) (Var_245));
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_250));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_74_74;
        else
        {
          MR_Word Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 0))));
          MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 1))));
          MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 3))));
          MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 4))));
          MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 5))));
          MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 6))));
          MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_420 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_421 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_425;
        MR_Word LambdaOutsideVars_426;
        MR_Word AllButRHSGoalVars_457;
        MR_Word UnifyRHS_458;
        MR_Word Unification_459;
        MR_Word RHSGoalVars_460;
        MR_Word AllGoalVars_461;
        MR_Word ONonLocalVars_462;
        MR_Word LONonLocalVars_463;
        MR_Word NonLocalVars_464;
        MR_Word STATE_VARIABLE_GoalVars_61_465;
        MR_Word STATE_VARIABLE_Info_68_472;
        MR_Word STATE_VARIABLE_Info_69_473;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_425);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_426);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_420, &STATE_VARIABLE_GoalVars_61_465);
        switch (MR_tag((MR_Word) Unification0_423)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_432 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 4))));
              MR_Word SubInfo_434 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_65_469;
              MR_Word SizeVar_443;
              MR_Word MaybeSize_442;
              MR_Word Var_470;

              switch (MR_tag((MR_Word) How_432)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_435;
                    MR_Word Var_468 = (MR_Word) (MR_body((MR_Word) (How_432), (MR_Integer) 1));

                    ReuseVar_435 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_468, (MR_Integer) 0))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_435, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_432, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_439, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
              }
              succeeded = (SubInfo_434 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_434, (MR_Integer) 1))));
                succeeded = (MaybeSize_442 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_470 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_442, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_470)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_470, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_443, STATE_VARIABLE_GoalVars_65_469, &AllButRHSGoalVars_457);
              else
                AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_65_469;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_456 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_456, STATE_VARIABLE_GoalVars_61_465, &AllButRHSGoalVars_457);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1(GoalInfo0_11, UnifyRHS0_421, &UnifyRHS_458, Unification0_423, &Unification_459, &RHSGoalVars_460, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_472);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_420));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyRHS_458));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_422));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_459));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_424));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_457, RHSGoalVars_460, &AllGoalVars_461);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_461, STATE_VARIABLE_Info_68_472, &STATE_VARIABLE_Info_69_473);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, OutsideVars_425, &ONonLocalVars_462);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, LambdaOutsideVars_426, &LONonLocalVars_463);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_462, LONonLocalVars_463, &NonLocalVars_464);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_464, STATE_VARIABLE_Info_69_473, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[11]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[12]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_88;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals0_43, &Goals_88, PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_88));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_115));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_116));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_90));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_404;
            MR_Word Var_405;
            MR_Word Var_406;
            MR_Word Var_408;
            MR_Word Var_409;
            MR_Word Var_410;
            MR_Word Var_411;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_404));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_405));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_406));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_408));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_409));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_410));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_411));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_277 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_278;
            MR_Word STATE_VARIABLE_Info_60_320;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_278);
            switch (MR_tag((MR_Word) Reason0_276)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason0_276, (MR_Integer) 0))));
                  MR_Word Reason_281;
                  MR_Word SubGoal1_282;
                  MR_Word Vars_283;
                  MR_Word SubGoal_284;
                  MR_Word NonLocals0_285;
                  MR_Word NonLocals_286;
                  MR_Word STATE_VARIABLE_Info_58_318;
                  MR_Word STATE_VARIABLE_Info_59_319;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_281, SubGoal0_277, &SubGoal1_282, Vars0_279, &Vars_283, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_318);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal1_282, &SubGoal_284, STATE_VARIABLE_Info_58_318, &STATE_VARIABLE_Info_59_319);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_281));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_284));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_319, &NonLocals0_285);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_283, NonLocals0_285, &NonLocals_286);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_286, STATE_VARIABLE_Info_59_319, &STATE_VARIABLE_Info_60_320);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_329;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_329;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_287 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 1))));
                      MR_Word FGT_288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_288) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_289;
                            MR_Word LambdaOutsideVars_290;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_289);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_290);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_289, TermVar_287);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_290, TermVar_287);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_287);
                            }
                            else
                            {
                              switch (FGT_288) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_324;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_277, &SubGoal_324, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_324));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_49_309;
                      MR_Word STATE_VARIABLE_Info_50_310;
                      MR_Word Vars0_330 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 5))));
                      MR_Word Reason_331;
                      MR_Word SubGoal1_332;
                      MR_Word Vars_333;
                      MR_Word SubGoal_334;
                      MR_Word NonLocals0_335;
                      MR_Word NonLocals_336;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1(Reason0_276, &Reason_331, SubGoal0_277, &SubGoal1_332, Vars0_330, &Vars_333, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_49_309);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal1_332, &SubGoal_334, STATE_VARIABLE_Info_49_309, &STATE_VARIABLE_Info_50_310);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_331));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_334));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_50_310, &NonLocals0_335);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_333, NonLocals0_335, &NonLocals_336);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_336, STATE_VARIABLE_Info_50_310, &STATE_VARIABLE_Info_60_320);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_278, STATE_VARIABLE_Info_60_320, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_129;
            MR_Word OutsideVars0_130;
            MR_Word LambdaOutsideVars0_131;
            MR_Word QVars_132;
            MR_Word Cond1_133;
            MR_Word Then1_134;
            MR_Word QuantVars1_135;
            MR_Word VarsThen_144;
            MR_Word LambdaVarsThen_145;
            MR_Word OutsideVars1_146;
            MR_Word LambdaOutsideVars1_147;
            MR_Word Cond_148;
            MR_Word NonLocalsCond_149;
            MR_Word OutsideVars2_150;
            MR_Word Then_151;
            MR_Word NonLocalsThen_152;
            MR_Word Else_153;
            MR_Word NonLocalsElse_154;
            MR_Word NonLocalsIfThen_155;
            MR_Word NonLocalsIfThenElse_156;
            MR_Word NonLocalsO_157;
            MR_Word NonLocalsL_158;
            MR_Word NonLocals_159;
            MR_Word STATE_VARIABLE_Info_52_161;
            MR_Word STATE_VARIABLE_Info_54_163;
            MR_Word STATE_VARIABLE_Info_55_164;
            MR_Word STATE_VARIABLE_Info_56_165;
            MR_Word STATE_VARIABLE_Info_57_166;
            MR_Word STATE_VARIABLE_Info_58_167;
            MR_Word STATE_VARIABLE_Info_59_168;
            MR_Word STATE_VARIABLE_Info_60_169;
            MR_Word STATE_VARIABLE_Info_61_170;
            MR_Word STATE_VARIABLE_Info_62_171;
            MR_Word STATE_VARIABLE_Info_63_172;
            MR_Word STATE_VARIABLE_Info_64_173;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_129);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_130);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_131);
            if ((Vars0_125 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_132 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_133 = Cond0_126;
              Then1_134 = Then0_127;
              QuantVars1_135 = QuantVars0_129;
              STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_138;
              MR_Word RenameVars2_139;
              MR_Word RenameVars_140;
              MR_Word Vars_141;

              QVars_132 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_125);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, QVars_132, &RenameVars1_138);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, QVars_132, &RenameVars2_139);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_138, RenameVars2_139, &RenameVars_140);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_140);
              if (succeeded)
              {
                Cond1_133 = Cond0_126;
                Then1_134 = Then0_127;
                Vars_141 = Vars0_125;
                STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_142;
                MR_Word RenameMap_143;
                MR_Word STATE_VARIABLE_Info_51_160;

                Context_142 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_140, Context_142, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_160);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_140, &RenameMap_143, Cond0_126, &Cond1_133, STATE_VARIABLE_Info_51_160, &STATE_VARIABLE_Info_52_161);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_143, Then0_127, &Then1_134);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_143, Vars0_125, &Vars_141);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_141, QuantVars0_129, &QuantVars1_135);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Then1_134, &VarsThen_144);
            LambdaVarsThen_145 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, VarsThen_144, &OutsideVars1_146);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, LambdaVarsThen_145, &LambdaOutsideVars1_147);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_135, STATE_VARIABLE_Info_52_161, &STATE_VARIABLE_Info_54_163);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_146, STATE_VARIABLE_Info_54_163, &STATE_VARIABLE_Info_55_164);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_147, STATE_VARIABLE_Info_55_164, &STATE_VARIABLE_Info_56_165);
            hlds__quantification__update_seen_vars_3_p_0(QVars_132, STATE_VARIABLE_Info_56_165, &STATE_VARIABLE_Info_57_166);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Cond1_133, &Cond_148, STATE_VARIABLE_Info_57_166, &STATE_VARIABLE_Info_58_167);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_167, &NonLocalsCond_149);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, NonLocalsCond_149, &OutsideVars2_150);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_150, STATE_VARIABLE_Info_58_167, &STATE_VARIABLE_Info_59_168);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_131, STATE_VARIABLE_Info_59_168, &STATE_VARIABLE_Info_60_169);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Then1_134, &Then_151, STATE_VARIABLE_Info_60_169, &STATE_VARIABLE_Info_61_170);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_170, &NonLocalsThen_152);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_130, STATE_VARIABLE_Info_61_170, &STATE_VARIABLE_Info_62_171);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_129, STATE_VARIABLE_Info_62_171, &STATE_VARIABLE_Info_63_172);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Else0_128, &Else_153, STATE_VARIABLE_Info_63_172, &STATE_VARIABLE_Info_64_173);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_148));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_151));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_153));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_173, &NonLocalsElse_154);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_149, NonLocalsThen_152, &NonLocalsIfThen_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_155, NonLocalsElse_154, &NonLocalsIfThenElse_156);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, OutsideVars0_130, &NonLocalsO_157);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, LambdaOutsideVars0_131, &NonLocalsL_158);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_157, NonLocalsL_158, &NonLocals_159);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_159, STATE_VARIABLE_Info_64_173, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_351 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_351)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_352 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word Inner_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 3))));
                  MR_Word MainGoal0_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 5))));
                  MR_Word OrElseInners0_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_359;
                  MR_Word OrElseInners_360;
                  MR_Word AtomicGoalsWithInners0_363;
                  MR_Word AllAtomicGoals_365;
                  MR_Word NonLocalVarSets_366;
                  MR_Word MainGoal_367;
                  MR_Word OrElseGoals_368;
                  MR_Word NonLocalVars0_369;
                  MR_Word NonLocalVars_372;
                  MR_Word ShortHand_373;
                  MR_Word STATE_VARIABLE_Info_50_385;
                  MR_Word Var_386;
                  MR_Word Var_387;
                  MR_Word STATE_VARIABLE_Info_53_388;

                  if ((OrElseInners0_358 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(Inner_354, OrElseGoals0_357, &OrElseGoals1_359, &OrElseInners_360, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_385);
                  else
                  {
                    OrElseInners_360 = OrElseInners0_358;
                    OrElseGoals1_359 = OrElseGoals0_357;
                    STATE_VARIABLE_Info_50_385 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_386, 0) = ((MR_Box) (MainGoal0_356));
                    MR_hl_field(MR_mktag(1), Var_386, 1) = ((MR_Box) (OrElseGoals1_359));
                  }
                  {
                    Var_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_387, 0) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), Var_387, 1) = ((MR_Box) (OrElseInners_360));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_386, Var_387, &AtomicGoalsWithInners0_363);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(AtomicGoalsWithInners0_363, &AllAtomicGoals_365, STATE_VARIABLE_Info_50_385, &STATE_VARIABLE_Info_53_388, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_366);
                  if ((AllAtomicGoals_365 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_367 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 0))));
                    OrElseGoals_368 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_366, &NonLocalVars0_369);
                  switch (GoalType_352) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_372 = NonLocalVars0_369;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 0))));
                        MR_Word OuterUO_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 1))));
                        MR_Word Var_391;
                        MR_Word Var_392;

                        {
                          Var_392 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_392, 0) = ((MR_Box) (OuterUO_371));
                          MR_hl_field(MR_mktag(1), Var_392, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (OuterDI_370));
                          MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (Var_392));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_391, NonLocalVars0_369, &NonLocalVars_372);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_372, STATE_VARIABLE_Info_53_388, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 0) = (MR_Box) ((MR_Unsigned) (GoalType_352));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 1) = ((MR_Box) (Outer_353));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 2) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 3) = ((MR_Box) (MaybeOutputVars_355));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 4) = ((MR_Box) (MainGoal_367));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 5) = ((MR_Box) (OrElseGoals_368));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 6) = ((MR_Box) (OrElseInners_360));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_373));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_374 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 0))));
                  MR_Word ResultVar_375 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word SubGoal0_376 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word SubGoal_377;
                  MR_Word ShortHand_395;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_376, &SubGoal_377, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_395 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 0) = ((MR_Box) (MaybeIO_374));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 1) = ((MR_Box) (ResultVar_375));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 2) = ((MR_Box) (SubGoal_377));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_395));
                  }
                }
                break;
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word RenameMap_17;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_RttiVarMaps_32_32;
    MR_Word STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Box conv1_STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Word Var_77;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_16, &RenameMap_17, Var_27, &Var_28, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[10]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_77));
    if (succeeded)
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_29_29;
    else
    {
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));

      {
        STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_93));
      }
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_49_6_p_1(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_22);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_49_6_p_1(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_8, STATE_VARIABLE_GoalInfo_0_11, STATE_VARIABLE_GoalInfo_12);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set0_14;

  Set0_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_5, Set0_14, BothSet_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *Set_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_12;
    MR_Word SetList0_13;
    MR_Word Set1_14;
    MR_Word GoalExpr_20;
    MR_Word Set0_25;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(Goals_9, &Set0_12, &SetList0_13);
    GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    Set0_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_20, Set0_25, &Set1_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_12, Set1_14, Set_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Set0_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetList0_13));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(
  MR_Word GoalExpr_5,
  MR_Word * Set_6)
{
  MR_Word Set0_7;

  Set0_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_5, Set0_7, Set_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(
  MR_Word Goal_5,
  MR_Word * Set_6)
{
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
  MR_Word Set0_12;

  Set0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_7, Set0_12, Set_6);
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_114,
  MR_Word * STATE_VARIABLE_Set_115)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word SubGoalExpr_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_77, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_78;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_154_154;
          MR_Word STATE_VARIABLE_Set_160_160;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_8, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_154_154);
          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 4))));
                MR_Word SubInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_158_158;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_159;

                switch (MR_tag((MR_Word) How_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_158_158 = STATE_VARIABLE_Set_154_154;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_20;
                      MR_Word Var_157 = (MR_Word) (MR_body((MR_Word) (How_17), (MR_Integer) 1));

                      ReuseVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_158_158);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_158_158 = STATE_VARIABLE_Set_154_154;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_17, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_158_158);
                    }
                    break;
                }
                succeeded = (SubInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_19, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_159)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_159, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_158_158, &STATE_VARIABLE_Set_160_160);
                else
                  STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_158_158;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_154_154;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_160_160 = STATE_VARIABLE_Set_154_154;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_11, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_160_160);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_44_32_51_93_95_48_5_p_0(RHS_9, STATE_VARIABLE_Set_160_160, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_151_151;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_151_151);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_151_151, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word Vars_61;
              MR_Word ExtraVars_62;
              MR_Word AllVars_63;

              Vars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[8]), Args_57);
              ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[9]), ExtraArgs_58);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_61, ExtraVars_62, &AllVars_63);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_63, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals_65, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals_162, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_144_144;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_144_144);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Cases_68, STATE_VARIABLE_Set_144_144, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_139_139;
              MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_137_137;
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_164, STATE_VARIABLE_Set_137_137, &STATE_VARIABLE_Set_139_139);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_135_135;
                    MR_Word Vars_165 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_135_135);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_165, STATE_VARIABLE_Set_135_135, &STATE_VARIABLE_Set_139_139);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_133_133;
                        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_133_133);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_166, STATE_VARIABLE_Set_133_133, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_133_206;
                        MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_133_206);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_207, STATE_VARIABLE_Set_133_206, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_139_139);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 1))));
                        MR_Word LCSVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_80, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_129_129;
                        MR_Word STATE_VARIABLE_Set_130_130;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_129_129);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_97, STATE_VARIABLE_Set_129_129, &STATE_VARIABLE_Set_130_130);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_98, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_139_139);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_139_139, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondSet_72;
              MR_Word ThenSet_73;
              MR_Word ElseSet_74;
              MR_Word CondThenSet_75;
              MR_Word SomeCondThenSet_76;
              MR_Word STATE_VARIABLE_Set_142_142;
              MR_Word Vars_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Cond_69, &CondSet_72);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Then_70, &ThenSet_73);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Else_71, &ElseSet_74);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_73, &CondThenSet_75);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_163, CondThenSet_75, &SomeCondThenSet_76);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, SomeCondThenSet_76, &STATE_VARIABLE_Set_142_142);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_142_142, ElseSet_74, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_116;
                    MR_Word Var_118;
                    MR_Word LHS_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_100, (MR_Integer) 0))));
                    MR_Word RHS_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_100, (MR_Integer) 1))));

                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (RHS_177));
                      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (LHS_176));
                      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Var_116, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 1))));
                    MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 2))));
                    MR_Word MainGoal_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 4))));
                    MR_Word OrElseGoals_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_100, (MR_Integer) 5))));
                    MR_Word OuterDI_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_102, (MR_Integer) 0))));
                    MR_Word OuterUO_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_102, (MR_Integer) 1))));
                    MR_Word InnerDI_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_103, (MR_Integer) 0))));
                    MR_Word InnerUO_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_103, (MR_Integer) 1))));
                    MR_Word Var_121;
                    MR_Word STATE_VARIABLE_Set_122_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_127;

                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (InnerUO_111));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (InnerDI_110));
                      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
                    }
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (OuterUO_109));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
                    }
                    {
                      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (OuterDI_108));
                      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_121, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_122_122);
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MainGoal_105));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (OrElseGoals_106));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Var_127, STATE_VARIABLE_Set_122_122, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_173 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_100, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_173, (MR_Integer) 0))));
                    MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_174;

                    // direct tailcall eliminated
                    ;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 2))));
      MR_Word GoalSet_16;
      MR_Word STATE_VARIABLE_Sets_19_19;
      MR_Word GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(GoalExpr_23, &GoalSet_16);
      {
        STATE_VARIABLE_Sets_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_19_19, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_13;
      MR_Word STATE_VARIABLE_Sets_16_16;
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(GoalExpr_20, &GoalSet_13);
      {
        STATE_VARIABLE_Sets_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_16_16, 0) = ((MR_Box) (GoalSet_13));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_4 = STATE_VARIABLE_Set_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_13, STATE_VARIABLE_Set_0_3, &STATE_VARIABLE_Set_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Set_0_3 = STATE_VARIABLE_Set_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Set_0_3 = next_value_of_STATE_VARIABLE_Set_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13)
{
  MR_Word CaseSets_8;
  MR_Word CasesSet_11;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Cases_6, (MR_Word) ((MR_Unsigned) 0U), &CaseSets_8);
  if ((CaseSets_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_no_lambda\'/4", (MR_String) "no cases (1)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseSets_8, &CasesSet_11);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesSet_11, STATE_VARIABLE_Set_0_12, STATE_VARIABLE_Set_13);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_12,
  MR_Word * STATE_VARIABLE_Set_13)
{
  MR_Word GoalSets_8;
  MR_Word GoalsSet_9;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals_6, (MR_Word) ((MR_Unsigned) 0U), &GoalSets_8);
  if ((GoalSets_8 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsSet_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSets_8, &GoalsSet_9);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsSet_9, STATE_VARIABLE_Set_0_12, STATE_VARIABLE_Set_13);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_44_32_51_93_95_48_5_p_0(
  MR_Word RHS_7,
  MR_Word STATE_VARIABLE_Set_0_24,
  MR_Word * STATE_VARIABLE_Set_25)
{
  switch (MR_tag((MR_Word) RHS_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_7, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_10, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_7, (MR_Integer) 2))));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_13, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.unify_rhs_vars_no_lambda\'/5", (MR_String) "found lambda");
        return;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word OrElseGoal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 1))));
    MR_Word RenameVars_22;
    MR_Word RenameMap_23;
    MR_Word OrElseGoal_24;
    MR_Word OrElseInnerDI_25;
    MR_Word OrElseInnerUO_26;
    MR_Word OrElseInner_27;
    MR_Word OrElseGoalsTail_28;
    MR_Word OrElseInnersTail_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Box conv0_OrElseInnerDI_25;
    MR_Box conv1_OrElseInnerUO_26;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    RenameVars_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_22, &RenameMap_23, OrElseGoal0_15, &OrElseGoal_24, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_35_35);
    conv0_OrElseInnerDI_25 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerDI_20)));
    OrElseInnerDI_25 = ((MR_Word) (conv0_OrElseInnerDI_25));
    conv1_OrElseInnerUO_26 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerUO_21)));
    OrElseInnerUO_26 = ((MR_Word) (conv1_OrElseInnerUO_26));
    {
      OrElseInner_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(MR_mktag(0), OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseGoalsTail_28));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_96;

  QVars_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_16);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_20, QVars_23, &RenameVars1_24);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_21, QVars_23, &RenameVars2_25);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_24, RenameVars2_25, &RenameVars_26);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
  if (succeeded)
  {
    *SubGoal_15 = SubGoal0_14;
    *Vars_17 = Vars0_16;
    *Reason_13 = Reason0_12;
    STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_0_53;
  }
  else
  {
    MR_Word Context_27;
    MR_Word RenameMap_28;
    MR_Word STATE_VARIABLE_Info_55_55;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_26, Context_27, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_26, &RenameMap_28, SubGoal0_14, SubGoal_15, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_56_56);
    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, Vars0_16, Vars_17);
    switch (MR_tag((MR_Word) Reason0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Reason_13 = (MR_Word) (&hlds__quantification_scalar_common_2[0]);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
              return;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_96));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_112));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
  if (succeeded)
  {
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_10);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    *STATE_VARIABLE_Goal_26 = STATE_VARIABLE_Goal_0_25;
  }
  else
  {
    MR_Word RenameList_13;
    MR_Word VarDb0_14;
    MR_Word RenameMap0_15;
    MR_Word VarDb_22;
    MR_Word Var_50;

    RenameList_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
    VarDb0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap0_15);
    if (((MR_tag((MR_Word) VarDb0_14)) == (MR_Integer) 1))
    {
      MR_Word VarTable0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb0_14, (MR_Integer) 0))));
      MR_Word VarTable_24;

      hlds__goal_util__clone_variables_var_table_5_p_0(RenameList_13, VarTable0_23, &VarTable_24, RenameMap0_15, RenameMap_10);
      {
        VarDb_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarDb_22, 0) = ((MR_Box) (VarTable_24));
      }
    }
    else
    {
      MR_Word VarSetTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb0_14, (MR_Integer) 0))));
      MR_Word VarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_16, (MR_Integer) 0))));
      MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_16, (MR_Integer) 1))));
      MR_Word VarSet_19;
      MR_Word VarTypes_20;
      MR_Word VarSetTypes_21;

      hlds__goal_util__clone_variables_9_p_0(RenameList_13, VarSet0_17, VarTypes0_18, VarSet0_17, &VarSet_19, VarTypes0_18, &VarTypes_20, RenameMap0_15, RenameMap_10);
      {
        VarSetTypes_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarSetTypes_21, 0) = ((MR_Box) (VarSet_19));
        MR_hl_field(MR_mktag(0), VarSetTypes_21, 1) = ((MR_Box) (VarTypes_20));
      }
      {
        VarDb_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarDb_22, 0) = ((MR_Box) (VarSetTypes_21));
      }
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*RenameMap_10, STATE_VARIABLE_Goal_0_25, STATE_VARIABLE_Goal_26);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    succeeded = (((MR_Word) VarDb_22) == ((MR_Word) Var_50));
    if (succeeded)
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    else
    {
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarDb_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_66));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_48_11_p_0(
  MR_Word OutsideVars_13,
  MR_Word * Warnings_14,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_33,
  MR_Word * STATE_VARIABLE_RttiVarMaps_34)
{
  MR_Word VarSetTypes0_19;
  MR_Word VarDb0_20;
  MR_Word QuantInfo0_21;
  MR_Word QuantInfo_22;
  MR_Word VarDb_23;
  MR_Word Warnings0_26;
  MR_Word LambdaOutsideVars_46;
  MR_Word QuantVars_47;
  MR_Word NonLocals_48;

  {
    VarSetTypes0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_29));
    MR_hl_field(MR_mktag(0), VarSetTypes0_19, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_31));
  }
  {
    VarDb0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarDb0_20, 0) = ((MR_Box) (VarSetTypes0_19));
  }
  LambdaOutsideVars_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 0) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 1) = ((MR_Box) (LambdaOutsideVars_46));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 2) = ((MR_Box) (QuantVars_47));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 3) = ((MR_Box) (NonLocals_48));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 4) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 5) = ((MR_Box) (VarDb0_20));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_33));
    MR_hl_field(MR_mktag(0), QuantInfo0_21, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_Goal_0_27, STATE_VARIABLE_Goal_28, QuantInfo0_21, &QuantInfo_22);
  VarDb_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 6))));
  Warnings0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QuantInfo_22, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_23)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/11", (MR_String) "var_db_var_table");
      return;
    }
  else
  {
    MR_Word VarSetTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb_23, (MR_Integer) 0))));

    *STATE_VARIABLE_VarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes_24, (MR_Integer) 1))));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_26, Warnings_14);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16;
    MR_Word Inner0_17;
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_66));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_NonLocalVarSets_0_6,
  MR_Word * STATE_VARIABLE_NonLocalVarSets_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NonLocalVarSets_7 = STATE_VARIABLE_NonLocalVarSets_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NonLocalVars_10;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_69));
    }
  }
  else
  {
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_maybe_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVarPair_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarPairs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word FollowingVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FollowingVarPair_23, (MR_Integer) 0))));
      MR_Word LambdaFollowingVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FollowingVarPair_23, (MR_Integer) 1))));
      MR_Word OutsideVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      MR_Word LambdaOutsideVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      MR_Word OutsideVars1_34;
      MR_Word LambdaOutsideVars1_35;
      MR_Word NonLocalVars1_36;
      MR_Word OutsideVars2_37;
      MR_Word NonLocalVars2_38;
      MR_Word NonLocalVarsConj_39;
      MR_Word NonLocalVarsO_40;
      MR_Word NonLocalVarsL_41;
      MR_Word NonLocalVars_42;
      MR_Word STATE_VARIABLE_Info_45_45;
      MR_Word STATE_VARIABLE_Info_46_46;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Info_48_48;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_105;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_149;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_32, FollowingVars_30, &OutsideVars1_34);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_33, LambdaFollowingVars_31, &LambdaOutsideVars1_35);
      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_45_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 0) = ((MR_Box) (OutsideVars1_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 1) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 2) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 3) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 5) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 6) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, 7) = ((MR_Box) (Var_100));
      }
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 1))));
      succeeded = (((MR_Word) LambdaOutsideVars1_35) == ((MR_Word) Var_105));
      if (succeeded)
        STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_45_45;
      else
      {
        MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 0))));
        MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 2))));
        MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 3))));
        MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 4))));
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 5))));
        MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 6))));
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_45_45, (MR_Integer) 7))));

        {
          STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (LambdaOutsideVars1_35));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_121));
        }
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Var_56, &Goal_27, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
      NonLocalVars1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_32, NonLocalVars1_36, &OutsideVars2_37);
      Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 1))));
      Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 2))));
      Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
      Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 4))));
      Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 5))));
      Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 6))));
      Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (OutsideVars2_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 6) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 7) = ((MR_Box) (Var_144));
      }
      Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
      succeeded = (((MR_Word) LambdaOutsideVars_33) == ((MR_Word) Var_149));
      if (succeeded)
        STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_48_48;
      else
      {
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
        MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 3))));
        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 4))));
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 5))));
        MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 6))));
        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 7))));

        {
          STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (LambdaOutsideVars_33));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_164));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (Var_165));
        }
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarPairs_24, Var_55, &Goals_28, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_36, NonLocalVars2_38, &NonLocalVarsConj_39);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_39, OutsideVars_32, &NonLocalVarsO_40);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_39, LambdaOutsideVars_33, &NonLocalVarsL_41);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsO_40, NonLocalVarsL_41, &NonLocalVars_42);
      Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
      Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
      Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
      Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
      Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
      Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutsideVars_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_183));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_42));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_187));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_188));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * PossiblyNonLocalGoalVars_9,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word FollowingVarsList_11;

  if ((STATE_VARIABLE_Goals_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    FollowingVarsList_11 = (MR_Word) ((MR_Unsigned) 0U);
    *PossiblyNonLocalGoalVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 0))));
    MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Goals_0_12, (MR_Integer) 1))));
    MR_Word Set_20;
    MR_Word LambdaSet_21;
    MR_Word SetPairs_22;
    MR_Word GoalsBothSet_24;
    MR_Word GoalSet_25;
    MR_Word GoalLambdaSet_26;
    MR_Word GoalBothSet_27;
    MR_Word Var_28;
    MR_Word GoalExpr_35;
    MR_Word Set0_41;
    MR_Word LambdaSet0_42;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(Goals_19, &Set_20, &LambdaSet_21, &SetPairs_22);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Set_20));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (LambdaSet_21));
    }
    {
      FollowingVarsList_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), FollowingVarsList_11, 1) = ((MR_Box) (SetPairs_22));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_20, LambdaSet_21, &GoalsBothSet_24);
    GoalExpr_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
    Set0_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    LambdaSet0_42 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_35, Set0_41, &GoalSet_25, LambdaSet0_42, &GoalLambdaSet_26);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_25, GoalLambdaSet_26, &GoalBothSet_27);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalBothSet_27, GoalsBothSet_24, PossiblyNonLocalGoalVars_9);
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_11, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1110__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1089__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0(
  MR_Word GoalInfo0_13,
  MR_Word STATE_VARIABLE_RHS_0_81,
  MR_Word * STATE_VARIABLE_RHS_82,
  MR_Word STATE_VARIABLE_Unification_0_83,
  MR_Word * STATE_VARIABLE_Unification_84,
  MR_Word * RHSNonLocals_16,
  MR_Word STATE_VARIABLE_Info_0_85,
  MR_Word * STATE_VARIABLE_Info_86)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_RHS_0_81)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));

        *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
        MR_Word ArgVars0_32;
        MR_Word Modes_33;
        MR_Word OutsideVars0_34;
        MR_Word QVars_35;
        MR_Word RenameVars0_36;
        MR_Word Seen0_38;
        MR_Word RenameVars1_39;
        MR_Word RenameVars_40;
        MR_Word RenameMap_41;
        MR_Word Goal1_42;
        MR_Word QuantVars0_43;
        MR_Word OutsideVars1_44;
        MR_Word QuantVars_45;
        MR_Word OutsideVars_46;
        MR_Word LambdaOutsideVars0_47;
        MR_Word LambdaOutsideVars_48;
        MR_Word Goal_49;
        MR_Word RHSNonLocals0_50;
        MR_Word LambdaGoalInfo_52;
        MR_Word LambdaGoalNonLocals_53;
        MR_Word LambdaNonLocals_54;
        MR_Word ArgVarsModes_55;
        MR_Word STATE_VARIABLE_Info_87_87;
        MR_Word STATE_VARIABLE_Info_88_88;
        MR_Word STATE_VARIABLE_Info_90_90;
        MR_Word STATE_VARIABLE_Info_91_91;
        MR_Word STATE_VARIABLE_Info_92_92;
        MR_Word STATE_VARIABLE_Info_93_93;
        MR_Word STATE_VARIABLE_Info_94_94;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word Var_97;
        MR_Word ArgVars_108;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_151;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_195;
        MR_Word Var_226;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_261;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
        QVars_35 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_32);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QVars_35, &RenameVars0_36);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36);
        if (succeeded)
          STATE_VARIABLE_Info_87_87 = STATE_VARIABLE_Info_0_85;
        else
        {
          MR_Word Context_37;

          Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
          hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars0_36, Context_37, STATE_VARIABLE_Info_0_85, &STATE_VARIABLE_Info_87_87);
        }
        Seen0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_151));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_160));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_161));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_167));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_178));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_181));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_195));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_204));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_206));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_208));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_209));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_210));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_211));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_226));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_242));
          }
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_250));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_251));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_252));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_253));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_256));
        }
        Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_261));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_270));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_272));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_273));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_274));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_275));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_276));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_277));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(MR_mktag(2), base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has size info");
              }
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args0_58, ArgModes0_59, &ArgModesMap_65);
              Args_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RHSNonLocals_16);
              mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Args_66, ArgModesMap_65, &ArgModes_67);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Unification_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_62));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
                break;
            }
            break;
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0(
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word GoalInfo0_11,
  MR_Word * PossiblyNonLocalGoalVars0_12,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_53 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_71_71;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word Var_202;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_242;
        MR_Word Var_243;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Word Var_250;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_202));
        if (succeeded)
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_71_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 0) = ((MR_Box) (Var_211));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 1) = ((MR_Box) (Var_212));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 3) = ((MR_Box) (Var_214));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 4) = ((MR_Box) (Var_215));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 5) = ((MR_Box) (Var_216));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 6) = ((MR_Box) (Var_217));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, 7) = ((MR_Box) (Var_218));
          }
        }
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 1))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 2))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 3))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 4))));
        Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 5))));
        Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 6))));
        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_72_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 1) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 2) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 3) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 4) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 5) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 6) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_72_72, 7) = ((MR_Box) (Var_232));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
        Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
        Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
        Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 4))));
        Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 5))));
        Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 6))));
        Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_74_74 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 1) = ((MR_Box) (Var_239));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 2) = ((MR_Box) (Var_240));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 3) = ((MR_Box) (Var_241));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 4) = ((MR_Box) (Var_242));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 5) = ((MR_Box) (Var_243));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 6) = ((MR_Box) (Var_244));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, 7) = ((MR_Box) (Var_245));
        }
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_250));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_74_74;
        else
        {
          MR_Word Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 0))));
          MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 1))));
          MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 3))));
          MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 4))));
          MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 5))));
          MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 6))));
          MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_74_74, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_420 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_421 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_425;
        MR_Word LambdaOutsideVars_426;
        MR_Word AllButRHSGoalVars_457;
        MR_Word UnifyRHS_458;
        MR_Word Unification_459;
        MR_Word RHSGoalVars_460;
        MR_Word AllGoalVars_461;
        MR_Word ONonLocalVars_462;
        MR_Word LONonLocalVars_463;
        MR_Word NonLocalVars_464;
        MR_Word STATE_VARIABLE_GoalVars_61_465;
        MR_Word STATE_VARIABLE_Info_68_472;
        MR_Word STATE_VARIABLE_Info_69_473;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_425);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_426);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_420, &STATE_VARIABLE_GoalVars_61_465);
        switch (MR_tag((MR_Word) Unification0_423)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_432 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 4))));
              MR_Word SubInfo_434 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_423, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_65_469;
              MR_Word SizeVar_443;
              MR_Word MaybeSize_442;
              MR_Word Var_470;

              switch (MR_tag((MR_Word) How_432)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_435;
                    MR_Word Var_468 = (MR_Word) (MR_body((MR_Word) (How_432), (MR_Integer) 1));

                    ReuseVar_435 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_468, (MR_Integer) 0))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_435, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_GoalVars_65_469 = STATE_VARIABLE_GoalVars_61_465;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_432, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_439, STATE_VARIABLE_GoalVars_61_465, &STATE_VARIABLE_GoalVars_65_469);
                  }
                  break;
              }
              succeeded = (SubInfo_434 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_434, (MR_Integer) 1))));
                succeeded = (MaybeSize_442 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_470 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_442, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_470)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_470, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_443, STATE_VARIABLE_GoalVars_65_469, &AllButRHSGoalVars_457);
              else
                AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_65_469;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                AllButRHSGoalVars_457 = STATE_VARIABLE_GoalVars_61_465;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_456 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_423, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_456, STATE_VARIABLE_GoalVars_61_465, &AllButRHSGoalVars_457);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0(GoalInfo0_11, UnifyRHS0_421, &UnifyRHS_458, Unification0_423, &Unification_459, &RHSGoalVars_460, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_472);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_420));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyRHS_458));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_422));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_459));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_424));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_457, RHSGoalVars_460, &AllGoalVars_461);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_461, STATE_VARIABLE_Info_68_472, &STATE_VARIABLE_Info_69_473);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, OutsideVars_425, &ONonLocalVars_462);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_461, LambdaOutsideVars_426, &LONonLocalVars_463);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_462, LONonLocalVars_463, &NonLocalVars_464);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_464, STATE_VARIABLE_Info_69_473, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[6]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[7]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_44;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals0_43, &Goals_44, PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_110));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_115));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_116));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_90));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_404;
            MR_Word Var_405;
            MR_Word Var_406;
            MR_Word Var_408;
            MR_Word Var_409;
            MR_Word Var_410;
            MR_Word Var_411;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_404));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_405));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_406));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_408));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_409));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_410));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_411));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_277 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_278;
            MR_Word STATE_VARIABLE_Info_60_320;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_278);
            switch (MR_tag((MR_Word) Reason0_276)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason0_276, (MR_Integer) 0))));
                  MR_Word Reason_281;
                  MR_Word SubGoal1_282;
                  MR_Word Vars_283;
                  MR_Word SubGoal_284;
                  MR_Word NonLocals0_285;
                  MR_Word NonLocals_286;
                  MR_Word STATE_VARIABLE_Info_58_318;
                  MR_Word STATE_VARIABLE_Info_59_319;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_281, SubGoal0_277, &SubGoal1_282, Vars0_279, &Vars_283, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_318);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal1_282, &SubGoal_284, STATE_VARIABLE_Info_58_318, &STATE_VARIABLE_Info_59_319);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_281));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_284));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_319, &NonLocals0_285);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_283, NonLocals0_285, &NonLocals_286);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_286, STATE_VARIABLE_Info_59_319, &STATE_VARIABLE_Info_60_320);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_329;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_329;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_277, &SubGoal_329, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_329));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_287 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 1))));
                      MR_Word FGT_288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_288) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_289;
                            MR_Word LambdaOutsideVars_290;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_289);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_290);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_289, TermVar_287);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_290, TermVar_287);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_287);
                            }
                            else
                            {
                              switch (FGT_288) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_324;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_277, &SubGoal_324, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_60_320);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_276));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_324));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_49_309;
                      MR_Word STATE_VARIABLE_Info_50_310;
                      MR_Word Vars0_330 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_276, (MR_Integer) 5))));
                      MR_Word Reason_331;
                      MR_Word SubGoal1_332;
                      MR_Word Vars_333;
                      MR_Word SubGoal_334;
                      MR_Word NonLocals0_335;
                      MR_Word NonLocals_336;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0(Reason0_276, &Reason_331, SubGoal0_277, &SubGoal1_332, Vars0_330, &Vars_333, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_49_309);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal1_332, &SubGoal_334, STATE_VARIABLE_Info_49_309, &STATE_VARIABLE_Info_50_310);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_331));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_334));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_50_310, &NonLocals0_335);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_333, NonLocals0_335, &NonLocals_336);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_336, STATE_VARIABLE_Info_50_310, &STATE_VARIABLE_Info_60_320);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_278, STATE_VARIABLE_Info_60_320, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_129;
            MR_Word OutsideVars0_130;
            MR_Word LambdaOutsideVars0_131;
            MR_Word QVars_132;
            MR_Word Cond1_133;
            MR_Word Then1_134;
            MR_Word QuantVars1_135;
            MR_Word VarsThen_144;
            MR_Word LambdaVarsThen_145;
            MR_Word OutsideVars1_146;
            MR_Word LambdaOutsideVars1_147;
            MR_Word Cond_148;
            MR_Word NonLocalsCond_149;
            MR_Word OutsideVars2_150;
            MR_Word Then_151;
            MR_Word NonLocalsThen_152;
            MR_Word Else_153;
            MR_Word NonLocalsElse_154;
            MR_Word NonLocalsIfThen_155;
            MR_Word NonLocalsIfThenElse_156;
            MR_Word NonLocalsO_157;
            MR_Word NonLocalsL_158;
            MR_Word NonLocals_159;
            MR_Word STATE_VARIABLE_Info_52_161;
            MR_Word STATE_VARIABLE_Info_54_163;
            MR_Word STATE_VARIABLE_Info_55_164;
            MR_Word STATE_VARIABLE_Info_56_165;
            MR_Word STATE_VARIABLE_Info_57_166;
            MR_Word STATE_VARIABLE_Info_58_167;
            MR_Word STATE_VARIABLE_Info_59_168;
            MR_Word STATE_VARIABLE_Info_60_169;
            MR_Word STATE_VARIABLE_Info_61_170;
            MR_Word STATE_VARIABLE_Info_62_171;
            MR_Word STATE_VARIABLE_Info_63_172;
            MR_Word STATE_VARIABLE_Info_64_173;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_129);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_130);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_131);
            if ((Vars0_125 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_132 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_133 = Cond0_126;
              Then1_134 = Then0_127;
              QuantVars1_135 = QuantVars0_129;
              STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_138;
              MR_Word RenameVars2_139;
              MR_Word RenameVars_140;
              MR_Word Vars_141;

              QVars_132 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_125);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, QVars_132, &RenameVars1_138);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, QVars_132, &RenameVars2_139);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_138, RenameVars2_139, &RenameVars_140);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_140);
              if (succeeded)
              {
                Cond1_133 = Cond0_126;
                Then1_134 = Then0_127;
                Vars_141 = Vars0_125;
                STATE_VARIABLE_Info_52_161 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_142;
                MR_Word RenameMap_143;
                MR_Word STATE_VARIABLE_Info_51_160;

                Context_142 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_140, Context_142, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_160);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_140, &RenameMap_143, Cond0_126, &Cond1_133, STATE_VARIABLE_Info_51_160, &STATE_VARIABLE_Info_52_161);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_143, Then0_127, &Then1_134);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_143, Vars0_125, &Vars_141);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_141, QuantVars0_129, &QuantVars1_135);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Then1_134, &VarsThen_144, &LambdaVarsThen_145);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, VarsThen_144, &OutsideVars1_146);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_131, LambdaVarsThen_145, &LambdaOutsideVars1_147);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_135, STATE_VARIABLE_Info_52_161, &STATE_VARIABLE_Info_54_163);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_146, STATE_VARIABLE_Info_54_163, &STATE_VARIABLE_Info_55_164);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_147, STATE_VARIABLE_Info_55_164, &STATE_VARIABLE_Info_56_165);
            hlds__quantification__update_seen_vars_3_p_0(QVars_132, STATE_VARIABLE_Info_56_165, &STATE_VARIABLE_Info_57_166);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Cond1_133, &Cond_148, STATE_VARIABLE_Info_57_166, &STATE_VARIABLE_Info_58_167);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_167, &NonLocalsCond_149);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_130, NonLocalsCond_149, &OutsideVars2_150);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_150, STATE_VARIABLE_Info_58_167, &STATE_VARIABLE_Info_59_168);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_131, STATE_VARIABLE_Info_59_168, &STATE_VARIABLE_Info_60_169);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Then1_134, &Then_151, STATE_VARIABLE_Info_60_169, &STATE_VARIABLE_Info_61_170);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_170, &NonLocalsThen_152);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_130, STATE_VARIABLE_Info_61_170, &STATE_VARIABLE_Info_62_171);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_129, STATE_VARIABLE_Info_62_171, &STATE_VARIABLE_Info_63_172);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Else0_128, &Else_153, STATE_VARIABLE_Info_63_172, &STATE_VARIABLE_Info_64_173);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_148));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_151));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_153));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_173, &NonLocalsElse_154);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_149, NonLocalsThen_152, &NonLocalsIfThen_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_155, NonLocalsElse_154, &NonLocalsIfThenElse_156);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, OutsideVars0_130, &NonLocalsO_157);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_156, LambdaOutsideVars0_131, &NonLocalsL_158);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_157, NonLocalsL_158, &NonLocals_159);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_159, STATE_VARIABLE_Info_64_173, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_351 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_351)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_351, (MR_Integer) 0))));
                  MR_Word RHS_379 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_351, (MR_Integer) 1))));

                  hlds__quantification__quantify_goal_bi_implication_6_p_0(LHS_378, RHS_379, GoalExpr_10, GoalInfo0_11, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_352 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word Inner_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 3))));
                  MR_Word MainGoal0_356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 5))));
                  MR_Word OrElseInners0_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_351, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_359;
                  MR_Word OrElseInners_360;
                  MR_Word AtomicGoalsWithInners0_363;
                  MR_Word AllAtomicGoals_365;
                  MR_Word NonLocalVarSets_366;
                  MR_Word MainGoal_367;
                  MR_Word OrElseGoals_368;
                  MR_Word NonLocalVars0_369;
                  MR_Word NonLocalVars_372;
                  MR_Word ShortHand_373;
                  MR_Word STATE_VARIABLE_Info_50_385;
                  MR_Word Var_386;
                  MR_Word Var_387;
                  MR_Word STATE_VARIABLE_Info_53_388;

                  if ((OrElseInners0_358 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(Inner_354, OrElseGoals0_357, &OrElseGoals1_359, &OrElseInners_360, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_385);
                  else
                  {
                    OrElseInners_360 = OrElseInners0_358;
                    OrElseGoals1_359 = OrElseGoals0_357;
                    STATE_VARIABLE_Info_50_385 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_386, 0) = ((MR_Box) (MainGoal0_356));
                    MR_hl_field(MR_mktag(1), Var_386, 1) = ((MR_Box) (OrElseGoals1_359));
                  }
                  {
                    Var_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_387, 0) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), Var_387, 1) = ((MR_Box) (OrElseInners_360));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_386, Var_387, &AtomicGoalsWithInners0_363);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(AtomicGoalsWithInners0_363, &AllAtomicGoals_365, STATE_VARIABLE_Info_50_385, &STATE_VARIABLE_Info_53_388, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_366);
                  if ((AllAtomicGoals_365 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_367 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 0))));
                    OrElseGoals_368 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllAtomicGoals_365, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_366, &NonLocalVars0_369);
                  switch (GoalType_352) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_372 = NonLocalVars0_369;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 0))));
                        MR_Word OuterUO_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_353, (MR_Integer) 1))));
                        MR_Word Var_391;
                        MR_Word Var_392;

                        {
                          Var_392 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_392, 0) = ((MR_Box) (OuterUO_371));
                          MR_hl_field(MR_mktag(1), Var_392, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (OuterDI_370));
                          MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (Var_392));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_391, NonLocalVars0_369, &NonLocalVars_372);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_372, STATE_VARIABLE_Info_53_388, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 0) = (MR_Box) ((MR_Unsigned) (GoalType_352));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 1) = ((MR_Box) (Outer_353));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 2) = ((MR_Box) (Inner_354));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 3) = ((MR_Box) (MaybeOutputVars_355));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 4) = ((MR_Box) (MainGoal_367));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 5) = ((MR_Box) (OrElseGoals_368));
                    MR_hl_field(MR_mktag(1), ShortHand_373, 6) = ((MR_Box) (OrElseInners_360));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_373));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_374 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 0))));
                  MR_Word ResultVar_375 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 1))));
                  MR_Word SubGoal0_376 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_351, (MR_Integer) 2))));
                  MR_Word SubGoal_377;
                  MR_Word ShortHand_395;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_376, &SubGoal_377, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_395 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 0) = ((MR_Box) (MaybeIO_374));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 1) = ((MR_Box) (ResultVar_375));
                    MR_hl_field(MR_mktag(2), ShortHand_395, 2) = ((MR_Box) (SubGoal_377));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_395));
                  }
                }
                break;
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word RenameMap_17;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_RttiVarMaps_32_32;
    MR_Word STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Box conv1_STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Word Var_77;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_16, &RenameMap_17, Var_27, &Var_28, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[5]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_77));
    if (succeeded)
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_29_29;
    else
    {
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));

      {
        STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_93));
      }
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_22);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
  }
}

static void MR_CALL 
hlds__quantification__quantify_goal_bi_implication_6_p_0(
  MR_Word LHS0_7,
  MR_Word RHS0_8,
  MR_Word * GoalExpr_9,
  MR_Word OldGoalInfo_10,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word QuantVars0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 2))));
  MR_Word OutsideVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
  MR_Word OutsideVars1_15;
  MR_Word QuantVars1_16;
  MR_Word RHS_Vars_18;
  MR_Word RHS_LambdaVars_19;
  MR_Word LHS_OutsideVars_20;
  MR_Word LHS_LambdaOutsideVars_21;
  MR_Word LHS_22;
  MR_Word LHS_NonLocalVars_23;
  MR_Word RHS_OutsideVars_24;
  MR_Word RHS_LambdaOutsideVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 1))));
  MR_Word RHS_26;
  MR_Word RHS_NonLocalVars_27;
  MR_Word AllNonLocalVars_28;
  MR_Word NonLocalVarsO_29;
  MR_Word NonLocalVarsL_30;
  MR_Word NonLocalVars_31;
  MR_Word Context_32;
  MR_Word GoalInfo0_33;
  MR_Word GoalInfo1_34;
  MR_Word LHS_GI_35;
  MR_Word RHS_GI_36;
  MR_Word GI_37;
  MR_Word NotLHS_38;
  MR_Word NotRHS_39;
  MR_Word ForwardsImplicationExpr_40;
  MR_Word ForwardsImplication_41;
  MR_Word ReverseImplicationExpr0_42;
  MR_Word ReverseImplication0_43;
  MR_Word GoalVars_44;
  MR_Word RenameVars_45;
  MR_Word ReverseImplication_47;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word STATE_VARIABLE_Info_54_54;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_58_58;
  MR_Word STATE_VARIABLE_Info_60_60;
  MR_Word STATE_VARIABLE_Info_61_61;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word STATE_VARIABLE_Info_64_64;
  MR_Word STATE_VARIABLE_Info_66_66;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_233;
  MR_Word Var_234;
  MR_Word Var_236;
  MR_Word Var_237;
  MR_Word Var_238;
  MR_Word Var_239;
  MR_Word Var_121;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_156;
  MR_Word Var_189;
  MR_Word Var_190;
  MR_Word Var_191;
  MR_Word Var_192;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Word Var_195;
  MR_Word Var_200;
  MR_Word Var_257;
  MR_Word Var_279;
  MR_Word Var_46;

  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_13, QuantVars0_12, &OutsideVars1_15);
  QuantVars1_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars1_16) == ((MR_Word) Var_121));
  if (succeeded)
    STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_0_48;
  else
  {
    MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
    MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 1))));
    MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))));
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 4))));
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 5))));
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 6))));
    MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (QuantVars1_16));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_136));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (Var_137));
    }
  }
  hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(RHS0_8, &RHS_Vars_18, &RHS_LambdaVars_19);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars1_15, RHS_Vars_18, &LHS_OutsideVars_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHS_LambdaOutsideVars_25, RHS_LambdaVars_19, &LHS_LambdaOutsideVars_21);
  Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
  Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
  Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
  Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
  Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
  Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
  Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_51_51 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 0) = ((MR_Box) (LHS_OutsideVars_20));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 1) = ((MR_Box) (Var_145));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 2) = ((MR_Box) (Var_146));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 3) = ((MR_Box) (Var_147));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 4) = ((MR_Box) (Var_148));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 5) = ((MR_Box) (Var_149));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 6) = ((MR_Box) (Var_150));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, 7) = ((MR_Box) (Var_151));
  }
  Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 1))));
  succeeded = (((MR_Word) LHS_LambdaOutsideVars_21) == ((MR_Word) Var_156));
  if (succeeded)
    STATE_VARIABLE_Info_52_52 = STATE_VARIABLE_Info_51_51;
  else
  {
    MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0))));
    MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 2))));
    MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 3))));
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 4))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 5))));
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 6))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_52_52 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 0) = ((MR_Box) (Var_165));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 1) = ((MR_Box) (LHS_LambdaOutsideVars_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 2) = ((MR_Box) (Var_167));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 3) = ((MR_Box) (Var_168));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 4) = ((MR_Box) (Var_169));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 5) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 6) = ((MR_Box) (Var_171));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, 7) = ((MR_Box) (Var_172));
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(LHS0_7, &LHS_22, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_54_54);
  LHS_NonLocalVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars1_15, LHS_NonLocalVars_23, &RHS_OutsideVars_24);
  Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 1))));
  Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 2))));
  Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
  Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 4))));
  Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 5))));
  Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 6))));
  Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (RHS_OutsideVars_24));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 1) = ((MR_Box) (Var_189));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_190));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_191));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_192));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_193));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) (Var_194));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, 7) = ((MR_Box) (Var_195));
  }
  Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 1))));
  succeeded = (((MR_Word) RHS_LambdaOutsideVars_25) == ((MR_Word) Var_200));
  if (succeeded)
    STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_55_55;
  else
  {
    MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 0))));
    MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 2))));
    MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 3))));
    MR_Word Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 4))));
    MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 5))));
    MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 6))));
    MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_56_56 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 0) = ((MR_Box) (Var_209));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 1) = ((MR_Box) (RHS_LambdaOutsideVars_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 2) = ((MR_Box) (Var_211));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 3) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 4) = ((MR_Box) (Var_213));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 5) = ((MR_Box) (Var_214));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 6) = ((MR_Box) (Var_215));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_56_56, 7) = ((MR_Box) (Var_216));
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(RHS0_8, &RHS_26, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
  RHS_NonLocalVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 3))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_NonLocalVars_23, RHS_NonLocalVars_27, &AllNonLocalVars_28);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllNonLocalVars_28, OutsideVars0_13, &NonLocalVarsO_29);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllNonLocalVars_28, RHS_LambdaOutsideVars_25, &NonLocalVarsL_30);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsO_29, NonLocalVarsL_30, &NonLocalVars_31);
  Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 1))));
  Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 2))));
  Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 4))));
  Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 5))));
  Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 6))));
  Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_60_60 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 0) = ((MR_Box) (OutsideVars0_13));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 1) = ((MR_Box) (Var_233));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 2) = ((MR_Box) (Var_234));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 3) = ((MR_Box) (NonLocalVars_31));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 4) = ((MR_Box) (Var_236));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 5) = ((MR_Box) (Var_237));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 6) = ((MR_Box) (Var_238));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 7) = ((MR_Box) (Var_239));
  }
  Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 1))));
  succeeded = (((MR_Word) RHS_LambdaOutsideVars_25) == ((MR_Word) Var_257));
  if (succeeded)
    STATE_VARIABLE_Info_61_61 = STATE_VARIABLE_Info_60_60;
  else
  {
    MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 0))));
    MR_Word Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 2))));
    MR_Word Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 3))));
    MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 4))));
    MR_Word Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 5))));
    MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 6))));
    MR_Word Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_61_61 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 0) = ((MR_Box) (Var_266));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 1) = ((MR_Box) (RHS_LambdaOutsideVars_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 2) = ((MR_Box) (Var_268));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 3) = ((MR_Box) (Var_269));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 4) = ((MR_Box) (Var_270));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 5) = ((MR_Box) (Var_271));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 6) = ((MR_Box) (Var_272));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, 7) = ((MR_Box) (Var_273));
    }
  }
  Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars0_12) == ((MR_Word) Var_279));
  if (succeeded)
    STATE_VARIABLE_Info_62_62 = STATE_VARIABLE_Info_61_61;
  else
  {
    MR_Word Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 0))));
    MR_Word Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 1))));
    MR_Word Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 3))));
    MR_Word Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 4))));
    MR_Word Var_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 5))));
    MR_Word Var_294 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 6))));
    MR_Word Var_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_62_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 0) = ((MR_Box) (Var_288));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 1) = ((MR_Box) (Var_289));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 2) = ((MR_Box) (QuantVars0_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 3) = ((MR_Box) (Var_291));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 4) = ((MR_Box) (Var_292));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 5) = ((MR_Box) (Var_293));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 6) = ((MR_Box) (Var_294));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, 7) = ((MR_Box) (Var_295));
    }
  }
  Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_10);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_33);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_32, GoalInfo0_33, &GoalInfo1_34);
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(LHS_NonLocalVars_23, GoalInfo1_34, &LHS_GI_35, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_64_64);
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(RHS_NonLocalVars_27, GoalInfo1_34, &RHS_GI_36, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_66_66);
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(NonLocalVars_31, GoalInfo1_34, &GI_37, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_68_68);
  Var_69 = (MR_Word) ((MR_Word) (LHS_22));
  {
    NotLHS_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NotLHS_38, 0) = ((MR_Box) (Var_69));
    MR_hl_field(MR_mktag(0), NotLHS_38, 1) = ((MR_Box) (LHS_GI_35));
  }
  Var_70 = (MR_Word) ((MR_Word) (RHS_26));
  {
    NotRHS_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NotRHS_39, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(0), NotRHS_39, 1) = ((MR_Box) (RHS_GI_36));
  }
  {
    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (NotRHS_39));
    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (LHS_22));
    MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_74));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (GI_37));
  }
  ForwardsImplicationExpr_40 = (MR_Word) ((MR_Word) (Var_71));
  {
    ForwardsImplication_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ForwardsImplication_41, 0) = ((MR_Box) (ForwardsImplicationExpr_40));
    MR_hl_field(MR_mktag(0), ForwardsImplication_41, 1) = ((MR_Box) (GI_37));
  }
  {
    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (NotLHS_38));
    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (RHS_26));
    MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (Var_80));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (GI_37));
  }
  ReverseImplicationExpr0_42 = (MR_Word) ((MR_Word) (Var_77));
  {
    ReverseImplication0_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ReverseImplication0_43, 0) = ((MR_Box) (ReverseImplicationExpr0_42));
    MR_hl_field(MR_mktag(0), ReverseImplication0_43, 1) = ((MR_Box) (GI_37));
  }
  hlds__quantification__goal_vars_bitset_maybe_lambda_and_bi_impl_2_p_0(ReverseImplication0_43, &GoalVars_44);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_44, NonLocalVars_31, &RenameVars_45);
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_45, &Var_46, ReverseImplication0_43, &ReverseImplication_47, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_49);
  {
    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (ReverseImplication_47));
    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ForwardsImplication_41));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_9 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_86));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set_10;
  MR_Word LambdaSet_11;
  MR_Word Set0_17;
  MR_Word LambdaSet0_18;

  Set0_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_5, Set0_17, &Set_10, LambdaSet0_18, &LambdaSet_11);
  *BothSet_6 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_10, LambdaSet_11);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Word * LambdaSet_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *Set_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    *LambdaSet_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_15;
    MR_Word LambdaSet0_16;
    MR_Word SetPairList0_17;
    MR_Word Set1_18;
    MR_Word LambdaSet1_19;
    MR_Word Var_20;
    MR_Word GoalExpr_27;
    MR_Word Set0_33;
    MR_Word LambdaSet0_34;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(Goals_11, &Set0_15, &LambdaSet0_16, &SetPairList0_17);
    GoalExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
    Set0_33 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    LambdaSet0_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_27, Set0_33, &Set1_18, LambdaSet0_34, &LambdaSet1_19);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_15, Set1_18, Set_3);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaSet0_16, LambdaSet1_19, LambdaSet_4);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Set0_15));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (LambdaSet0_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetPairList0_17));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word GoalExpr_6,
  MR_Word * Set_7,
  MR_Word * LambdaSet_8)
{
  MR_Word Set0_9;
  MR_Word LambdaSet0_10;

  Set0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_6, Set0_9, Set_7, LambdaSet0_10, LambdaSet_8);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goal_6,
  MR_Word * Set_7,
  MR_Word * LambdaSet_8)
{
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
  MR_Word Set0_15;
  MR_Word LambdaSet0_16;

  Set0_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_9, Set0_15, Set_7, LambdaSet0_16, LambdaSet_8);
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_1(
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word GoalExpr_8,
  MR_Word STATE_VARIABLE_Set_0_122,
  MR_Word * STATE_VARIABLE_Set_123,
  MR_Word STATE_VARIABLE_LambdaSet_0_124,
  MR_Word * STATE_VARIABLE_LambdaSet_125)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_84 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word SubGoalExpr_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_84, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_8 = SubGoalExpr_85;

          // direct tailcall eliminated
          ;
          GoalExpr_8 = next_value_of_GoalExpr_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0))));
          MR_Word RHS_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1))));
          MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_184_184;
          MR_Word STATE_VARIABLE_Set_190_190;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_11, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_184_184);
          switch (MR_tag((MR_Word) Unification_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_14, (MR_Integer) 4))));
                MR_Word SubInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_14, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_188_188;
                MR_Word SizeVar_30;
                MR_Word MaybeSize_29;
                MR_Word Var_189;

                switch (MR_tag((MR_Word) How_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_188_188 = STATE_VARIABLE_Set_184_184;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_23;
                      MR_Word Var_187 = (MR_Word) (MR_body((MR_Word) (How_20), (MR_Integer) 1));

                      ReuseVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_187, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_23, STATE_VARIABLE_Set_184_184, &STATE_VARIABLE_Set_188_188);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_188_188 = STATE_VARIABLE_Set_184_184;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_20, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_26, STATE_VARIABLE_Set_184_184, &STATE_VARIABLE_Set_188_188);
                    }
                    break;
                }
                succeeded = (SubInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 1))));
                  succeeded = (MaybeSize_29 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_29, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_189)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_189, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_30, STATE_VARIABLE_Set_188_188, &STATE_VARIABLE_Set_190_190);
                else
                  STATE_VARIABLE_Set_190_190 = STATE_VARIABLE_Set_188_188;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_190_190 = STATE_VARIABLE_Set_184_184;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_190_190 = STATE_VARIABLE_Set_184_184;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_190_190 = STATE_VARIABLE_Set_184_184;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_33, STATE_VARIABLE_Set_184_184, &STATE_VARIABLE_Set_190_190);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(RHS_12, STATE_VARIABLE_Set_190_190, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_46, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123);
          *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word ArgVars1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word ArgVars0_55;
              MR_Word STATE_VARIABLE_Set_181_181;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_50, &ArgVars0_55);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_55, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_181_181);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_51, STATE_VARIABLE_Set_181_181, STATE_VARIABLE_Set_123);
              *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word ExtraArgs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5))));
              MR_Word Vars_63;
              MR_Word ExtraVars_64;
              MR_Word AllVars_65;

              Vars_63 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[3]), Args_59);
              ExtraVars_64 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[4]), ExtraArgs_60);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_63, ExtraVars_64, &AllVars_65);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_65, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123);
              *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals_67, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals_193, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word Cases_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_171_171;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_68, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_171_171);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Cases_70, STATE_VARIABLE_Set_171_171, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_161_161;
              MR_Word STATE_VARIABLE_LambdaSet_162_162;
              MR_Word SubGoal_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_87)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_157_157;
                    MR_Word STATE_VARIABLE_LambdaSet_158_158;
                    MR_Word Vars_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_87, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_157_157, &STATE_VARIABLE_LambdaSet_158_158);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_195, STATE_VARIABLE_Set_157_157, &STATE_VARIABLE_Set_161_161);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_195, STATE_VARIABLE_LambdaSet_158_158, &STATE_VARIABLE_LambdaSet_162_162);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_161_161, &STATE_VARIABLE_LambdaSet_162_162);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_154_154;
                    MR_Word Vars_196 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_87, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_LambdaSet_162_162);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_196, STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_Set_161_161);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_161_161, &STATE_VARIABLE_LambdaSet_162_162);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_151_151;
                        MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_LambdaSet_162_162);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_Set_161_161);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_151_238;
                        MR_Word Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_151_238, &STATE_VARIABLE_LambdaSet_162_162);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_239, STATE_VARIABLE_Set_151_238, &STATE_VARIABLE_Set_161_161);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 1))));
                        MR_Word Kind_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (Kind_104) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 0:
                            {
                              MR_Word STATE_VARIABLE_Set_148_148;

                              STATE_VARIABLE_Set_148_148 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_103, STATE_VARIABLE_Set_148_148, &STATE_VARIABLE_Set_161_161);
                              STATE_VARIABLE_LambdaSet_162_162 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_161_161, &STATE_VARIABLE_LambdaSet_162_162);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 1))));
                        MR_Word LCSVar_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_87, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_142_142;
                        MR_Word STATE_VARIABLE_Set_144_144;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_142_142, &STATE_VARIABLE_LambdaSet_162_162);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_105, STATE_VARIABLE_Set_142_142, &STATE_VARIABLE_Set_144_144);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_106, STATE_VARIABLE_Set_144_144, &STATE_VARIABLE_Set_161_161);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_161_161, STATE_VARIABLE_Set_123);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_162_162, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word CondSet_74;
              MR_Word CondLambdaSet_75;
              MR_Word ThenSet_76;
              MR_Word ThenLambdaSet_77;
              MR_Word ElseSet_78;
              MR_Word ElseLambdaSet_79;
              MR_Word CondThenSet_80;
              MR_Word CondThenLambdaSet_81;
              MR_Word SomeCondThenSet_82;
              MR_Word SomeCondThenLambdaSet_83;
              MR_Word STATE_VARIABLE_Set_167_167;
              MR_Word STATE_VARIABLE_LambdaSet_168_168;
              MR_Word Vars_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Cond_71, &CondSet_74, &CondLambdaSet_75);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Then_72, &ThenSet_76, &ThenLambdaSet_77);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Else_73, &ElseSet_78, &ElseLambdaSet_79);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_74, ThenSet_76, &CondThenSet_80);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondLambdaSet_75, ThenLambdaSet_77, &CondThenLambdaSet_81);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_194, CondThenSet_80, &SomeCondThenSet_82);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_194, CondThenLambdaSet_81, &SomeCondThenLambdaSet_83);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_122, SomeCondThenSet_82, &STATE_VARIABLE_Set_167_167);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_124, SomeCondThenLambdaSet_83, &STATE_VARIABLE_LambdaSet_168_168);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_167_167, ElseSet_78, STATE_VARIABLE_Set_123);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_168_168, ElseLambdaSet_79, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_108)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_126;
                    MR_Word Var_129;
                    MR_Word LHS_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_108, (MR_Integer) 0))));
                    MR_Word RHS_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_108, (MR_Integer) 1))));

                    {
                      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (RHS_208));
                      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (LHS_207));
                      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Var_126, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_108, (MR_Integer) 1))));
                    MR_Word Inner_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_108, (MR_Integer) 2))));
                    MR_Word MainGoal_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_108, (MR_Integer) 4))));
                    MR_Word OrElseGoals_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_108, (MR_Integer) 5))));
                    MR_Word OuterDI_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_110, (MR_Integer) 0))));
                    MR_Word OuterUO_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_110, (MR_Integer) 1))));
                    MR_Word InnerDI_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_111, (MR_Integer) 0))));
                    MR_Word InnerUO_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_111, (MR_Integer) 1))));
                    MR_Word Var_133;
                    MR_Word STATE_VARIABLE_Set_134_134;
                    MR_Word Var_135;
                    MR_Word Var_136;
                    MR_Word Var_137;
                    MR_Word Var_139;

                    {
                      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (InnerUO_119));
                      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (InnerDI_118));
                      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_137));
                    }
                    {
                      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (OuterUO_117));
                      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_136));
                    }
                    {
                      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (OuterDI_116));
                      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_133, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_134_134);
                    {
                      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (MainGoal_113));
                      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (OrElseGoals_114));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Var_139, STATE_VARIABLE_Set_134_134, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_204 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_108, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_204, (MR_Integer) 0))));
                    MR_Word next_value_of_GoalExpr_8 = SubGoalExpr_205;

                    // direct tailcall eliminated
                    ;
                    GoalExpr_8 = next_value_of_GoalExpr_8;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4,
  MR_Word STATE_VARIABLE_LambdaSets_0_5,
  MR_Word * STATE_VARIABLE_LambdaSets_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSets_6 = STATE_VARIABLE_LambdaSets_0_5;
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    }
    else
    {
      MR_Word Case_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2))));
      MR_Word GoalSet_22;
      MR_Word GoalLambdaSet_23;
      MR_Word STATE_VARIABLE_Sets_28_28;
      MR_Word STATE_VARIABLE_LambdaSets_29_29;
      MR_Word GoalExpr_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_5;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(GoalExpr_34, &GoalSet_22, &GoalLambdaSet_23);
      {
        STATE_VARIABLE_Sets_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_28_28, 0) = ((MR_Box) (GoalSet_22));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      {
        STATE_VARIABLE_LambdaSets_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_29_29, 0) = ((MR_Box) (GoalLambdaSet_23));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_29_29, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_16;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_28_28;
      next_value_of_STATE_VARIABLE_LambdaSets_0_5 = STATE_VARIABLE_LambdaSets_29_29;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      STATE_VARIABLE_LambdaSets_0_5 = next_value_of_STATE_VARIABLE_LambdaSets_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Sets_0_3,
  MR_Word * STATE_VARIABLE_Sets_4,
  MR_Word STATE_VARIABLE_LambdaSets_0_5,
  MR_Word * STATE_VARIABLE_LambdaSets_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSets_6 = STATE_VARIABLE_LambdaSets_0_5;
      *STATE_VARIABLE_Sets_4 = STATE_VARIABLE_Sets_0_3;
    }
    else
    {
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_19;
      MR_Word GoalLambdaSet_20;
      MR_Word STATE_VARIABLE_Sets_25_25;
      MR_Word STATE_VARIABLE_LambdaSets_26_26;
      MR_Word GoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_5;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(GoalExpr_31, &GoalSet_19, &GoalLambdaSet_20);
      {
        STATE_VARIABLE_Sets_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_25_25, 0) = ((MR_Box) (GoalSet_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      {
        STATE_VARIABLE_LambdaSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_26_26, 0) = ((MR_Box) (GoalLambdaSet_20));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_26_26, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_16;
      next_value_of_STATE_VARIABLE_Sets_0_3 = STATE_VARIABLE_Sets_25_25;
      next_value_of_STATE_VARIABLE_LambdaSets_0_5 = STATE_VARIABLE_LambdaSets_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Sets_0_3 = next_value_of_STATE_VARIABLE_Sets_0_3;
      STATE_VARIABLE_LambdaSets_0_5 = next_value_of_STATE_VARIABLE_LambdaSets_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Set_0_3,
  MR_Word * STATE_VARIABLE_Set_4,
  MR_Word STATE_VARIABLE_LambdaSet_0_5,
  MR_Word * STATE_VARIABLE_LambdaSet_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSet_6 = STATE_VARIABLE_LambdaSet_0_5;
      *STATE_VARIABLE_Set_4 = STATE_VARIABLE_Set_0_3;
    }
    else
    {
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_25_25;
      MR_Word STATE_VARIABLE_LambdaSet_26_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSet_0_5;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_19, STATE_VARIABLE_Set_0_3, &STATE_VARIABLE_Set_25_25, STATE_VARIABLE_LambdaSet_0_5, &STATE_VARIABLE_LambdaSet_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_16;
      next_value_of_STATE_VARIABLE_Set_0_3 = STATE_VARIABLE_Set_25_25;
      next_value_of_STATE_VARIABLE_LambdaSet_0_5 = STATE_VARIABLE_LambdaSet_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Set_0_3 = next_value_of_STATE_VARIABLE_Set_0_3;
      STATE_VARIABLE_LambdaSet_0_5 = next_value_of_STATE_VARIABLE_LambdaSet_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word RHS_8,
  MR_Word STATE_VARIABLE_Set_0_25,
  MR_Word * STATE_VARIABLE_Set_26,
  MR_Word STATE_VARIABLE_LambdaSet_0_27,
  MR_Word * STATE_VARIABLE_LambdaSet_28)
{
  switch (MR_tag((MR_Word) RHS_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Y_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_11, STATE_VARIABLE_Set_0_25, STATE_VARIABLE_Set_26);
        *STATE_VARIABLE_LambdaSet_28 = STATE_VARIABLE_LambdaSet_0_27;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 2))));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_14, STATE_VARIABLE_Set_0_25, STATE_VARIABLE_Set_26);
        *STATE_VARIABLE_LambdaSet_28 = STATE_VARIABLE_LambdaSet_0_27;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVarsModes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 3))));
        MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 5))));
        MR_Word GoalVars0_23;
        MR_Word GoalVars_24;
        MR_Word ArgVars_32;
        MR_Word GoalExpr_41;
        MR_Word Set_43;
        MR_Word LambdaSet_44;
        MR_Word Set0_50;
        MR_Word LambdaSet0_51;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_20, &ArgVars_32);
        GoalExpr_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 0))));
        Set0_50 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        LambdaSet0_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_41, Set0_50, &Set_43, LambdaSet0_51, &LambdaSet_44);
        GoalVars0_23 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_43, LambdaSet_44);
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_32, GoalVars0_23, &GoalVars_24);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_27, GoalVars_24, STATE_VARIABLE_LambdaSet_28);
        *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word Cases_8,
  MR_Word STATE_VARIABLE_Set_0_19,
  MR_Word * STATE_VARIABLE_Set_20,
  MR_Word STATE_VARIABLE_LambdaSet_0_21,
  MR_Word * STATE_VARIABLE_LambdaSet_22)
{
  MR_Word CaseSets_11;
  MR_Word CaseLambdaSets_12;
  MR_Word CasesSet_15;
  MR_Word CasesLambdaSet_18;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Cases_8, (MR_Word) ((MR_Unsigned) 0U), &CaseSets_11, (MR_Word) ((MR_Unsigned) 0U), &CaseLambdaSets_12);
  if ((CaseSets_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_maybe_lambda\'/6", (MR_String) "no cases (1)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseSets_11, &CasesSet_15);
  if ((CaseLambdaSets_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_maybe_lambda\'/6", (MR_String) "no cases (2)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseLambdaSets_12, &CasesLambdaSet_18);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesSet_15, STATE_VARIABLE_Set_0_19, STATE_VARIABLE_Set_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesLambdaSet_18, STATE_VARIABLE_LambdaSet_0_21, STATE_VARIABLE_LambdaSet_22);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(
  MR_Word Goals_8,
  MR_Word STATE_VARIABLE_Set_0_19,
  MR_Word * STATE_VARIABLE_Set_20,
  MR_Word STATE_VARIABLE_LambdaSet_0_21,
  MR_Word * STATE_VARIABLE_LambdaSet_22)
{
  MR_Word GoalSets_11;
  MR_Word GoalLambdaSets_12;
  MR_Word GoalsSet_13;
  MR_Word GoalsLambdaSet_16;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals_8, (MR_Word) ((MR_Unsigned) 0U), &GoalSets_11, (MR_Word) ((MR_Unsigned) 0U), &GoalLambdaSets_12);
  if ((GoalSets_11 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsSet_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSets_11, &GoalsSet_13);
  if ((GoalLambdaSets_12 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsLambdaSet_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLambdaSets_12, &GoalsLambdaSet_16);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsSet_13, STATE_VARIABLE_Set_0_19, STATE_VARIABLE_Set_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsLambdaSet_16, STATE_VARIABLE_LambdaSet_0_21, STATE_VARIABLE_LambdaSet_22);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Inner_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word OrElseGoal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_2, (MR_Integer) 1))));
    MR_Word RenameVars_22;
    MR_Word RenameMap_23;
    MR_Word OrElseGoal_24;
    MR_Word OrElseInnerDI_25;
    MR_Word OrElseInnerUO_26;
    MR_Word OrElseInner_27;
    MR_Word OrElseGoalsTail_28;
    MR_Word OrElseInnersTail_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Box conv0_OrElseInnerDI_25;
    MR_Box conv1_OrElseInnerUO_26;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    RenameVars_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_22, &RenameMap_23, OrElseGoal0_15, &OrElseGoal_24, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_35_35);
    conv0_OrElseInnerDI_25 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerDI_20)));
    OrElseInnerDI_25 = ((MR_Word) (conv0_OrElseInnerDI_25));
    conv1_OrElseInnerUO_26 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerUO_21)));
    OrElseInnerUO_26 = ((MR_Word) (conv1_OrElseInnerUO_26));
    {
      OrElseInner_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(MR_mktag(0), OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseGoalsTail_28));
    }
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word Reason0_12,
  MR_Word * Reason_13,
  MR_Word SubGoal0_14,
  MR_Word * SubGoal_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word GoalInfo0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_96;

  QVars_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_16);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_20, QVars_23, &RenameVars1_24);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_21, QVars_23, &RenameVars2_25);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_24, RenameVars2_25, &RenameVars_26);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
  if (succeeded)
  {
    *SubGoal_15 = SubGoal0_14;
    *Vars_17 = Vars0_16;
    *Reason_13 = Reason0_12;
    STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_0_53;
  }
  else
  {
    MR_Word Context_27;
    MR_Word RenameMap_28;
    MR_Word STATE_VARIABLE_Info_55_55;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_26, Context_27, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_26, &RenameMap_28, SubGoal0_14, SubGoal_15, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_56_56);
    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, Vars0_16, Vars_17);
    switch (MR_tag((MR_Word) Reason0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Reason_13 = (MR_Word) (&hlds__quantification_scalar_common_2[0]);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_scope_rename_vars\'/10", (MR_String) "unexpected scope");
              return;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_96));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_112));
    }
  }
}

static void MR_CALL 
hlds__quantification__set_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Q_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
  }
}

static void MR_CALL 
hlds__quantification__set_quant_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Q_7 = STATE_VARIABLE_Q_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Q_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
    }
  }
}

static void MR_CALL 
hlds__quantification__set_lambda_outside_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Q_7 = STATE_VARIABLE_Q_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Q_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
    }
  }
}

static void MR_CALL 
hlds__quantification__set_outside_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Q_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
  }
}

static void MR_CALL 
hlds__quantification__get_nonlocals_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Q_3, (MR_Integer) 3))));
}

static void MR_CALL 
hlds__quantification__get_quant_vars_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Q_3, (MR_Integer) 2))));
}

static void MR_CALL 
hlds__quantification__get_lambda_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Q_3, (MR_Integer) 1))));
}

static void MR_CALL 
hlds__quantification__get_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Q_3, (MR_Integer) 0))));
}

static void MR_CALL 
hlds__quantification__warn_overlapping_scope_4_p_0(
  MR_Word OverlapVars_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Vars_8;
  MR_Word Warnings0_9;
  MR_Word Warnings_10;
  MR_Word Var_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  Vars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_5);
  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
  Warnings0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Vars_8));
    MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Context_6));
  }
  {
    Warnings_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Warnings_10, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(1), Warnings_10, 1) = ((MR_Box) (Warnings0_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Warnings_10));
  }
}

static void MR_CALL 
hlds__quantification__update_seen_vars_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word SeenVars0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word SeenVars_7;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;

  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars0_6, NewVars_4, &SeenVars_7);
  Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SeenVars_7));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_33));
  }
}

static void MR_CALL 
hlds__quantification__quantify_primitive_goal_3_p_0(
  MR_Word HeadVars_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word GoalVars_6;
  MR_Word OutsideVars_7;
  MR_Word LambdaOutsideVars_8;
  MR_Word NonLocals1_9;
  MR_Word NonLocals2_10;
  MR_Word NonLocals_11;
  MR_Word STATE_VARIABLE_Info_14_14;
  MR_Word SeenVars0_21;
  MR_Word SeenVars_22;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;

  GoalVars_6 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_4);
  SeenVars0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars0_21, GoalVars_6, &SeenVars_22);
  OutsideVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
  LambdaOutsideVars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
  Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (OutsideVars_7));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (LambdaOutsideVars_8));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (SeenVars_22));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (Var_45));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, 7) = ((MR_Box) (Var_46));
  }
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_6, OutsideVars_7, &NonLocals1_9);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_6, LambdaOutsideVars_8, &NonLocals2_10);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_9, NonLocals2_10, &NonLocals_11);
  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 0))));
  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 1))));
  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 2))));
  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 4))));
  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 5))));
  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 6))));
  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_14_14, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonLocals_11));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_75));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_77));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_103_111_97_108_95_110_111_110_108_111_99_97_108_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word NonLocals_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_8, STATE_VARIABLE_GoalInfo_0_11, STATE_VARIABLE_GoalInfo_12);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word RenameSet_9,
  MR_Word * RenameMap_10,
  MR_Word STATE_VARIABLE_Goal_0_25,
  MR_Word * STATE_VARIABLE_Goal_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
  if (succeeded)
  {
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_10);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    *STATE_VARIABLE_Goal_26 = STATE_VARIABLE_Goal_0_25;
  }
  else
  {
    MR_Word RenameList_13;
    MR_Word VarDb0_14;
    MR_Word RenameMap0_15;
    MR_Word VarDb_22;
    MR_Word Var_50;

    RenameList_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
    VarDb0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap0_15);
    if (((MR_tag((MR_Word) VarDb0_14)) == (MR_Integer) 1))
    {
      MR_Word VarTable0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarDb0_14, (MR_Integer) 0))));
      MR_Word VarTable_24;

      hlds__goal_util__clone_variables_var_table_5_p_0(RenameList_13, VarTable0_23, &VarTable_24, RenameMap0_15, RenameMap_10);
      {
        VarDb_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarDb_22, 0) = ((MR_Box) (VarTable_24));
      }
    }
    else
    {
      MR_Word VarSetTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarDb0_14, (MR_Integer) 0))));
      MR_Word VarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_16, (MR_Integer) 0))));
      MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarSetTypes0_16, (MR_Integer) 1))));
      MR_Word VarSet_19;
      MR_Word VarTypes_20;
      MR_Word VarSetTypes_21;

      hlds__goal_util__clone_variables_9_p_0(RenameList_13, VarSet0_17, VarTypes0_18, VarSet0_17, &VarSet_19, VarTypes0_18, &VarTypes_20, RenameMap0_15, RenameMap_10);
      {
        VarSetTypes_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarSetTypes_21, 0) = ((MR_Box) (VarSet_19));
        MR_hl_field(MR_mktag(0), VarSetTypes_21, 1) = ((MR_Box) (VarTypes_20));
      }
      {
        VarDb_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarDb_22, 0) = ((MR_Box) (VarSetTypes_21));
      }
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*RenameMap_10, STATE_VARIABLE_Goal_0_25, STATE_VARIABLE_Goal_26);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    succeeded = (((MR_Word) VarDb_22) == ((MR_Word) Var_50));
    if (succeeded)
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    else
    {
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarDb_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_66));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__goal_vars_bitset_maybe_lambda_and_bi_impl_2_p_0(
  MR_Word Goal_3,
  MR_Word * BothSet_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
  MR_Word Set_7;
  MR_Word LambdaSet_8;
  MR_Word Set0_13;
  MR_Word LambdaSet0_14;

  Set0_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_5, Set0_13, &Set_7, LambdaSet0_14, &LambdaSet_8);
  *BothSet_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_7, LambdaSet_8);
}

static void MR_CALL 
hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(
  MR_Word GoalExpr_4,
  MR_Word * Set_5,
  MR_Word * LambdaSet_6)
{
  MR_Word Set0_7;
  MR_Word LambdaSet0_8;

  Set0_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_4, Set0_7, Set_5, LambdaSet0_8, LambdaSet_6);
}

static void MR_CALL 
hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(
  MR_Word Goal_4,
  MR_Word * Set_5,
  MR_Word * LambdaSet_6)
{
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
  MR_Word Set0_12;
  MR_Word LambdaSet0_13;

  Set0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_7, Set0_12, Set_5, LambdaSet0_13, LambdaSet_6);
}

static MR_Box MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_1(
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

static void MR_CALL 
hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Set_0_119,
  MR_Word * STATE_VARIABLE_Set_120,
  MR_Word STATE_VARIABLE_LambdaSet_0_121,
  MR_Word * STATE_VARIABLE_LambdaSet_122)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_82 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word SubGoalExpr_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_82, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_83;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_178_178;
          MR_Word STATE_VARIABLE_Set_184_184;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_9, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_178_178);
          switch (MR_tag((MR_Word) Unification_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_12, (MR_Integer) 4))));
                MR_Word SubInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_12, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_182_182;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_183;

                switch (MR_tag((MR_Word) How_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_182_182 = STATE_VARIABLE_Set_178_178;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_21;
                      MR_Word Var_181 = (MR_Word) (MR_body((MR_Word) (How_18), (MR_Integer) 1));

                      ReuseVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_181, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_21, STATE_VARIABLE_Set_178_178, &STATE_VARIABLE_Set_182_182);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_182_182 = STATE_VARIABLE_Set_178_178;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), How_18, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_178_178, &STATE_VARIABLE_Set_182_182);
                    }
                    break;
                }
                succeeded = (SubInfo_20 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_20, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_183)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_183, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_182_182, &STATE_VARIABLE_Set_184_184);
                else
                  STATE_VARIABLE_Set_184_184 = STATE_VARIABLE_Set_182_182;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_184_184 = STATE_VARIABLE_Set_178_178;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_184_184 = STATE_VARIABLE_Set_178_178;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_184_184 = STATE_VARIABLE_Set_178_178;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_12, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_178_178, &STATE_VARIABLE_Set_184_184);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__unify_rhs_vars_maybe_lambda_and_bi_impl_5_p_0(RHS_10, STATE_VARIABLE_Set_184_184, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120);
          *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_175_175;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_175_175);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_175_175, STATE_VARIABLE_Set_120);
              *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word Vars_61;
              MR_Word ExtraVars_62;
              MR_Word AllVars_63;

              Vars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[1]), Args_57);
              ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[2]), ExtraArgs_58);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_61, ExtraVars_62, &AllVars_63);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_63, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120);
              *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__conj_vars_maybe_lambda_and_bi_impl_5_p_0(Goals_65, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(Goals_187, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_165_165;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_165_165);
              hlds__quantification__case_vars_maybe_lambda_and_bi_impl_5_p_0(Cases_68, STATE_VARIABLE_Set_165_165, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_155_155;
              MR_Word STATE_VARIABLE_LambdaSet_156_156;
              MR_Word SubGoal_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_151_151;
                    MR_Word STATE_VARIABLE_LambdaSet_152_152;
                    MR_Word Vars_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_85, (MR_Integer) 0))));

                    hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_LambdaSet_152_152);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_189, STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_Set_155_155);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_189, STATE_VARIABLE_LambdaSet_152_152, &STATE_VARIABLE_LambdaSet_156_156);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_155_155, &STATE_VARIABLE_LambdaSet_156_156);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_148_148;
                    MR_Word Vars_190 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_85, (MR_Integer) 0))));

                    hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_148_148, &STATE_VARIABLE_LambdaSet_156_156);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_190, STATE_VARIABLE_Set_148_148, &STATE_VARIABLE_Set_155_155);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_85, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_155_155, &STATE_VARIABLE_LambdaSet_156_156);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_145_145;
                        MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_85, (MR_Integer) 1))));

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_145_145, &STATE_VARIABLE_LambdaSet_156_156);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_191, STATE_VARIABLE_Set_145_145, &STATE_VARIABLE_Set_155_155);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_145_233;
                        MR_Word Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_85, (MR_Integer) 1))));

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_145_233, &STATE_VARIABLE_LambdaSet_156_156);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_234, STATE_VARIABLE_Set_145_233, &STATE_VARIABLE_Set_155_155);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_155_155, &STATE_VARIABLE_LambdaSet_156_156);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_85, (MR_Integer) 1))));
                        MR_Word LCSVar_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_85, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_139_139;
                        MR_Word STATE_VARIABLE_Set_141_141;

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_139_139, &STATE_VARIABLE_LambdaSet_156_156);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_102, STATE_VARIABLE_Set_139_139, &STATE_VARIABLE_Set_141_141);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_103, STATE_VARIABLE_Set_141_141, &STATE_VARIABLE_Set_155_155);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_155_155, STATE_VARIABLE_Set_120);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_156_156, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondSet_72;
              MR_Word CondLambdaSet_73;
              MR_Word ThenSet_74;
              MR_Word ThenLambdaSet_75;
              MR_Word ElseSet_76;
              MR_Word ElseLambdaSet_77;
              MR_Word CondThenSet_78;
              MR_Word CondThenLambdaSet_79;
              MR_Word SomeCondThenSet_80;
              MR_Word SomeCondThenLambdaSet_81;
              MR_Word STATE_VARIABLE_Set_161_161;
              MR_Word STATE_VARIABLE_LambdaSet_162_162;
              MR_Word Vars_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Cond_69, &CondSet_72, &CondLambdaSet_73);
              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Then_70, &ThenSet_74, &ThenLambdaSet_75);
              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Else_71, &ElseSet_76, &ElseLambdaSet_77);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_74, &CondThenSet_78);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondLambdaSet_73, ThenLambdaSet_75, &CondThenLambdaSet_79);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_188, CondThenSet_78, &SomeCondThenSet_80);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_188, CondThenLambdaSet_79, &SomeCondThenLambdaSet_81);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_119, SomeCondThenSet_80, &STATE_VARIABLE_Set_161_161);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_121, SomeCondThenLambdaSet_81, &STATE_VARIABLE_LambdaSet_162_162);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_161_161, ElseSet_76, STATE_VARIABLE_Set_120);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_162_162, ElseLambdaSet_77, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_105)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_123;
                    MR_Word Var_126;
                    MR_Word LHS_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_105, (MR_Integer) 0))));
                    MR_Word RHS_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_105, (MR_Integer) 1))));

                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (RHS_204));
                      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (LHS_203));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
                    }
                    hlds__quantification__conj_vars_maybe_lambda_and_bi_impl_5_p_0(Var_123, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_105, (MR_Integer) 1))));
                    MR_Word Inner_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_105, (MR_Integer) 2))));
                    MR_Word MainGoal_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_105, (MR_Integer) 4))));
                    MR_Word OrElseGoals_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_105, (MR_Integer) 5))));
                    MR_Word OuterDI_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_107, (MR_Integer) 0))));
                    MR_Word OuterUO_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_107, (MR_Integer) 1))));
                    MR_Word InnerDI_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_108, (MR_Integer) 0))));
                    MR_Word InnerUO_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_108, (MR_Integer) 1))));
                    MR_Word Var_130;
                    MR_Word STATE_VARIABLE_Set_131_131;
                    MR_Word Var_132;
                    MR_Word Var_133;
                    MR_Word Var_134;
                    MR_Word Var_136;

                    {
                      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (InnerUO_116));
                      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (InnerDI_115));
                      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_134));
                    }
                    {
                      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (OuterUO_114));
                      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
                    }
                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (OuterDI_113));
                      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_130, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_131_131);
                    {
                      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MainGoal_110));
                      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (OrElseGoals_111));
                    }
                    hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(Var_136, STATE_VARIABLE_Set_131_131, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_200 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_105, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_200, (MR_Integer) 0))));
                    MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_201;

                    // direct tailcall eliminated
                    ;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__compute_case_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Sets_0_2,
  MR_Word * STATE_VARIABLE_Sets_3,
  MR_Word STATE_VARIABLE_LambdaSets_0_4,
  MR_Word * STATE_VARIABLE_LambdaSets_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSets_5 = STATE_VARIABLE_LambdaSets_0_4;
      *STATE_VARIABLE_Sets_3 = STATE_VARIABLE_Sets_0_2;
    }
    else
    {
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 2))));
      MR_Word GoalSet_19;
      MR_Word GoalLambdaSet_20;
      MR_Word STATE_VARIABLE_Sets_25_25;
      MR_Word STATE_VARIABLE_LambdaSets_26_26;
      MR_Word GoalExpr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_4;

      hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(GoalExpr_30, &GoalSet_19, &GoalLambdaSet_20);
      {
        STATE_VARIABLE_Sets_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_25_25, 0) = ((MR_Box) (GoalSet_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_2));
      }
      {
        STATE_VARIABLE_LambdaSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_26_26, 0) = ((MR_Box) (GoalLambdaSet_20));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_26_26, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_13;
      next_value_of_STATE_VARIABLE_Sets_0_2 = STATE_VARIABLE_Sets_25_25;
      next_value_of_STATE_VARIABLE_LambdaSets_0_4 = STATE_VARIABLE_LambdaSets_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Sets_0_2 = next_value_of_STATE_VARIABLE_Sets_0_2;
      STATE_VARIABLE_LambdaSets_0_4 = next_value_of_STATE_VARIABLE_LambdaSets_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__compute_disj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Sets_0_2,
  MR_Word * STATE_VARIABLE_Sets_3,
  MR_Word STATE_VARIABLE_LambdaSets_0_4,
  MR_Word * STATE_VARIABLE_LambdaSets_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSets_5 = STATE_VARIABLE_LambdaSets_0_4;
      *STATE_VARIABLE_Sets_3 = STATE_VARIABLE_Sets_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalSet_16;
      MR_Word GoalLambdaSet_17;
      MR_Word STATE_VARIABLE_Sets_22_22;
      MR_Word STATE_VARIABLE_LambdaSets_23_23;
      MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_4;

      hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(GoalExpr_27, &GoalSet_16, &GoalLambdaSet_17);
      {
        STATE_VARIABLE_Sets_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_22_22, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Sets_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_2));
      }
      {
        STATE_VARIABLE_LambdaSets_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_23_23, 0) = ((MR_Box) (GoalLambdaSet_17));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_LambdaSets_23_23, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_Sets_0_2 = STATE_VARIABLE_Sets_22_22;
      next_value_of_STATE_VARIABLE_LambdaSets_0_4 = STATE_VARIABLE_LambdaSets_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Sets_0_2 = next_value_of_STATE_VARIABLE_Sets_0_2;
      STATE_VARIABLE_LambdaSets_0_4 = next_value_of_STATE_VARIABLE_LambdaSets_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__conj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3,
  MR_Word STATE_VARIABLE_LambdaSet_0_4,
  MR_Word * STATE_VARIABLE_LambdaSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LambdaSet_5 = STATE_VARIABLE_LambdaSet_0_4;
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_22_22;
      MR_Word STATE_VARIABLE_LambdaSet_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSet_0_4;

      hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_16, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_22_22, STATE_VARIABLE_LambdaSet_0_4, &STATE_VARIABLE_LambdaSet_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_22_22;
      next_value_of_STATE_VARIABLE_LambdaSet_0_4 = STATE_VARIABLE_LambdaSet_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      STATE_VARIABLE_LambdaSet_0_4 = next_value_of_STATE_VARIABLE_LambdaSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__quantification__unify_rhs_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word RHS_6,
  MR_Word STATE_VARIABLE_Set_0_23,
  MR_Word * STATE_VARIABLE_Set_24,
  MR_Word STATE_VARIABLE_LambdaSet_0_25,
  MR_Word * STATE_VARIABLE_LambdaSet_26)
{
  switch (MR_tag((MR_Word) RHS_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Y_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_6, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_9, STATE_VARIABLE_Set_0_23, STATE_VARIABLE_Set_24);
        *STATE_VARIABLE_LambdaSet_26 = STATE_VARIABLE_LambdaSet_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_6, (MR_Integer) 2))));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, STATE_VARIABLE_Set_0_23, STATE_VARIABLE_Set_24);
        *STATE_VARIABLE_LambdaSet_26 = STATE_VARIABLE_LambdaSet_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVarsModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_6, (MR_Integer) 3))));
        MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_6, (MR_Integer) 5))));
        MR_Word GoalVars0_21;
        MR_Word GoalVars_22;
        MR_Word ArgVars_30;
        MR_Word GoalExpr_38;
        MR_Word Set_40;
        MR_Word LambdaSet_41;
        MR_Word Set0_46;
        MR_Word LambdaSet0_47;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_18, &ArgVars_30);
        GoalExpr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_20, (MR_Integer) 0))));
        Set0_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        LambdaSet0_47 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_38, Set0_46, &Set_40, LambdaSet0_47, &LambdaSet_41);
        GoalVars0_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_40, LambdaSet_41);
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_30, GoalVars0_21, &GoalVars_22);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_25, GoalVars_22, STATE_VARIABLE_LambdaSet_26);
        *STATE_VARIABLE_Set_24 = STATE_VARIABLE_Set_0_23;
      }
      break;
  }
}

static void MR_CALL 
hlds__quantification__case_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word Cases_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18,
  MR_Word STATE_VARIABLE_LambdaSet_0_19,
  MR_Word * STATE_VARIABLE_LambdaSet_20)
{
  MR_Word CaseSets_9;
  MR_Word CaseLambdaSets_10;
  MR_Word CasesSet_13;
  MR_Word CasesLambdaSet_16;

  hlds__quantification__compute_case_vars_maybe_lambda_and_bi_impl_5_p_0(Cases_6, (MR_Word) ((MR_Unsigned) 0U), &CaseSets_9, (MR_Word) ((MR_Unsigned) 0U), &CaseLambdaSets_10);
  if ((CaseSets_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_maybe_lambda_and_bi_impl\'/5", (MR_String) "no cases (1)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseSets_9, &CasesSet_13);
  if ((CaseLambdaSets_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.case_vars_maybe_lambda_and_bi_impl\'/5", (MR_String) "no cases (2)");
      return;
    }
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CaseLambdaSets_10, &CasesLambdaSet_16);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesSet_13, STATE_VARIABLE_Set_0_17, STATE_VARIABLE_Set_18);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CasesLambdaSet_16, STATE_VARIABLE_LambdaSet_0_19, STATE_VARIABLE_LambdaSet_20);
}

static void MR_CALL 
hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18,
  MR_Word STATE_VARIABLE_LambdaSet_0_19,
  MR_Word * STATE_VARIABLE_LambdaSet_20)
{
  MR_Word GoalSets_9;
  MR_Word GoalLambdaSets_10;
  MR_Word GoalsSet_11;
  MR_Word GoalsLambdaSet_14;

  hlds__quantification__compute_disj_vars_maybe_lambda_and_bi_impl_5_p_0(Goals_6, (MR_Word) ((MR_Unsigned) 0U), &GoalSets_9, (MR_Word) ((MR_Unsigned) 0U), &GoalLambdaSets_10);
  if ((GoalSets_9 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsSet_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSets_9, &GoalsSet_11);
  if ((GoalLambdaSets_10 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalsLambdaSet_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
    parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalLambdaSets_10, &GoalsLambdaSet_14);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsSet_11, STATE_VARIABLE_Set_0_17, STATE_VARIABLE_Set_18);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalsLambdaSet_14, STATE_VARIABLE_LambdaSet_0_19, STATE_VARIABLE_LambdaSet_20);
}

static MR_bool MR_CALL 
hlds__quantification____Unify____nonlocals_to_recompute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__quantification____Unify____nonlocals_to_recompute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification____Compare____nonlocals_to_recompute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__quantification____Compare____nonlocals_to_recompute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__quantification____Unify____quant_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification____Compare____quant_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__quantification____Compare____quant_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__quantification____Unify____quant_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__quantification____Unify____quant_warning_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__quantification____Compare____quant_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__quantification____Compare____quant_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__quantification__init(void)
{
}

void mercury__hlds__quantification__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__quantification__hlds__quantification__type_ctor_info_nonlocals_to_recompute_0);
	MR_register_type_ctor_info(&hlds__quantification__hlds__quantification__type_ctor_info_quant_info_0);
	MR_register_type_ctor_info(&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0);
}

void mercury__hlds__quantification__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__quantification__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.quantification.
