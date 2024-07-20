/*
** Automatically generated from `polymorphism_type_class_info.m'
** by the Mercury compiler,
** version rotd-2024-07-20
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


// :- module check_hlds.polymorphism_type_class_info.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_type_class_info__init
ENDINIT
*/

#include "check_hlds.polymorphism_type_class_info.mih"


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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism_type_class_info__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_record_type_info_locns_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_record_type_info_locns_0[2];

static const MR_Integer check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_record_type_info_locns_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_tci_var_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_tci_var_kind_0[2];

static const MR_Integer check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_tci_var_kind_0[2];

static void MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__929__1_4_p_0(
  MR_Word Location_18,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__589__1_2_p_0(
  MR_Word BaseConsId_77,
  MR_Word BaseConsId1_85);

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__is_unseen_or_in_type_info_tvar_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word TypeVar_4);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word InstanceId_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ConstInstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_96,
  MR_Word * STATE_VARIABLE_Info_97);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0(
  MR_Word ExtraHeadVar_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurIndex_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_7[2][6];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_8[1][8];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_9[1][10];




static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row   7 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_type_class_info_scalar_common_1[10])))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_7[1])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_6[2][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_type_class_info_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_type_class_info_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_type_class_info_scalar_common_1[7])))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_8[0])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__type_ctor_info_record_type_info_locns_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism_type_class_info__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism_type_class_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism_type_class_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_0 = {
  (MR_String) "do_record_type_info_locns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_1 = {
  (MR_String) "do_not_record_type_info_locns",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_0,
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_1,
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_record_type_info_locns_0_0
};

static const MR_Integer check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_record_type_info_locns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__type_ctor_info_record_type_info_locns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_class_info",
  (MR_String) "record_type_info_locns",
  { check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_record_type_info_locns_0 },
  { check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_record_type_info_locns_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_record_type_info_locns_0,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_0 = {
  (MR_String) "base_typeclass_info_kind",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_1 = {
  (MR_String) "typeclass_info_kind",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_functor_desc_tci_var_kind_0_1
};

static const MR_Integer check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_tci_var_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__type_ctor_info_tci_var_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_type_class_info",
  (MR_String) "tci_var_kind",
  { check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_tci_var_kind_0 },
  { check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_tci_var_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_tci_var_kind_0,

};

static void MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__929__1_4_p_0(
  MR_Word Location_18,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(LambdaHeadVar__1_26, Location_18, LambdaHeadVar__2_27, LambdaHeadVar__3_28);
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__589__1_2_p_0(
  MR_Word BaseConsId_77,
  MR_Word BaseConsId1_85)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(BaseConsId1_85, BaseConsId_77);
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(
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
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0(
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
check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__is_unseen_or_in_type_info_tvar_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word TypeVar_4)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn_5;

  succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps_3, TypeVar_4, &TypeInfoLocn_5);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) TypeInfoLocn_5)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word RttiVarMaps_13;
  MR_Word TypeInfoVar0_14;
  MR_Word TypeClassInfoVar_15;
  MR_Integer Index_16;
  MR_Word Var_24;
  MR_Word Var_25;

  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_22, &RttiVarMaps_13);
  succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(OldRttiVarMaps_8, TVar_10, &Var_24);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeInfoVar0_14 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps_13, TVar_10, &Var_25);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
          Index_16 = ((MR_Integer) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word NewGoals_17;
    MR_Word TypeInfoVar1_18;
    MR_Word AssignGoal_19;
    MR_Word Var_28;

    check_hlds__polymorphism_type_info__polymorphism_extract_type_info_8_p_0(TVar_10, TypeClassInfoVar_15, Index_16, Context_9, &NewGoals_17, &TypeInfoVar1_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    hlds__make_goal__make_complicated_unify_assign_3_p_0(TypeInfoVar0_14, TypeInfoVar1_18, &AssignGoal_19);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (AssignGoal_19));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_20));
    }
    *STATE_VARIABLE_ExtraGoals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NewGoals_17, Var_28);
  }
  else
  {
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    *STATE_VARIABLE_ExtraGoals_21 = STATE_VARIABLE_ExtraGoals_0_20;
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5)
{
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word MCA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  if ((MCA_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ConstOrVarArg_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
    }
  else
  {
    MR_Word ConstArg_6 = ((MR_Word) ((MR_hl_field(1, MCA_4, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *ConstOrVarArg_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ConstArg_6));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeClassInfoVar_8;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word Var_12;
  MR_Box conv2_STATE_VARIABLE_Info_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_8[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (RecordLocns_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_12, Constraints_7, ExtraHeadVars_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ExtraGoals_21;
  MR_Word conv5_STATE_VARIABLE_Info_23;

  check_hlds__polymorphism_type_class_info__polymorphism_maybe_extract_type_info_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ExtraGoals_21, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ExtraGoals_21));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeClassInfoVar_8;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0(
  MR_Word ExistentialConstraints_7,
  MR_Word Context_8,
  MR_Word * ExtraTypeClassVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word OldRttiVarMaps_12;
  MR_Word RttiVarMaps0_13;
  MR_Word RttiVarMaps_14;
  MR_Word TVars0_15;
  MR_Word TVars_16;
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word Var_23;
  MR_Box conv2_STATE_VARIABLE_Info_20_20;
  MR_Box conv4_RttiVarMaps_14;
  MR_Box conv8_ExtraGoals_10;
  MR_Box conv7_STATE_VARIABLE_Info_18;

  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_17, &OldRttiVarMaps_12);
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_6[1]), ExistentialConstraints_7, ExtraTypeClassVars_9, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_20_20);
  STATE_VARIABLE_Info_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20_20));
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_20_20, &RttiVarMaps0_13);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[4]), *ExtraTypeClassVars_9, ((MR_Box) (RttiVarMaps0_13)), &conv4_RttiVarMaps_14);
  RttiVarMaps_14 = ((MR_Word) (conv4_RttiVarMaps_14));
  check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_14, STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_22_22);
  parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ExistentialConstraints_7, &TVars0_15);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), TVars0_15, &TVars_16);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_9[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_3));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (OldRttiVarMaps_12));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Context_8));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_23, TVars_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_ExtraGoals_10, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv7_STATE_VARIABLE_Info_18);
  *ExtraGoals_10 = ((MR_Word) (conv8_ExtraGoals_10));
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv7_STATE_VARIABLE_Info_18));
}

