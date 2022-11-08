/*
** Automatically generated from `quantification.m'
** by the Mercury compiler,
** version rotd-2022-11-08
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
#include "counter.mih"
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
#include "term_context.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__3_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__3_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__2_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__2_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__1_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__1_2_p_0(
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
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_50_11_p_2(
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
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_48_11_p_0(
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
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_9_p_2(
  MR_Word OutsideVars_11,
  MR_Word * Warnings_12,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

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
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6);

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
hlds__quantification__get_updated_fields_acc_4_p_0(
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
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__quantification_scalar_common_4[0])),
    ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1_2)),
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
#include "io.stream_ops.mh"



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
  (MR_String) "ord_nl_maybe_lambda",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_1 = {
  (MR_String) "ord_nl_no_lambda",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__quantification__hlds__quantification__enum_functor_desc_nonlocals_to_recompute_0_2 = {
  (MR_String) "cg_nl_no_lambda",
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
  (MR_PseudoTypeInfo) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_db_0),
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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__3_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__3_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaGoalNonLocals_53, HeadVar__2_115);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__2_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__2_2_p_0(
  MR_Word LambdaGoalNonLocals_53,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaGoalNonLocals_53, HeadVar__2_115);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__1_2_p_0(
  MR_Word MaybeSize_64,
  MR_Word HeadVar__2_106)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[3]), ((MR_Box) (MaybeSize_64)), ((MR_Box) (HeadVar__2_106)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(
  MR_Word MaybeTakeAddr_63,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[2]), ((MR_Box) (MaybeTakeAddr_63)), ((MR_Box) (HeadVar__2_102)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__1_2_p_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
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

              parse_tree__var_db____Compare____var_db_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

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
              succeeded = parse_tree__var_db____Unify____var_db_0_0(ArgX6_13, ArgY6_14);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
hlds__quantification__free_goal_vars_1_f_0(
  MR_Word Goal_3)
{
  MR_Word HeadVar__2_2;
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));
  MR_Word Set_7;
  MR_Word LambdaSet_8;
  MR_Word Set0_10;
  MR_Word LambdaSet0_11;

  Set0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_5, Set0_10, &Set_7, LambdaSet0_11, &LambdaSet_8);
  HeadVar__2_2 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_7, LambdaSet_8);
  return HeadVar__2_2;
}

void MR_CALL 
hlds__quantification__implicitly_quantify_clause_body_general_9_p_0(
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
  hlds__quantification__implicitly_quantify_goal_general_9_p_0(NonLocalsToRecompute_10, OutsideVars_16, Warnings_12, STATE_VARIABLE_Goal_0_17, STATE_VARIABLE_Goal_18, STATE_VARIABLE_VarTable_0_19, STATE_VARIABLE_VarTable_20, STATE_VARIABLE_RttiVarMaps_0_21, STATE_VARIABLE_RttiVarMaps_22);
}

void MR_CALL 
hlds__quantification__implicitly_quantify_clause_body_general_vs_11_p_0(
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
  MR_bool succeeded;
  MR_Word OutsideVars_19;
  MR_Word STATE_VARIABLE_Goal_29_31;
  MR_Word STATE_VARIABLE_VarSet_30_32;
  MR_Word STATE_VARIABLE_VarTypes_31_33;
  MR_Word STATE_VARIABLE_RttiVarMaps_32_34;
  MR_Word Var_36;
  MR_Word Var_38;

  OutsideVars_19 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_13);
  switch (NonLocalsToRecompute_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word VarSetTypes0_39;
        MR_Word VarDb0_40;
        MR_Word QuantInfo0_41;
        MR_Word QuantInfo_42;
        MR_Word VarDb_43;
        MR_Word Warnings0_46;
        MR_Word LambdaOutsideVars_50;
        MR_Word QuantVars_51;
        MR_Word NonLocals_52;

        {
          VarSetTypes0_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarSetTypes0_39, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_22));
          MR_hl_field(0, VarSetTypes0_39, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_24));
        }
        {
          VarDb0_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarDb0_40, 0) = ((MR_Box) (VarSetTypes0_39));
        }
        LambdaOutsideVars_50 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        QuantVars_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        NonLocals_52 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          QuantInfo0_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QuantInfo0_41, 0) = ((MR_Box) (OutsideVars_19));
          MR_hl_field(0, QuantInfo0_41, 1) = ((MR_Box) (LambdaOutsideVars_50));
          MR_hl_field(0, QuantInfo0_41, 2) = ((MR_Box) (QuantVars_51));
          MR_hl_field(0, QuantInfo0_41, 3) = ((MR_Box) (NonLocals_52));
          MR_hl_field(0, QuantInfo0_41, 4) = ((MR_Box) (OutsideVars_19));
          MR_hl_field(0, QuantInfo0_41, 5) = ((MR_Box) (VarDb0_40));
          MR_hl_field(0, QuantInfo0_41, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_26));
          MR_hl_field(0, QuantInfo0_41, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(STATE_VARIABLE_Goal_0_20, &STATE_VARIABLE_Goal_29_31, QuantInfo0_41, &QuantInfo_42);
        VarDb_43 = ((MR_Word) ((MR_hl_field(0, QuantInfo_42, (MR_Integer) 5))));
        STATE_VARIABLE_RttiVarMaps_32_34 = ((MR_Word) ((MR_hl_field(0, QuantInfo_42, (MR_Integer) 6))));
        Warnings0_46 = ((MR_Word) ((MR_hl_field(0, QuantInfo_42, (MR_Integer) 7))));
        if (((MR_tag((MR_Word) VarDb_43)) == (MR_Integer) 1))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vs_2\'/11", (MR_String) "var_db_var_table");
            return;
          }
        else
        {
          MR_Word VarSetTypes_44 = ((MR_Word) ((MR_hl_field(0, VarDb_43, (MR_Integer) 0))));

          STATE_VARIABLE_VarSet_30_32 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_44, (MR_Integer) 0))));
          STATE_VARIABLE_VarTypes_31_33 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_44, (MR_Integer) 1))));
        }
        mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_46, Warnings_14);
      }
      break;
    case (MR_Integer) 0:
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_48_11_p_0(OutsideVars_19, Warnings_14, STATE_VARIABLE_Goal_0_20, &STATE_VARIABLE_Goal_29_31, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_30_32, STATE_VARIABLE_VarTypes_0_24, &STATE_VARIABLE_VarTypes_31_33, STATE_VARIABLE_RttiVarMaps_0_26, &STATE_VARIABLE_RttiVarMaps_32_34);
      break;
  }
  succeeded = (NonLocalsToRecompute_12 == (MR_Integer) 2);
  if (succeeded)
  {
    Var_36 = (MR_Integer) 1;
    hlds__goal_util__goal_contains_reconstruction_2_p_0(STATE_VARIABLE_Goal_29_31, &Var_38);
    succeeded = (Var_36 == Var_38);
  }
  if (succeeded)
  {
    MR_Word Var_29;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_50_11_p_2(OutsideVars_19, &Var_29, STATE_VARIABLE_Goal_29_31, STATE_VARIABLE_Goal_21, STATE_VARIABLE_VarSet_30_32, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_VarTypes_31_33, STATE_VARIABLE_VarTypes_25, STATE_VARIABLE_RttiVarMaps_32_34, STATE_VARIABLE_RttiVarMaps_27);
  }
  else
  {
    *STATE_VARIABLE_RttiVarMaps_27 = STATE_VARIABLE_RttiVarMaps_32_34;
    *STATE_VARIABLE_VarTypes_25 = STATE_VARIABLE_VarTypes_31_33;
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_30_32;
    *STATE_VARIABLE_Goal_21 = STATE_VARIABLE_Goal_29_31;
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_50_11_p_2(
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
  MR_Word LambdaOutsideVars_41;
  MR_Word QuantVars_42;
  MR_Word NonLocals_43;

  {
    VarSetTypes0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarSetTypes0_19, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_29));
    MR_hl_field(0, VarSetTypes0_19, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_31));
  }
  {
    VarDb0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarDb0_20, 0) = ((MR_Box) (VarSetTypes0_19));
  }
  LambdaOutsideVars_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_42 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_43 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QuantInfo0_21, 0) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(0, QuantInfo0_21, 1) = ((MR_Box) (LambdaOutsideVars_41));
    MR_hl_field(0, QuantInfo0_21, 2) = ((MR_Box) (QuantVars_42));
    MR_hl_field(0, QuantInfo0_21, 3) = ((MR_Box) (NonLocals_43));
    MR_hl_field(0, QuantInfo0_21, 4) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(0, QuantInfo0_21, 5) = ((MR_Box) (VarDb0_20));
    MR_hl_field(0, QuantInfo0_21, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_33));
    MR_hl_field(0, QuantInfo0_21, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(STATE_VARIABLE_Goal_0_27, STATE_VARIABLE_Goal_28, QuantInfo0_21, &QuantInfo_22);
  VarDb_23 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_34 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 6))));
  Warnings0_26 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_23)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vs_2\'/11", (MR_String) "var_db_var_table");
      return;
    }
  else
  {
    MR_Word VarSetTypes_24 = ((MR_Word) ((MR_hl_field(0, VarDb_23, (MR_Integer) 0))));

    *STATE_VARIABLE_VarSet_30 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_24, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTypes_32 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_24, (MR_Integer) 1))));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_26, Warnings_14);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_118_115_95_50_95_95_91_49_93_95_48_11_p_0(
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
  MR_Word LambdaOutsideVars_41;
  MR_Word QuantVars_42;
  MR_Word NonLocals_43;

  {
    VarSetTypes0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarSetTypes0_19, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_0_29));
    MR_hl_field(0, VarSetTypes0_19, 1) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_31));
  }
  {
    VarDb0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarDb0_20, 0) = ((MR_Box) (VarSetTypes0_19));
  }
  LambdaOutsideVars_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_42 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_43 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QuantInfo0_21, 0) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(0, QuantInfo0_21, 1) = ((MR_Box) (LambdaOutsideVars_41));
    MR_hl_field(0, QuantInfo0_21, 2) = ((MR_Box) (QuantVars_42));
    MR_hl_field(0, QuantInfo0_21, 3) = ((MR_Box) (NonLocals_43));
    MR_hl_field(0, QuantInfo0_21, 4) = ((MR_Box) (OutsideVars_13));
    MR_hl_field(0, QuantInfo0_21, 5) = ((MR_Box) (VarDb0_20));
    MR_hl_field(0, QuantInfo0_21, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_33));
    MR_hl_field(0, QuantInfo0_21, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_Goal_0_27, STATE_VARIABLE_Goal_28, QuantInfo0_21, &QuantInfo_22);
  VarDb_23 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_34 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 6))));
  Warnings0_26 = ((MR_Word) ((MR_hl_field(0, QuantInfo_22, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_23)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_vs_2\'/11", (MR_String) "var_db_var_table");
      return;
    }
  else
  {
    MR_Word VarSetTypes_24 = ((MR_Word) ((MR_hl_field(0, VarDb_23, (MR_Integer) 0))));

    *STATE_VARIABLE_VarSet_30 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_24, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTypes_32 = ((MR_Word) ((MR_hl_field(0, VarSetTypes_24, (MR_Integer) 1))));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_26, Warnings_14);
}

void MR_CALL 
hlds__quantification__requantify_proc_general_3_p_0(
  MR_Word NonLocalsToRecompute_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15)
{
  MR_Word HeadVars_6;
  MR_Word VarTable0_7;
  MR_Word Goal0_8;
  MR_Word RttiVarmaps0_9;
  MR_Word Goal_11;
  MR_Word VarTable_12;
  MR_Word RttiVarmaps_13;
  MR_Word STATE_VARIABLE_ProcInfo_16_16;
  MR_Word STATE_VARIABLE_ProcInfo_17_17;
  MR_Word OutsideVars_18;
  MR_Word Var_10;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &HeadVars_6);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarTable0_7);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Goal0_8);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &RttiVarmaps0_9);
  OutsideVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_6);
  hlds__quantification__implicitly_quantify_goal_general_9_p_0(NonLocalsToRecompute_4, OutsideVars_18, &Var_10, Goal0_8, &Goal_11, VarTable0_7, &VarTable_12, RttiVarmaps0_9, &RttiVarmaps_13);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_12, STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_ProcInfo_16_16);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_11, STATE_VARIABLE_ProcInfo_16_16, &STATE_VARIABLE_ProcInfo_17_17);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarmaps_13, STATE_VARIABLE_ProcInfo_17_17, STATE_VARIABLE_ProcInfo_15);
}

void MR_CALL 
hlds__quantification__implicitly_quantify_goal_general_9_p_0(
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
  MR_Word STATE_VARIABLE_Goal_24_24;
  MR_Word STATE_VARIABLE_VarTable_25_25;
  MR_Word STATE_VARIABLE_RttiVarMaps_26_26;
  MR_Word Var_31;
  MR_Word Var_33;

  switch (NonLocalsToRecompute_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word VarDb0_34;
        MR_Word QuantInfo0_35;
        MR_Word QuantInfo_36;
        MR_Word VarDb_37;
        MR_Word Warnings0_39;
        MR_Word LambdaOutsideVars_43;
        MR_Word QuantVars_44;
        MR_Word NonLocals_45;

        {
          VarDb0_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarDb0_34, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_19));
        }
        LambdaOutsideVars_43 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        QuantVars_44 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        NonLocals_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          QuantInfo0_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QuantInfo0_35, 0) = ((MR_Box) (OutsideVars_11));
          MR_hl_field(0, QuantInfo0_35, 1) = ((MR_Box) (LambdaOutsideVars_43));
          MR_hl_field(0, QuantInfo0_35, 2) = ((MR_Box) (QuantVars_44));
          MR_hl_field(0, QuantInfo0_35, 3) = ((MR_Box) (NonLocals_45));
          MR_hl_field(0, QuantInfo0_35, 4) = ((MR_Box) (OutsideVars_11));
          MR_hl_field(0, QuantInfo0_35, 5) = ((MR_Box) (VarDb0_34));
          MR_hl_field(0, QuantInfo0_35, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_21));
          MR_hl_field(0, QuantInfo0_35, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(STATE_VARIABLE_Goal_0_17, &STATE_VARIABLE_Goal_24_24, QuantInfo0_35, &QuantInfo_36);
        VarDb_37 = ((MR_Word) ((MR_hl_field(0, QuantInfo_36, (MR_Integer) 5))));
        STATE_VARIABLE_RttiVarMaps_26_26 = ((MR_Word) ((MR_hl_field(0, QuantInfo_36, (MR_Integer) 6))));
        Warnings0_39 = ((MR_Word) ((MR_hl_field(0, QuantInfo_36, (MR_Integer) 7))));
        if (((MR_tag((MR_Word) VarDb_37)) == (MR_Integer) 1))
          STATE_VARIABLE_VarTable_25_25 = ((MR_Word) ((MR_hl_field(1, VarDb_37, (MR_Integer) 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/9", (MR_String) "var_db_varset_vartypes");
            return;
          }
        mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_39, Warnings_12);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word VarDb0_70;
        MR_Word QuantInfo0_71;
        MR_Word QuantInfo_72;
        MR_Word VarDb_73;
        MR_Word Warnings0_75;
        MR_Word LambdaOutsideVars_79;
        MR_Word QuantVars_80;
        MR_Word NonLocals_81;

        {
          VarDb0_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarDb0_70, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_19));
        }
        LambdaOutsideVars_79 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        QuantVars_80 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        NonLocals_81 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          QuantInfo0_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QuantInfo0_71, 0) = ((MR_Box) (OutsideVars_11));
          MR_hl_field(0, QuantInfo0_71, 1) = ((MR_Box) (LambdaOutsideVars_79));
          MR_hl_field(0, QuantInfo0_71, 2) = ((MR_Box) (QuantVars_80));
          MR_hl_field(0, QuantInfo0_71, 3) = ((MR_Box) (NonLocals_81));
          MR_hl_field(0, QuantInfo0_71, 4) = ((MR_Box) (OutsideVars_11));
          MR_hl_field(0, QuantInfo0_71, 5) = ((MR_Box) (VarDb0_70));
          MR_hl_field(0, QuantInfo0_71, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_21));
          MR_hl_field(0, QuantInfo0_71, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_Goal_0_17, &STATE_VARIABLE_Goal_24_24, QuantInfo0_71, &QuantInfo_72);
        VarDb_73 = ((MR_Word) ((MR_hl_field(0, QuantInfo_72, (MR_Integer) 5))));
        STATE_VARIABLE_RttiVarMaps_26_26 = ((MR_Word) ((MR_hl_field(0, QuantInfo_72, (MR_Integer) 6))));
        Warnings0_75 = ((MR_Word) ((MR_hl_field(0, QuantInfo_72, (MR_Integer) 7))));
        if (((MR_tag((MR_Word) VarDb_73)) == (MR_Integer) 1))
          STATE_VARIABLE_VarTable_25_25 = ((MR_Word) ((MR_hl_field(1, VarDb_73, (MR_Integer) 0))));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/9", (MR_String) "var_db_varset_vartypes");
            return;
          }
        mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_75, Warnings_12);
      }
      break;
  }
  succeeded = (NonLocalsToRecompute_10 == (MR_Integer) 2);
  if (succeeded)
  {
    Var_31 = (MR_Integer) 1;
    hlds__goal_util__goal_contains_reconstruction_2_p_0(STATE_VARIABLE_Goal_24_24, &Var_33);
    succeeded = (Var_31 == Var_33);
  }
  if (succeeded)
  {
    MR_Word Var_16;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_9_p_2(OutsideVars_11, &Var_16, STATE_VARIABLE_Goal_24_24, STATE_VARIABLE_Goal_18, STATE_VARIABLE_VarTable_25_25, STATE_VARIABLE_VarTable_20, STATE_VARIABLE_RttiVarMaps_26_26, STATE_VARIABLE_RttiVarMaps_22);
  }
  else
  {
    *STATE_VARIABLE_RttiVarMaps_22 = STATE_VARIABLE_RttiVarMaps_26_26;
    *STATE_VARIABLE_VarTable_20 = STATE_VARIABLE_VarTable_25_25;
    *STATE_VARIABLE_Goal_18 = STATE_VARIABLE_Goal_24_24;
  }
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
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
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
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_51));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_52));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_53));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_54));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_55));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_56));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_57));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
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
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_55));
    }
  }
  else
  {
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_no_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarsList_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word OutsideVars_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
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
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, FollowingVars_23, &OutsideVars1_31);
      Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars1_31));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_64));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_65));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_68));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_69));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_70));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Var_47, &Goal_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
      NonLocalVars1_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, NonLocalVars1_32, &OutsideVars2_33);
      Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 1))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 2))));
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 4))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 5))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 6))));
      Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (OutsideVars2_33));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (Var_79));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_80));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 5) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 6) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 7) = ((MR_Box) (Var_85));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_24, Var_46, &Goals_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_32, NonLocalVars2_34, &NonLocalVarsConj_35);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_35, OutsideVars_30, &NonLocalVars_36);
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OutsideVars_30));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_94));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_95));
        MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_36));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_98));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_100));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));

        *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
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
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_141;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_173;
        MR_Word Var_197;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
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
        Seen0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_141));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_149));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_150));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_152));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_153));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_154));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_155));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_156));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_160));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_161));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_162));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_163));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_164));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_165));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_173));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_181));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_183));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_184));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_185));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_186));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_187));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_188));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_197));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_205));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_206));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_208));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_209));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_210));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_211));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_212));
          }
        }
        Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_215));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_216));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_221));
        }
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_222));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_230 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_230));
            MR_hl_field(0, base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_232));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_233));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_234));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_235));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_237));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(0, Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_1));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, base, 1) = NULL;
          MR_hl_field(2, base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(2, base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(2, base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(2, base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(0, Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_2));
                  MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(0, Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(0, Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1_3));
                  MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(0, Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
                MR_hl_field(0, base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(0, base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(0, base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_62));
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
            switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
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
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_80_80;
        MR_Word STATE_VARIABLE_Info_81_81;
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_190;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_190));
        if (succeeded)
          STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_203 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_80_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 0) = ((MR_Box) (Var_198));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 1) = ((MR_Box) (Var_199));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 3) = ((MR_Box) (Var_201));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 4) = ((MR_Box) (Var_202));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 5) = ((MR_Box) (Var_203));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 6) = ((MR_Box) (Var_204));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 7) = ((MR_Box) (Var_205));
          }
        }
        Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
        Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
        Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
        Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 4))));
        Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 5))));
        Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 6))));
        Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (Var_208));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (Var_209));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (Var_210));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (Var_211));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (Var_212));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (Var_213));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (Var_214));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 1))));
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 2))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 3))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 4))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 5))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 6))));
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 1) = ((MR_Box) (Var_216));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 3) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 4) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 5) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 6) = ((MR_Box) (Var_221));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 7) = ((MR_Box) (Var_222));
        }
        Var_223 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_223));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_83_83;
        else
        {
          MR_Word Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 0))));
          MR_Word Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 1))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 3))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 4))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 5))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 6))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_231));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_232));
            MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_234));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_235));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_236));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_237));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_238));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_350 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_351 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_352 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_353 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_354 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_355;
        MR_Word LambdaOutsideVars_356;
        MR_Word AllButRHSGoalVars_386;
        MR_Word UnifyRHS_387;
        MR_Word Unification_388;
        MR_Word RHSGoalVars_389;
        MR_Word AllGoalVars_390;
        MR_Word ONonLocalVars_391;
        MR_Word LONonLocalVars_392;
        MR_Word NonLocalVars_393;
        MR_Word STATE_VARIABLE_GoalVars_61_394;
        MR_Word STATE_VARIABLE_Info_68_399;
        MR_Word STATE_VARIABLE_Info_69_400;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_355);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_356);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_350, &STATE_VARIABLE_GoalVars_61_394);
        switch (MR_tag((MR_Word) Unification0_353)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_361 = ((MR_Word) ((MR_hl_field(0, Unification0_353, (MR_Integer) 4))));
              MR_Word SubInfo_363 = ((MR_Word) ((MR_hl_field(0, Unification0_353, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_63_396;
              MR_Word SizeVar_372;
              MR_Word MaybeSize_371;
              MR_Word Var_397;

              switch (MR_tag((MR_Word) How_361)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_GoalVars_63_396 = STATE_VARIABLE_GoalVars_61_394;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_364;
                    MR_Word Var_395 = (MR_Word) (MR_body((MR_Word) (How_361), (MR_Integer) 1));

                    ReuseVar_364 = ((MR_Word) ((MR_hl_field(0, Var_395, (MR_Integer) 0))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_364, STATE_VARIABLE_GoalVars_61_394, &STATE_VARIABLE_GoalVars_63_396);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_GoalVars_63_396 = STATE_VARIABLE_GoalVars_61_394;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_368 = ((MR_Word) ((MR_hl_field(3, How_361, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_368, STATE_VARIABLE_GoalVars_61_394, &STATE_VARIABLE_GoalVars_63_396);
                  }
                  break;
              }
              succeeded = (SubInfo_363 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_371 = ((MR_Word) ((MR_hl_field(1, SubInfo_363, (MR_Integer) 1))));
                succeeded = (MaybeSize_371 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_397 = ((MR_Word) ((MR_hl_field(1, MaybeSize_371, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_397)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_372 = ((MR_Word) ((MR_hl_field(1, Var_397, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_372, STATE_VARIABLE_GoalVars_63_396, &AllButRHSGoalVars_386);
              else
                AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_63_396;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_61_394;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification0_353, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_61_394;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_385 = ((MR_Word) ((MR_hl_field(3, Unification0_353, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_385, STATE_VARIABLE_GoalVars_61_394, &AllButRHSGoalVars_386);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_49_10_p_1(GoalInfo0_11, UnifyRHS0_351, &UnifyRHS_387, Unification0_353, &Unification_388, &RHSGoalVars_389, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_399);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_350));
          MR_hl_field(1, base, 1) = ((MR_Box) (UnifyRHS_387));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_352));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_388));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_354));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_386, RHSGoalVars_389, &AllGoalVars_390);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_390, STATE_VARIABLE_Info_68_399, &STATE_VARIABLE_Info_69_400);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_390, OutsideVars_355, &ONonLocalVars_391);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_390, LambdaOutsideVars_356, &LONonLocalVars_392);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_391, LONonLocalVars_392, &NonLocalVars_393);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_393, STATE_VARIABLE_Info_69_400, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;
            MR_Word Set0_120;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_120 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr0_9, Set0_120, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;
            MR_Word Set0_105;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[16]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[17]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_105 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr0_9, Set0_105, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_88;
            MR_Word FollowingVarsList_107;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals0_43, &FollowingVarsList_107, PossiblyNonLocalGoalVars0_12);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_107, Goals0_43, &Goals_88, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_88));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Set0_117;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_49_7_p_1(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_109));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_110));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_112));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_113));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_114));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_115));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_90));
            }
            Set0_117 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr0_9, Set0_117, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_342;
            MR_Word Var_343;
            MR_Word Var_344;
            MR_Word Var_346;
            MR_Word Var_347;
            MR_Word Var_348;
            MR_Word Var_349;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_49_7_p_1(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_342 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_343 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_344 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_346 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_347 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_348 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_349 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_342));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_343));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_344));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_346));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_347));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_348));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_349));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_240 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_241 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_242;
            MR_Word STATE_VARIABLE_Info_52_276;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_242);
            switch (MR_tag((MR_Word) Reason0_240)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_243 = ((MR_Word) ((MR_hl_field(0, Reason0_240, (MR_Integer) 0))));
                  MR_Word Reason_245;
                  MR_Word SubGoal1_246;
                  MR_Word Vars_247;
                  MR_Word SubGoal_248;
                  MR_Word NonLocals0_249;
                  MR_Word NonLocals_250;
                  MR_Word STATE_VARIABLE_Info_50_274;
                  MR_Word STATE_VARIABLE_Info_51_275;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_245, SubGoal0_241, &SubGoal1_246, Vars0_243, &Vars_247, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_274);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal1_246, &SubGoal_248, STATE_VARIABLE_Info_50_274, &STATE_VARIABLE_Info_51_275);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason_245));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_248));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_51_275, &NonLocals0_249);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_247, NonLocals0_249, &NonLocals_250);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_250, STATE_VARIABLE_Info_51_275, &STATE_VARIABLE_Info_52_276);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_284;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_241, &SubGoal_284, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_284));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_240, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_284;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_241, &SubGoal_284, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_284));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_251 = ((MR_Word) ((MR_hl_field(3, Reason0_240, (MR_Integer) 1))));
                      MR_Word FGT_252 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_240, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_252) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_253;
                            MR_Word LambdaOutsideVars_254;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_253);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_254);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_253, TermVar_251);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_254, TermVar_251);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_251);
                            }
                            else
                            {
                              switch (FGT_252) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(3, &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_283;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_241, &SubGoal_283, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_283));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_58_279;
                      MR_Word STATE_VARIABLE_Info_59_280;
                      MR_Word Vars0_285 = ((MR_Word) ((MR_hl_field(3, Reason0_240, (MR_Integer) 5))));
                      MR_Word Reason_286;
                      MR_Word SubGoal1_287;
                      MR_Word Vars_288;
                      MR_Word SubGoal_289;
                      MR_Word NonLocals0_290;
                      MR_Word NonLocals_291;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_49_10_p_1(Reason0_240, &Reason_286, SubGoal0_241, &SubGoal1_287, Vars0_285, &Vars_288, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_279);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal1_287, &SubGoal_289, STATE_VARIABLE_Info_58_279, &STATE_VARIABLE_Info_59_280);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason_286));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_289));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_280, &NonLocals0_290);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_288, NonLocals0_290, &NonLocals_291);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_291, STATE_VARIABLE_Info_59_280, &STATE_VARIABLE_Info_52_276);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_242, STATE_VARIABLE_Info_52_276, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_123 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_124 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_125 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_126;
            MR_Word OutsideVars0_127;
            MR_Word LambdaOutsideVars0_128;
            MR_Word QVars_129;
            MR_Word Cond1_130;
            MR_Word Then1_131;
            MR_Word QuantVars1_132;
            MR_Word VarsThen_141;
            MR_Word LambdaVarsThen_142;
            MR_Word OutsideVars1_143;
            MR_Word LambdaOutsideVars1_144;
            MR_Word Cond_145;
            MR_Word NonLocalsCond_146;
            MR_Word OutsideVars2_147;
            MR_Word Then_148;
            MR_Word NonLocalsThen_149;
            MR_Word Else_150;
            MR_Word NonLocalsElse_151;
            MR_Word NonLocalsIfThen_152;
            MR_Word NonLocalsIfThenElse_153;
            MR_Word NonLocalsO_154;
            MR_Word NonLocalsL_155;
            MR_Word NonLocals_156;
            MR_Word STATE_VARIABLE_Info_52_158;
            MR_Word STATE_VARIABLE_Info_54_160;
            MR_Word STATE_VARIABLE_Info_55_161;
            MR_Word STATE_VARIABLE_Info_56_162;
            MR_Word STATE_VARIABLE_Info_57_163;
            MR_Word STATE_VARIABLE_Info_58_164;
            MR_Word STATE_VARIABLE_Info_59_165;
            MR_Word STATE_VARIABLE_Info_60_166;
            MR_Word STATE_VARIABLE_Info_61_167;
            MR_Word STATE_VARIABLE_Info_62_168;
            MR_Word STATE_VARIABLE_Info_63_169;
            MR_Word STATE_VARIABLE_Info_64_170;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_126);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_127);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_128);
            if ((Vars0_122 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_129 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_130 = Cond0_123;
              Then1_131 = Then0_124;
              QuantVars1_132 = QuantVars0_126;
              STATE_VARIABLE_Info_52_158 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_135;
              MR_Word RenameVars2_136;
              MR_Word RenameVars_137;
              MR_Word Vars_138;

              QVars_129 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_122);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, QVars_129, &RenameVars1_135);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_128, QVars_129, &RenameVars2_136);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_135, RenameVars2_136, &RenameVars_137);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_137);
              if (succeeded)
              {
                Cond1_130 = Cond0_123;
                Then1_131 = Then0_124;
                Vars_138 = Vars0_122;
                STATE_VARIABLE_Info_52_158 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_139;
                MR_Word RenameMap_140;
                MR_Word STATE_VARIABLE_Info_51_157;

                Context_139 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_137, Context_139, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_157);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_137, &RenameMap_140, Cond0_123, &Cond1_130, STATE_VARIABLE_Info_51_157, &STATE_VARIABLE_Info_52_158);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_140, Then0_124, &Then1_131);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_140, Vars0_122, &Vars_138);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, QuantVars0_126, &QuantVars1_132);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Then1_131, &VarsThen_141);
            LambdaVarsThen_142 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, VarsThen_141, &OutsideVars1_143);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_128, LambdaVarsThen_142, &LambdaOutsideVars1_144);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_132, STATE_VARIABLE_Info_52_158, &STATE_VARIABLE_Info_54_160);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_143, STATE_VARIABLE_Info_54_160, &STATE_VARIABLE_Info_55_161);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_144, STATE_VARIABLE_Info_55_161, &STATE_VARIABLE_Info_56_162);
            hlds__quantification__update_seen_vars_3_p_0(QVars_129, STATE_VARIABLE_Info_56_162, &STATE_VARIABLE_Info_57_163);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Cond1_130, &Cond_145, STATE_VARIABLE_Info_57_163, &STATE_VARIABLE_Info_58_164);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_164, &NonLocalsCond_146);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, NonLocalsCond_146, &OutsideVars2_147);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_147, STATE_VARIABLE_Info_58_164, &STATE_VARIABLE_Info_59_165);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_128, STATE_VARIABLE_Info_59_165, &STATE_VARIABLE_Info_60_166);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Then1_131, &Then_148, STATE_VARIABLE_Info_60_166, &STATE_VARIABLE_Info_61_167);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_167, &NonLocalsThen_149);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_127, STATE_VARIABLE_Info_61_167, &STATE_VARIABLE_Info_62_168);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_126, STATE_VARIABLE_Info_62_168, &STATE_VARIABLE_Info_63_169);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(Else0_125, &Else_150, STATE_VARIABLE_Info_63_169, &STATE_VARIABLE_Info_64_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_145));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_148));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_150));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_170, &NonLocalsElse_151);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_146, NonLocalsThen_149, &NonLocalsIfThen_152);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_152, NonLocalsElse_151, &NonLocalsIfThenElse_153);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_153, OutsideVars0_127, &NonLocalsO_154);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_153, LambdaOutsideVars0_128, &NonLocalsL_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_154, NonLocalsL_155, &NonLocals_156);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_156, STATE_VARIABLE_Info_64_170, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_298 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_298)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_299 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_300 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 1))));
                  MR_Word Inner_301 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_302 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 3))));
                  MR_Word MainGoal0_303 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_304 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 5))));
                  MR_Word OrElseInners0_305 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_306;
                  MR_Word OrElseInners_307;
                  MR_Word AtomicGoalsWithInners0_310;
                  MR_Word AllAtomicGoals_312;
                  MR_Word NonLocalVarSets_313;
                  MR_Word MainGoal_314;
                  MR_Word OrElseGoals_315;
                  MR_Word NonLocalVars0_316;
                  MR_Word NonLocalVars_319;
                  MR_Word ShortHand_320;
                  MR_Word STATE_VARIABLE_Info_45_327;
                  MR_Word Var_328;
                  MR_Word Var_329;
                  MR_Word STATE_VARIABLE_Info_49_330;

                  if ((OrElseInners0_305 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(Inner_301, OrElseGoals0_304, &OrElseGoals1_306, &OrElseInners_307, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_45_327);
                  else
                  {
                    OrElseInners_307 = OrElseInners0_305;
                    OrElseGoals1_306 = OrElseGoals0_304;
                    STATE_VARIABLE_Info_45_327 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_328, 0) = ((MR_Box) (MainGoal0_303));
                    MR_hl_field(1, Var_328, 1) = ((MR_Box) (OrElseGoals1_306));
                  }
                  {
                    Var_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_329, 0) = ((MR_Box) (Inner_301));
                    MR_hl_field(1, Var_329, 1) = ((MR_Box) (OrElseInners_307));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_328, Var_329, &AtomicGoalsWithInners0_310);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_49_7_p_1(AtomicGoalsWithInners0_310, &AllAtomicGoals_312, STATE_VARIABLE_Info_45_327, &STATE_VARIABLE_Info_49_330, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_313);
                  if ((AllAtomicGoals_312 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_314 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_312, (MR_Integer) 0))));
                    OrElseGoals_315 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_312, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_313, &NonLocalVars0_316);
                  switch (GoalType_299) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_319 = NonLocalVars0_316;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_317 = ((MR_Word) ((MR_hl_field(0, Outer_300, (MR_Integer) 0))));
                        MR_Word OuterUO_318 = ((MR_Word) ((MR_hl_field(0, Outer_300, (MR_Integer) 1))));
                        MR_Word Var_333;
                        MR_Word Var_334;

                        {
                          Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_334, 0) = ((MR_Box) (OuterUO_318));
                          MR_hl_field(1, Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_333, 0) = ((MR_Box) (OuterDI_317));
                          MR_hl_field(1, Var_333, 1) = ((MR_Box) (Var_334));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_333, NonLocalVars0_316, &NonLocalVars_319);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_319, STATE_VARIABLE_Info_49_330, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_320 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_320, 0) = (MR_Box) ((MR_Unsigned) (GoalType_299));
                    MR_hl_field(1, ShortHand_320, 1) = ((MR_Box) (Outer_300));
                    MR_hl_field(1, ShortHand_320, 2) = ((MR_Box) (Inner_301));
                    MR_hl_field(1, ShortHand_320, 3) = ((MR_Box) (MaybeOutputVars_302));
                    MR_hl_field(1, ShortHand_320, 4) = ((MR_Box) (MainGoal_314));
                    MR_hl_field(1, ShortHand_320, 5) = ((MR_Box) (OrElseGoals_315));
                    MR_hl_field(1, ShortHand_320, 6) = ((MR_Box) (OrElseInners_307));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_320));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_321 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 0))));
                  MR_Word ResultVar_322 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 1))));
                  MR_Word SubGoal0_323 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 2))));
                  MR_Word SubGoal_324;
                  MR_Word ShortHand_338;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_49_5_p_1(SubGoal0_323, &SubGoal_324, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_338 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_338, 0) = ((MR_Box) (MaybeIO_321));
                    MR_hl_field(2, ShortHand_338, 1) = ((MR_Box) (ResultVar_322));
                    MR_hl_field(2, ShortHand_338, 2) = ((MR_Box) (SubGoal_324));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_338));
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
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_49_7_p_1(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_26_26;
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
    MR_Word Var_67;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_16, &RenameMap_17, Var_27, &Var_28, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[15]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_67));
    if (succeeded)
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_29_29;
    else
    {
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_78));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_79));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_80));
        MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_82));
      }
    }
  }
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_49_3_p_1(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set0_8;

  Set0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_5, Set0_8, BothSet_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set_9;
    MR_Word Sets_10;
    MR_Word GoalSet_12;
    MR_Word GoalExpr_15;
    MR_Word Set0_17;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(Goals_8, &Set_9, &Sets_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Set_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Sets_10));
    }
    GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
    Set0_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_15, Set0_17, &GoalSet_12);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_12, Set_9, HeadVar__4_4);
  }
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
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_12;
    MR_Word SetList0_13;
    MR_Word Set1_14;
    MR_Word GoalExpr_17;
    MR_Word Set0_19;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(Goals_9, &Set0_12, &SetList0_13);
    GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    Set0_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_17, Set0_19, &Set1_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_12, Set1_14, Set_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Set0_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetList0_13));
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
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
  MR_Word Set0_9;

  Set0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_7, Set0_9, Set_6);
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
          MR_Word SubGoalExpr_78 = ((MR_Word) ((MR_hl_field(0, SubGoal_77, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_78;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_116_116;
          MR_Word STATE_VARIABLE_Set_121_121;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_8, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_116_116);
          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_17 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 4))));
                MR_Word SubInfo_19 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_118_118;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_120;

                switch (MR_tag((MR_Word) How_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_118_118 = STATE_VARIABLE_Set_116_116;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_20;
                      MR_Word Var_117 = (MR_Word) (MR_body((MR_Word) (How_17), (MR_Integer) 1));

                      ReuseVar_20 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_118_118);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_118_118 = STATE_VARIABLE_Set_116_116;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(3, How_17, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_118_118);
                    }
                    break;
                }
                succeeded = (SubInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(1, SubInfo_19, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_120 = ((MR_Word) ((MR_hl_field(1, MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_120)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_118_118, &STATE_VARIABLE_Set_121_121);
                else
                  STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_118_118;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_116_116;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_116_116;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(3, Unification_11, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_121_121);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_44_32_51_93_95_48_5_p_0(RHS_9, STATE_VARIABLE_Set_121_121, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_125_125;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_125_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_125_125, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
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
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals_65, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_162 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals_162, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_132_132;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_132_132);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Cases_68, STATE_VARIABLE_Set_132_132, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_137_137;
              MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_138_138;
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(0, Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_138_138);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_164, STATE_VARIABLE_Set_138_138, &STATE_VARIABLE_Set_137_137);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_140_140;
                    MR_Word Vars_165 = ((MR_Word) ((MR_hl_field(2, Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_140_140);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_165, STATE_VARIABLE_Set_140_140, &STATE_VARIABLE_Set_137_137);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_80, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_142_142;
                        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_142_142);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_166, STATE_VARIABLE_Set_142_142, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_142_196;
                        MR_Word Var_197 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_142_196);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, STATE_VARIABLE_Set_142_196, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_97 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));
                        MR_Word LCSVar_98 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_145_145;
                        MR_Word STATE_VARIABLE_Set_146_146;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(SubGoal_171, &STATE_VARIABLE_Set_145_145);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_97, STATE_VARIABLE_Set_145_145, &STATE_VARIABLE_Set_146_146);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_98, STATE_VARIABLE_Set_146_146, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_137_137, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondSet_72;
              MR_Word ThenSet_73;
              MR_Word ElseSet_74;
              MR_Word CondThenSet_75;
              MR_Word SomeCondThenSet_76;
              MR_Word STATE_VARIABLE_Set_134_134;
              MR_Word Vars_163 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Cond_69, &CondSet_72);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Then_70, &ThenSet_73);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(Else_71, &ElseSet_74);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_73, &CondThenSet_75);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_163, CondThenSet_75, &SomeCondThenSet_76);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, SomeCondThenSet_76, &STATE_VARIABLE_Set_134_134);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_134_134, ElseSet_74, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word RHS_177 = ((MR_Word) ((MR_hl_field(0, ShortHand_100, (MR_Integer) 1))));
                    MR_Word Goal_203 = ((MR_Word) ((MR_hl_field(0, ShortHand_100, (MR_Integer) 0))));
                    MR_Word Goals_204;
                    MR_Word GoalExpr_205;
                    MR_Word STATE_VARIABLE_Set_17_209;
                    MR_Word Goal_214;
                    MR_Word GoalExpr_216;
                    MR_Word next_value_of_GoalExpr_6;
                    MR_Word next_value_of_STATE_VARIABLE_Set_0_114;

                    {
                      Goals_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_204, 0) = ((MR_Box) (RHS_177));
                      MR_hl_field(1, Goals_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    GoalExpr_205 = ((MR_Word) ((MR_hl_field(0, Goal_203, (MR_Integer) 0))));
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_4_p_0(GoalExpr_205, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_17_209);
                    Goal_214 = ((MR_Word) ((MR_hl_field(1, Goals_204, (MR_Integer) 0))));
                    GoalExpr_216 = ((MR_Word) ((MR_hl_field(0, Goal_214, (MR_Integer) 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_GoalExpr_6 = GoalExpr_216;
                    next_value_of_STATE_VARIABLE_Set_0_114 = STATE_VARIABLE_Set_17_209;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    STATE_VARIABLE_Set_0_114 = next_value_of_STATE_VARIABLE_Set_0_114;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 1))));
                    MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 2))));
                    MR_Word MainGoal_105 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 4))));
                    MR_Word OrElseGoals_106 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 5))));
                    MR_Word OuterDI_108 = ((MR_Word) ((MR_hl_field(0, Outer_102, (MR_Integer) 0))));
                    MR_Word OuterUO_109 = ((MR_Word) ((MR_hl_field(0, Outer_102, (MR_Integer) 1))));
                    MR_Word InnerDI_110 = ((MR_Word) ((MR_hl_field(0, Inner_103, (MR_Integer) 0))));
                    MR_Word InnerUO_111 = ((MR_Word) ((MR_hl_field(0, Inner_103, (MR_Integer) 1))));
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_Set_150_150;
                    MR_Word Var_151;
                    MR_Word Var_152;
                    MR_Word Var_153;
                    MR_Word Var_155;

                    {
                      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_153, 0) = ((MR_Box) (InnerUO_111));
                      MR_hl_field(1, Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_152, 0) = ((MR_Box) (InnerDI_110));
                      MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_153));
                    }
                    {
                      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_151, 0) = ((MR_Box) (OuterUO_109));
                      MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_149, 0) = ((MR_Box) (OuterDI_108));
                      MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_149, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_150_150);
                    {
                      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_155, 0) = ((MR_Box) (MainGoal_105));
                      MR_hl_field(1, Var_155, 1) = ((MR_Box) (OrElseGoals_106));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Var_155, STATE_VARIABLE_Set_150_150, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_173 = ((MR_Word) ((MR_hl_field(2, ShortHand_100, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_174 = ((MR_Word) ((MR_hl_field(0, SubGoal_173, (MR_Integer) 0))));
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
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_10, (MR_Integer) 2))));
      MR_Word GoalSet_16;
      MR_Word STATE_VARIABLE_Sets_19_19;
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(GoalExpr_20, &GoalSet_16);
      {
        STATE_VARIABLE_Sets_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_19_19, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(1, STATE_VARIABLE_Sets_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
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
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_13;
      MR_Word STATE_VARIABLE_Sets_16_16;
      MR_Word GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_48_3_p_0(GoalExpr_17, &GoalSet_13);
      {
        STATE_VARIABLE_Sets_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_16_16, 0) = ((MR_Box) (GoalSet_13));
        MR_hl_field(1, STATE_VARIABLE_Sets_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
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
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
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
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(0, RHS_7, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_10, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(1, RHS_7, (MR_Integer) 2))));

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
    MR_Word OrElseGoal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 1))));
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
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
    }
    RenameVars_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_49_7_p_1(RenameVars_22, &RenameMap_23, OrElseGoal0_15, &OrElseGoal_24, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_35_35);
    conv0_OrElseInnerDI_25 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerDI_20)));
    OrElseInnerDI_25 = ((MR_Word) (conv0_OrElseInnerDI_25));
    conv1_OrElseInnerUO_26 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerUO_21)));
    OrElseInnerUO_26 = ((MR_Word) (conv1_OrElseInnerUO_26));
    {
      OrElseInner_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(0, OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_49_7_p_1(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseGoalsTail_28));
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
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_105;

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
    MR_Word Vars_85;
    MR_Word Warnings0_86;
    MR_Word Warnings_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    Vars_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 4))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 5))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 6))));
    Warnings0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 7))));
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Vars_85));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (Context_27));
    }
    {
      Warnings_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Warnings_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Warnings_87, 1) = ((MR_Box) (Warnings0_86));
    }
    {
      STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 1) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 7) = ((MR_Box) (Warnings_87));
    }
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
        switch (((MR_Integer) ((MR_hl_field(3, Reason0_12, (MR_Integer) 0))))) {
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
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(3, base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(3, base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(3, base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(3, base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_105));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_117));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_118));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_120));
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
    MR_Word Var_43;

    RenameList_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
    VarDb0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap0_15);
    if (((MR_tag((MR_Word) VarDb0_14)) == (MR_Integer) 1))
    {
      MR_Word VarTable0_23 = ((MR_Word) ((MR_hl_field(1, VarDb0_14, (MR_Integer) 0))));
      MR_Word VarTable_24;

      hlds__goal_util__clone_variables_6_p_0(RenameList_13, VarTable0_23, VarTable0_23, &VarTable_24, RenameMap0_15, RenameMap_10);
      {
        VarDb_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarDb_22, 0) = ((MR_Box) (VarTable_24));
      }
    }
    else
    {
      MR_Word VarSetTypes0_16 = ((MR_Word) ((MR_hl_field(0, VarDb0_14, (MR_Integer) 0))));
      MR_Word VarSet0_17 = ((MR_Word) ((MR_hl_field(0, VarSetTypes0_16, (MR_Integer) 0))));
      MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(0, VarSetTypes0_16, (MR_Integer) 1))));
      MR_Word VarSet_19;
      MR_Word VarTypes_20;
      MR_Word VarSetTypes_21;

      hlds__goal_util__clone_variables_vs_9_p_0(RenameList_13, VarSet0_17, VarTypes0_18, VarSet0_17, &VarSet_19, VarTypes0_18, &VarTypes_20, RenameMap0_15, RenameMap_10);
      {
        VarSetTypes_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarSetTypes_21, 0) = ((MR_Box) (VarSet_19));
        MR_hl_field(0, VarSetTypes_21, 1) = ((MR_Box) (VarTypes_20));
      }
      {
        VarDb_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarDb_22, 0) = ((MR_Box) (VarSetTypes_21));
      }
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*RenameMap_10, STATE_VARIABLE_Goal_0_25, STATE_VARIABLE_Goal_26);
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    succeeded = (((MR_Word) VarDb_22) == ((MR_Word) Var_43));
    if (succeeded)
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
        MR_hl_field(0, base, 5) = ((MR_Box) (VarDb_22));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_57));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_58));
      }
    }
  }
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
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
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
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_51));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_52));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_53));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_54));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_55));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_56));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_57));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
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
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_58));
      MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_61));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_62));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_63));
    }
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_maybe_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVarPair_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarPairs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word FollowingVars_30 = ((MR_Word) ((MR_hl_field(0, FollowingVarPair_23, (MR_Integer) 0))));
      MR_Word LambdaFollowingVars_31 = ((MR_Word) ((MR_hl_field(0, FollowingVarPair_23, (MR_Integer) 1))));
      MR_Word OutsideVars_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      MR_Word LambdaOutsideVars_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
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
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_32, FollowingVars_30, &OutsideVars1_34);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_33, LambdaFollowingVars_31, &LambdaOutsideVars1_35);
      Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_45_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 0) = ((MR_Box) (OutsideVars1_34));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 1) = ((MR_Box) (Var_79));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 2) = ((MR_Box) (Var_80));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 3) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 4) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 5) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 6) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_Info_45_45, 7) = ((MR_Box) (Var_85));
      }
      Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 1))));
      succeeded = (((MR_Word) LambdaOutsideVars1_35) == ((MR_Word) Var_86));
      if (succeeded)
        STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_45_45;
      else
      {
        MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 0))));
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 2))));
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 3))));
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 4))));
        MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 5))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 6))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 7))));

        {
          STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_94));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (LambdaOutsideVars1_35));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (Var_96));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_97));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (Var_98));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (Var_99));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_100));
          MR_hl_field(0, STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_101));
        }
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Var_55, &Goal_27, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
      NonLocalVars1_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_32, NonLocalVars1_36, &OutsideVars2_37);
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 1))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 2))));
      Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
      Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 4))));
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 5))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 6))));
      Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (OutsideVars2_37));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (Var_112));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (Var_113));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) (Var_114));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (Var_115));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 6) = ((MR_Box) (Var_116));
        MR_hl_field(0, STATE_VARIABLE_Info_48_48, 7) = ((MR_Box) (Var_117));
      }
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
      succeeded = (((MR_Word) LambdaOutsideVars_33) == ((MR_Word) Var_118));
      if (succeeded)
        STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_48_48;
      else
      {
        MR_Word Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
        MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 3))));
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 4))));
        MR_Word Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 5))));
        MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 6))));
        MR_Word Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 7))));

        {
          STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (Var_126));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (LambdaOutsideVars_33));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_128));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (Var_129));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_130));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_131));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_132));
          MR_hl_field(0, STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (Var_133));
        }
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarPairs_24, Var_54, &Goals_28, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_36, NonLocalVars2_38, &NonLocalVarsConj_39);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_39, OutsideVars_32, &NonLocalVarsO_40);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_39, LambdaOutsideVars_33, &NonLocalVarsL_41);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsO_40, NonLocalVarsL_41, &NonLocalVars_42);
      Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
      Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
      Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
      Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
      Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
      Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OutsideVars_32));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_143));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_144));
        MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_42));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_146));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_147));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_148));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_149));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));

        *RHSNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
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
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_141;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_173;
        MR_Word Var_197;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
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
        Seen0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_141));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_149));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_150));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_152));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_153));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_154));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_155));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_156));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_160));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_161));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_162));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_163));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_164));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_165));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_173));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_181));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_183));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_184));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_185));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_186));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_187));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_188));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_197));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_205));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_206));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_208));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_209));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_210));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_211));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_212));
          }
        }
        Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_215));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_216));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_221));
        }
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_222));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_230 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_230));
            MR_hl_field(0, base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_232));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_233));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_234));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_235));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_237));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(0, Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_1));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, base, 1) = NULL;
          MR_hl_field(2, base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(2, base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(2, base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(2, base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(0, Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_2));
                  MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(0, Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(0, Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0_3));
                  MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(0, Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
                MR_hl_field(0, base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(0, base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(0, base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_62));
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
            switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
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
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_80_80;
        MR_Word STATE_VARIABLE_Info_81_81;
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_199;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_199));
        if (succeeded)
          STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_80_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 0) = ((MR_Box) (Var_207));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 1) = ((MR_Box) (Var_208));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 3) = ((MR_Box) (Var_210));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 4) = ((MR_Box) (Var_211));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 5) = ((MR_Box) (Var_212));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 6) = ((MR_Box) (Var_213));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 7) = ((MR_Box) (Var_214));
          }
        }
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 4))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 5))));
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 6))));
        Var_223 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (Var_221));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (Var_222));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (Var_223));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_225 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 1))));
        Var_226 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 2))));
        Var_227 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 3))));
        Var_228 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 4))));
        Var_229 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 5))));
        Var_230 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 6))));
        Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 1) = ((MR_Box) (Var_225));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_226));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 3) = ((MR_Box) (Var_227));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 4) = ((MR_Box) (Var_228));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 5) = ((MR_Box) (Var_229));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 6) = ((MR_Box) (Var_230));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 7) = ((MR_Box) (Var_231));
        }
        Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_232));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_83_83;
        else
        {
          MR_Word Var_240 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 0))));
          MR_Word Var_241 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 1))));
          MR_Word Var_243 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 3))));
          MR_Word Var_244 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 4))));
          MR_Word Var_245 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 5))));
          MR_Word Var_246 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 6))));
          MR_Word Var_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_240));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_241));
            MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_243));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_244));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_245));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_246));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_247));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_359 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_360 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_361 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_362 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_363 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_364;
        MR_Word LambdaOutsideVars_365;
        MR_Word AllButRHSGoalVars_395;
        MR_Word UnifyRHS_396;
        MR_Word Unification_397;
        MR_Word RHSGoalVars_398;
        MR_Word AllGoalVars_399;
        MR_Word ONonLocalVars_400;
        MR_Word LONonLocalVars_401;
        MR_Word NonLocalVars_402;
        MR_Word STATE_VARIABLE_GoalVars_61_403;
        MR_Word STATE_VARIABLE_Info_68_408;
        MR_Word STATE_VARIABLE_Info_69_409;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_364);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_365);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_359, &STATE_VARIABLE_GoalVars_61_403);
        switch (MR_tag((MR_Word) Unification0_362)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_370 = ((MR_Word) ((MR_hl_field(0, Unification0_362, (MR_Integer) 4))));
              MR_Word SubInfo_372 = ((MR_Word) ((MR_hl_field(0, Unification0_362, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_63_405;
              MR_Word SizeVar_381;
              MR_Word MaybeSize_380;
              MR_Word Var_406;

              switch (MR_tag((MR_Word) How_370)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_GoalVars_63_405 = STATE_VARIABLE_GoalVars_61_403;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_373;
                    MR_Word Var_404 = (MR_Word) (MR_body((MR_Word) (How_370), (MR_Integer) 1));

                    ReuseVar_373 = ((MR_Word) ((MR_hl_field(0, Var_404, (MR_Integer) 0))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_373, STATE_VARIABLE_GoalVars_61_403, &STATE_VARIABLE_GoalVars_63_405);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_GoalVars_63_405 = STATE_VARIABLE_GoalVars_61_403;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_377 = ((MR_Word) ((MR_hl_field(3, How_370, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_377, STATE_VARIABLE_GoalVars_61_403, &STATE_VARIABLE_GoalVars_63_405);
                  }
                  break;
              }
              succeeded = (SubInfo_372 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_380 = ((MR_Word) ((MR_hl_field(1, SubInfo_372, (MR_Integer) 1))));
                succeeded = (MaybeSize_380 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_406 = ((MR_Word) ((MR_hl_field(1, MaybeSize_380, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_406)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_381 = ((MR_Word) ((MR_hl_field(1, Var_406, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_381, STATE_VARIABLE_GoalVars_63_405, &AllButRHSGoalVars_395);
              else
                AllButRHSGoalVars_395 = STATE_VARIABLE_GoalVars_63_405;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            AllButRHSGoalVars_395 = STATE_VARIABLE_GoalVars_61_403;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification0_362, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                AllButRHSGoalVars_395 = STATE_VARIABLE_GoalVars_61_403;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_394 = ((MR_Word) ((MR_hl_field(3, Unification0_362, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_394, STATE_VARIABLE_GoalVars_61_403, &AllButRHSGoalVars_395);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_44_32_50_93_95_48_10_p_0(GoalInfo0_11, UnifyRHS0_360, &UnifyRHS_396, Unification0_362, &Unification_397, &RHSGoalVars_398, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_408);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_359));
          MR_hl_field(1, base, 1) = ((MR_Box) (UnifyRHS_396));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_361));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_397));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_363));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_395, RHSGoalVars_398, &AllGoalVars_399);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_399, STATE_VARIABLE_Info_68_408, &STATE_VARIABLE_Info_69_409);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_399, OutsideVars_364, &ONonLocalVars_400);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_399, LambdaOutsideVars_365, &LONonLocalVars_401);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_400, LONonLocalVars_401, &NonLocalVars_402);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_402, STATE_VARIABLE_Info_69_409, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;
            MR_Word Set_125;
            MR_Word LambdaSet_126;
            MR_Word Set0_128;
            MR_Word LambdaSet0_129;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_128 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            LambdaSet0_129 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr0_9, Set0_128, &Set_125, LambdaSet0_129, &LambdaSet_126);
            *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_125, LambdaSet_126);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;
            MR_Word Set_104;
            MR_Word LambdaSet_105;
            MR_Word Set0_107;
            MR_Word LambdaSet0_108;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[11]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[12]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_107 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            LambdaSet0_108 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr0_9, Set0_107, &Set_104, LambdaSet0_108, &LambdaSet_105);
            *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_104, LambdaSet_105);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_44;
            MR_Word FollowingVarsList_110;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Goals0_43, &FollowingVarsList_110, PossiblyNonLocalGoalVars0_12);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(FollowingVarsList_110, Goals0_43, &Goals_44, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Set_119;
            MR_Word LambdaSet_120;
            MR_Word Set0_122;
            MR_Word LambdaSet0_123;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_118;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_48_7_p_0(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_111));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_112));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_115));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_116));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_117));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_118));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_90));
            }
            Set0_122 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            LambdaSet0_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr0_9, Set0_122, &Set_119, LambdaSet0_123, &LambdaSet_120);
            *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_119, LambdaSet_120);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_351;
            MR_Word Var_352;
            MR_Word Var_353;
            MR_Word Var_355;
            MR_Word Var_356;
            MR_Word Var_357;
            MR_Word Var_358;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_351 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_352 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_353 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_355 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_356 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_357 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_358 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_351));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_352));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_353));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_355));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_356));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_357));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_358));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_249 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_250 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_251;
            MR_Word STATE_VARIABLE_Info_52_285;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_251);
            switch (MR_tag((MR_Word) Reason0_249)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_252 = ((MR_Word) ((MR_hl_field(0, Reason0_249, (MR_Integer) 0))));
                  MR_Word Reason_254;
                  MR_Word SubGoal1_255;
                  MR_Word Vars_256;
                  MR_Word SubGoal_257;
                  MR_Word NonLocals0_258;
                  MR_Word NonLocals_259;
                  MR_Word STATE_VARIABLE_Info_50_283;
                  MR_Word STATE_VARIABLE_Info_51_284;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_254, SubGoal0_250, &SubGoal1_255, Vars0_252, &Vars_256, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_283);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal1_255, &SubGoal_257, STATE_VARIABLE_Info_50_283, &STATE_VARIABLE_Info_51_284);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason_254));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_257));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_51_284, &NonLocals0_258);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_256, NonLocals0_258, &NonLocals_259);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_259, STATE_VARIABLE_Info_51_284, &STATE_VARIABLE_Info_52_285);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_293;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_250, &SubGoal_293, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_285);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_249));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_293));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_249, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_293;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_250, &SubGoal_293, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_285);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_249));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_293));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_260 = ((MR_Word) ((MR_hl_field(3, Reason0_249, (MR_Integer) 1))));
                      MR_Word FGT_261 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_249, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_261) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_262;
                            MR_Word LambdaOutsideVars_263;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_262);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_263);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_262, TermVar_260);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_263, TermVar_260);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_260);
                            }
                            else
                            {
                              switch (FGT_261) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(3, &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_285);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_292;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_250, &SubGoal_292, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_285);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_249));
                              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_292));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_58_288;
                      MR_Word STATE_VARIABLE_Info_59_289;
                      MR_Word Vars0_294 = ((MR_Word) ((MR_hl_field(3, Reason0_249, (MR_Integer) 5))));
                      MR_Word Reason_295;
                      MR_Word SubGoal1_296;
                      MR_Word Vars_297;
                      MR_Word SubGoal_298;
                      MR_Word NonLocals0_299;
                      MR_Word NonLocals_300;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_48_10_p_0(Reason0_249, &Reason_295, SubGoal0_250, &SubGoal1_296, Vars0_294, &Vars_297, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_288);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal1_296, &SubGoal_298, STATE_VARIABLE_Info_58_288, &STATE_VARIABLE_Info_59_289);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason_295));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_298));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_289, &NonLocals0_299);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_297, NonLocals0_299, &NonLocals_300);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_300, STATE_VARIABLE_Info_59_289, &STATE_VARIABLE_Info_52_285);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_251, STATE_VARIABLE_Info_52_285, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_131 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_132 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_133 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_134 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_135;
            MR_Word OutsideVars0_136;
            MR_Word LambdaOutsideVars0_137;
            MR_Word QVars_138;
            MR_Word Cond1_139;
            MR_Word Then1_140;
            MR_Word QuantVars1_141;
            MR_Word VarsThen_150;
            MR_Word LambdaVarsThen_151;
            MR_Word OutsideVars1_152;
            MR_Word LambdaOutsideVars1_153;
            MR_Word Cond_154;
            MR_Word NonLocalsCond_155;
            MR_Word OutsideVars2_156;
            MR_Word Then_157;
            MR_Word NonLocalsThen_158;
            MR_Word Else_159;
            MR_Word NonLocalsElse_160;
            MR_Word NonLocalsIfThen_161;
            MR_Word NonLocalsIfThenElse_162;
            MR_Word NonLocalsO_163;
            MR_Word NonLocalsL_164;
            MR_Word NonLocals_165;
            MR_Word STATE_VARIABLE_Info_52_167;
            MR_Word STATE_VARIABLE_Info_54_169;
            MR_Word STATE_VARIABLE_Info_55_170;
            MR_Word STATE_VARIABLE_Info_56_171;
            MR_Word STATE_VARIABLE_Info_57_172;
            MR_Word STATE_VARIABLE_Info_58_173;
            MR_Word STATE_VARIABLE_Info_59_174;
            MR_Word STATE_VARIABLE_Info_60_175;
            MR_Word STATE_VARIABLE_Info_61_176;
            MR_Word STATE_VARIABLE_Info_62_177;
            MR_Word STATE_VARIABLE_Info_63_178;
            MR_Word STATE_VARIABLE_Info_64_179;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_135);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_136);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_137);
            if ((Vars0_131 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_138 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_139 = Cond0_132;
              Then1_140 = Then0_133;
              QuantVars1_141 = QuantVars0_135;
              STATE_VARIABLE_Info_52_167 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_144;
              MR_Word RenameVars2_145;
              MR_Word RenameVars_146;
              MR_Word Vars_147;

              QVars_138 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_131);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_136, QVars_138, &RenameVars1_144);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_137, QVars_138, &RenameVars2_145);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_144, RenameVars2_145, &RenameVars_146);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_146);
              if (succeeded)
              {
                Cond1_139 = Cond0_132;
                Then1_140 = Then0_133;
                Vars_147 = Vars0_131;
                STATE_VARIABLE_Info_52_167 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_148;
                MR_Word RenameMap_149;
                MR_Word STATE_VARIABLE_Info_51_166;

                Context_148 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_146, Context_148, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_166);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_146, &RenameMap_149, Cond0_132, &Cond1_139, STATE_VARIABLE_Info_51_166, &STATE_VARIABLE_Info_52_167);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_149, Then0_133, &Then1_140);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_149, Vars0_131, &Vars_147);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_147, QuantVars0_135, &QuantVars1_141);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Then1_140, &VarsThen_150, &LambdaVarsThen_151);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_136, VarsThen_150, &OutsideVars1_152);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_137, LambdaVarsThen_151, &LambdaOutsideVars1_153);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_141, STATE_VARIABLE_Info_52_167, &STATE_VARIABLE_Info_54_169);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_152, STATE_VARIABLE_Info_54_169, &STATE_VARIABLE_Info_55_170);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_153, STATE_VARIABLE_Info_55_170, &STATE_VARIABLE_Info_56_171);
            hlds__quantification__update_seen_vars_3_p_0(QVars_138, STATE_VARIABLE_Info_56_171, &STATE_VARIABLE_Info_57_172);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Cond1_139, &Cond_154, STATE_VARIABLE_Info_57_172, &STATE_VARIABLE_Info_58_173);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_173, &NonLocalsCond_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_136, NonLocalsCond_155, &OutsideVars2_156);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_156, STATE_VARIABLE_Info_58_173, &STATE_VARIABLE_Info_59_174);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_137, STATE_VARIABLE_Info_59_174, &STATE_VARIABLE_Info_60_175);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Then1_140, &Then_157, STATE_VARIABLE_Info_60_175, &STATE_VARIABLE_Info_61_176);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_176, &NonLocalsThen_158);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_136, STATE_VARIABLE_Info_61_176, &STATE_VARIABLE_Info_62_177);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_135, STATE_VARIABLE_Info_62_177, &STATE_VARIABLE_Info_63_178);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(Else0_134, &Else_159, STATE_VARIABLE_Info_63_178, &STATE_VARIABLE_Info_64_179);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_154));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_157));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_159));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_179, &NonLocalsElse_160);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_155, NonLocalsThen_158, &NonLocalsIfThen_161);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_161, NonLocalsElse_160, &NonLocalsIfThenElse_162);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_162, OutsideVars0_136, &NonLocalsO_163);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_162, LambdaOutsideVars0_137, &NonLocalsL_164);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_163, NonLocalsL_164, &NonLocals_165);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_165, STATE_VARIABLE_Info_64_179, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_307 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_307)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS_334 = ((MR_Word) ((MR_hl_field(0, ShortHand0_307, (MR_Integer) 0))));
                  MR_Word RHS_335 = ((MR_Word) ((MR_hl_field(0, ShortHand0_307, (MR_Integer) 1))));

                  hlds__quantification__quantify_goal_bi_implication_6_p_0(LHS_334, RHS_335, GoalExpr_10, GoalInfo0_11, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_308 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_309 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 1))));
                  MR_Word Inner_310 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_311 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 3))));
                  MR_Word MainGoal0_312 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_313 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 5))));
                  MR_Word OrElseInners0_314 = ((MR_Word) ((MR_hl_field(1, ShortHand0_307, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_315;
                  MR_Word OrElseInners_316;
                  MR_Word AtomicGoalsWithInners0_319;
                  MR_Word AllAtomicGoals_321;
                  MR_Word NonLocalVarSets_322;
                  MR_Word MainGoal_323;
                  MR_Word OrElseGoals_324;
                  MR_Word NonLocalVars0_325;
                  MR_Word NonLocalVars_328;
                  MR_Word ShortHand_329;
                  MR_Word STATE_VARIABLE_Info_45_336;
                  MR_Word Var_337;
                  MR_Word Var_338;
                  MR_Word STATE_VARIABLE_Info_49_339;

                  if ((OrElseInners0_314 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(Inner_310, OrElseGoals0_313, &OrElseGoals1_315, &OrElseInners_316, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_45_336);
                  else
                  {
                    OrElseInners_316 = OrElseInners0_314;
                    OrElseGoals1_315 = OrElseGoals0_313;
                    STATE_VARIABLE_Info_45_336 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_337, 0) = ((MR_Box) (MainGoal0_312));
                    MR_hl_field(1, Var_337, 1) = ((MR_Box) (OrElseGoals1_315));
                  }
                  {
                    Var_338 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_338, 0) = ((MR_Box) (Inner_310));
                    MR_hl_field(1, Var_338, 1) = ((MR_Box) (OrElseInners_316));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_337, Var_338, &AtomicGoalsWithInners0_319);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(AtomicGoalsWithInners0_319, &AllAtomicGoals_321, STATE_VARIABLE_Info_45_336, &STATE_VARIABLE_Info_49_339, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_322);
                  if ((AllAtomicGoals_321 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_323 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_321, (MR_Integer) 0))));
                    OrElseGoals_324 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_321, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_322, &NonLocalVars0_325);
                  switch (GoalType_308) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_328 = NonLocalVars0_325;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_326 = ((MR_Word) ((MR_hl_field(0, Outer_309, (MR_Integer) 0))));
                        MR_Word OuterUO_327 = ((MR_Word) ((MR_hl_field(0, Outer_309, (MR_Integer) 1))));
                        MR_Word Var_342;
                        MR_Word Var_343;

                        {
                          Var_343 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_343, 0) = ((MR_Box) (OuterUO_327));
                          MR_hl_field(1, Var_343, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_342 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_342, 0) = ((MR_Box) (OuterDI_326));
                          MR_hl_field(1, Var_342, 1) = ((MR_Box) (Var_343));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_342, NonLocalVars0_325, &NonLocalVars_328);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_328, STATE_VARIABLE_Info_49_339, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_329, 0) = (MR_Box) ((MR_Unsigned) (GoalType_308));
                    MR_hl_field(1, ShortHand_329, 1) = ((MR_Box) (Outer_309));
                    MR_hl_field(1, ShortHand_329, 2) = ((MR_Box) (Inner_310));
                    MR_hl_field(1, ShortHand_329, 3) = ((MR_Box) (MaybeOutputVars_311));
                    MR_hl_field(1, ShortHand_329, 4) = ((MR_Box) (MainGoal_323));
                    MR_hl_field(1, ShortHand_329, 5) = ((MR_Box) (OrElseGoals_324));
                    MR_hl_field(1, ShortHand_329, 6) = ((MR_Box) (OrElseInners_316));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_329));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_330 = ((MR_Word) ((MR_hl_field(2, ShortHand0_307, (MR_Integer) 0))));
                  MR_Word ResultVar_331 = ((MR_Word) ((MR_hl_field(2, ShortHand0_307, (MR_Integer) 1))));
                  MR_Word SubGoal0_332 = ((MR_Word) ((MR_hl_field(2, ShortHand0_307, (MR_Integer) 2))));
                  MR_Word SubGoal_333;
                  MR_Word ShortHand_347;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(SubGoal0_332, &SubGoal_333, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_347 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_347, 0) = ((MR_Box) (MaybeIO_330));
                    MR_hl_field(2, ShortHand_347, 1) = ((MR_Box) (ResultVar_331));
                    MR_hl_field(2, ShortHand_347, 2) = ((MR_Box) (SubGoal_333));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_347));
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
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_48_7_p_0(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_26_26;
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
    MR_Word Var_67;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_16, &RenameMap_17, Var_27, &Var_28, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[10]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_67));
    if (succeeded)
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_29_29;
    else
    {
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_77));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_78));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_79));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_80));
        MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_82));
      }
    }
  }
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
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
  MR_Word QuantVars0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 2))));
  MR_Word OutsideVars0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
  MR_Word OutsideVars1_15;
  MR_Word QuantVars1_16;
  MR_Word RHS_Vars_18;
  MR_Word RHS_LambdaVars_19;
  MR_Word LHS_OutsideVars_20;
  MR_Word LHS_LambdaOutsideVars_21;
  MR_Word LHS_22;
  MR_Word LHS_NonLocalVars_23;
  MR_Word RHS_OutsideVars_24;
  MR_Word RHS_LambdaOutsideVars_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 1))));
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
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_Word Var_198;
  MR_Word Var_199;
  MR_Word Var_111;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_163;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_168;
  MR_Word Var_208;
  MR_Word Var_225;
  MR_Word Var_46;

  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_13, QuantVars0_12, &OutsideVars1_15);
  QuantVars1_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars1_16) == ((MR_Word) Var_111));
  if (succeeded)
    STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_0_48;
  else
  {
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 1))));
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 3))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 4))));
    MR_Word Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 5))));
    MR_Word Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 6))));
    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_120));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (QuantVars1_16));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_124));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_125));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (Var_126));
    }
  }
  hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(RHS0_8, &RHS_Vars_18, &RHS_LambdaVars_19);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars1_15, RHS_Vars_18, &LHS_OutsideVars_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHS_LambdaOutsideVars_25, RHS_LambdaVars_19, &LHS_LambdaOutsideVars_21);
  Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
  Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
  Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
  Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
  Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
  Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
  Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_51_51 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 0) = ((MR_Box) (LHS_OutsideVars_20));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 1) = ((MR_Box) (Var_129));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 2) = ((MR_Box) (Var_130));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 3) = ((MR_Box) (Var_131));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 4) = ((MR_Box) (Var_132));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 5) = ((MR_Box) (Var_133));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 6) = ((MR_Box) (Var_134));
    MR_hl_field(0, STATE_VARIABLE_Info_51_51, 7) = ((MR_Box) (Var_135));
  }
  Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 1))));
  succeeded = (((MR_Word) LHS_LambdaOutsideVars_21) == ((MR_Word) Var_136));
  if (succeeded)
    STATE_VARIABLE_Info_52_52 = STATE_VARIABLE_Info_51_51;
  else
  {
    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 0))));
    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 2))));
    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 3))));
    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 4))));
    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 5))));
    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 6))));
    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_51_51, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_52_52 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 0) = ((MR_Box) (Var_144));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 1) = ((MR_Box) (LHS_LambdaOutsideVars_21));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 2) = ((MR_Box) (Var_146));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 3) = ((MR_Box) (Var_147));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 4) = ((MR_Box) (Var_148));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 5) = ((MR_Box) (Var_149));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 6) = ((MR_Box) (Var_150));
      MR_hl_field(0, STATE_VARIABLE_Info_52_52, 7) = ((MR_Box) (Var_151));
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(LHS0_7, &LHS_22, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_54_54);
  LHS_NonLocalVars_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars1_15, LHS_NonLocalVars_23, &RHS_OutsideVars_24);
  Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 1))));
  Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 2))));
  Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
  Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 4))));
  Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 5))));
  Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 6))));
  Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (RHS_OutsideVars_24));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 1) = ((MR_Box) (Var_161));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_162));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_163));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_164));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_165));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) (Var_166));
    MR_hl_field(0, STATE_VARIABLE_Info_55_55, 7) = ((MR_Box) (Var_167));
  }
  Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 1))));
  succeeded = (((MR_Word) RHS_LambdaOutsideVars_25) == ((MR_Word) Var_168));
  if (succeeded)
    STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_55_55;
  else
  {
    MR_Word Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 0))));
    MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 2))));
    MR_Word Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 3))));
    MR_Word Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 4))));
    MR_Word Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 5))));
    MR_Word Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 6))));
    MR_Word Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_56_56 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 0) = ((MR_Box) (Var_176));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 1) = ((MR_Box) (RHS_LambdaOutsideVars_25));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 2) = ((MR_Box) (Var_178));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 3) = ((MR_Box) (Var_179));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 4) = ((MR_Box) (Var_180));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 5) = ((MR_Box) (Var_181));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 6) = ((MR_Box) (Var_182));
      MR_hl_field(0, STATE_VARIABLE_Info_56_56, 7) = ((MR_Box) (Var_183));
    }
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_48_5_p_0(RHS0_8, &RHS_26, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
  RHS_NonLocalVars_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 3))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_NonLocalVars_23, RHS_NonLocalVars_27, &AllNonLocalVars_28);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllNonLocalVars_28, OutsideVars0_13, &NonLocalVarsO_29);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllNonLocalVars_28, RHS_LambdaOutsideVars_25, &NonLocalVarsL_30);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsO_29, NonLocalVarsL_30, &NonLocalVars_31);
  Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 1))));
  Var_194 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 2))));
  Var_196 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 4))));
  Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 5))));
  Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 6))));
  Var_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_58_58, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_60_60 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 0) = ((MR_Box) (OutsideVars0_13));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 1) = ((MR_Box) (Var_193));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 2) = ((MR_Box) (Var_194));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 3) = ((MR_Box) (NonLocalVars_31));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 4) = ((MR_Box) (Var_196));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 5) = ((MR_Box) (Var_197));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 6) = ((MR_Box) (Var_198));
    MR_hl_field(0, STATE_VARIABLE_Info_60_60, 7) = ((MR_Box) (Var_199));
  }
  Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 1))));
  succeeded = (((MR_Word) RHS_LambdaOutsideVars_25) == ((MR_Word) Var_208));
  if (succeeded)
    STATE_VARIABLE_Info_61_61 = STATE_VARIABLE_Info_60_60;
  else
  {
    MR_Word Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 0))));
    MR_Word Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 2))));
    MR_Word Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 3))));
    MR_Word Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 4))));
    MR_Word Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 5))));
    MR_Word Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 6))));
    MR_Word Var_223 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_60_60, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_61_61 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 0) = ((MR_Box) (Var_216));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 1) = ((MR_Box) (RHS_LambdaOutsideVars_25));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 2) = ((MR_Box) (Var_218));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 3) = ((MR_Box) (Var_219));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 4) = ((MR_Box) (Var_220));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 5) = ((MR_Box) (Var_221));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 6) = ((MR_Box) (Var_222));
      MR_hl_field(0, STATE_VARIABLE_Info_61_61, 7) = ((MR_Box) (Var_223));
    }
  }
  Var_225 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars0_12) == ((MR_Word) Var_225));
  if (succeeded)
    STATE_VARIABLE_Info_62_62 = STATE_VARIABLE_Info_61_61;
  else
  {
    MR_Word Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 0))));
    MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 1))));
    MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 3))));
    MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 4))));
    MR_Word Var_238 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 5))));
    MR_Word Var_239 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 6))));
    MR_Word Var_240 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_61_61, (MR_Integer) 7))));

    {
      STATE_VARIABLE_Info_62_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 0) = ((MR_Box) (Var_233));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 1) = ((MR_Box) (Var_234));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 2) = ((MR_Box) (QuantVars0_12));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 3) = ((MR_Box) (Var_236));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 4) = ((MR_Box) (Var_237));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 5) = ((MR_Box) (Var_238));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 6) = ((MR_Box) (Var_239));
      MR_hl_field(0, STATE_VARIABLE_Info_62_62, 7) = ((MR_Box) (Var_240));
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
    MR_hl_field(0, NotLHS_38, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, NotLHS_38, 1) = ((MR_Box) (LHS_GI_35));
  }
  Var_70 = (MR_Word) ((MR_Word) (RHS_26));
  {
    NotRHS_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NotRHS_39, 0) = ((MR_Box) (Var_70));
    MR_hl_field(0, NotRHS_39, 1) = ((MR_Box) (RHS_GI_36));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (NotRHS_39));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (LHS_22));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_74));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (GI_37));
  }
  ForwardsImplicationExpr_40 = (MR_Word) ((MR_Word) (Var_71));
  {
    ForwardsImplication_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForwardsImplication_41, 0) = ((MR_Box) (ForwardsImplicationExpr_40));
    MR_hl_field(0, ForwardsImplication_41, 1) = ((MR_Box) (GI_37));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (NotLHS_38));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (RHS_26));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_78, 2) = ((MR_Box) (Var_80));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (GI_37));
  }
  ReverseImplicationExpr0_42 = (MR_Word) ((MR_Word) (Var_77));
  {
    ReverseImplication0_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReverseImplication0_43, 0) = ((MR_Box) (ReverseImplicationExpr0_42));
    MR_hl_field(0, ReverseImplication0_43, 1) = ((MR_Box) (GI_37));
  }
  hlds__quantification__goal_vars_bitset_maybe_lambda_and_bi_impl_2_p_0(ReverseImplication0_43, &GoalVars_44);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_44, NonLocalVars_31, &RenameVars_45);
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_45, &Var_46, ReverseImplication0_43, &ReverseImplication_47, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_49);
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (ReverseImplication_47));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (ForwardsImplication_41));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_9 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_86));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set_7;
  MR_Word LambdaSet_8;
  MR_Word Set0_10;
  MR_Word LambdaSet0_11;

  Set0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_5, Set0_10, &Set_7, LambdaSet0_11, &LambdaSet_8);
  *BothSet_6 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_7, LambdaSet_8);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set_9;
    MR_Word LambdaSet_10;
    MR_Word SetPairs_11;
    MR_Word GoalsBothSet_13;
    MR_Word GoalSet_14;
    MR_Word GoalLambdaSet_15;
    MR_Word GoalBothSet_16;
    MR_Word Var_17;
    MR_Word GoalExpr_20;
    MR_Word Set0_22;
    MR_Word LambdaSet0_23;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(Goals_8, &Set_9, &LambdaSet_10, &SetPairs_11);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Set_9));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (LambdaSet_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetPairs_11));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_9, LambdaSet_10, &GoalsBothSet_13);
    GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
    Set0_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    LambdaSet0_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_20, Set0_22, &GoalSet_14, LambdaSet0_23, &GoalLambdaSet_15);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_14, GoalLambdaSet_15, &GoalBothSet_16);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalBothSet_16, GoalsBothSet_13, HeadVar__4_4);
  }
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
    MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_15;
    MR_Word LambdaSet0_16;
    MR_Word SetPairList0_17;
    MR_Word Set1_18;
    MR_Word LambdaSet1_19;
    MR_Word Var_20;
    MR_Word GoalExpr_23;
    MR_Word Set0_25;
    MR_Word LambdaSet0_26;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_5_p_0(Goals_11, &Set0_15, &LambdaSet0_16, &SetPairList0_17);
    GoalExpr_23 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
    Set0_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    LambdaSet0_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_23, Set0_25, &Set1_18, LambdaSet0_26, &LambdaSet1_19);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_15, Set1_18, Set_3);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaSet0_16, LambdaSet1_19, LambdaSet_4);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (Set0_15));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (LambdaSet0_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetPairList0_17));
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
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
  MR_Word Set0_11;
  MR_Word LambdaSet0_12;

  Set0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_9, Set0_11, Set_7, LambdaSet0_12, LambdaSet_8);
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
          MR_Word SubGoalExpr_85 = ((MR_Word) ((MR_hl_field(0, SubGoal_84, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_8 = SubGoalExpr_85;

          // direct tailcall eliminated
          ;
          GoalExpr_8 = next_value_of_GoalExpr_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 0))));
          MR_Word RHS_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 1))));
          MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_126_126;
          MR_Word STATE_VARIABLE_Set_131_131;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_11, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_126_126);
          switch (MR_tag((MR_Word) Unification_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_20 = ((MR_Word) ((MR_hl_field(0, Unification_14, (MR_Integer) 4))));
                MR_Word SubInfo_22 = ((MR_Word) ((MR_hl_field(0, Unification_14, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_128_128;
                MR_Word SizeVar_30;
                MR_Word MaybeSize_29;
                MR_Word Var_130;

                switch (MR_tag((MR_Word) How_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_126_126;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_23;
                      MR_Word Var_127 = (MR_Word) (MR_body((MR_Word) (How_20), (MR_Integer) 1));

                      ReuseVar_23 = ((MR_Word) ((MR_hl_field(0, Var_127, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_23, STATE_VARIABLE_Set_126_126, &STATE_VARIABLE_Set_128_128);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_126_126;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_26 = ((MR_Word) ((MR_hl_field(3, How_20, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_26, STATE_VARIABLE_Set_126_126, &STATE_VARIABLE_Set_128_128);
                    }
                    break;
                }
                succeeded = (SubInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_29 = ((MR_Word) ((MR_hl_field(1, SubInfo_22, (MR_Integer) 1))));
                  succeeded = (MaybeSize_29 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_130 = ((MR_Word) ((MR_hl_field(1, MaybeSize_29, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_130)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_30 = ((MR_Word) ((MR_hl_field(1, Var_130, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_30, STATE_VARIABLE_Set_128_128, &STATE_VARIABLE_Set_131_131);
                else
                  STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_128_128;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_126_126;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_126_126;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_126_126;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_33 = ((MR_Word) ((MR_hl_field(3, Unification_14, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_33, STATE_VARIABLE_Set_126_126, &STATE_VARIABLE_Set_131_131);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(RHS_12, STATE_VARIABLE_Set_131_131, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_46 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_46, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123);
          *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word ArgVars1_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word ArgVars0_55;
              MR_Word STATE_VARIABLE_Set_136_136;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_50, &ArgVars0_55);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_55, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_136_136);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_51, STATE_VARIABLE_Set_136_136, STATE_VARIABLE_Set_123);
              *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Word ExtraArgs_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 5))));
              MR_Word Vars_63;
              MR_Word ExtraVars_64;
              MR_Word AllVars_65;

              Vars_63 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[8]), Args_59);
              ExtraVars_64 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[9]), ExtraArgs_60);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_63, ExtraVars_64, &AllVars_65);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_65, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123);
              *STATE_VARIABLE_LambdaSet_125 = STATE_VARIABLE_LambdaSet_0_124;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals_67, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_193 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Goals_193, STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word Cases_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_145_145;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_68, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_145_145);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Cases_70, STATE_VARIABLE_Set_145_145, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_154_154;
              MR_Word STATE_VARIABLE_LambdaSet_155_155;
              MR_Word SubGoal_202 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_87)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_156_156;
                    MR_Word STATE_VARIABLE_LambdaSet_157_157;
                    MR_Word Vars_195 = ((MR_Word) ((MR_hl_field(0, Reason_87, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_156_156, &STATE_VARIABLE_LambdaSet_157_157);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_195, STATE_VARIABLE_Set_156_156, &STATE_VARIABLE_Set_154_154);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_195, STATE_VARIABLE_LambdaSet_157_157, &STATE_VARIABLE_LambdaSet_155_155);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_LambdaSet_155_155);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_160_160;
                    MR_Word Vars_196 = ((MR_Word) ((MR_hl_field(2, Reason_87, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_160_160, &STATE_VARIABLE_LambdaSet_155_155);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_196, STATE_VARIABLE_Set_160_160, &STATE_VARIABLE_Set_154_154);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_87, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_LambdaSet_155_155);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_163_163;
                        MR_Word Var_197 = ((MR_Word) ((MR_hl_field(3, Reason_87, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_163_163, &STATE_VARIABLE_LambdaSet_155_155);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, STATE_VARIABLE_Set_163_163, &STATE_VARIABLE_Set_154_154);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_163_228;
                        MR_Word Var_229 = ((MR_Word) ((MR_hl_field(3, Reason_87, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_163_228, &STATE_VARIABLE_LambdaSet_155_155);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_229, STATE_VARIABLE_Set_163_228, &STATE_VARIABLE_Set_154_154);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_103 = ((MR_Word) ((MR_hl_field(3, Reason_87, (MR_Integer) 1))));
                        MR_Word Kind_104 = ((MR_Unsigned) ((MR_hl_field(3, Reason_87, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (Kind_104) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 0:
                            {
                              MR_Word STATE_VARIABLE_Set_166_166;

                              STATE_VARIABLE_Set_166_166 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_103, STATE_VARIABLE_Set_166_166, &STATE_VARIABLE_Set_154_154);
                              STATE_VARIABLE_LambdaSet_155_155 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_154_154, &STATE_VARIABLE_LambdaSet_155_155);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_105 = ((MR_Word) ((MR_hl_field(3, Reason_87, (MR_Integer) 1))));
                        MR_Word LCSVar_106 = ((MR_Word) ((MR_hl_field(3, Reason_87, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_171_171;
                        MR_Word STATE_VARIABLE_Set_173_173;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(SubGoal_202, &STATE_VARIABLE_Set_171_171, &STATE_VARIABLE_LambdaSet_155_155);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_105, STATE_VARIABLE_Set_171_171, &STATE_VARIABLE_Set_173_173);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_106, STATE_VARIABLE_Set_173_173, &STATE_VARIABLE_Set_154_154);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_122, STATE_VARIABLE_Set_154_154, STATE_VARIABLE_Set_123);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_155_155, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
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
              MR_Word STATE_VARIABLE_Set_148_148;
              MR_Word STATE_VARIABLE_LambdaSet_149_149;
              MR_Word Vars_194 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Cond_71, &CondSet_74, &CondLambdaSet_75);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Then_72, &ThenSet_76, &ThenLambdaSet_77);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(Else_73, &ElseSet_78, &ElseLambdaSet_79);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_74, ThenSet_76, &CondThenSet_80);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondLambdaSet_75, ThenLambdaSet_77, &CondThenLambdaSet_81);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_194, CondThenSet_80, &SomeCondThenSet_82);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_194, CondThenLambdaSet_81, &SomeCondThenLambdaSet_83);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_122, SomeCondThenSet_82, &STATE_VARIABLE_Set_148_148);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_124, SomeCondThenLambdaSet_83, &STATE_VARIABLE_LambdaSet_149_149);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_148_148, ElseSet_78, STATE_VARIABLE_Set_123);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_149_149, ElseLambdaSet_79, STATE_VARIABLE_LambdaSet_125);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_108)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word RHS_208 = ((MR_Word) ((MR_hl_field(0, ShortHand_108, (MR_Integer) 1))));
                    MR_Word Goal_237 = ((MR_Word) ((MR_hl_field(0, ShortHand_108, (MR_Integer) 0))));
                    MR_Word Goals_238;
                    MR_Word GoalExpr_239;
                    MR_Word STATE_VARIABLE_Set_25_245;
                    MR_Word STATE_VARIABLE_LambdaSet_26_246;
                    MR_Word Goal_253;
                    MR_Word GoalExpr_255;
                    MR_Word next_value_of_GoalExpr_8;
                    MR_Word next_value_of_STATE_VARIABLE_Set_0_122;
                    MR_Word next_value_of_STATE_VARIABLE_LambdaSet_0_124;

                    {
                      Goals_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_238, 0) = ((MR_Box) (RHS_208));
                      MR_hl_field(1, Goals_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    GoalExpr_239 = ((MR_Word) ((MR_hl_field(0, Goal_237, (MR_Integer) 0))));
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_239, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_25_245, STATE_VARIABLE_LambdaSet_0_124, &STATE_VARIABLE_LambdaSet_26_246);
                    Goal_253 = ((MR_Word) ((MR_hl_field(1, Goals_238, (MR_Integer) 0))));
                    GoalExpr_255 = ((MR_Word) ((MR_hl_field(0, Goal_253, (MR_Integer) 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_GoalExpr_8 = GoalExpr_255;
                    next_value_of_STATE_VARIABLE_Set_0_122 = STATE_VARIABLE_Set_25_245;
                    next_value_of_STATE_VARIABLE_LambdaSet_0_124 = STATE_VARIABLE_LambdaSet_26_246;
                    GoalExpr_8 = next_value_of_GoalExpr_8;
                    STATE_VARIABLE_Set_0_122 = next_value_of_STATE_VARIABLE_Set_0_122;
                    STATE_VARIABLE_LambdaSet_0_124 = next_value_of_STATE_VARIABLE_LambdaSet_0_124;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_110 = ((MR_Word) ((MR_hl_field(1, ShortHand_108, (MR_Integer) 1))));
                    MR_Word Inner_111 = ((MR_Word) ((MR_hl_field(1, ShortHand_108, (MR_Integer) 2))));
                    MR_Word MainGoal_113 = ((MR_Word) ((MR_hl_field(1, ShortHand_108, (MR_Integer) 4))));
                    MR_Word OrElseGoals_114 = ((MR_Word) ((MR_hl_field(1, ShortHand_108, (MR_Integer) 5))));
                    MR_Word OuterDI_116 = ((MR_Word) ((MR_hl_field(0, Outer_110, (MR_Integer) 0))));
                    MR_Word OuterUO_117 = ((MR_Word) ((MR_hl_field(0, Outer_110, (MR_Integer) 1))));
                    MR_Word InnerDI_118 = ((MR_Word) ((MR_hl_field(0, Inner_111, (MR_Integer) 0))));
                    MR_Word InnerUO_119 = ((MR_Word) ((MR_hl_field(0, Inner_111, (MR_Integer) 1))));
                    MR_Word Var_177;
                    MR_Word STATE_VARIABLE_Set_178_178;
                    MR_Word Var_179;
                    MR_Word Var_180;
                    MR_Word Var_181;
                    MR_Word Var_183;

                    {
                      Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_181, 0) = ((MR_Box) (InnerUO_119));
                      MR_hl_field(1, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_180, 0) = ((MR_Box) (InnerDI_118));
                      MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_181));
                    }
                    {
                      Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_179, 0) = ((MR_Box) (OuterUO_117));
                      MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_180));
                    }
                    {
                      Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_177, 0) = ((MR_Box) (OuterDI_116));
                      MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_179));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_177, STATE_VARIABLE_Set_0_122, &STATE_VARIABLE_Set_178_178);
                    {
                      Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_183, 0) = ((MR_Box) (MainGoal_113));
                      MR_hl_field(1, Var_183, 1) = ((MR_Box) (OrElseGoals_114));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_6_p_0(Var_183, STATE_VARIABLE_Set_178_178, STATE_VARIABLE_Set_123, STATE_VARIABLE_LambdaSet_0_124, STATE_VARIABLE_LambdaSet_125);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_204 = ((MR_Word) ((MR_hl_field(2, ShortHand_108, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_205 = ((MR_Word) ((MR_hl_field(0, SubGoal_204, (MR_Integer) 0))));
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
      MR_Word Case_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(0, Case_15, (MR_Integer) 2))));
      MR_Word GoalSet_22;
      MR_Word GoalLambdaSet_23;
      MR_Word STATE_VARIABLE_Sets_28_28;
      MR_Word STATE_VARIABLE_LambdaSets_29_29;
      MR_Word GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_5;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(GoalExpr_30, &GoalSet_22, &GoalLambdaSet_23);
      {
        STATE_VARIABLE_Sets_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_28_28, 0) = ((MR_Box) (GoalSet_22));
        MR_hl_field(1, STATE_VARIABLE_Sets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      {
        STATE_VARIABLE_LambdaSets_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_29_29, 0) = ((MR_Box) (GoalLambdaSet_23));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_29_29, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_5));
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
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_19;
      MR_Word GoalLambdaSet_20;
      MR_Word STATE_VARIABLE_Sets_25_25;
      MR_Word STATE_VARIABLE_LambdaSets_26_26;
      MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(0, Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_5;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_109_97_121_98_101_95_108_97_109_98_100_97_95_95_91_49_93_95_48_4_p_0(GoalExpr_27, &GoalSet_19, &GoalLambdaSet_20);
      {
        STATE_VARIABLE_Sets_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_25_25, 0) = ((MR_Box) (GoalSet_19));
        MR_hl_field(1, STATE_VARIABLE_Sets_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
      }
      {
        STATE_VARIABLE_LambdaSets_26_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_26_26, 0) = ((MR_Box) (GoalLambdaSet_20));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_26_26, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_5));
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
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(0, Goal_15, (MR_Integer) 0))));
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
        MR_Word Y_11 = ((MR_Word) ((MR_hl_field(0, RHS_8, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_11, STATE_VARIABLE_Set_0_25, STATE_VARIABLE_Set_26);
        *STATE_VARIABLE_LambdaSet_28 = STATE_VARIABLE_LambdaSet_0_27;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(1, RHS_8, (MR_Integer) 2))));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_14, STATE_VARIABLE_Set_0_25, STATE_VARIABLE_Set_26);
        *STATE_VARIABLE_LambdaSet_28 = STATE_VARIABLE_LambdaSet_0_27;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVarsModes_20 = ((MR_Word) ((MR_hl_field(2, RHS_8, (MR_Integer) 3))));
        MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(2, RHS_8, (MR_Integer) 5))));
        MR_Word GoalVars0_23;
        MR_Word GoalVars_24;
        MR_Word ArgVars_32;
        MR_Word GoalExpr_38;
        MR_Word Set_40;
        MR_Word LambdaSet_41;
        MR_Word Set0_43;
        MR_Word LambdaSet0_44;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_20, &ArgVars_32);
        GoalExpr_38 = ((MR_Word) ((MR_hl_field(0, Goal_22, (MR_Integer) 0))));
        Set0_43 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        LambdaSet0_44 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_109_97_121_98_101_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_48_6_p_0(GoalExpr_38, Set0_43, &Set_40, LambdaSet0_44, &LambdaSet_41);
        GoalVars0_23 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_40, LambdaSet_41);
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
    MR_Word OrElseGoal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 1))));
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
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
    }
    RenameVars_22 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_48_7_p_0(RenameVars_22, &RenameMap_23, OrElseGoal0_15, &OrElseGoal_24, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_35_35);
    conv0_OrElseInnerDI_25 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerDI_20)));
    OrElseInnerDI_25 = ((MR_Word) (conv0_OrElseInnerDI_25));
    conv1_OrElseInnerUO_26 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), RenameMap_23, ((MR_Box) (InnerUO_21)));
    OrElseInnerUO_26 = ((MR_Word) (conv1_OrElseInnerUO_26));
    {
      OrElseInner_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(0, OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_48_7_p_0(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseGoalsTail_28));
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
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_105;

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
    MR_Word Vars_85;
    MR_Word Warnings0_86;
    MR_Word Warnings_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    Vars_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 4))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 5))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 6))));
    Warnings0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 7))));
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Vars_85));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (Context_27));
    }
    {
      Warnings_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Warnings_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Warnings_87, 1) = ((MR_Box) (Warnings0_86));
    }
    {
      STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 1) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 7) = ((MR_Box) (Warnings_87));
    }
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
        switch (((MR_Integer) ((MR_hl_field(3, Reason0_12, (MR_Integer) 0))))) {
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
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(3, base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(3, base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(3, base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(3, base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_105));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_117));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_118));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_120));
    }
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
    MR_Word Var_43;

    RenameList_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameSet_9);
    VarDb0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap0_15);
    if (((MR_tag((MR_Word) VarDb0_14)) == (MR_Integer) 1))
    {
      MR_Word VarTable0_23 = ((MR_Word) ((MR_hl_field(1, VarDb0_14, (MR_Integer) 0))));
      MR_Word VarTable_24;

      hlds__goal_util__clone_variables_6_p_0(RenameList_13, VarTable0_23, VarTable0_23, &VarTable_24, RenameMap0_15, RenameMap_10);
      {
        VarDb_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarDb_22, 0) = ((MR_Box) (VarTable_24));
      }
    }
    else
    {
      MR_Word VarSetTypes0_16 = ((MR_Word) ((MR_hl_field(0, VarDb0_14, (MR_Integer) 0))));
      MR_Word VarSet0_17 = ((MR_Word) ((MR_hl_field(0, VarSetTypes0_16, (MR_Integer) 0))));
      MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(0, VarSetTypes0_16, (MR_Integer) 1))));
      MR_Word VarSet_19;
      MR_Word VarTypes_20;
      MR_Word VarSetTypes_21;

      hlds__goal_util__clone_variables_vs_9_p_0(RenameList_13, VarSet0_17, VarTypes0_18, VarSet0_17, &VarSet_19, VarTypes0_18, &VarTypes_20, RenameMap0_15, RenameMap_10);
      {
        VarSetTypes_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarSetTypes_21, 0) = ((MR_Box) (VarSet_19));
        MR_hl_field(0, VarSetTypes_21, 1) = ((MR_Box) (VarTypes_20));
      }
      {
        VarDb_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarDb_22, 0) = ((MR_Box) (VarSetTypes_21));
      }
    }
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*RenameMap_10, STATE_VARIABLE_Goal_0_25, STATE_VARIABLE_Goal_26);
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    succeeded = (((MR_Word) VarDb_22) == ((MR_Word) Var_43));
    if (succeeded)
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
        MR_hl_field(0, base, 5) = ((MR_Box) (VarDb_22));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_57));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_58));
      }
    }
  }
}

static void MR_CALL 
hlds__quantification__goal_vars_bitset_maybe_lambda_and_bi_impl_2_p_0(
  MR_Word Goal_3,
  MR_Word * BothSet_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));
  MR_Word Set_7;
  MR_Word LambdaSet_8;
  MR_Word Set0_10;
  MR_Word LambdaSet0_11;

  Set0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_5, Set0_10, &Set_7, LambdaSet0_11, &LambdaSet_8);
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
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));
  MR_Word Set0_9;
  MR_Word LambdaSet0_10;

  Set0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  LambdaSet0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_7, Set0_9, Set_5, LambdaSet0_10, LambdaSet_6);
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
          MR_Word SubGoalExpr_83 = ((MR_Word) ((MR_hl_field(0, SubGoal_82, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_83;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_123_123;
          MR_Word STATE_VARIABLE_Set_128_128;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_9, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_123_123);
          switch (MR_tag((MR_Word) Unification_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_18 = ((MR_Word) ((MR_hl_field(0, Unification_12, (MR_Integer) 4))));
                MR_Word SubInfo_20 = ((MR_Word) ((MR_hl_field(0, Unification_12, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_125_125;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_127;

                switch (MR_tag((MR_Word) How_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_125_125 = STATE_VARIABLE_Set_123_123;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_21;
                      MR_Word Var_124 = (MR_Word) (MR_body((MR_Word) (How_18), (MR_Integer) 1));

                      ReuseVar_21 = ((MR_Word) ((MR_hl_field(0, Var_124, (MR_Integer) 0))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_21, STATE_VARIABLE_Set_123_123, &STATE_VARIABLE_Set_125_125);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_125_125 = STATE_VARIABLE_Set_123_123;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(3, How_18, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_123_123, &STATE_VARIABLE_Set_125_125);
                    }
                    break;
                }
                succeeded = (SubInfo_20 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(1, SubInfo_20, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_127 = ((MR_Word) ((MR_hl_field(1, MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_127)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(1, Var_127, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_125_125, &STATE_VARIABLE_Set_128_128);
                else
                  STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_125_125;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_123_123;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_123_123;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_128_128 = STATE_VARIABLE_Set_123_123;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(3, Unification_12, (MR_Integer) 3))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_123_123, &STATE_VARIABLE_Set_128_128);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__unify_rhs_vars_maybe_lambda_and_bi_impl_5_p_0(RHS_10, STATE_VARIABLE_Set_128_128, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120);
          *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_133_133;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_133_133);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_133_133, STATE_VARIABLE_Set_120);
              *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word Vars_61;
              MR_Word ExtraVars_62;
              MR_Word AllVars_63;

              Vars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[6]), Args_57);
              ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[7]), ExtraArgs_58);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_61, ExtraVars_62, &AllVars_63);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_63, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120);
              *STATE_VARIABLE_LambdaSet_122 = STATE_VARIABLE_LambdaSet_0_121;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__conj_vars_maybe_lambda_and_bi_impl_5_p_0(Goals_65, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_187 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(Goals_187, STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_142_142;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_142_142);
              hlds__quantification__case_vars_maybe_lambda_and_bi_impl_5_p_0(Cases_68, STATE_VARIABLE_Set_142_142, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_151_151;
              MR_Word STATE_VARIABLE_LambdaSet_152_152;
              MR_Word SubGoal_198 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_153_153;
                    MR_Word STATE_VARIABLE_LambdaSet_154_154;
                    MR_Word Vars_189 = ((MR_Word) ((MR_hl_field(0, Reason_85, (MR_Integer) 0))));

                    hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_153_153, &STATE_VARIABLE_LambdaSet_154_154);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_189, STATE_VARIABLE_Set_153_153, &STATE_VARIABLE_Set_151_151);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_189, STATE_VARIABLE_LambdaSet_154_154, &STATE_VARIABLE_LambdaSet_152_152);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_LambdaSet_152_152);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_157_157;
                    MR_Word Vars_190 = ((MR_Word) ((MR_hl_field(2, Reason_85, (MR_Integer) 0))));

                    hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_157_157, &STATE_VARIABLE_LambdaSet_152_152);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_190, STATE_VARIABLE_Set_157_157, &STATE_VARIABLE_Set_151_151);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_85, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_LambdaSet_152_152);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_160_160;
                        MR_Word Var_191 = ((MR_Word) ((MR_hl_field(3, Reason_85, (MR_Integer) 1))));

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_160_160, &STATE_VARIABLE_LambdaSet_152_152);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_191, STATE_VARIABLE_Set_160_160, &STATE_VARIABLE_Set_151_151);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_160_223;
                        MR_Word Var_224 = ((MR_Word) ((MR_hl_field(3, Reason_85, (MR_Integer) 1))));

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_160_223, &STATE_VARIABLE_LambdaSet_152_152);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_224, STATE_VARIABLE_Set_160_223, &STATE_VARIABLE_Set_151_151);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_151_151, &STATE_VARIABLE_LambdaSet_152_152);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_102 = ((MR_Word) ((MR_hl_field(3, Reason_85, (MR_Integer) 1))));
                        MR_Word LCSVar_103 = ((MR_Word) ((MR_hl_field(3, Reason_85, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_165_165;
                        MR_Word STATE_VARIABLE_Set_167_167;

                        hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(SubGoal_198, &STATE_VARIABLE_Set_165_165, &STATE_VARIABLE_LambdaSet_152_152);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_102, STATE_VARIABLE_Set_165_165, &STATE_VARIABLE_Set_167_167);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_103, STATE_VARIABLE_Set_167_167, &STATE_VARIABLE_Set_151_151);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_119, STATE_VARIABLE_Set_151_151, STATE_VARIABLE_Set_120);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_152_152, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
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
              MR_Word STATE_VARIABLE_Set_145_145;
              MR_Word STATE_VARIABLE_LambdaSet_146_146;
              MR_Word Vars_188 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Cond_69, &CondSet_72, &CondLambdaSet_73);
              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Then_70, &ThenSet_74, &ThenLambdaSet_75);
              hlds__quantification__goal_vars_both_maybe_lambda_and_bi_impl_3_p_0(Else_71, &ElseSet_76, &ElseLambdaSet_77);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_74, &CondThenSet_78);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondLambdaSet_73, ThenLambdaSet_75, &CondThenLambdaSet_79);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_188, CondThenSet_78, &SomeCondThenSet_80);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_188, CondThenLambdaSet_79, &SomeCondThenLambdaSet_81);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_119, SomeCondThenSet_80, &STATE_VARIABLE_Set_145_145);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_0_121, SomeCondThenLambdaSet_81, &STATE_VARIABLE_LambdaSet_146_146);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_145_145, ElseSet_76, STATE_VARIABLE_Set_120);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LambdaSet_146_146, ElseLambdaSet_77, STATE_VARIABLE_LambdaSet_122);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_105)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word RHS_204 = ((MR_Word) ((MR_hl_field(0, ShortHand_105, (MR_Integer) 1))));
                    MR_Word Goal_230 = ((MR_Word) ((MR_hl_field(0, ShortHand_105, (MR_Integer) 0))));
                    MR_Word Goals_231;
                    MR_Word GoalExpr_232;
                    MR_Word STATE_VARIABLE_Set_22_238;
                    MR_Word STATE_VARIABLE_LambdaSet_23_239;
                    MR_Word Goal_244;
                    MR_Word GoalExpr_246;
                    MR_Word next_value_of_GoalExpr_6;
                    MR_Word next_value_of_STATE_VARIABLE_Set_0_119;
                    MR_Word next_value_of_STATE_VARIABLE_LambdaSet_0_121;

                    {
                      Goals_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_231, 0) = ((MR_Box) (RHS_204));
                      MR_hl_field(1, Goals_231, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    GoalExpr_232 = ((MR_Word) ((MR_hl_field(0, Goal_230, (MR_Integer) 0))));
                    hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_232, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_22_238, STATE_VARIABLE_LambdaSet_0_121, &STATE_VARIABLE_LambdaSet_23_239);
                    Goal_244 = ((MR_Word) ((MR_hl_field(1, Goals_231, (MR_Integer) 0))));
                    GoalExpr_246 = ((MR_Word) ((MR_hl_field(0, Goal_244, (MR_Integer) 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_GoalExpr_6 = GoalExpr_246;
                    next_value_of_STATE_VARIABLE_Set_0_119 = STATE_VARIABLE_Set_22_238;
                    next_value_of_STATE_VARIABLE_LambdaSet_0_121 = STATE_VARIABLE_LambdaSet_23_239;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    STATE_VARIABLE_Set_0_119 = next_value_of_STATE_VARIABLE_Set_0_119;
                    STATE_VARIABLE_LambdaSet_0_121 = next_value_of_STATE_VARIABLE_LambdaSet_0_121;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_107 = ((MR_Word) ((MR_hl_field(1, ShortHand_105, (MR_Integer) 1))));
                    MR_Word Inner_108 = ((MR_Word) ((MR_hl_field(1, ShortHand_105, (MR_Integer) 2))));
                    MR_Word MainGoal_110 = ((MR_Word) ((MR_hl_field(1, ShortHand_105, (MR_Integer) 4))));
                    MR_Word OrElseGoals_111 = ((MR_Word) ((MR_hl_field(1, ShortHand_105, (MR_Integer) 5))));
                    MR_Word OuterDI_113 = ((MR_Word) ((MR_hl_field(0, Outer_107, (MR_Integer) 0))));
                    MR_Word OuterUO_114 = ((MR_Word) ((MR_hl_field(0, Outer_107, (MR_Integer) 1))));
                    MR_Word InnerDI_115 = ((MR_Word) ((MR_hl_field(0, Inner_108, (MR_Integer) 0))));
                    MR_Word InnerUO_116 = ((MR_Word) ((MR_hl_field(0, Inner_108, (MR_Integer) 1))));
                    MR_Word Var_171;
                    MR_Word STATE_VARIABLE_Set_172_172;
                    MR_Word Var_173;
                    MR_Word Var_174;
                    MR_Word Var_175;
                    MR_Word Var_177;

                    {
                      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_175, 0) = ((MR_Box) (InnerUO_116));
                      MR_hl_field(1, Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_174, 0) = ((MR_Box) (InnerDI_115));
                      MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_175));
                    }
                    {
                      Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_173, 0) = ((MR_Box) (OuterUO_114));
                      MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_174));
                    }
                    {
                      Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_171, 0) = ((MR_Box) (OuterDI_113));
                      MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_173));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_171, STATE_VARIABLE_Set_0_119, &STATE_VARIABLE_Set_172_172);
                    {
                      Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_177, 0) = ((MR_Box) (MainGoal_110));
                      MR_hl_field(1, Var_177, 1) = ((MR_Box) (OrElseGoals_111));
                    }
                    hlds__quantification__disj_vars_maybe_lambda_and_bi_impl_5_p_0(Var_177, STATE_VARIABLE_Set_172_172, STATE_VARIABLE_Set_120, STATE_VARIABLE_LambdaSet_0_121, STATE_VARIABLE_LambdaSet_122);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_200 = ((MR_Word) ((MR_hl_field(2, ShortHand_105, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_201 = ((MR_Word) ((MR_hl_field(0, SubGoal_200, (MR_Integer) 0))));
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
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(0, Case_12, (MR_Integer) 2))));
      MR_Word GoalSet_19;
      MR_Word GoalLambdaSet_20;
      MR_Word STATE_VARIABLE_Sets_25_25;
      MR_Word STATE_VARIABLE_LambdaSets_26_26;
      MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_4;

      hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(GoalExpr_27, &GoalSet_19, &GoalLambdaSet_20);
      {
        STATE_VARIABLE_Sets_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_25_25, 0) = ((MR_Box) (GoalSet_19));
        MR_hl_field(1, STATE_VARIABLE_Sets_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_2));
      }
      {
        STATE_VARIABLE_LambdaSets_26_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_26_26, 0) = ((MR_Box) (GoalLambdaSet_20));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_26_26, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_4));
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalSet_16;
      MR_Word GoalLambdaSet_17;
      MR_Word STATE_VARIABLE_Sets_22_22;
      MR_Word STATE_VARIABLE_LambdaSets_23_23;
      MR_Word GoalExpr_24 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LambdaSets_0_4;

      hlds__quantification__goal_expr_vars_both_maybe_lambda_and_bi_impl_3_p_0(GoalExpr_24, &GoalSet_16, &GoalLambdaSet_17);
      {
        STATE_VARIABLE_Sets_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_22_22, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(1, STATE_VARIABLE_Sets_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_2));
      }
      {
        STATE_VARIABLE_LambdaSets_23_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_23_23, 0) = ((MR_Box) (GoalLambdaSet_17));
        MR_hl_field(1, STATE_VARIABLE_LambdaSets_23_23, 1) = ((MR_Box) (STATE_VARIABLE_LambdaSets_0_4));
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 0))));
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
        MR_Word Y_9 = ((MR_Word) ((MR_hl_field(0, RHS_6, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_9, STATE_VARIABLE_Set_0_23, STATE_VARIABLE_Set_24);
        *STATE_VARIABLE_LambdaSet_26 = STATE_VARIABLE_LambdaSet_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(1, RHS_6, (MR_Integer) 2))));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, STATE_VARIABLE_Set_0_23, STATE_VARIABLE_Set_24);
        *STATE_VARIABLE_LambdaSet_26 = STATE_VARIABLE_LambdaSet_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVarsModes_18 = ((MR_Word) ((MR_hl_field(2, RHS_6, (MR_Integer) 3))));
        MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(2, RHS_6, (MR_Integer) 5))));
        MR_Word GoalVars0_21;
        MR_Word GoalVars_22;
        MR_Word ArgVars_30;
        MR_Word GoalExpr_36;
        MR_Word Set_38;
        MR_Word LambdaSet_39;
        MR_Word Set0_41;
        MR_Word LambdaSet0_42;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_18, &ArgVars_30);
        GoalExpr_36 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 0))));
        Set0_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        LambdaSet0_42 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__quantification__goal_expr_vars_maybe_lambda_and_bi_impl_2_5_p_0(GoalExpr_36, Set0_41, &Set_38, LambdaSet0_42, &LambdaSet_39);
        GoalVars0_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set_38, LambdaSet_39);
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

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_105_99_105_116_108_121_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_50_95_95_91_49_93_95_50_9_p_2(
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
  MR_Word LambdaOutsideVars_32;
  MR_Word QuantVars_33;
  MR_Word NonLocals_34;

  {
    VarDb0_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarDb0_16, 0) = ((MR_Box) (STATE_VARIABLE_VarTable_0_24));
  }
  LambdaOutsideVars_32 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  QuantVars_33 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  NonLocals_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    QuantInfo0_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QuantInfo0_17, 0) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(0, QuantInfo0_17, 1) = ((MR_Box) (LambdaOutsideVars_32));
    MR_hl_field(0, QuantInfo0_17, 2) = ((MR_Box) (QuantVars_33));
    MR_hl_field(0, QuantInfo0_17, 3) = ((MR_Box) (NonLocals_34));
    MR_hl_field(0, QuantInfo0_17, 4) = ((MR_Box) (OutsideVars_11));
    MR_hl_field(0, QuantInfo0_17, 5) = ((MR_Box) (VarDb0_16));
    MR_hl_field(0, QuantInfo0_17, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_26));
    MR_hl_field(0, QuantInfo0_17, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(STATE_VARIABLE_Goal_0_22, STATE_VARIABLE_Goal_23, QuantInfo0_17, &QuantInfo_18);
  VarDb_19 = ((MR_Word) ((MR_hl_field(0, QuantInfo_18, (MR_Integer) 5))));
  *STATE_VARIABLE_RttiVarMaps_27 = ((MR_Word) ((MR_hl_field(0, QuantInfo_18, (MR_Integer) 6))));
  Warnings0_21 = ((MR_Word) ((MR_hl_field(0, QuantInfo_18, (MR_Integer) 7))));
  if (((MR_tag((MR_Word) VarDb_19)) == (MR_Integer) 1))
    *STATE_VARIABLE_VarTable_25 = ((MR_Word) ((MR_hl_field(1, VarDb_19, (MR_Integer) 0))));
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.implicitly_quantify_goal_2\'/9", (MR_String) "var_db_varset_vartypes");
      return;
    }
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), Warnings0_21, Warnings_12);
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
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word GoalNonLocalVars_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_NonLocalVarSets_32_32;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_24, &Goal_25, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_31_31);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (Goal_25));
    }
    GoalNonLocalVars_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 0) = ((MR_Box) (GoalNonLocalVars_26));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_32_32, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(Cases0_17, &Cases_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_32_32, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
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
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word GoalInfo0_24;
    MR_Word GoalNonLocalVars_29;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_NonLocalVarSets_41_41;

    Goal0_16 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
    Inner0_17 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_24, (MR_Integer) 24);
    if (succeeded)
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word InnerDI_25 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 0))));
      MR_Word InnerUO_26 = ((MR_Word) ((MR_hl_field(0, Inner0_17, (MR_Integer) 1))));
      MR_Word OutsideVars0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word OutsideVars_28;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (InnerUO_26));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (InnerDI_25));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_36, OutsideVars0_27, &OutsideVars_28);
      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars_28));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_51));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_52));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_53));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_54));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_55));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_56));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_57));
      }
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_16, &Goal_19, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
    GoalNonLocalVars_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_41_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 0) = ((MR_Box) (GoalNonLocalVars_29));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_41_41, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(Goals0_18, &Goals_20, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_41_41, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalNonLocalVars_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_NonLocalVarSets_28_28;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal0_16, &Goal_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    GoalNonLocalVars_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
    {
      STATE_VARIABLE_NonLocalVarSets_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 0) = ((MR_Box) (GoalNonLocalVars_22));
      MR_hl_field(1, STATE_VARIABLE_NonLocalVarSets_28_28, 1) = ((MR_Box) (STATE_VARIABLE_NonLocalVarSets_0_6));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(Goals0_17, &Goals_19, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_NonLocalVarSets_28_28, STATE_VARIABLE_NonLocalVarSets_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
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
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;

    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    NonLocalVars_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_10));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_55));
    }
  }
  else
  {
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_conj_no_lambda_2\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FollowingVars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FollowingVarsList_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Word OutsideVars_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
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
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, FollowingVars_23, &OutsideVars1_31);
      Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
      Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (OutsideVars1_31));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_64));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_65));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_68));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_69));
        MR_hl_field(0, STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_70));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Var_47, &Goal_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
      NonLocalVars1_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_30, NonLocalVars1_32, &OutsideVars2_33);
      Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 1))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 2))));
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 3))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 4))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 5))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 6))));
      Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_40_40, (MR_Integer) 7))));
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (OutsideVars2_33));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (Var_79));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_80));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 5) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 6) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_Info_41_41, 7) = ((MR_Box) (Var_85));
      }
      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(FollowingVarsList_24, Var_46, &Goals_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_28));
      }
      NonLocalVars2_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVars1_32, NonLocalVars2_34, &NonLocalVarsConj_35);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarsConj_35, OutsideVars_30, &NonLocalVars_36);
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OutsideVars_30));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_94));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_95));
        MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_36));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_98));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_100));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1114__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1112__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__quantification__IntroducedFrom__pred__quantify_unify_rhs__1091__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0))));

        *RHSNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_18);
        *STATE_VARIABLE_RHS_82 = STATE_VARIABLE_RHS_0_81;
        *STATE_VARIABLE_Unification_84 = STATE_VARIABLE_Unification_0_83;
        *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_0_85;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word SetArgs_22;

        succeeded = (ReuseArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SetArgs_22 = ((MR_Word) ((MR_hl_field(1, ReuseArgs_12, (MR_Integer) 0))));
          {
            MR_Word Vars0_23;

            hlds__quantification__get_updated_fields_acc_4_p_0(SetArgs_22, ArgVars_21, (MR_Word) ((MR_Unsigned) 0U), &Vars0_23);
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
        MR_Word LambdaNonLocals0_28 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 2))));
        MR_Word ArgVarsModes0_29 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 3))));
        MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 5))));
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
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_RHS_0_81, (MR_Integer) 0)));
        MR_Word Var_142;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_174;
        MR_Word Var_198;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;

        mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes0_29, &ArgVars0_32, &Modes_33);
        OutsideVars0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_85, (MR_Integer) 0))));
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
        Seen0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Seen0_38, QVars_35, &RenameVars1_39);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars0_36, RenameVars1_39, &RenameVars_40);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(RenameVars_40, &RenameMap_41, Goal0_31, &Goal1_42, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_88_88);
        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_41, ArgVars0_32, &ArgVars_108);
        QuantVars0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_34, QuantVars0_43, &OutsideVars1_44);
        QuantVars_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_45) == ((MR_Word) Var_142));
        if (succeeded)
          STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_88_88;
        else
        {
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          MR_Word Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          MR_Word Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_150));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_151));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (QuantVars_45));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_153));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_154));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_155));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_156));
            MR_hl_field(0, STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_157));
          }
        }
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, OutsideVars1_44, &OutsideVars_46);
        LambdaOutsideVars0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 1))));
        Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 2))));
        Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 3))));
        Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
        Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
        Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
        Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_91_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 0) = ((MR_Box) (OutsideVars_46));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 1) = ((MR_Box) (LambdaOutsideVars0_47));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 2) = ((MR_Box) (Var_161));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 3) = ((MR_Box) (Var_162));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 4) = ((MR_Box) (Var_163));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 5) = ((MR_Box) (Var_164));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 6) = ((MR_Box) (Var_165));
          MR_hl_field(0, STATE_VARIABLE_Info_91_91, 7) = ((MR_Box) (Var_166));
        }
        LambdaOutsideVars_48 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars_48) == ((MR_Word) Var_174));
        if (succeeded)
          STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_91_91;
        else
        {
          MR_Word Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          MR_Word Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          MR_Word Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 5))));
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 6))));
          MR_Word Var_189 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_182));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (LambdaOutsideVars_48));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_184));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_185));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_186));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_187));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_188));
            MR_hl_field(0, STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_189));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Goal1_42, &Goal_49, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        RHSNonLocals0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
        parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_108, RHSNonLocals0_50, RHSNonLocals_16);
        Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars0_43) == ((MR_Word) Var_198));
        if (succeeded)
          STATE_VARIABLE_Info_94_94 = STATE_VARIABLE_Info_93_93;
        else
        {
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 0))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 1))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 3))));
          MR_Word Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 4))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 5))));
          MR_Word Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 6))));
          MR_Word Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_93_93, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_206));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_207));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (QuantVars0_43));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_209));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_210));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_211));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_212));
            MR_hl_field(0, STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_213));
          }
        }
        Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (OutsideVars0_34));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (Var_216));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (Var_221));
          MR_hl_field(0, STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (Var_222));
        }
        Var_223 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 1))));
        succeeded = (((MR_Word) LambdaOutsideVars0_47) == ((MR_Word) Var_223));
        if (succeeded)
          *STATE_VARIABLE_Info_86 = STATE_VARIABLE_Info_95_95;
        else
        {
          MR_Word Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 0))));
          MR_Word Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 2))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 3))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 4))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 5))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 6))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_95_95, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_86 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_231));
            MR_hl_field(0, base, 1) = ((MR_Box) (LambdaOutsideVars0_47));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_233));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_234));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_235));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_236));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_237));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_238));
          }
        }
        LambdaGoalInfo_52 = ((MR_Word) ((MR_hl_field(0, Goal_49, (MR_Integer) 1))));
        LambdaGoalNonLocals_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_52);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[1]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_1));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (LambdaGoalNonLocals_53));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), Var_97, LambdaNonLocals0_28, &LambdaNonLocals_54);
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_108, Modes_33, &ArgVarsModes_55);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RHS_82 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, base, 1) = NULL;
          MR_hl_field(2, base, 2) = ((MR_Box) (LambdaNonLocals_54));
          MR_hl_field(2, base, 3) = ((MR_Box) (ArgVarsModes_55));
          MR_hl_field(2, base, 4) = (MR_Box) ((MR_Unsigned) (Det_30));
          MR_hl_field(2, base, 5) = ((MR_Box) (Goal_49));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_83)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstructVar_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))));
              MR_Word ConsId_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 1))));
              MR_Word Args0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 2))));
              MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 3))));
              MR_Word HowToConstruct_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 4))));
              MR_Word Uniq_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_83, (MR_Integer) 6))));
              MR_Word ArgModesMap_65;
              MR_Word Args_66;
              MR_Word ArgModes_67;

              if (!((SubInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word MaybeTakeAddr_63 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 0))));
                MR_Word MaybeSize_64 = ((MR_Word) ((MR_hl_field(1, SubInfo_62, (MR_Integer) 1))));
                MR_Word Var_99;
                MR_Word Var_103;

                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_99, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[2]));
                  MR_hl_field(0, Var_99, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_2));
                  MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_99, 3) = ((MR_Box) (MaybeTakeAddr_63));
                  MR_hl_field(0, Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.quantification.quantify_unify_rhs\'/10", (MR_String) "lambda term has take addr");
                {
                  Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_103, 0) = ((MR_Box) (&hlds__quantification_scalar_common_4[3]));
                  MR_hl_field(0, Var_103, 1) = ((MR_Box) (hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2_3));
                  MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_103, 3) = ((MR_Box) (MaybeSize_64));
                  MR_hl_field(0, Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
                MR_hl_field(0, base, 0) = ((MR_Box) (ConstructVar_56));
                MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_57));
                MR_hl_field(0, base, 2) = ((MR_Box) (Args_66));
                MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_67));
                MR_hl_field(0, base, 4) = ((MR_Box) (HowToConstruct_60));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Uniq_61));
                MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_62));
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
            switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_83, (MR_Integer) 0))))) {
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
        MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        MR_Word OutsideVars_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
        MR_Word OutsideVars1_56;
        MR_Word QuantVars1_57;
        MR_Word SubGoal_58;
        MR_Word STATE_VARIABLE_Info_80_80;
        MR_Word STATE_VARIABLE_Info_81_81;
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_190;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_55, QuantVars_54, &OutsideVars1_56);
        QuantVars1_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars1_57) == ((MR_Word) Var_190));
        if (succeeded)
          STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_66;
        else
        {
          MR_Word Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 0))));
          MR_Word Var_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 1))));
          MR_Word Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 3))));
          MR_Word Var_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 4))));
          MR_Word Var_203 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 5))));
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 6))));
          MR_Word Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_66, (MR_Integer) 7))));

          {
            STATE_VARIABLE_Info_80_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 0) = ((MR_Box) (Var_198));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 1) = ((MR_Box) (Var_199));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 2) = ((MR_Box) (QuantVars1_57));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 3) = ((MR_Box) (Var_201));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 4) = ((MR_Box) (Var_202));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 5) = ((MR_Box) (Var_203));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 6) = ((MR_Box) (Var_204));
            MR_hl_field(0, STATE_VARIABLE_Info_80_80, 7) = ((MR_Box) (Var_205));
          }
        }
        Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
        Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
        Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
        Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 4))));
        Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 5))));
        Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 6))));
        Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (OutsideVars1_56));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (Var_208));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (Var_209));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (Var_210));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (Var_211));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (Var_212));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (Var_213));
          MR_hl_field(0, STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (Var_214));
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_53, &SubGoal_58, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_58));
        Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 1))));
        Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 2))));
        Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 3))));
        Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 4))));
        Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 5))));
        Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 6))));
        Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 7))));
        {
          STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (OutsideVars_55));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 1) = ((MR_Box) (Var_216));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_217));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 3) = ((MR_Box) (Var_218));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 4) = ((MR_Box) (Var_219));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 5) = ((MR_Box) (Var_220));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 6) = ((MR_Box) (Var_221));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 7) = ((MR_Box) (Var_222));
        }
        Var_223 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 2))));
        succeeded = (((MR_Word) QuantVars_54) == ((MR_Word) Var_223));
        if (succeeded)
          *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_83_83;
        else
        {
          MR_Word Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 0))));
          MR_Word Var_232 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 1))));
          MR_Word Var_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 3))));
          MR_Word Var_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 4))));
          MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 5))));
          MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 6))));
          MR_Word Var_238 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_83_83, (MR_Integer) 7))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_67 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_231));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_232));
            MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_54));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_234));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_235));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_236));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_237));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_238));
          }
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_350 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word UnifyRHS0_351 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_352 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unification0_353 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 3))));
        MR_Word UnifyContext_354 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 4))));
        MR_Word OutsideVars_355;
        MR_Word LambdaOutsideVars_356;
        MR_Word MaybeSetArgs_367;
        MR_Word AllButRHSGoalVars_386;
        MR_Word UnifyRHS_387;
        MR_Word Unification_388;
        MR_Word RHSGoalVars_389;
        MR_Word AllGoalVars_390;
        MR_Word ONonLocalVars_391;
        MR_Word LONonLocalVars_392;
        MR_Word NonLocalVars_393;
        MR_Word STATE_VARIABLE_GoalVars_61_394;
        MR_Word STATE_VARIABLE_Info_68_399;
        MR_Word STATE_VARIABLE_Info_69_400;

        hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_355);
        hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_356);
        parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_350, &STATE_VARIABLE_GoalVars_61_394);
        switch (MR_tag((MR_Word) Unification0_353)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word How_361 = ((MR_Word) ((MR_hl_field(0, Unification0_353, (MR_Integer) 4))));
              MR_Word SubInfo_363 = ((MR_Word) ((MR_hl_field(0, Unification0_353, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalVars_63_396;
              MR_Word SizeVar_372;
              MR_Word MaybeSize_371;
              MR_Word Var_397;

              switch (MR_tag((MR_Word) How_361)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_GoalVars_63_396 = STATE_VARIABLE_GoalVars_61_394;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ReuseVar_364;
                    MR_Word SetArgs_366;
                    MR_Word Var_395 = (MR_Word) (MR_body((MR_Word) (How_361), (MR_Integer) 1));

                    ReuseVar_364 = ((MR_Word) ((MR_hl_field(0, Var_395, (MR_Integer) 0))));
                    SetArgs_366 = ((MR_Word) ((MR_hl_field(0, Var_395, (MR_Integer) 2))));
                    {
                      MaybeSetArgs_367 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeSetArgs_367, 0) = ((MR_Box) (SetArgs_366));
                    }
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_364, STATE_VARIABLE_GoalVars_61_394, &STATE_VARIABLE_GoalVars_63_396);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_GoalVars_63_396 = STATE_VARIABLE_GoalVars_61_394;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegionVar_368 = ((MR_Word) ((MR_hl_field(3, How_361, (MR_Integer) 0))));

                    MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_368, STATE_VARIABLE_GoalVars_61_394, &STATE_VARIABLE_GoalVars_63_396);
                  }
                  break;
              }
              succeeded = (SubInfo_363 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeSize_371 = ((MR_Word) ((MR_hl_field(1, SubInfo_363, (MR_Integer) 1))));
                succeeded = (MaybeSize_371 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_397 = ((MR_Word) ((MR_hl_field(1, MaybeSize_371, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_397)) == (MR_Integer) 1);
                  if (succeeded)
                    SizeVar_372 = ((MR_Word) ((MR_hl_field(1, Var_397, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_372, STATE_VARIABLE_GoalVars_63_396, &AllButRHSGoalVars_386);
              else
                AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_63_396;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
              AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_61_394;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification0_353, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
                  AllButRHSGoalVars_386 = STATE_VARIABLE_GoalVars_61_394;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeInfoVars_385 = ((MR_Word) ((MR_hl_field(3, Unification0_353, (MR_Integer) 3))));

                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_385, STATE_VARIABLE_GoalVars_61_394, &AllButRHSGoalVars_386);
                  MaybeSetArgs_367 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            break;
        }
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_117_110_105_102_121_95_114_104_115_95_95_91_49_93_95_50_10_p_2(MaybeSetArgs_367, GoalInfo0_11, UnifyRHS0_351, &UnifyRHS_387, Unification0_353, &Unification_388, &RHSGoalVars_389, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_399);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_350));
          MR_hl_field(1, base, 1) = ((MR_Box) (UnifyRHS_387));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_352));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_388));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_354));
        }
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllButRHSGoalVars_386, RHSGoalVars_389, &AllGoalVars_390);
        hlds__quantification__update_seen_vars_3_p_0(AllGoalVars_390, STATE_VARIABLE_Info_68_399, &STATE_VARIABLE_Info_69_400);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_390, OutsideVars_355, &ONonLocalVars_391);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllGoalVars_390, LambdaOutsideVars_356, &LONonLocalVars_392);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ONonLocalVars_391, LONonLocalVars_392, &NonLocalVars_393);
        hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_393, STATE_VARIABLE_Info_69_400, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_9, (MR_Integer) 2))));

        *GoalExpr_10 = GoalExpr0_9;
        hlds__quantification__quantify_primitive_goal_3_p_0(HeadVars_21, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CallArgVars_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word GenericArgVars_30;
            MR_Word ArgVars_31;
            MR_Word Set0_120;

            *GoalExpr_10 = GoalExpr0_9;
            hlds__goal_util__generic_call_vars_2_p_0(GenericCall_25, &GenericArgVars_30);
            ArgVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), GenericArgVars_30, CallArgVars_26);
            hlds__quantification__quantify_primitive_goal_3_p_0(ArgVars_31, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_120 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr0_9, Set0_120, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word ExtraArgs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 5))));
            MR_Word Vars_39;
            MR_Word ExtraVars_40;
            MR_Word AllVars_41;
            MR_Word Set0_105;

            *GoalExpr_10 = GoalExpr0_9;
            Vars_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[4]), Args_35);
            ExtraVars_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[5]), ExtraArgs_36);
            mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_39, ExtraVars_40, &AllVars_41);
            hlds__quantification__quantify_primitive_goal_3_p_0(AllVars_41, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            Set0_105 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr0_9, Set0_105, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_88;
            MR_Word FollowingVarsList_107;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals0_43, &FollowingVarsList_107, PossiblyNonLocalGoalVars0_12);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_111_110_106_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_6_p_1(FollowingVarsList_107, Goals0_43, &Goals_88, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_88));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocalVarSets_46;
            MR_Word NonLocalVars_47;
            MR_Word STATE_VARIABLE_Info_76_76;
            MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_90;
            MR_Word Set0_117;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_100_105_115_106_95_95_91_49_93_95_50_7_p_2(Goals0_89, &Goals_90, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_76_76, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_46);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_46, &NonLocalVars_47);
            Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
            Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 1))));
            Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 2))));
            Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 4))));
            Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 5))));
            Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 6))));
            Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_76_76, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_109));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_110));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_47));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_112));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_113));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_114));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_115));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_90));
            }
            Set0_117 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr0_9, Set0_117, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Det_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_51;
            MR_Word NonLocalVars0_52;
            MR_Word STATE_VARIABLE_Info_78_78;
            MR_Word NonLocalVarSets_92;
            MR_Word NonLocalVars_93;
            MR_Word Var_342;
            MR_Word Var_343;
            MR_Word Var_344;
            MR_Word Var_346;
            MR_Word Var_347;
            MR_Word Var_348;
            MR_Word Var_349;

            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_99_97_115_101_115_95_95_91_49_93_95_50_7_p_2(Cases0_50, &Cases_51, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_78_78, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_92);
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_92, &NonLocalVars0_52);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, NonLocalVars0_52, &NonLocalVars_93);
            Var_342 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
            Var_343 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
            Var_344 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
            Var_346 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
            Var_347 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
            Var_348 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
            Var_349 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_67 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_342));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_343));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_344));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocalVars_93));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_346));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_347));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_348));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_349));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_48));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Det_49));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_51));
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_240 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_241 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word QuantVars_242;
            MR_Word STATE_VARIABLE_Info_52_276;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars_242);
            switch (MR_tag((MR_Word) Reason0_240)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars0_243 = ((MR_Word) ((MR_hl_field(0, Reason0_240, (MR_Integer) 0))));
                  MR_Word Reason_245;
                  MR_Word SubGoal1_246;
                  MR_Word Vars_247;
                  MR_Word SubGoal_248;
                  MR_Word NonLocals0_249;
                  MR_Word NonLocals_250;
                  MR_Word STATE_VARIABLE_Info_50_274;
                  MR_Word STATE_VARIABLE_Info_51_275;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2((MR_Word) (&hlds__quantification_scalar_common_2[0]), &Reason_245, SubGoal0_241, &SubGoal1_246, Vars0_243, &Vars_247, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_50_274);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal1_246, &SubGoal_248, STATE_VARIABLE_Info_50_274, &STATE_VARIABLE_Info_51_275);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason_245));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_248));
                  }
                  hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_51_275, &NonLocals0_249);
                  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_247, NonLocals0_249, &NonLocals_250);
                  hlds__quantification__set_nonlocals_3_p_0(NonLocals_250, STATE_VARIABLE_Info_51_275, &STATE_VARIABLE_Info_52_276);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_284;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_241, &SubGoal_284, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_284));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_240, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word SubGoal_284;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_241, &SubGoal_284, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_284));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_251 = ((MR_Word) ((MR_hl_field(3, Reason0_240, (MR_Integer) 1))));
                      MR_Word FGT_252 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_240, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_252) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 0:
                          {
                            MR_Word OutsideVars_253;
                            MR_Word LambdaOutsideVars_254;

                            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars_253);
                            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars_254);
                            succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_253, TermVar_251);
                            if (!(succeeded))
                              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars_254, TermVar_251);
                            if (succeeded)
                            {
                              *GoalExpr_10 = GoalExpr0_9;
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_251);
                            }
                            else
                            {
                              switch (FGT_252) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *GoalExpr_10 = (MR_Word) (MR_mkword(3, &hlds__quantification_scalar_common_3[0]));
                                  break;
                                case (MR_Integer) 0:
                                  *GoalExpr_10 = GoalExpr0_9;
                                  break;
                              }
                              *PossiblyNonLocalGoalVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                            }
                            hlds__quantification__set_nonlocals_3_p_0(*PossiblyNonLocalGoalVars0_12, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word SubGoal_283;

                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_241, &SubGoal_283, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_52_276);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_10 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_240));
                              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_283));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word STATE_VARIABLE_Info_58_279;
                      MR_Word STATE_VARIABLE_Info_59_280;
                      MR_Word Vars0_285 = ((MR_Word) ((MR_hl_field(3, Reason0_240, (MR_Integer) 5))));
                      MR_Word Reason_286;
                      MR_Word SubGoal1_287;
                      MR_Word Vars_288;
                      MR_Word SubGoal_289;
                      MR_Word NonLocals0_290;
                      MR_Word NonLocals_291;

                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_115_99_111_112_101_95_114_101_110_97_109_101_95_118_97_114_115_95_95_91_49_93_95_50_10_p_2(Reason0_240, &Reason_286, SubGoal0_241, &SubGoal1_287, Vars0_285, &Vars_288, GoalInfo0_11, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_58_279);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal1_287, &SubGoal_289, STATE_VARIABLE_Info_58_279, &STATE_VARIABLE_Info_59_280);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason_286));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_289));
                      }
                      hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_59_280, &NonLocals0_290);
                      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_288, NonLocals0_290, &NonLocals_291);
                      hlds__quantification__set_nonlocals_3_p_0(NonLocals_291, STATE_VARIABLE_Info_59_280, &STATE_VARIABLE_Info_52_276);
                    }
                    break;
                }
                break;
            }
            hlds__quantification__set_quant_vars_3_p_0(QuantVars_242, STATE_VARIABLE_Info_52_276, STATE_VARIABLE_Info_67);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_123 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_124 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_125 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word QuantVars0_126;
            MR_Word OutsideVars0_127;
            MR_Word LambdaOutsideVars0_128;
            MR_Word QVars_129;
            MR_Word Cond1_130;
            MR_Word Then1_131;
            MR_Word QuantVars1_132;
            MR_Word VarsThen_141;
            MR_Word LambdaVarsThen_142;
            MR_Word OutsideVars1_143;
            MR_Word LambdaOutsideVars1_144;
            MR_Word Cond_145;
            MR_Word NonLocalsCond_146;
            MR_Word OutsideVars2_147;
            MR_Word Then_148;
            MR_Word NonLocalsThen_149;
            MR_Word Else_150;
            MR_Word NonLocalsElse_151;
            MR_Word NonLocalsIfThen_152;
            MR_Word NonLocalsIfThenElse_153;
            MR_Word NonLocalsO_154;
            MR_Word NonLocalsL_155;
            MR_Word NonLocals_156;
            MR_Word STATE_VARIABLE_Info_52_158;
            MR_Word STATE_VARIABLE_Info_54_160;
            MR_Word STATE_VARIABLE_Info_55_161;
            MR_Word STATE_VARIABLE_Info_56_162;
            MR_Word STATE_VARIABLE_Info_57_163;
            MR_Word STATE_VARIABLE_Info_58_164;
            MR_Word STATE_VARIABLE_Info_59_165;
            MR_Word STATE_VARIABLE_Info_60_166;
            MR_Word STATE_VARIABLE_Info_61_167;
            MR_Word STATE_VARIABLE_Info_62_168;
            MR_Word STATE_VARIABLE_Info_63_169;
            MR_Word STATE_VARIABLE_Info_64_170;

            hlds__quantification__get_quant_vars_2_p_0(STATE_VARIABLE_Info_0_66, &QuantVars0_126);
            hlds__quantification__get_outside_2_p_0(STATE_VARIABLE_Info_0_66, &OutsideVars0_127);
            hlds__quantification__get_lambda_outside_2_p_0(STATE_VARIABLE_Info_0_66, &LambdaOutsideVars0_128);
            if ((Vars0_122 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              QVars_129 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              Cond1_130 = Cond0_123;
              Then1_131 = Then0_124;
              QuantVars1_132 = QuantVars0_126;
              STATE_VARIABLE_Info_52_158 = STATE_VARIABLE_Info_0_66;
            }
            else
            {
              MR_Word RenameVars1_135;
              MR_Word RenameVars2_136;
              MR_Word RenameVars_137;
              MR_Word Vars_138;

              QVars_129 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_122);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, QVars_129, &RenameVars1_135);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_128, QVars_129, &RenameVars2_136);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars1_135, RenameVars2_136, &RenameVars_137);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_137);
              if (succeeded)
              {
                Cond1_130 = Cond0_123;
                Then1_131 = Then0_124;
                Vars_138 = Vars0_122;
                STATE_VARIABLE_Info_52_158 = STATE_VARIABLE_Info_0_66;
              }
              else
              {
                MR_Word Context_139;
                MR_Word RenameMap_140;
                MR_Word STATE_VARIABLE_Info_51_157;

                Context_139 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
                hlds__quantification__warn_overlapping_scope_4_p_0(RenameVars_137, Context_139, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_51_157);
                hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_97_112_97_114_116_95_95_91_49_93_95_50_7_p_2(RenameVars_137, &RenameMap_140, Cond0_123, &Cond1_130, STATE_VARIABLE_Info_51_157, &STATE_VARIABLE_Info_52_158);
                hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenameMap_140, Then0_124, &Then1_131);
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_140, Vars0_122, &Vars_138);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, QuantVars0_126, &QuantVars1_132);
            }
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Then1_131, &VarsThen_141);
            LambdaVarsThen_142 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, VarsThen_141, &OutsideVars1_143);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaOutsideVars0_128, LambdaVarsThen_142, &LambdaOutsideVars1_144);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars1_132, STATE_VARIABLE_Info_52_158, &STATE_VARIABLE_Info_54_160);
            hlds__quantification__set_outside_3_p_0(OutsideVars1_143, STATE_VARIABLE_Info_54_160, &STATE_VARIABLE_Info_55_161);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars1_144, STATE_VARIABLE_Info_55_161, &STATE_VARIABLE_Info_56_162);
            hlds__quantification__update_seen_vars_3_p_0(QVars_129, STATE_VARIABLE_Info_56_162, &STATE_VARIABLE_Info_57_163);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Cond1_130, &Cond_145, STATE_VARIABLE_Info_57_163, &STATE_VARIABLE_Info_58_164);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_58_164, &NonLocalsCond_146);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars0_127, NonLocalsCond_146, &OutsideVars2_147);
            hlds__quantification__set_outside_3_p_0(OutsideVars2_147, STATE_VARIABLE_Info_58_164, &STATE_VARIABLE_Info_59_165);
            hlds__quantification__set_lambda_outside_3_p_0(LambdaOutsideVars0_128, STATE_VARIABLE_Info_59_165, &STATE_VARIABLE_Info_60_166);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Then1_131, &Then_148, STATE_VARIABLE_Info_60_166, &STATE_VARIABLE_Info_61_167);
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_61_167, &NonLocalsThen_149);
            hlds__quantification__set_outside_3_p_0(OutsideVars0_127, STATE_VARIABLE_Info_61_167, &STATE_VARIABLE_Info_62_168);
            hlds__quantification__set_quant_vars_3_p_0(QuantVars0_126, STATE_VARIABLE_Info_62_168, &STATE_VARIABLE_Info_63_169);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(Else0_125, &Else_150, STATE_VARIABLE_Info_63_169, &STATE_VARIABLE_Info_64_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_145));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_148));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_150));
            }
            hlds__quantification__get_nonlocals_2_p_0(STATE_VARIABLE_Info_64_170, &NonLocalsElse_151);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsCond_146, NonLocalsThen_149, &NonLocalsIfThen_152);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThen_152, NonLocalsElse_151, &NonLocalsIfThenElse_153);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_153, OutsideVars0_127, &NonLocalsO_154);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsIfThenElse_153, LambdaOutsideVars0_128, &NonLocalsL_155);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsO_154, NonLocalsL_155, &NonLocals_156);
            hlds__quantification__set_nonlocals_3_p_0(NonLocals_156, STATE_VARIABLE_Info_64_170, STATE_VARIABLE_Info_67);
            hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(GoalExpr0_9, PossiblyNonLocalGoalVars0_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_298 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_298)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_299 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_300 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 1))));
                  MR_Word Inner_301 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_302 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 3))));
                  MR_Word MainGoal0_303 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_304 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 5))));
                  MR_Word OrElseInners0_305 = ((MR_Word) ((MR_hl_field(1, ShortHand0_298, (MR_Integer) 6))));
                  MR_Word OrElseGoals1_306;
                  MR_Word OrElseInners_307;
                  MR_Word AtomicGoalsWithInners0_310;
                  MR_Word AllAtomicGoals_312;
                  MR_Word NonLocalVarSets_313;
                  MR_Word MainGoal_314;
                  MR_Word OrElseGoals_315;
                  MR_Word NonLocalVars0_316;
                  MR_Word NonLocalVars_319;
                  MR_Word ShortHand_320;
                  MR_Word STATE_VARIABLE_Info_45_327;
                  MR_Word Var_328;
                  MR_Word Var_329;
                  MR_Word STATE_VARIABLE_Info_49_330;

                  if ((OrElseInners0_305 == (MR_Word) ((MR_Unsigned) 0U)))
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(Inner_301, OrElseGoals0_304, &OrElseGoals1_306, &OrElseInners_307, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_45_327);
                  else
                  {
                    OrElseInners_307 = OrElseInners0_305;
                    OrElseGoals1_306 = OrElseGoals0_304;
                    STATE_VARIABLE_Info_45_327 = STATE_VARIABLE_Info_0_66;
                  }
                  {
                    Var_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_328, 0) = ((MR_Box) (MainGoal0_303));
                    MR_hl_field(1, Var_328, 1) = ((MR_Box) (OrElseGoals1_306));
                  }
                  {
                    Var_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_329, 0) = ((MR_Box) (Inner_301));
                    MR_hl_field(1, Var_329, 1) = ((MR_Box) (OrElseInners_307));
                  }
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0), Var_328, Var_329, &AtomicGoalsWithInners0_310);
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_97_116_111_109_105_99_95_103_111_97_108_115_95_95_91_49_93_95_50_7_p_2(AtomicGoalsWithInners0_310, &AllAtomicGoals_312, STATE_VARIABLE_Info_45_327, &STATE_VARIABLE_Info_49_330, (MR_Word) ((MR_Unsigned) 0U), &NonLocalVarSets_313);
                  if ((AllAtomicGoals_312 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.quantify_goal_shorthand\'/7", (MR_String) "AllAtomicGoals = []");
                      return;
                    }
                  else
                  {
                    MainGoal_314 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_312, (MR_Integer) 0))));
                    OrElseGoals_315 = ((MR_Word) ((MR_hl_field(1, AllAtomicGoals_312, (MR_Integer) 1))));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalVarSets_313, &NonLocalVars0_316);
                  switch (GoalType_299) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      NonLocalVars_319 = NonLocalVars0_316;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word OuterDI_317 = ((MR_Word) ((MR_hl_field(0, Outer_300, (MR_Integer) 0))));
                        MR_Word OuterUO_318 = ((MR_Word) ((MR_hl_field(0, Outer_300, (MR_Integer) 1))));
                        MR_Word Var_333;
                        MR_Word Var_334;

                        {
                          Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_334, 0) = ((MR_Box) (OuterUO_318));
                          MR_hl_field(1, Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_333, 0) = ((MR_Box) (OuterDI_317));
                          MR_hl_field(1, Var_333, 1) = ((MR_Box) (Var_334));
                        }
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_333, NonLocalVars0_316, &NonLocalVars_319);
                      }
                      break;
                  }
                  hlds__quantification__set_nonlocals_3_p_0(NonLocalVars_319, STATE_VARIABLE_Info_49_330, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_320 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_320, 0) = (MR_Box) ((MR_Unsigned) (GoalType_299));
                    MR_hl_field(1, ShortHand_320, 1) = ((MR_Box) (Outer_300));
                    MR_hl_field(1, ShortHand_320, 2) = ((MR_Box) (Inner_301));
                    MR_hl_field(1, ShortHand_320, 3) = ((MR_Box) (MaybeOutputVars_302));
                    MR_hl_field(1, ShortHand_320, 4) = ((MR_Box) (MainGoal_314));
                    MR_hl_field(1, ShortHand_320, 5) = ((MR_Box) (OrElseGoals_315));
                    MR_hl_field(1, ShortHand_320, 6) = ((MR_Box) (OrElseInners_307));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_320));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_321 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 0))));
                  MR_Word ResultVar_322 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 1))));
                  MR_Word SubGoal0_323 = ((MR_Word) ((MR_hl_field(2, ShortHand0_298, (MR_Integer) 2))));
                  MR_Word SubGoal_324;
                  MR_Word ShortHand_338;

                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_95_91_49_93_95_50_5_p_2(SubGoal0_323, &SubGoal_324, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                  {
                    ShortHand_338 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_338, 0) = ((MR_Box) (MaybeIO_321));
                    MR_hl_field(2, ShortHand_338, 1) = ((MR_Box) (ResultVar_322));
                    MR_hl_field(2, ShortHand_338, 2) = ((MR_Box) (SubGoal_324));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_338));
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
  MR_Word SeenVars_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  MR_Word PossiblyNonLocalGoalVars0_13;
  MR_Word NonLocalVars_14;
  MR_Word LocalVars_15;
  MR_Word RenameVars_16;
  MR_Word InstMapDelta0_19;
  MR_Word InstMapDelta_20;
  MR_Word STATE_VARIABLE_GoalExpr_23_23 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalInfo_24_24 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_GoalExpr_25_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_GoalExpr_30_30;
  MR_Word STATE_VARIABLE_GoalInfo_31_31;
  MR_Word STATE_VARIABLE_GoalInfo_36_36;
  MR_Word STATE_VARIABLE_GoalInfo_38_38;

  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_110_116_105_102_121_95_103_111_97_108_95_101_120_112_114_95_95_91_49_93_95_50_7_p_2(STATE_VARIABLE_GoalExpr_23_23, &STATE_VARIABLE_GoalExpr_25_25, STATE_VARIABLE_GoalInfo_24_24, &PossiblyNonLocalGoalVars0_13, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_26_26);
  NonLocalVars_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossiblyNonLocalGoalVars0_13, NonLocalVars_14, &LocalVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars_12, LocalVars_15, &RenameVars_16);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
  if (succeeded)
  {
    STATE_VARIABLE_GoalInfo_31_31 = STATE_VARIABLE_GoalInfo_24_24;
    STATE_VARIABLE_GoalExpr_30_30 = STATE_VARIABLE_GoalExpr_25_25;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word RenameMap_17;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_RttiVarMaps_32_32;
    MR_Word STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Box conv1_STATE_VARIABLE_RttiVarMaps_34_34;
    MR_Word Var_86;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_25_25));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_24_24));
    }
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_16);
    if (!(succeeded))
    {
    }
    mercury__map__init_1_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), &RenameMap_17);
    STATE_VARIABLE_GoalExpr_30_30 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
    STATE_VARIABLE_GoalInfo_31_31 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 1))));
    STATE_VARIABLE_RttiVarMaps_32_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&hlds__quantification_scalar_common_3[3]), RenameMap_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_32_32)), &conv1_STATE_VARIABLE_RttiVarMaps_34_34);
    STATE_VARIABLE_RttiVarMaps_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_34_34));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 6))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_34_34) == ((MR_Word) Var_86));
    if (succeeded)
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_26_26;
    else
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 0))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 1))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 3))));
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 4))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 5))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_95));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_96));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_98));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 6) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_34_34));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_101));
      }
    }
  }
  hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(NonLocalVars_14, STATE_VARIABLE_GoalInfo_31_31, &STATE_VARIABLE_GoalInfo_36_36);
  InstMapDelta0_19 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(STATE_VARIABLE_GoalInfo_36_36);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocalVars_14, InstMapDelta0_19, &InstMapDelta_20);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_20, STATE_VARIABLE_GoalInfo_36_36, &STATE_VARIABLE_GoalInfo_38_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_30_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_38_38));
  }
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_105_116_115_101_116_95_95_91_49_93_95_50_3_p_2(
  MR_Word GoalExpr_5,
  MR_Word * BothSet_6)
{
  MR_Word Set0_8;

  Set0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_5, Set0_8, BothSet_6);
}

static void MR_CALL 
hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  }
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set_9;
    MR_Word Sets_10;
    MR_Word GoalSet_12;
    MR_Word GoalExpr_15;
    MR_Word Set0_17;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(Goals_8, &Set_9, &Sets_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Set_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Sets_10));
    }
    GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
    Set0_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_15, Set0_17, &GoalSet_12);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalSet_12, Set_9, HeadVar__4_4);
  }
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
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Set0_12;
    MR_Word SetList0_13;
    MR_Word Set1_14;
    MR_Word GoalExpr_17;
    MR_Word Set0_19;

    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_108_108_111_119_105_110_103_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(Goals_9, &Set0_12, &SetList0_13);
    GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    Set0_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_17, Set0_19, &Set1_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Set0_12, Set1_14, Set_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Set0_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetList0_13));
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
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
  MR_Word Set0_9;

  Set0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_7, Set0_9, Set_6);
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
          MR_Word SubGoalExpr_78 = ((MR_Word) ((MR_hl_field(0, SubGoal_77, (MR_Integer) 0))));
          MR_Word next_value_of_GoalExpr_6 = SubGoalExpr_78;

          // direct tailcall eliminated
          ;
          GoalExpr_6 = next_value_of_GoalExpr_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word MaybeSetArgs_23;
          MR_Word STATE_VARIABLE_Set_116_116;
          MR_Word STATE_VARIABLE_Set_121_121;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_8, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_116_116);
          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word How_17 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 4))));
                MR_Word SubInfo_19 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_Set_118_118;
                MR_Word SizeVar_28;
                MR_Word MaybeSize_27;
                MR_Word Var_120;

                switch (MR_tag((MR_Word) How_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Set_118_118 = STATE_VARIABLE_Set_116_116;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ReuseVar_20;
                      MR_Word SetArgs_22;
                      MR_Word Var_117 = (MR_Word) (MR_body((MR_Word) (How_17), (MR_Integer) 1));

                      ReuseVar_20 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 0))));
                      SetArgs_22 = ((MR_Word) ((MR_hl_field(0, Var_117, (MR_Integer) 2))));
                      {
                        MaybeSetArgs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeSetArgs_23, 0) = ((MR_Box) (SetArgs_22));
                      }
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_118_118);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Set_118_118 = STATE_VARIABLE_Set_116_116;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RegionVar_24 = ((MR_Word) ((MR_hl_field(3, How_17, (MR_Integer) 0))));

                      MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegionVar_24, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_118_118);
                    }
                    break;
                }
                succeeded = (SubInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeSize_27 = ((MR_Word) ((MR_hl_field(1, SubInfo_19, (MR_Integer) 1))));
                  succeeded = (MaybeSize_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_120 = ((MR_Word) ((MR_hl_field(1, MaybeSize_27, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_120)) == (MR_Integer) 1);
                    if (succeeded)
                      SizeVar_28 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_28, STATE_VARIABLE_Set_118_118, &STATE_VARIABLE_Set_121_121);
                else
                  STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_118_118;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_116_116;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_Set_121_121 = STATE_VARIABLE_Set_116_116;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfoVars_31 = ((MR_Word) ((MR_hl_field(3, Unification_11, (MR_Integer) 3))));

                    MaybeSetArgs_23 = (MR_Word) ((MR_Unsigned) 0U);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_31, STATE_VARIABLE_Set_116_116, &STATE_VARIABLE_Set_121_121);
                  }
                  break;
              }
              break;
          }
          hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_114_104_115_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_5_p_1(RHS_9, MaybeSetArgs_23, STATE_VARIABLE_Set_121_121, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_44, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars1_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgVars0_53;
              MR_Word STATE_VARIABLE_Set_125_125;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_48, &ArgVars0_53);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_53, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_125_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars1_49, STATE_VARIABLE_Set_125_125, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word Vars_61;
              MR_Word ExtraVars_62;
              MR_Word AllVars_63;

              Vars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[1]), Args_57);
              ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__quantification_scalar_common_1[0]), (MR_Word) (&hlds__quantification_scalar_common_3[2]), ExtraArgs_58);
              mercury__list__append_3_p_1((MR_Word) (&hlds__quantification_scalar_common_1[0]), Vars_61, ExtraVars_62, &AllVars_63);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllVars_63, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals_65, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_162 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Goals_162, STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_132_132;

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_132_132);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Cases_68, STATE_VARIABLE_Set_132_132, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Set_137_137;
              MR_Word SubGoal_171 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Set_138_138;
                    MR_Word Vars_164 = ((MR_Word) ((MR_hl_field(0, Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_138_138);
                    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_164, STATE_VARIABLE_Set_138_138, &STATE_VARIABLE_Set_137_137);
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Set_140_140;
                    MR_Word Vars_165 = ((MR_Word) ((MR_hl_field(2, Reason_80, (MR_Integer) 0))));

                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_140_140);
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_165, STATE_VARIABLE_Set_140_140, &STATE_VARIABLE_Set_137_137);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_80, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word STATE_VARIABLE_Set_142_142;
                        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_142_142);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_166, STATE_VARIABLE_Set_142_142, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word STATE_VARIABLE_Set_142_196;
                        MR_Word Var_197 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_142_196);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, STATE_VARIABLE_Set_142_196, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                    case (MR_Integer) 6:
                      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_137_137);
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_97 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 1))));
                        MR_Word LCSVar_98 = ((MR_Word) ((MR_hl_field(3, Reason_80, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_145_145;
                        MR_Word STATE_VARIABLE_Set_146_146;

                        hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(SubGoal_171, &STATE_VARIABLE_Set_145_145);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_97, STATE_VARIABLE_Set_145_145, &STATE_VARIABLE_Set_146_146);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_98, STATE_VARIABLE_Set_146_146, &STATE_VARIABLE_Set_137_137);
                      }
                      break;
                  }
                  break;
              }
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, STATE_VARIABLE_Set_137_137, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondSet_72;
              MR_Word ThenSet_73;
              MR_Word ElseSet_74;
              MR_Word CondThenSet_75;
              MR_Word SomeCondThenSet_76;
              MR_Word STATE_VARIABLE_Set_134_134;
              MR_Word Vars_163 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Cond_69, &CondSet_72);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Then_70, &ThenSet_73);
              hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(Else_71, &ElseSet_74);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondSet_72, ThenSet_73, &CondThenSet_75);
              parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_163, CondThenSet_75, &SomeCondThenSet_76);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_0_114, SomeCondThenSet_76, &STATE_VARIABLE_Set_134_134);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Set_134_134, ElseSet_74, STATE_VARIABLE_Set_115);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word RHS_177 = ((MR_Word) ((MR_hl_field(0, ShortHand_100, (MR_Integer) 1))));
                    MR_Word Goal_203 = ((MR_Word) ((MR_hl_field(0, ShortHand_100, (MR_Integer) 0))));
                    MR_Word Goals_204;
                    MR_Word GoalExpr_205;
                    MR_Word STATE_VARIABLE_Set_17_209;
                    MR_Word Goal_214;
                    MR_Word GoalExpr_216;
                    MR_Word next_value_of_GoalExpr_6;
                    MR_Word next_value_of_STATE_VARIABLE_Set_0_114;

                    {
                      Goals_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_204, 0) = ((MR_Box) (RHS_177));
                      MR_hl_field(1, Goals_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    GoalExpr_205 = ((MR_Word) ((MR_hl_field(0, Goal_203, (MR_Integer) 0))));
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_50_95_95_91_49_93_95_49_4_p_1(GoalExpr_205, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_17_209);
                    Goal_214 = ((MR_Word) ((MR_hl_field(1, Goals_204, (MR_Integer) 0))));
                    GoalExpr_216 = ((MR_Word) ((MR_hl_field(0, Goal_214, (MR_Integer) 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_GoalExpr_6 = GoalExpr_216;
                    next_value_of_STATE_VARIABLE_Set_0_114 = STATE_VARIABLE_Set_17_209;
                    GoalExpr_6 = next_value_of_GoalExpr_6;
                    STATE_VARIABLE_Set_0_114 = next_value_of_STATE_VARIABLE_Set_0_114;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 1))));
                    MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 2))));
                    MR_Word MainGoal_105 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 4))));
                    MR_Word OrElseGoals_106 = ((MR_Word) ((MR_hl_field(1, ShortHand_100, (MR_Integer) 5))));
                    MR_Word OuterDI_108 = ((MR_Word) ((MR_hl_field(0, Outer_102, (MR_Integer) 0))));
                    MR_Word OuterUO_109 = ((MR_Word) ((MR_hl_field(0, Outer_102, (MR_Integer) 1))));
                    MR_Word InnerDI_110 = ((MR_Word) ((MR_hl_field(0, Inner_103, (MR_Integer) 0))));
                    MR_Word InnerUO_111 = ((MR_Word) ((MR_hl_field(0, Inner_103, (MR_Integer) 1))));
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_Set_150_150;
                    MR_Word Var_151;
                    MR_Word Var_152;
                    MR_Word Var_153;
                    MR_Word Var_155;

                    {
                      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_153, 0) = ((MR_Box) (InnerUO_111));
                      MR_hl_field(1, Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_152, 0) = ((MR_Box) (InnerDI_110));
                      MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_153));
                    }
                    {
                      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_151, 0) = ((MR_Box) (OuterUO_109));
                      MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_149, 0) = ((MR_Box) (OuterDI_108));
                      MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_149, STATE_VARIABLE_Set_0_114, &STATE_VARIABLE_Set_150_150);
                    {
                      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_155, 0) = ((MR_Box) (MainGoal_105));
                      MR_hl_field(1, Var_155, 1) = ((MR_Box) (OrElseGoals_106));
                    }
                    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_118_97_114_115_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_4_p_1(Var_155, STATE_VARIABLE_Set_150_150, STATE_VARIABLE_Set_115);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_173 = ((MR_Word) ((MR_hl_field(2, ShortHand_100, (MR_Integer) 2))));
                    MR_Word SubGoalExpr_174 = ((MR_Word) ((MR_hl_field(0, SubGoal_173, (MR_Integer) 0))));
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
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_10, (MR_Integer) 2))));
      MR_Word GoalSet_16;
      MR_Word STATE_VARIABLE_Sets_19_19;
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(GoalExpr_20, &GoalSet_16);
      {
        STATE_VARIABLE_Sets_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_19_19, 0) = ((MR_Box) (GoalSet_16));
        MR_hl_field(1, STATE_VARIABLE_Sets_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
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
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalSet_13;
      MR_Word STATE_VARIABLE_Sets_16_16;
      MR_Word GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Sets_0_3;

      hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_101_120_112_114_95_118_97_114_115_95_98_111_116_104_95_110_111_95_108_97_109_98_100_97_95_95_91_49_93_95_49_3_p_1(GoalExpr_17, &GoalSet_13);
      {
        STATE_VARIABLE_Sets_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Sets_16_16, 0) = ((MR_Box) (GoalSet_13));
        MR_hl_field(1, STATE_VARIABLE_Sets_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Sets_0_3));
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
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
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
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(0, RHS_7, (MR_Integer) 0))));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_10, STATE_VARIABLE_Set_0_24, STATE_VARIABLE_Set_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(1, RHS_7, (MR_Integer) 2))));
        MR_Word SetArgs_14;

        succeeded = (MaybeSetArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SetArgs_14 = ((MR_Word) ((MR_hl_field(1, MaybeSetArgs_8, (MR_Integer) 0))));
          {
            MR_Word ArgsToSet_15;

            hlds__quantification__get_updated_fields_acc_4_p_0(SetArgs_14, ArgVars_13, (MR_Word) ((MR_Unsigned) 0U), &ArgsToSet_15);
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
hlds__quantification__get_updated_fields_acc_4_p_0(
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.get_updated_fields_acc\'/4", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.quantification.get_updated_fields_acc\'/4", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Arg_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_ArgsToSet_27_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_ArgsToSet_0_3;

        switch (Var_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_ArgsToSet_27_27 = STATE_VARIABLE_ArgsToSet_0_3;
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_ArgsToSet_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_ArgsToSet_27_27, 0) = ((MR_Box) (Arg_22));
              MR_hl_field(1, STATE_VARIABLE_ArgsToSet_27_27, 1) = ((MR_Box) (STATE_VARIABLE_ArgsToSet_0_3));
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_28;
        next_value_of_HeadVar__2_2 = Args_23;
        next_value_of_STATE_VARIABLE_ArgsToSet_0_3 = STATE_VARIABLE_ArgsToSet_27_27;
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
    MR_Word OrElseGoals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InnerDI_20 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 0))));
    MR_Word InnerUO_21 = ((MR_Word) ((MR_hl_field(0, Inner_2, (MR_Integer) 1))));
    MR_Word RenameVars_22;
    MR_Word RenameMap_23;
    MR_Word OrElseGoal_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
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
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (InnerUO_21));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (InnerDI_20));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
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
      MR_hl_field(0, OrElseInner_27, 0) = ((MR_Box) (OrElseInnerDI_25));
      MR_hl_field(0, OrElseInner_27, 1) = ((MR_Box) (OrElseInnerUO_26));
    }
    hlds__quantification__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_111_114_95_101_108_115_101_95_105_110_110_101_114_95_118_97_114_115_95_95_91_49_93_95_50_7_p_2(Inner_2, OrElseGoals0_16, &OrElseGoalsTail_28, &OrElseInnersTail_29, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseInner_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseInnersTail_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseGoal_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseGoalsTail_28));
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
  MR_Word OutsideVars_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
  MR_Word LambdaOutsideVars_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
  MR_Word QuantVars0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
  MR_Word QVars_23;
  MR_Word RenameVars1_24;
  MR_Word RenameVars2_25;
  MR_Word RenameVars_26;
  MR_Word QuantVars_52;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_105;

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
    MR_Word Vars_85;
    MR_Word Warnings0_86;
    MR_Word Warnings_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
    Vars_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RenameVars_26);
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 0))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 1))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 2))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 4))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 5))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 6))));
    Warnings0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, (MR_Integer) 7))));
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Vars_85));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (Context_27));
    }
    {
      Warnings_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Warnings_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Warnings_87, 1) = ((MR_Box) (Warnings0_86));
    }
    {
      STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 1) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_Info_55_55, 7) = ((MR_Box) (Warnings_87));
    }
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
        switch (((MR_Integer) ((MR_hl_field(3, Reason0_12, (MR_Integer) 0))))) {
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
              MR_Word Comp_30 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 1))));
              MR_Word Run_31 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 2))));
              MR_Word IO_32 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 3))));
              MR_Word Mut_33 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 4))));
              MR_Word TraceVars0_34 = ((MR_Word) ((MR_hl_field(3, Reason0_12, (MR_Integer) 5))));
              MR_Word TraceVars_35;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, RenameMap_28, TraceVars0_34, &TraceVars_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *Reason_13 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Comp_30));
                MR_hl_field(3, base, 2) = ((MR_Box) (Run_31));
                MR_hl_field(3, base, 3) = ((MR_Box) (IO_32));
                MR_hl_field(3, base, 4) = ((MR_Box) (Mut_33));
                MR_hl_field(3, base, 5) = ((MR_Box) (TraceVars_35));
              }
            }
            break;
        }
        break;
    }
  }
  hlds__quantification__update_seen_vars_3_p_0(QVars_23, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_62_62);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Vars_17, QuantVars0_22, &QuantVars_52);
  Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
  succeeded = (((MR_Word) QuantVars_52) == ((MR_Word) Var_105));
  if (succeeded)
    *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_62_62;
  else
  {
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 3))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 4))));
    MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 5))));
    MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 6))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_54 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 2) = ((MR_Box) (QuantVars_52));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_117));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_118));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_120));
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
hlds__quantification__set_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Q_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

static void MR_CALL 
hlds__quantification__set_quant_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Q_7 = STATE_VARIABLE_Q_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Q_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
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
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Q_7 = STATE_VARIABLE_Q_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Q_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
hlds__quantification__set_outside_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Q_0_6,
  MR_Word * STATE_VARIABLE_Q_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Q_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Q_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

static void MR_CALL 
hlds__quantification__get_nonlocals_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 3))));
}

static void MR_CALL 
hlds__quantification__get_quant_vars_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 2))));
}

static void MR_CALL 
hlds__quantification__get_lambda_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 1))));
}

static void MR_CALL 
hlds__quantification__get_outside_2_p_0(
  MR_Word Q_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Q_3, (MR_Integer) 0))));
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
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  Vars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OverlapVars_5);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
  Warnings0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Vars_8));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Context_6));
  }
  {
    Warnings_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Warnings_10, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Warnings_10, 1) = ((MR_Box) (Warnings0_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (Warnings_10));
  }
}

static void MR_CALL 
hlds__quantification__update_seen_vars_3_p_0(
  MR_Word NewVars_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word SeenVars0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word SeenVars_7;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars0_6, NewVars_4, &SeenVars_7);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (SeenVars_7));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_25));
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
  MR_Word SeenVars0_16;
  MR_Word SeenVars_17;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;

  GoalVars_6 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_4);
  SeenVars0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 4))));
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenVars0_16, GoalVars_6, &SeenVars_17);
  OutsideVars_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
  LambdaOutsideVars_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 5))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 7))));
  {
    STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (OutsideVars_7));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (LambdaOutsideVars_8));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (SeenVars_17));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (Var_31));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (Var_32));
    MR_hl_field(0, STATE_VARIABLE_Info_14_14, 7) = ((MR_Box) (Var_33));
  }
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_6, OutsideVars_7, &NonLocals1_9);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_6, LambdaOutsideVars_8, &NonLocals2_10);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_9, NonLocals2_10, &NonLocals_11);
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 0))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 1))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 4))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 5))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 6))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_14_14, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 3) = ((MR_Box) (NonLocals_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_55));
  }
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