void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(
  MR_Word Constraints_8,
  MR_Word ExistQVars_9,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(Constraints_8, Context_10, TypeClassInfoVarsMCAs_11, ExtraGoals_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Constraints_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(Constraints_8, (MR_Word) ((MR_Unsigned) 0U), Context_10, TypeClassInfoVarsMCAs_11, ExtraGoals_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  if (((MR_tag((MR_Word) Proof_12)) == (MR_Integer) 0))
  {
    MR_Word InstanceNum_19 = ((MR_Word) ((MR_hl_field(0, Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, InstanceNum_19, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
  else
  {
    MR_Word SubClassConstraint_18 = ((MR_Word) ((MR_hl_field(1, Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, SubClassConstraint_18, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word OldTypeClassInfoVar_17;
  MR_Word RttiVarMaps0_16;

  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_22, &RttiVarMaps0_16);
  succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_16, Constraint_9, &OldTypeClassInfoVar_17);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeClassInfoVarMCA_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OldTypeClassInfoVar_17));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Word Proof_20;
    MR_Word ProofMap_19;
    MR_Box conv0_Proof_20;

    check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_22, &ProofMap_19);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_19, ((MR_Box) (Constraint_9)), &conv0_Proof_20);
    if (succeeded)
    {
      Proof_20 = ((MR_Word) (conv0_Proof_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if (((MR_tag((MR_Word) Proof_20)) == (MR_Integer) 0))
      {
        MR_Word InstanceNum_35 = ((MR_Word) ((MR_hl_field(0, Proof_20, (MR_Integer) 0))));

        check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, InstanceNum_35, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
      }
      else
      {
        MR_Word SubClassConstraint_34 = ((MR_Word) ((MR_hl_field(1, Proof_20, (MR_Integer) 0))));

        check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, SubClassConstraint_34, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
      }
    else
    {
      MR_Word RttiVarMaps_21;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word RttiVarMaps0_30;
      MR_Word TypeClassInfoVar_31;

      check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_9, &TypeClassInfoVar_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_27, &RttiVarMaps0_30);
      hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_31, RttiVarMaps0_30, &RttiVarMaps_21);
      check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_21, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_13 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfoVar_31));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word InstanceId_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Integer InstanceNum_18 = (MR_Integer) (InstanceId_12);
  MR_Word ConstStructDb0_24;
  MR_Word ConstInstanceId_25;
  MR_Integer InstanceIdConstNum_26;

  check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_34, &ConstStructDb0_24);
  {
    ConstInstanceId_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConstInstanceId_25, 0) = ((MR_Box) (InstanceNum_18));
    MR_hl_field(0, ConstInstanceId_25, 1) = ((MR_Box) (Constraint_10));
    MR_hl_field(0, ConstInstanceId_25, 2) = ((MR_Box) (Seen_11));
  }
  succeeded = hlds__const_struct__search_for_constant_instance_3_p_0(ConstStructDb0_24, ConstInstanceId_25, &InstanceIdConstNum_26);
  if (succeeded)
  {
    MR_Word TypeClassInfoVar_27;
    MR_Word Var_81;
    MR_Word Var_82;

    check_hlds__polymorphism_type_class_info__materialize_typeclass_info_var_6_p_0(Constraint_10, InstanceIdConstNum_26, &TypeClassInfoVar_27, Goals_16, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (InstanceIdConstNum_26));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeClassInfoVarMCA_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfoVar_27));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
    }
  }
  else
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(ConstInstanceId_25, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeClassInfoVarMCA_14;
    MR_Word TypeClassInfoVarsMCAs_15;
    MR_Word Context_18;
    MR_Word HeadGoals_19;
    MR_Word TailGoals_20;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word OldTypeClassInfoVar_27;
    MR_Word RttiVarMaps0_26;

    Context_18 = mercury__term_context__dummy_context_0_f_0();
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_5, &RttiVarMaps0_26);
    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_26, Constraint_11, &OldTypeClassInfoVar_27);
    if (succeeded)
    {
      {
        TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfoVarMCA_14, 0) = ((MR_Box) (OldTypeClassInfoVar_27));
        MR_hl_field(0, TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Proof_30;
      MR_Word ProofMap_29;
      MR_Box conv0_Proof_30;

      check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_5, &ProofMap_29);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_29, ((MR_Box) (Constraint_11)), &conv0_Proof_30);
      if (succeeded)
      {
        Proof_30 = ((MR_Word) (conv0_Proof_30));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        if (((MR_tag((MR_Word) Proof_30)) == (MR_Integer) 0))
        {
          MR_Word InstanceNum_41 = ((MR_Word) ((MR_hl_field(0, Proof_30, (MR_Integer) 0))));

          check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), InstanceNum_41, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
        }
        else
        {
          MR_Word SubClassConstraint_40 = ((MR_Word) ((MR_hl_field(1, Proof_30, (MR_Integer) 0))));

          check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), SubClassConstraint_40, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
        }
      else
      {
        MR_Word RttiVarMaps_31;
        MR_Word STATE_VARIABLE_Info_27_34;
        MR_Word RttiVarMaps0_36;
        MR_Word TypeClassInfoVar_37;

        check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_11, &TypeClassInfoVar_37, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_34);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_34, &RttiVarMaps0_36);
        hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_37, RttiVarMaps0_36, &RttiVarMaps_31);
        check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_Info_27_34, &STATE_VARIABLE_Info_24_24);
        {
          TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeClassInfoVarMCA_14, 0) = ((MR_Box) (TypeClassInfoVar_37));
          MR_hl_field(0, TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(Constraints_12, &TypeClassInfoVarsMCAs_15, &TailGoals_20, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfoVarMCA_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_15));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_19, TailGoals_20);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word ProofMap_16;
  MR_Word TVarSet0_17;
  MR_Word SuperClasses0_18;
  MR_Word ClassVars0_19;
  MR_Word ClassTVarSet_20;
  MR_Word TVarSet1_21;
  MR_Word Renaming_22;
  MR_Word ClassVars_23;
  MR_Word TypeSubst_24;
  MR_Word SuperClasses1_25;
  MR_Word SuperClasses_26;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Info_31_31;

  check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_27, &ProofMap_16);
  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_27, &TVarSet0_17);
  ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 1))));
  ClassVars0_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 3))));
  SuperClasses0_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 4))));
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_17, ClassTVarSet_20, &TVarSet1_21, &Renaming_22);
  check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TVarSet1_21, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_29_29);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_22, ClassVars0_19, &ClassVars_23);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_23, InstanceTypes_10, &TypeSubst_24);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_22, SuperClasses0_18, &SuperClasses1_25);
  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TypeSubst_24, SuperClasses1_25, &SuperClasses_26);
  check_hlds__polymorphism_info__poly_info_set_proof_map_3_p_0(SuperClassProofMap_11, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30);
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(SuperClasses_26, SuperClassTypeClassInfoVarsMCAs_13, SuperClassGoals_14, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
  check_hlds__polymorphism_info__poly_info_set_proof_map_3_p_0(ProofMap_16, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28);
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__589__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_ConstOrVarArg_5;

  check_hlds__polymorphism_type_class_info__make_const_or_var_arg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ConstOrVarArg_5);
  *wrapper_arg_2 = ((MR_Box) (conv3_ConstOrVarArg_5));
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ConstInstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_96,
  MR_Word * STATE_VARIABLE_Info_97)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14;
  MR_Word InstanceTable_15;
  MR_Word ClassTable_16;
  MR_Word TypeVarSet_17;
  MR_Word ProofMap0_18;
  MR_Integer InstanceNum_19;
  MR_Word Constraint_20;
  MR_Word Seen_21;
  MR_Word ClassName_22;
  MR_Word ConstrainedTypes_23;
  MR_Integer ClassArity_24;
  MR_Word ClassId_25;
  MR_Word InstanceList_26;
  MR_Word ProofInstanceDefn_27;
  MR_Word InstanceTVarset_30;
  MR_Word InstanceTypes_32;
  MR_Word InstanceConstraints_33;
  MR_Word InstanceProofMap_35;
  MR_Word KindMap_39;
  MR_Word InstanceTvars_40;
  MR_Word UnconstrainedTvars_41;
  MR_Word Renaming_43;
  MR_Word RenamedInstanceTypes_44;
  MR_Word InstanceSubst_45;
  MR_Word RenamedInstanceConstraints_46;
  MR_Word ActualInstanceConstraints0_47;
  MR_Word ActualInstanceConstraints_48;
  MR_Word RenamedInstanceProofMap_49;
  MR_Word ActualInstanceProofMap_50;
  MR_Word RenamedUnconstrainedTvars_51;
  MR_Word RenamedKindMap_52;
  MR_Word ActualUnconstrainedTypes_53;
  MR_Word ProofMap_54;
  MR_Word InitialVarMapsSnapshot_55;
  MR_Word ArgTypeInfoVarsMCAs_56;
  MR_Word TypeInfoGoals_57;
  MR_Word ArgTypeClassInfoVarsMCAs_58;
  MR_Word InstanceConstraintGoals_59;
  MR_Word ArgUnconstrainedTypeInfoVarsMCAs_60;
  MR_Word UnconstrainedTypeInfoGoals_61;
  MR_Word ClassDefn_62;
  MR_Word ArgSuperClassVarsMCAs_63;
  MR_Word SuperClassGoals_64;
  MR_Word PrevGoals_65;
  MR_Word ArgVarsMCAs_66;
  MR_Word ArgCOVAs_67;
  MR_Word ConstraintClassName_68;
  MR_Word ConstraintArgTypes_69;
  MR_Word TypeClassInfoMap0_70;
  MR_Word STATE_VARIABLE_Info_99_99;
  MR_Word STATE_VARIABLE_Info_100_100;
  MR_Word STATE_VARIABLE_Info_101_101;
  MR_Word STATE_VARIABLE_Info_102_102;
  MR_Word STATE_VARIABLE_Info_103_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word STATE_VARIABLE_Info_112_112;
  MR_Box conv0_InstanceList_26;
  MR_Box conv1_ProofInstanceDefn_27;
  MR_Word _NewTVarset_42;
  MR_Box conv2_ClassDefn_62;
  MR_Word OldTypeClassInfoVarMCA0_75;
  MR_Word TypeInfo_146_146;
  MR_Word TypeCtorInfo_147_147;
  MR_Word TypeInfo_148_148;
  MR_Word ClassNameMap0_71;
  MR_Word OldEntry0_72;
  MR_Word ArgsMap0_74;
  MR_Box conv4_ClassNameMap0_71;
  MR_Box conv5_OldEntry0_72;
  MR_Box conv6_OldTypeClassInfoVarMCA0_75;
  MR_Integer TypeClassInfoConstArgNum_93;
  MR_Word TypeClassInfoConstArg_92;
  MR_Word Var_122;

  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_96, &ModuleInfo_14);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_15);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_16);
  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_96, &TypeVarSet_17);
  check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_96, &ProofMap0_18);
  InstanceNum_19 = ((MR_Integer) ((MR_hl_field(0, ConstInstanceId_8, (MR_Integer) 0))));
  Constraint_20 = ((MR_Word) ((MR_hl_field(0, ConstInstanceId_8, (MR_Integer) 1))));
  Seen_21 = ((MR_Word) ((MR_hl_field(0, ConstInstanceId_8, (MR_Integer) 2))));
  ClassName_22 = ((MR_Word) ((MR_hl_field(0, Constraint_20, (MR_Integer) 0))));
  ConstrainedTypes_23 = ((MR_Word) ((MR_hl_field(0, Constraint_20, (MR_Integer) 1))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypes_23, &ClassArity_24);
  {
    ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_25, 0) = ((MR_Box) (ClassName_22));
    MR_hl_field(0, ClassId_25, 1) = ((MR_Box) (ClassArity_24));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[3]), InstanceTable_15, ((MR_Box) (ClassId_25)), &conv0_InstanceList_26);
  InstanceList_26 = ((MR_Word) (conv0_InstanceList_26));
  mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_26, InstanceNum_19, &conv1_ProofInstanceDefn_27);
  ProofInstanceDefn_27 = ((MR_Word) (conv1_ProofInstanceDefn_27));
  InstanceTVarset_30 = ((MR_Word) ((MR_hl_field(0, ProofInstanceDefn_27, (MR_Integer) 2))));
  InstanceTypes_32 = ((MR_Word) ((MR_hl_field(0, ProofInstanceDefn_27, (MR_Integer) 4))));
  InstanceConstraints_33 = ((MR_Word) ((MR_hl_field(0, ProofInstanceDefn_27, (MR_Integer) 5))));
  InstanceProofMap_35 = ((MR_Word) ((MR_hl_field(0, ProofInstanceDefn_27, (MR_Integer) 7))));
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_39);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_32, &InstanceTvars_40);
  parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTvars_40, InstanceConstraints_33, &UnconstrainedTvars_41);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet_17, InstanceTVarset_30, &_NewTVarset_42, &Renaming_43);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_43, InstanceTypes_32, &RenamedInstanceTypes_44);
  parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(RenamedInstanceTypes_44, ConstrainedTypes_23, &InstanceSubst_45);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_43, InstanceConstraints_33, &RenamedInstanceConstraints_46);
  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(InstanceSubst_45, RenamedInstanceConstraints_46, &ActualInstanceConstraints0_47);
  mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ActualInstanceConstraints0_47, Seen_21, &ActualInstanceConstraints_48);
  check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(Renaming_43, InstanceProofMap_35, &RenamedInstanceProofMap_49);
  check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(InstanceSubst_45, RenamedInstanceProofMap_49, &ActualInstanceProofMap_50);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_43, UnconstrainedTvars_41, &RenamedUnconstrainedTvars_51);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_43, KindMap_39, &RenamedKindMap_52);
  parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap_52, InstanceSubst_45, RenamedUnconstrainedTvars_51, &ActualUnconstrainedTypes_53);
  mercury__map__overlay_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_18, ActualInstanceProofMap_50, &ProofMap_54);
  check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info_from_instance", &InitialVarMapsSnapshot_55, STATE_VARIABLE_Info_0_96, &STATE_VARIABLE_Info_99_99);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ConstrainedTypes_23, Context_10, &ArgTypeInfoVarsMCAs_56, &TypeInfoGoals_57, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(ActualInstanceConstraints_48, Seen_21, Context_10, &ArgTypeClassInfoVarsMCAs_58, &InstanceConstraintGoals_59, STATE_VARIABLE_Info_100_100, &STATE_VARIABLE_Info_101_101);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedTypes_53, Context_10, &ArgUnconstrainedTypeInfoVarsMCAs_60, &UnconstrainedTypeInfoGoals_61, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_16, ((MR_Box) (ClassId_25)), &conv2_ClassDefn_62);
  ClassDefn_62 = ((MR_Word) (conv2_ClassDefn_62));
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(ClassDefn_62, ConstrainedTypes_23, ProofMap_54, &ArgSuperClassVarsMCAs_63, &SuperClassGoals_64, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_103_103);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InstanceConstraintGoals_59, SuperClassGoals_64);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_57, Var_105);
  PrevGoals_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnconstrainedTypeInfoGoals_61, Var_104);
  Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgSuperClassVarsMCAs_63, ArgTypeInfoVarsMCAs_56);
  Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgTypeClassInfoVarsMCAs_58, Var_107);
  ArgVarsMCAs_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgUnconstrainedTypeInfoVarsMCAs_60, Var_106);
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[3]), ArgVarsMCAs_66, &ArgCOVAs_67);
  ConstraintClassName_68 = ((MR_Word) ((MR_hl_field(0, Constraint_20, (MR_Integer) 0))));
  ConstraintArgTypes_69 = ((MR_Word) ((MR_hl_field(0, Constraint_20, (MR_Integer) 1))));
  check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_103_103, &TypeClassInfoMap0_70);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), TypeClassInfoMap0_70, ((MR_Box) (ConstraintClassName_68)), &conv4_ClassNameMap0_71);
  if (succeeded)
  {
    ClassNameMap0_71 = ((MR_Word) (conv4_ClassNameMap0_71));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_146_146 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]);
    TypeCtorInfo_147_147 = (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0);
    succeeded = mercury__map__search_3_p_0(TypeInfo_146_146, TypeCtorInfo_147_147, ClassNameMap0_71, ((MR_Box) (ConstraintArgTypes_69)), &conv5_OldEntry0_72);
    if (succeeded)
    {
      OldEntry0_72 = ((MR_Word) (conv5_OldEntry0_72));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      ArgsMap0_74 = ((MR_Word) ((MR_hl_field(0, OldEntry0_72, (MR_Integer) 1))));
      TypeInfo_148_148 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_148_148, (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgsMap0_74, ((MR_Box) (ArgCOVAs_67)), &conv6_OldTypeClassInfoVarMCA0_75);
      if (succeeded)
      {
        OldTypeClassInfoVarMCA0_75 = ((MR_Word) (conv6_OldTypeClassInfoVarMCA0_75));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Integer NumReuses_76;
    MR_Word STATE_VARIABLE_Info_110_110;
    MR_Integer Var_111;

    *TypeClassInfoVarMCA_11 = OldTypeClassInfoVarMCA0_75;
    *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info", InitialVarMapsSnapshot_55, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_110_110);
    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_110_110, &NumReuses_76);
    Var_111 = (MR_Integer) ((MR_Unsigned) NumReuses_76 + (MR_Unsigned) 2);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_111, STATE_VARIABLE_Info_110_110, &STATE_VARIABLE_Info_112_112);
  }
  else
  {
    MR_Word BaseConsId_77;
    MR_Word BaseVar_78;
    MR_Word BaseGoals_79;
    MR_Word TypeClassInfoVar_80;
    MR_Word TypeClassInfoMCA_81;
    MR_Word TypeClassInfoMap1_82;
    MR_Word TypeClassInfoMap_90;
    MR_Word Var_114 = (MR_Word) (InstanceNum_19);
    MR_Word STATE_VARIABLE_Info_115_115;
    MR_Word Var_116;
    MR_Word STATE_VARIABLE_Info_117_117;
    MR_Word ClassNameMap1_83;
    MR_Box conv7_ClassNameMap1_83;

    BaseConsId_77 = hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(InstanceTable_15, Constraint_20, Var_114, InstanceTypes_32);
    check_hlds__polymorphism_type_class_info__materialize_base_typeclass_info_var_6_p_0(Constraint_20, BaseConsId_77, &BaseVar_78, &BaseGoals_79, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_115_115);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_79, PrevGoals_65);
    check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0(Constraint_20, BaseVar_78, BaseConsId_77, ArgVarsMCAs_66, InitialVarMapsSnapshot_55, &TypeClassInfoVar_80, &TypeClassInfoMCA_81, Var_116, Goals_12, STATE_VARIABLE_Info_115_115, &STATE_VARIABLE_Info_117_117);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeClassInfoVarMCA_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfoVar_80));
      MR_hl_field(0, base, 1) = ((MR_Box) (TypeClassInfoMCA_81));
    }
    check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_117_117, &TypeClassInfoMap1_82);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), TypeClassInfoMap1_82, ((MR_Box) (ConstraintClassName_68)), &conv7_ClassNameMap1_83);
    if (succeeded)
    {
      ClassNameMap1_83 = ((MR_Word) (conv7_ClassNameMap1_83));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldEntry1_84;
      MR_Box conv8_OldEntry1_84;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ClassNameMap1_83, ((MR_Box) (ConstraintArgTypes_69)), &conv8_OldEntry1_84);
      if (succeeded)
      {
        OldEntry1_84 = ((MR_Word) (conv8_OldEntry1_84));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word BaseConsId1_85 = ((MR_Word) ((MR_hl_field(0, OldEntry1_84, (MR_Integer) 0))));
        MR_Word ArgsMap1_86 = ((MR_Word) ((MR_hl_field(0, OldEntry1_84, (MR_Integer) 1))));
        MR_Word ArgsMap_87;
        MR_Word Entry_88;
        MR_Word ClassNameMap_89;
        MR_Word Var_118;

        {
          Var_118 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_118, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[2]));
          MR_hl_field(0, Var_118, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2));
          MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_118, 3) = ((MR_Box) (BaseConsId_77));
          MR_hl_field(0, Var_118, 4) = ((MR_Box) (BaseConsId1_85));
        }
        mercury__require__expect_3_p_0(Var_118, (MR_String) "predicate \140check_hlds.polymorphism_type_class_info.do_make_typeclass_info_from_instance\'/7", (MR_String) "BaseConsId1 != BaseConsId");
        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_67)), ((MR_Box) (*TypeClassInfoVarMCA_11)), ArgsMap1_86, &ArgsMap_87);
        {
          Entry_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_88, 0) = ((MR_Box) (BaseConsId_77));
          MR_hl_field(0, Entry_88, 1) = ((MR_Box) (ArgsMap_87));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_69)), ((MR_Box) (Entry_88)), ClassNameMap1_83, &ClassNameMap_89);
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_68)), ((MR_Box) (ClassNameMap_89)), TypeClassInfoMap1_82, &TypeClassInfoMap_90);
      }
      else
      {
        MR_Word ArgsMap_124;
        MR_Word Entry_125;
        MR_Word ClassNameMap_126;

        ArgsMap_124 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_67)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
        {
          Entry_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_125, 0) = ((MR_Box) (BaseConsId_77));
          MR_hl_field(0, Entry_125, 1) = ((MR_Box) (ArgsMap_124));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_69)), ((MR_Box) (Entry_125)), ClassNameMap1_83, &ClassNameMap_126);
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_68)), ((MR_Box) (ClassNameMap_126)), TypeClassInfoMap1_82, &TypeClassInfoMap_90);
      }
    }
    else
    {
      MR_Word ArgsMap_127;
      MR_Word Entry_128;
      MR_Word ClassNameMap_129;

      ArgsMap_127 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_67)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
      {
        Entry_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entry_128, 0) = ((MR_Box) (BaseConsId_77));
        MR_hl_field(0, Entry_128, 1) = ((MR_Box) (ArgsMap_127));
      }
      ClassNameMap_129 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_69)), ((MR_Box) (Entry_128)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_68)), ((MR_Box) (ClassNameMap_129)), TypeClassInfoMap1_82, &TypeClassInfoMap_90);
    }
    check_hlds__polymorphism_info__poly_info_set_typeclass_info_map_3_p_0(TypeClassInfoMap_90, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_112_112);
  }
  Var_122 = ((MR_Word) ((MR_hl_field(0, *TypeClassInfoVarMCA_11, (MR_Integer) 1))));
  succeeded = (Var_122 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeClassInfoConstArg_92 = ((MR_Word) ((MR_hl_field(1, Var_122, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) TypeClassInfoConstArg_92)) == (MR_Integer) 0);
    if (succeeded)
      TypeClassInfoConstArgNum_93 = ((MR_Integer) ((MR_hl_field(0, TypeClassInfoConstArg_92, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ConstStructDb1_94;
    MR_Word ConstStructDb_95;

    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_112_112, &ConstStructDb1_94);
    hlds__const_struct__insert_constant_instance_4_p_0(ConstInstanceId_8, TypeClassInfoConstArgNum_93, ConstStructDb1_94, &ConstStructDb_95);
    check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_95, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_97);
  }
  else
    *STATE_VARIABLE_Info_97 = STATE_VARIABLE_Info_112_112;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
{
  MR_bool succeeded;
  MR_Word TypeClassInfoVar_15;
  MR_Word MaybeTCIConstArg_16;
  MR_Word SubClassName_24 = ((MR_Word) ((MR_hl_field(0, SubClassConstraint_12, (MR_Integer) 0))));
  MR_Word SubClassTypes_25 = ((MR_Word) ((MR_hl_field(0, SubClassConstraint_12, (MR_Integer) 1))));
  MR_Integer SubClassArity_26;
  MR_Word SubClassId_27;
  MR_Word SubClassVarMCA_28;
  MR_Word SubClassVarGoals_29;
  MR_Word SubClassVar_30;
  MR_Word SubClassMCA_31;
  MR_Word ModuleInfo_32;
  MR_Word ClassTable_33;
  MR_Word SubClassDefn_34;
  MR_Word SubTypeSubst_35;
  MR_Word SuperClasses_36;
  MR_Integer SuperClassIndex_38;
  MR_Word STATE_VARIABLE_Info_113_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Box conv0_SubClassDefn_34;
  MR_Integer SuperClassIndexPrime_37;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubClassTypes_25, &SubClassArity_26);
  {
    SubClassId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubClassId_27, 0) = ((MR_Box) (SubClassName_24));
    MR_hl_field(0, SubClassId_27, 1) = ((MR_Box) (SubClassArity_26));
  }
  check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(SubClassConstraint_12, Seen_11, Context_14, &SubClassVarMCA_28, &SubClassVarGoals_29, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_113_113);
  SubClassVar_30 = ((MR_Word) ((MR_hl_field(0, SubClassVarMCA_28, (MR_Integer) 0))));
  SubClassMCA_31 = ((MR_Word) ((MR_hl_field(0, SubClassVarMCA_28, (MR_Integer) 1))));
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_113_113, &ModuleInfo_32);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_32, &ClassTable_33);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_33, ((MR_Box) (SubClassId_27)), &conv0_SubClassDefn_34);
  SubClassDefn_34 = ((MR_Word) (conv0_SubClassDefn_34));
  Var_114 = ((MR_Word) ((MR_hl_field(0, SubClassDefn_34, (MR_Integer) 3))));
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_114, SubClassTypes_25, &SubTypeSubst_35);
  Var_115 = ((MR_Word) ((MR_hl_field(0, SubClassDefn_34, (MR_Integer) 4))));
  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(SubTypeSubst_35, Var_115, &SuperClasses_36);
  succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_36, ((MR_Box) (Constraint_10)), &SuperClassIndexPrime_37);
  if (succeeded)
    SuperClassIndex_38 = SuperClassIndexPrime_37;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_type_class_info.make_typeclass_info_from_subclass\'/9", (MR_String) "constraint not in constraint list");
      return;
    }
  if ((SubClassMCA_31 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IndexVar_65;
    MR_Word IndexGoals_66;
    MR_Word SuperClassGoal_67;
    MR_Word STATE_VARIABLE_Info_144_144;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word _TypeClassInfoVarType_64;

    check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_10, (MR_Integer) 1, &TypeClassInfoVar_15, &_TypeClassInfoVarType_64, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_144_144);
    check_hlds__polymorphism_info__get_poly_const_5_p_0(SuperClassIndex_38, &IndexVar_65, &IndexGoals_66, STATE_VARIABLE_Info_144_144, STATE_VARIABLE_Info_69);
    Var_147 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_158, 0) = ((MR_Box) (TypeClassInfoVar_15));
      MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (IndexVar_65));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_158));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) (SubClassVar_30));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_157));
    }
    Var_151 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Var_156 = mercury__term_context__dummy_context_0_f_0();
    hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_147, (MR_String) "superclass_from_typeclass_info", (MR_Word) ((MR_Unsigned) 0U), Var_150, Var_151, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_156, &SuperClassGoal_67);
    {
      Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_161, 0) = ((MR_Box) (SuperClassGoal_67));
      MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_66, Var_161);
    *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubClassVarGoals_29, Var_160);
    MaybeTCIConstArg_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SubClassConstArg_39 = ((MR_Word) ((MR_hl_field(1, SubClassMCA_31, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SubClassConstArg_39)) == (MR_Integer) 0))
    {
      MR_Integer SubClassConstNum_42 = ((MR_Integer) ((MR_hl_field(0, SubClassConstArg_39, (MR_Integer) 0))));
      MR_Word ConstStructDb_43;
      MR_Word SubClassConstStruct_44;
      MR_Word SubClassConsId_45;
      MR_Word SubClassArgs_46;
      MR_Word SelectedArg_62;
      MR_Integer SelectedConstNum_63;
      MR_Word TypeInfo_233_233;
      MR_Word TypeCtorInfo_234_234;
      MR_Word TypeCtorInfo_235_235;
      MR_Word BTCIArg_50;
      MR_Word OtherArgs_51;
      MR_Word BTCIConsId_52;
      MR_Integer SubInstanceNum_55;
      MR_Word InstanceTable_57;
      MR_Word SubInstanceDefns_58;
      MR_Word SubInstanceDefn_59;
      MR_Integer NumExtra_60;
      MR_Integer Index_61;
      MR_Word Var_240;
      MR_Box conv1_SubInstanceDefns_58;
      MR_Box conv2_SubInstanceDefn_59;
      MR_Box conv3_SelectedArg_62;

      check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_113_113, &ConstStructDb_43);
      hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_43, SubClassConstNum_42, &SubClassConstStruct_44);
      SubClassConsId_45 = ((MR_Word) ((MR_hl_field(0, SubClassConstStruct_44, (MR_Integer) 0))));
      SubClassArgs_46 = ((MR_Word) ((MR_hl_field(0, SubClassConstStruct_44, (MR_Integer) 1))));
      succeeded = (SubClassConsId_45 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (SubClassArgs_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BTCIArg_50 = ((MR_Word) ((MR_hl_field(1, SubClassArgs_46, (MR_Integer) 0))));
          OtherArgs_51 = ((MR_Word) ((MR_hl_field(1, SubClassArgs_46, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) BTCIArg_50)) == (MR_Integer) 1);
          if (succeeded)
          {
            BTCIConsId_52 = ((MR_Word) ((MR_hl_field(1, BTCIArg_50, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) BTCIConsId_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BTCIConsId_52, (MR_Integer) 0)))) == (MR_Integer) 11)));
            if (succeeded)
            {
              Var_240 = ((MR_Word) ((MR_hl_field(3, BTCIConsId_52, (MR_Integer) 2))));
              SubInstanceNum_55 = ((MR_Integer) ((MR_hl_field(3, BTCIConsId_52, (MR_Integer) 3))));
              succeeded = parse_tree__prog_data____Unify____class_id_0_0(SubClassId_27, Var_240);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_32, &InstanceTable_57);
                TypeInfo_233_233 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[3]);
                mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), TypeInfo_233_233, InstanceTable_57, ((MR_Box) (SubClassId_27)), &conv1_SubInstanceDefns_58);
                SubInstanceDefns_58 = ((MR_Word) (conv1_SubInstanceDefns_58));
                TypeCtorInfo_234_234 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_234_234, SubInstanceDefns_58, SubInstanceNum_55, &conv2_SubInstanceDefn_59);
                if (succeeded)
                {
                  SubInstanceDefn_59 = ((MR_Word) (conv2_SubInstanceDefn_59));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  hlds__hlds_class__num_extra_instance_args_2_p_0(SubInstanceDefn_59, &NumExtra_60);
                  Index_61 = (MR_Integer) ((MR_Unsigned) NumExtra_60 + (MR_Unsigned) SuperClassIndex_38);
                  TypeCtorInfo_235_235 = (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
                  mercury__list__det_index1_3_p_0(TypeCtorInfo_235_235, OtherArgs_51, Index_61, &conv3_SelectedArg_62);
                  SelectedArg_62 = ((MR_Word) (conv3_SelectedArg_62));
                  succeeded = ((MR_tag((MR_Word) SelectedArg_62)) == (MR_Integer) 0);
                  if (succeeded)
                    SelectedConstNum_63 = ((MR_Integer) ((MR_hl_field(0, SelectedArg_62, (MR_Integer) 0))));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        check_hlds__polymorphism_type_class_info__materialize_typeclass_info_var_6_p_0(Constraint_10, SelectedConstNum_63, &TypeClassInfoVar_15, Goals_17, STATE_VARIABLE_Info_113_113, STATE_VARIABLE_Info_69);
        {
          MaybeTCIConstArg_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTCIConstArg_16, 0) = ((MR_Box) (SelectedArg_62));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_type_class_info.make_typeclass_info_from_subclass\'/9", (MR_String) "unexpected typeclass info structure");
          return;
        }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_type_class_info.make_typeclass_info_from_subclass\'/9", (MR_String) "typeclass infos need a cell");
        return;
      }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__6_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfoVar_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTCIConstArg_16));
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeClassInfoVarMCA_20;
    MR_Word TypeClassInfoVarsMCAs_21;
    MR_Word HeadExtraGoals_24;
    MR_Word TailExtraGoals_25;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word OldTypeClassInfoVar_32;
    MR_Word RttiVarMaps0_31;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Constraint_15));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (HeadVar__2_2));
    }
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_7, &RttiVarMaps0_31);
    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_31, Constraint_15, &OldTypeClassInfoVar_32);
    if (succeeded)
    {
      {
        TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfoVarMCA_20, 0) = ((MR_Box) (OldTypeClassInfoVar_32));
        MR_hl_field(0, TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Proof_35;
      MR_Word ProofMap_34;
      MR_Box conv0_Proof_35;

      check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_7, &ProofMap_34);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_34, ((MR_Box) (Constraint_15)), &conv0_Proof_35);
      if (succeeded)
      {
        Proof_35 = ((MR_Word) (conv0_Proof_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(Constraint_15, Var_28, Proof_35, HeadVar__4_4, &TypeClassInfoVarMCA_20, &HeadExtraGoals_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
      else
      {
        MR_Word RttiVarMaps_36;
        MR_Word STATE_VARIABLE_Info_27_39;
        MR_Word RttiVarMaps0_41;
        MR_Word TypeClassInfoVar_42;

        check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_15, &TypeClassInfoVar_42, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_27_39);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_39, &RttiVarMaps0_41);
        hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_42, RttiVarMaps0_41, &RttiVarMaps_36);
        check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_36, STATE_VARIABLE_Info_27_39, &STATE_VARIABLE_Info_29_29);
        {
          TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeClassInfoVarMCA_20, 0) = ((MR_Box) (TypeClassInfoVar_42));
          MR_hl_field(0, TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(Constraints_16, HeadVar__2_2, HeadVar__4_4, &TypeClassInfoVarsMCAs_21, &TailExtraGoals_25, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfoVarMCA_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_21));
    }
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadExtraGoals_24, TailExtraGoals_25);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ConstStructVarMap0_12;
  MR_Word ConstArg_13;
  MR_Word Var_29;
  MR_Word OldVar_14;
  MR_Box conv0_OldVar_14;

  check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_0_27, &ConstStructVarMap0_12);
  Var_29 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
  {
    ConstArg_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ConstArg_13, 0) = ((MR_Box) (ConsId_8));
    MR_hl_field(1, ConstArg_13, 1) = ((MR_Box) (Var_29));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), ConstStructVarMap0_12, ((MR_Box) (ConstArg_13)), &conv0_OldVar_14);
  if (succeeded)
  {
    OldVar_14 = ((MR_Word) (conv0_OldVar_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_15;
    MR_Integer Var_30;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_27, &NumReuses_15);
    Var_30 = (MR_Integer) ((MR_Unsigned) NumReuses_15 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_30, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    *Var_9 = OldVar_14;
    *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word _VarType_16;
    MR_Word RHS_17;
    MR_Word Unification_18;
    MR_Word Unify_22;
    MR_Word NonLocals_23;
    MR_Word InstmapDelta_24;
    MR_Word GoalInfo_25;
    MR_Word Goal_26;
    MR_Word VarTable0_55;
    MR_Word RttiVarMaps0_56;
    MR_Word ClassName_57;
    MR_String ClassNameString_59;
    MR_String VarName_60;
    MR_Word VarEntry_61;
    MR_Word VarTable_62;
    MR_Word RttiVarMaps_63;

    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_27, &VarTable0_55);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_27, &RttiVarMaps0_56);
    ClassName_57 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 0))));
    ClassNameString_59 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_57);
    VarName_60 = mercury__string__f_43_43_2_f_0((MR_String) "BaseTypeClassInfo_for_", ClassNameString_59);
    _VarType_16 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    {
      VarEntry_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarEntry_61, 0) = ((MR_Box) (VarName_60));
      MR_hl_field(0, VarEntry_61, 1) = ((MR_Box) (_VarType_16));
      MR_hl_field(0, VarEntry_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(VarEntry_61, Var_9, VarTable0_55, &VarTable_62);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_56, &RttiVarMaps_63);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_62, RttiVarMaps_63, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    {
      RHS_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_17, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(1, RHS_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_18, 0) = ((MR_Box) (*Var_9));
      MR_hl_field(0, Unification_18, 1) = ((MR_Box) (ConsId_8));
      MR_hl_field(0, Unification_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_18, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_18, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Unification_18, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Unify_22, 0) = ((MR_Box) (*Var_9));
      MR_hl_field(1, Unify_22, 1) = ((MR_Box) (RHS_17));
      MR_hl_field(1, Unify_22, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0]));
      MR_hl_field(1, Unify_22, 3) = ((MR_Box) (Unification_18));
      MR_hl_field(1, Unify_22, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[8]));
    }
    NonLocals_23 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
    InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_24, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_25);
    {
      Goal_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_26, 0) = ((MR_Box) (Unify_22));
      MR_hl_field(0, Goal_26, 1) = ((MR_Box) (GoalInfo_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  MR_bool succeeded;
  MR_Word ConstStructDb0_23;
  MR_Word ConstStructEnabled_24;
  MR_Word VarConstArgs_25;

  check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_62, &ConstStructDb0_23);
  hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_23, &ConstStructEnabled_24);
  succeeded = (ConstStructEnabled_24 == (MR_Integer) 0);
  if (succeeded)
    succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgVarsMCAs_15, &VarConstArgs_25);
  if (succeeded)
  {
    MR_Integer NumReuses_26;
    MR_Word TypeClassInfoVarType_27;
    MR_Word BaseConstArg_28;
    MR_Word StructArgs_29;
    MR_Word VarInsts_30;
    MR_Integer NumArgs_31;
    MR_Word InstConsId_32;
    MR_Word StructInst_33;
    MR_Word DefinedWhere_34;
    MR_Word ConstStruct_35;
    MR_Integer ConstNum_36;
    MR_Word ConstStructDb_37;
    MR_Word TypeClassInfoConstArg_38;
    MR_Word ConstConsId_39;
    MR_Word Unification_40;
    MR_Word TypeClassInfoRHS_44;
    MR_Word GoalExpr_45;
    MR_Word GoalInfo0_46;
    MR_Word NonLocals_47;
    MR_Word GoalInfo1_48;
    MR_Word TypeClassInfoVarInst_50;
    MR_Word InstMapDelta_51;
    MR_Word GoalInfo2_52;
    MR_Word GoalInfo_53;
    MR_Word Goal_54;
    MR_Integer Var_64;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_101;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_62, &NumReuses_26);
    Var_64 = (MR_Integer) ((MR_Unsigned) NumReuses_26 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_64, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_65_65);
    check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "construct_typeclass_info", InitialVarMapsSnapshot_16, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_68_68);
    check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &TypeClassInfoVarType_27, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
    Var_71 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    {
      BaseConstArg_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseConstArg_28, 0) = ((MR_Box) (BaseConsId_14));
      MR_hl_field(1, BaseConstArg_28, 1) = ((MR_Box) (Var_71));
    }
    {
      StructArgs_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StructArgs_29, 0) = ((MR_Box) (BaseConstArg_28));
      MR_hl_field(1, StructArgs_29, 1) = ((MR_Box) (VarConstArgs_25));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_7[0]));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0_1));
      MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_72, 3) = ((MR_Box) (ConstStructDb0_23));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_72, VarConstArgs_25, &VarInsts_30);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgVarsMCAs_15, &NumArgs_31);
    InstConsId_32 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_31);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (InstConsId_32));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (VarInsts_30));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StructInst_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, StructInst_33, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, StructInst_33, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(2, StructInst_33, 2) = ((MR_Box) (Var_76));
    }
    check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_70_70, &DefinedWhere_34);
    {
      ConstStruct_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConstStruct_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConstStruct_35, 1) = ((MR_Box) (StructArgs_29));
      MR_hl_field(0, ConstStruct_35, 2) = ((MR_Box) (TypeClassInfoVarType_27));
      MR_hl_field(0, ConstStruct_35, 3) = ((MR_Box) (StructInst_33));
      MR_hl_field(0, ConstStruct_35, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_34));
    }
    hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_35, &ConstNum_36, ConstStructDb0_23, &ConstStructDb_37);
    check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_37, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_63);
    {
      TypeClassInfoConstArg_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfoConstArg_38, 0) = ((MR_Box) (ConstNum_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *TypeClassInfoMCA_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfoConstArg_38));
    }
    {
      ConstConsId_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConstConsId_39, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, ConstConsId_39, 1) = ((MR_Box) (ConstNum_36));
    }
    {
      Unification_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_40, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(0, Unification_40, 1) = ((MR_Box) (ConstConsId_39));
      MR_hl_field(0, Unification_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_40, 4) = ((MR_Box) (MR_mkword(2, &check_hlds__polymorphism_type_class_info_scalar_common_3[0])));
      MR_hl_field(0, Unification_40, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Unification_40, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeClassInfoRHS_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeClassInfoRHS_44, 0) = ((MR_Box) (ConstConsId_39));
      MR_hl_field(1, TypeClassInfoRHS_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, TypeClassInfoRHS_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_45, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(1, GoalExpr_45, 1) = ((MR_Box) (TypeClassInfoRHS_44));
      MR_hl_field(1, GoalExpr_45, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0]));
      MR_hl_field(1, GoalExpr_45, 3) = ((MR_Box) (Unification_40));
      MR_hl_field(1, GoalExpr_45, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[8]));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_46);
    NonLocals_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeClassInfoVar_17);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_47, GoalInfo0_46, &GoalInfo1_48);
    {
      TypeClassInfoVarInst_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfoVarInst_50, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(0, TypeClassInfoVarInst_50, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__polymorphism_type_class_info_scalar_common_2[2])));
    }
    {
      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_101, 0) = ((MR_Box) (TypeClassInfoVarInst_50));
      MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_51 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_101);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_51, GoalInfo1_48, &GoalInfo2_52);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_52, &GoalInfo_53);
    {
      Goal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_54, 0) = ((MR_Box) (GoalExpr_45));
      MR_hl_field(0, Goal_54, 1) = ((MR_Box) (GoalInfo_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *AllGoals_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_54));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word ArgVars_56;
    MR_Word AllArgVars_57;
    MR_Word ArgModes_59;
    MR_Word ArgInsts_60;
    MR_Word InstResults_61;
    MR_Word Var_121;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_137;
    MR_Integer NumArgs_139;
    MR_Word InstConsId_140;
    MR_Word Unification_141;
    MR_Word TypeClassInfoRHS_145;
    MR_Word GoalExpr_146;
    MR_Word GoalInfo0_147;
    MR_Word NonLocals_148;
    MR_Word GoalInfo1_149;
    MR_Word TypeClassInfoInst_150;
    MR_Word TypeClassInfoVarInst_151;
    MR_Word InstMapDelta_152;
    MR_Word GoalInfo2_153;
    MR_Word GoalInfo_154;
    MR_Word Goal_155;
    MR_Word _TypeClassInfoVarType_55;

    *TypeClassInfoMCA_18 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &_TypeClassInfoVarType_55, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[4]), ArgVarsMCAs_15, &ArgVars_56);
    {
      AllArgVars_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AllArgVars_57, 0) = ((MR_Box) (BaseVar_13));
      MR_hl_field(1, AllArgVars_57, 1) = ((MR_Box) (ArgVars_56));
    }
    {
      TypeClassInfoRHS_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeClassInfoRHS_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, TypeClassInfoRHS_145, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, TypeClassInfoRHS_145, 2) = ((MR_Box) (AllArgVars_57));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), AllArgVars_57, &NumArgs_139);
    mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgs_139, ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0])), &ArgModes_59);
    {
      Unification_141 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_141, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(0, Unification_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_141, 2) = ((MR_Box) (AllArgVars_57));
      MR_hl_field(0, Unification_141, 3) = ((MR_Box) (ArgModes_59));
      MR_hl_field(0, Unification_141, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_141, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, Unification_141, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_146, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(1, GoalExpr_146, 1) = ((MR_Box) (TypeClassInfoRHS_145));
      MR_hl_field(1, GoalExpr_146, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0]));
      MR_hl_field(1, GoalExpr_146, 3) = ((MR_Box) (Unification_141));
      MR_hl_field(1, GoalExpr_146, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[8]));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_147);
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (AllArgVars_57));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_121, &NonLocals_148);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_148, GoalInfo0_147, &GoalInfo1_149);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgs_139, ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_type_class_info_scalar_common_1[7]))), &ArgInsts_60);
    InstConsId_140 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_139);
    Var_126 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
    }
    {
      InstResults_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstResults_61, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(1, InstResults_61, 1) = ((MR_Box) (Var_125));
      MR_hl_field(1, InstResults_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, InstResults_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, InstResults_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_132, 0) = ((MR_Box) (InstConsId_140));
      MR_hl_field(0, Var_132, 1) = ((MR_Box) (ArgInsts_60));
    }
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeClassInfoInst_150 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, TypeClassInfoInst_150, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, TypeClassInfoInst_150, 1) = ((MR_Box) (InstResults_61));
      MR_hl_field(2, TypeClassInfoInst_150, 2) = ((MR_Box) (Var_131));
    }
    {
      TypeClassInfoVarInst_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfoVarInst_151, 0) = ((MR_Box) (*TypeClassInfoVar_17));
      MR_hl_field(0, TypeClassInfoVarInst_151, 1) = ((MR_Box) (TypeClassInfoInst_150));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) (TypeClassInfoVarInst_151));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_152 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_134);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_152, GoalInfo1_149, &GoalInfo2_153);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_153, &GoalInfo_154);
    {
      Goal_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_155, 0) = ((MR_Box) (GoalExpr_146));
      MR_hl_field(0, Goal_155, 1) = ((MR_Box) (GoalInfo_154));
    }
    {
      Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_137, 0) = ((MR_Box) (Goal_155));
      MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrevGoals_19, Var_137);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word ConstStructVarMap0_12;
  MR_Word InstanceIdConstArg_13;
  MR_Word OldVar_14;
  MR_Box conv0_OldVar_14;

  check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_0_29, &ConstStructVarMap0_12);
  {
    InstanceIdConstArg_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstanceIdConstArg_13, 0) = ((MR_Box) (InstanceIdConstNum_8));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), ConstStructVarMap0_12, ((MR_Box) (InstanceIdConstArg_13)), &conv0_OldVar_14);
  if (succeeded)
  {
    OldVar_14 = ((MR_Word) (conv0_OldVar_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_15;
    MR_Integer Var_31;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_29, &NumReuses_15);
    Var_31 = (MR_Integer) ((MR_Unsigned) NumReuses_15 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_31, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
    *Var_9 = OldVar_14;
    *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word _VarType_16;
    MR_Word ConstStructVarMap_17;
    MR_Word ConsId_18;
    MR_Word RHS_19;
    MR_Word Unification_20;
    MR_Word GoalExpr_24;
    MR_Word NonLocals_25;
    MR_Word InstmapDelta_26;
    MR_Word GoalInfo_27;
    MR_Word Goal_28;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word VarTable0_60;
    MR_Word RttiVarMaps0_61;
    MR_Word ClassName_62;
    MR_String ClassNameString_64;
    MR_String VarName_65;
    MR_Word VarEntry_66;
    MR_Word VarTable_67;
    MR_Word RttiVarMaps_68;

    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_29, &VarTable0_60);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_29, &RttiVarMaps0_61);
    ClassName_62 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 0))));
    ClassNameString_64 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_62);
    VarName_65 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_64);
    _VarType_16 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    {
      VarEntry_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarEntry_66, 0) = ((MR_Box) (VarName_65));
      MR_hl_field(0, VarEntry_66, 1) = ((MR_Box) (_VarType_16));
      MR_hl_field(0, VarEntry_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(VarEntry_66, Var_9, VarTable0_60, &VarTable_67);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_61, &RttiVarMaps_68);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_67, RttiVarMaps_68, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), ((MR_Box) (InstanceIdConstArg_13)), ((MR_Box) (*Var_9)), ConstStructVarMap0_12, &ConstStructVarMap_17);
    check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap_17, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_30);
    {
      ConsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, ConsId_18, 1) = ((MR_Box) (InstanceIdConstNum_8));
    }
    {
      RHS_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_19, 0) = ((MR_Box) (ConsId_18));
      MR_hl_field(1, RHS_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_20, 0) = ((MR_Box) (*Var_9));
      MR_hl_field(0, Unification_20, 1) = ((MR_Box) (ConsId_18));
      MR_hl_field(0, Unification_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_20, 4) = ((MR_Box) (MR_mkword(2, &check_hlds__polymorphism_type_class_info_scalar_common_3[0])));
      MR_hl_field(0, Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_24, 0) = ((MR_Box) (*Var_9));
      MR_hl_field(1, GoalExpr_24, 1) = ((MR_Box) (RHS_19));
      MR_hl_field(1, GoalExpr_24, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0]));
      MR_hl_field(1, GoalExpr_24, 3) = ((MR_Box) (Unification_20));
      MR_hl_field(1, GoalExpr_24, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[8]));
    }
    NonLocals_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
    InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_25, InstmapDelta_26, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_27);
    {
      Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_28, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(0, Goal_28, 1) = ((MR_Box) (GoalInfo_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_28));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word VarTable0_12;
  MR_Word RttiVarMaps0_13;
  MR_Word ClassName_14;
  MR_String ClassNameString_16;
  MR_String VarName_17;
  MR_Word VarEntry_18;
  MR_Word VarTable_19;
  MR_Word RttiVarMaps_20;

  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_21, &VarTable0_12);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_21, &RttiVarMaps0_13);
  ClassName_14 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 0))));
  ClassNameString_16 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_14);
  switch (VarKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      VarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "BaseTypeClassInfo_for_", ClassNameString_16);
      break;
    case (MR_Integer) 1:
      VarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_16);
      break;
  }
  *VarType_10 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
  {
    VarEntry_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarEntry_18, 0) = ((MR_Box) (VarName_17));
    MR_hl_field(0, VarEntry_18, 1) = ((MR_Box) (*VarType_10));
    MR_hl_field(0, VarEntry_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(VarEntry_18, Var_9, VarTable0_12, &VarTable_19);
  hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_13, &RttiVarMaps_20);
  check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_19, RttiVarMaps_20, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word OldTypeClassInfoVar_11;
  MR_Word RttiVarMaps0_10;

  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_13, &RttiVarMaps0_10);
  succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_10, Constraint_7, &OldTypeClassInfoVar_11);
  if (succeeded)
  {
    *TypeClassInfoVar_8 = OldTypeClassInfoVar_11;
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
  else
  {
    MR_Word _TypeClassInfoVarType_12;
    MR_Word STATE_VARIABLE_Info_16_16;
    MR_Word VarTable0_17;
    MR_Word RttiVarMaps0_18;
    MR_Word ClassName_19;
    MR_String ClassNameString_21;
    MR_String VarName_22;
    MR_Word VarEntry_23;
    MR_Word VarTable_24;
    MR_Word RttiVarMaps_25;

    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_13, &VarTable0_17);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_13, &RttiVarMaps0_18);
    ClassName_19 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 0))));
    ClassNameString_21 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_19);
    VarName_22 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_21);
    _TypeClassInfoVarType_12 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    {
      VarEntry_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarEntry_23, 0) = ((MR_Box) (VarName_22));
      MR_hl_field(0, VarEntry_23, 1) = ((MR_Box) (_TypeClassInfoVarType_12));
      MR_hl_field(0, VarEntry_23, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(VarEntry_23, TypeClassInfoVar_8, VarTable0_17, &VarTable_24);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *TypeClassInfoVar_8, RttiVarMaps0_18, &RttiVarMaps_25);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_24, RttiVarMaps_25, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
    switch (RecordLocns_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_16_16;
        break;
      case (MR_Integer) 0:
        {
          MR_Word ModuleInfo_29;
          MR_Word ClassName_30;
          MR_Word ClassTypes_31;
          MR_Integer ClassArity_32;
          MR_Word ClassId_33;
          MR_Word ClassTable_34;
          MR_Word ClassDefn_35;
          MR_Word SuperClasses_36;
          MR_Integer NumSuperClasses_37;
          MR_Word RttiVarMaps0_38;
          MR_Word RttiVarMaps_39;
          MR_Integer Var_40;
          MR_Box conv0_ClassDefn_35;

          check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_16_16, &ModuleInfo_29);
          ClassName_30 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 0))));
          ClassTypes_31 = ((MR_Word) ((MR_hl_field(0, Constraint_7, (MR_Integer) 1))));
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassTypes_31, &ClassArity_32);
          {
            ClassId_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ClassId_33, 0) = ((MR_Box) (ClassName_30));
            MR_hl_field(0, ClassId_33, 1) = ((MR_Box) (ClassArity_32));
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_29, &ClassTable_34);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_34, ((MR_Box) (ClassId_33)), &conv0_ClassDefn_35);
          ClassDefn_35 = ((MR_Word) (conv0_ClassDefn_35));
          SuperClasses_36 = ((MR_Word) ((MR_hl_field(0, ClassDefn_35, (MR_Integer) 4))));
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_36, &NumSuperClasses_37);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_16_16, &RttiVarMaps0_38);
          Var_40 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_37 + (MR_Unsigned) 1);
          check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0(*TypeClassInfoVar_8, ClassTypes_31, Var_40, RttiVarMaps0_38, &RttiVarMaps_39);
          check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_39, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_14);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_28;

  check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__929__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_class_info__is_unseen_or_in_type_info_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0(
  MR_Word ExtraHeadVar_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurIndex_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RttiVarMaps_5 = STATE_VARIABLE_RttiVarMaps_0_4;
    else
    {
      MR_Word ClassType_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ClassTypes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypeVars_16;
      MR_Word UnSeenOrInTypeInfoTypeVars_17;
      MR_Word Location_18;
      MR_Word InsertIntoRttiVarMap_19;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_RttiVarMaps_29_29;
      MR_Integer Var_30;
      MR_Box conv1_STATE_VARIABLE_RttiVarMaps_29_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_CurIndex_3;
      MR_Word next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;

      parse_tree__prog_type_scan__type_vars_in_type_2_p_0(ClassType_12, &TypeVars_16);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[0]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_4));
      }
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), Var_25, TypeVars_16, &UnSeenOrInTypeInfoTypeVars_17);
      {
        Location_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Location_18, 0) = ((MR_Box) (ExtraHeadVar_1));
        MR_hl_field(1, Location_18, 1) = ((MR_Box) (CurIndex_3));
      }
      {
        InsertIntoRttiVarMap_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InsertIntoRttiVarMap_19, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_5[0]));
        MR_hl_field(0, InsertIntoRttiVarMap_19, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_2));
        MR_hl_field(0, InsertIntoRttiVarMap_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, InsertIntoRttiVarMap_19, 3) = ((MR_Box) (Location_18));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), InsertIntoRttiVarMap_19, UnSeenOrInTypeInfoTypeVars_17, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_4)), &conv1_STATE_VARIABLE_RttiVarMaps_29_29);
      STATE_VARIABLE_RttiVarMaps_29_29 = ((MR_Word) (conv1_STATE_VARIABLE_RttiVarMaps_29_29));
      Var_30 = (MR_Integer) ((MR_Unsigned) CurIndex_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ClassTypes_13;
      next_value_of_CurIndex_3 = Var_30;
      next_value_of_STATE_VARIABLE_RttiVarMaps_0_4 = STATE_VARIABLE_RttiVarMaps_29_29;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      CurIndex_3 = next_value_of_CurIndex_3;
      STATE_VARIABLE_RttiVarMaps_0_4 = next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__polymorphism_type_class_info__init(void)
{
}

void mercury__check_hlds__polymorphism_type_class_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__type_ctor_info_record_type_info_locns_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__type_ctor_info_tci_var_kind_0);
}

void mercury__check_hlds__polymorphism_type_class_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_type_class_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_type_class_info.
