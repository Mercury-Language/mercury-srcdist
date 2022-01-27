/*
** Automatically generated from `polymorphism_type_class_info.m'
** by the Mercury compiler,
** version rotd-2022-01-15
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__928__1_4_p_0(
  MR_Word Location_18,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__588__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84);

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

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
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96);

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
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

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


static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_1[10][2];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_4[3][4];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_5[3][5];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_7[2][6];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_8[1][8];

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_9[1][10];




static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_5[1])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_7[1])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_4[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_type_class_info_scalar_common_1[9])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_class_info_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_class_info_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_class_info_scalar_common_2[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_8[0])),
    ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_type_class_info__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_6[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box check_hlds__polymorphism_type_class_info_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
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
  /* row 0 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_type_class_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_type_class_info__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
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
  {     check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_record_type_info_locns_0 },
  {     check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_record_type_info_locns_0 },
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
  {     check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_name_ordered_tci_var_kind_0 },
  {     check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__enum_ordinal_ordered_tci_var_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_type_class_info__check_hlds__polymorphism_type_class_info__functor_number_map_tci_var_kind_0,

};

static void MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__928__1_4_p_0(
  MR_Word Location_18,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(LambdaHeadVar__1_26, Location_18, LambdaHeadVar__2_27, LambdaHeadVar__3_28);
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__588__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(BaseConsId1_84, BaseConsId_76);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__is_unseen_or_in_type_info_tvar_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word TypeVar_4)
{
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
        TypeInfoVar0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps_13, TVar_10, &Var_25);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
            Index_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
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
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (AssignGoal_19));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_20));
      }
      *STATE_VARIABLE_ExtraGoals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NewGoals_17, Var_28);
    }
    else
    {
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      *STATE_VARIABLE_ExtraGoals_21 = STATE_VARIABLE_ExtraGoals_0_20;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5)
{
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MCA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    if ((MCA_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_3));
      }
    else
    {
      MR_Word ConstArg_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MCA_4, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstArg_6));
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_12;
    MR_Box conv2_STATE_VARIABLE_Info_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (RecordLocns_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_12, Constraints_7, ExtraHeadVars_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ExtraGoals_21;
    MR_Word conv5_STATE_VARIABLE_Info_23;

    check_hlds__polymorphism_type_class_info__polymorphism_maybe_extract_type_info_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ExtraGoals_21, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ExtraGoals_21));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
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
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_4[2]), ExistentialConstraints_7, ExtraTypeClassVars_9, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_20_20);
    STATE_VARIABLE_Info_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20_20));
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_20_20, &RttiVarMaps0_13);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[4]), *ExtraTypeClassVars_9, ((MR_Box) (RttiVarMaps0_13)), &conv4_RttiVarMaps_14);
    RttiVarMaps_14 = ((MR_Word) (conv4_RttiVarMaps_14));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_14, STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_22_22);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistentialConstraints_7, &TVars0_15);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), TVars0_15, &TVars_16);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (OldRttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Context_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_23, TVars_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_ExtraGoals_10, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv7_STATE_VARIABLE_Info_18);
    *ExtraGoals_10 = ((MR_Word) (conv8_ExtraGoals_10));
    *STATE_VARIABLE_Info_18 = ((MR_Word) (conv7_STATE_VARIABLE_Info_18));
  }
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
    MR_Integer InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, InstanceNum_19, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
  else
  {
    MR_Word SubClassConstraint_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_12, (MR_Integer) 0))));

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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OldTypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Integer InstanceNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, InstanceNum_47, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        }
        else
        {
          MR_Word SubClassConstraint_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, SubClassConstraint_46, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructDb0_23;
    MR_Word InstanceId_24;
    MR_Integer InstanceIdConstNum_25;

    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_33, &ConstStructDb0_23);
    {
      InstanceId_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceId_24, 0) = ((MR_Box) (InstanceNum_12));
      MR_hl_field(MR_mktag(0), InstanceId_24, 1) = ((MR_Box) (Constraint_10));
      MR_hl_field(MR_mktag(0), InstanceId_24, 2) = ((MR_Box) (Seen_11));
    }
    succeeded = hlds__const_struct__search_for_constant_instance_3_p_0(ConstStructDb0_23, InstanceId_24, &InstanceIdConstNum_25);
    if (succeeded)
    {
      MR_Word TypeClassInfoVar_26;
      MR_Word Var_80;
      MR_Word Var_81;

      check_hlds__polymorphism_type_class_info__materialize_typeclass_info_var_6_p_0(Constraint_10, InstanceIdConstNum_25, &TypeClassInfoVar_26, Goals_16, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (InstanceIdConstNum_25));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_26));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
      }
    }
    else
      check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(InstanceId_24, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
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
      MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeClassInfoVarMCA_14;
      MR_Word TypeClassInfoVarsMCAs_15;
      MR_Word Context_18;
      MR_Word HeadGoals_19;
      MR_Word TailGoals_20;
      MR_Word STATE_VARIABLE_Info_24_24;
      MR_Word OldTypeClassInfoVar_37;
      MR_Word RttiVarMaps0_36;

      mercury__term__context_init_1_p_0(&Context_18);
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_5, &RttiVarMaps0_36);
      succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_36, Constraint_11, &OldTypeClassInfoVar_37);
      if (succeeded)
      {
        {
          TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 0) = ((MR_Box) (OldTypeClassInfoVar_37));
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_5;
      }
      else
      {
        MR_Word Proof_40;
        MR_Word ProofMap_39;
        MR_Box conv0_Proof_40;

        check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_5, &ProofMap_39);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_39, ((MR_Box) (Constraint_11)), &conv0_Proof_40);
        if (succeeded)
        {
          Proof_40 = ((MR_Word) (conv0_Proof_40));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          if (((MR_tag((MR_Word) Proof_40)) == (MR_Integer) 0))
          {
            MR_Integer InstanceNum_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_40, (MR_Integer) 0))));

            check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), InstanceNum_65, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
          }
          else
          {
            MR_Word SubClassConstraint_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_40, (MR_Integer) 0))));

            check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), SubClassConstraint_64, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
          }
        else
        {
          MR_Word RttiVarMaps_41;
          MR_Word STATE_VARIABLE_Info_27_45;
          MR_Word RttiVarMaps0_48;
          MR_Word TypeClassInfoVar_49;

          check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_11, &TypeClassInfoVar_49, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_45);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_45, &RttiVarMaps0_48);
          hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_49, RttiVarMaps0_48, &RttiVarMaps_41);
          check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_41, STATE_VARIABLE_Info_27_45, &STATE_VARIABLE_Info_24_24);
          {
            TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 0) = ((MR_Box) (TypeClassInfoVar_49));
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(Constraints_12, &TypeClassInfoVarsMCAs_15, &TailGoals_20, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_15));
      }
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_19, TailGoals_20);
    }
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
    SuperClasses0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1))));
    ClassVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4))));
    ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8))));
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
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__do_make_typeclass_info_from_instance__588__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ConstOrVarArg_5;

    check_hlds__polymorphism_type_class_info__make_const_or_var_arg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ConstOrVarArg_5);
    *wrapper_arg_2 = ((MR_Box) (conv3_ConstOrVarArg_5));
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96)
{
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
    MR_Word InstanceTypes_29;
    MR_Word InstanceConstraints_33;
    MR_Word InstanceTVarset_36;
    MR_Word InstanceProofMap_37;
    MR_Word KindMap_38;
    MR_Word InstanceTvars_39;
    MR_Word UnconstrainedTvars_40;
    MR_Word Renaming_42;
    MR_Word RenamedInstanceTypes_43;
    MR_Word InstanceSubst_44;
    MR_Word RenamedInstanceConstraints_45;
    MR_Word ActualInstanceConstraints0_46;
    MR_Word ActualInstanceConstraints_47;
    MR_Word RenamedInstanceProofMap_48;
    MR_Word ActualInstanceProofMap_49;
    MR_Word RenamedUnconstrainedTvars_50;
    MR_Word RenamedKindMap_51;
    MR_Word ActualUnconstrainedTypes_52;
    MR_Word ProofMap_53;
    MR_Word InitialVarMapsSnapshot_54;
    MR_Word ArgTypeInfoVarsMCAs_55;
    MR_Word TypeInfoGoals_56;
    MR_Word ArgTypeClassInfoVarsMCAs_57;
    MR_Word InstanceConstraintGoals_58;
    MR_Word ArgUnconstrainedTypeInfoVarsMCAs_59;
    MR_Word UnconstrainedTypeInfoGoals_60;
    MR_Word ClassDefn_61;
    MR_Word ArgSuperClassVarsMCAs_62;
    MR_Word SuperClassGoals_63;
    MR_Word PrevGoals_64;
    MR_Word ArgVarsMCAs_65;
    MR_Word ArgCOVAs_66;
    MR_Word ConstraintClassName_67;
    MR_Word ConstraintArgTypes_68;
    MR_Word TypeClassInfoMap0_69;
    MR_Word STATE_VARIABLE_Info_98_98;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_100_100;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Box conv0_InstanceList_26;
    MR_Box conv1_ProofInstanceDefn_27;
    MR_Word _NewTVarset_41;
    MR_Box conv2_ClassDefn_61;
    MR_Word OldTypeClassInfoVarMCA0_74;
    MR_Word TypeInfo_144_144;
    MR_Word TypeCtorInfo_145_145;
    MR_Word TypeInfo_146_146;
    MR_Word ClassNameMap0_70;
    MR_Word OldEntry0_71;
    MR_Word ArgsMap0_73;
    MR_Box conv4_ClassNameMap0_70;
    MR_Box conv5_OldEntry0_71;
    MR_Box conv6_OldTypeClassInfoVarMCA0_74;
    MR_Integer TypeClassInfoConstArgNum_92;
    MR_Word TypeClassInfoConstArg_91;
    MR_Word Var_120;

    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_95, &ModuleInfo_14);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_15);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_16);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_95, &TypeVarSet_17);
    check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_95, &ProofMap0_18);
    InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 0))));
    Constraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 1))));
    Seen_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 2))));
    ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstrainedTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypes_23, &ClassArity_24);
    {
      ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassName_22));
      MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (ClassArity_24));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[3]), InstanceTable_15, ((MR_Box) (ClassId_25)), &conv0_InstanceList_26);
    InstanceList_26 = ((MR_Word) (conv0_InstanceList_26));
    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_26, InstanceNum_19, &conv1_ProofInstanceDefn_27);
    ProofInstanceDefn_27 = ((MR_Word) (conv1_ProofInstanceDefn_27));
    InstanceTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 1))));
    InstanceConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 5))));
    InstanceTVarset_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 8))));
    InstanceProofMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 9))));
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_38);
    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_29, &InstanceTvars_39);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTvars_39, InstanceConstraints_33, &UnconstrainedTvars_40);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet_17, InstanceTVarset_36, &_NewTVarset_41, &Renaming_42);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_42, InstanceTypes_29, &RenamedInstanceTypes_43);
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(RenamedInstanceTypes_43, ConstrainedTypes_23, &InstanceSubst_44);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_42, InstanceConstraints_33, &RenamedInstanceConstraints_45);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(InstanceSubst_44, RenamedInstanceConstraints_45, &ActualInstanceConstraints0_46);
    mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ActualInstanceConstraints0_46, Seen_21, &ActualInstanceConstraints_47);
    check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(Renaming_42, InstanceProofMap_37, &RenamedInstanceProofMap_48);
    check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(InstanceSubst_44, RenamedInstanceProofMap_48, &ActualInstanceProofMap_49);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_42, UnconstrainedTvars_40, &RenamedUnconstrainedTvars_50);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_42, KindMap_38, &RenamedKindMap_51);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap_51, InstanceSubst_44, RenamedUnconstrainedTvars_50, &ActualUnconstrainedTypes_52);
    mercury__map__overlay_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_18, ActualInstanceProofMap_49, &ProofMap_53);
    check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info_from_instance", &InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_98_98);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ConstrainedTypes_23, Context_10, &ArgTypeInfoVarsMCAs_55, &TypeInfoGoals_56, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_99_99);
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(ActualInstanceConstraints_47, Seen_21, Context_10, &ArgTypeClassInfoVarsMCAs_57, &InstanceConstraintGoals_58, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedTypes_52, Context_10, &ArgUnconstrainedTypeInfoVarsMCAs_59, &UnconstrainedTypeInfoGoals_60, STATE_VARIABLE_Info_100_100, &STATE_VARIABLE_Info_101_101);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_16, ((MR_Box) (ClassId_25)), &conv2_ClassDefn_61);
    ClassDefn_61 = ((MR_Word) (conv2_ClassDefn_61));
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(ClassDefn_61, ConstrainedTypes_23, ProofMap_53, &ArgSuperClassVarsMCAs_62, &SuperClassGoals_63, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InstanceConstraintGoals_58, SuperClassGoals_63);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_56, Var_104);
    PrevGoals_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnconstrainedTypeInfoGoals_60, Var_103);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgSuperClassVarsMCAs_62, ArgTypeInfoVarsMCAs_55);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgTypeClassInfoVarsMCAs_57, Var_106);
    ArgVarsMCAs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgUnconstrainedTypeInfoVarsMCAs_59, Var_105);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[3]), ArgVarsMCAs_65, &ArgCOVAs_66);
    ConstraintClassName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstraintArgTypes_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_102_102, &TypeClassInfoMap0_69);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), TypeClassInfoMap0_69, ((MR_Box) (ConstraintClassName_67)), &conv4_ClassNameMap0_70);
    if (succeeded)
    {
      ClassNameMap0_70 = ((MR_Word) (conv4_ClassNameMap0_70));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_144_144 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]);
      TypeCtorInfo_145_145 = (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_144_144, TypeCtorInfo_145_145, ClassNameMap0_70, ((MR_Box) (ConstraintArgTypes_68)), &conv5_OldEntry0_71);
      if (succeeded)
      {
        OldEntry0_71 = ((MR_Word) (conv5_OldEntry0_71));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ArgsMap0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry0_71, (MR_Integer) 1))));
        TypeInfo_146_146 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]);
        succeeded = mercury__map__search_3_p_0(TypeInfo_146_146, (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgsMap0_73, ((MR_Box) (ArgCOVAs_66)), &conv6_OldTypeClassInfoVarMCA0_74);
        if (succeeded)
        {
          OldTypeClassInfoVarMCA0_74 = ((MR_Word) (conv6_OldTypeClassInfoVarMCA0_74));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_75;
      MR_Word STATE_VARIABLE_Info_109_109;
      MR_Integer Var_110;

      *TypeClassInfoVarMCA_11 = OldTypeClassInfoVarMCA0_74;
      *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info", InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_109_109);
      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_109_109, &NumReuses_75);
      Var_110 = (MR_Integer) ((MR_Unsigned) NumReuses_75 + (MR_Unsigned) 2);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_110, STATE_VARIABLE_Info_109_109, &STATE_VARIABLE_Info_111_111);
    }
    else
    {
      MR_Word BaseConsId_76;
      MR_Word BaseVar_77;
      MR_Word BaseGoals_78;
      MR_Word TypeClassInfoVar_79;
      MR_Word TypeClassInfoMCA_80;
      MR_Word TypeClassInfoMap1_81;
      MR_Word TypeClassInfoMap_89;
      MR_Word STATE_VARIABLE_Info_113_113;
      MR_Word Var_114;
      MR_Word STATE_VARIABLE_Info_115_115;
      MR_Word ClassNameMap1_82;
      MR_Box conv7_ClassNameMap1_82;

      BaseConsId_76 = hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(InstanceTable_15, Constraint_20, InstanceNum_19, InstanceTypes_29);
      check_hlds__polymorphism_type_class_info__materialize_base_typeclass_info_var_6_p_0(Constraint_20, BaseConsId_76, &BaseVar_77, &BaseGoals_78, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_113_113);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_78, PrevGoals_64);
      check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0(Constraint_20, BaseVar_77, BaseConsId_76, ArgVarsMCAs_65, InitialVarMapsSnapshot_54, &TypeClassInfoVar_79, &TypeClassInfoMCA_80, Var_114, Goals_12, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_115_115);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_79));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeClassInfoMCA_80));
      }
      check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_115_115, &TypeClassInfoMap1_81);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), TypeClassInfoMap1_81, ((MR_Box) (ConstraintClassName_67)), &conv7_ClassNameMap1_82);
      if (succeeded)
      {
        ClassNameMap1_82 = ((MR_Word) (conv7_ClassNameMap1_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldEntry1_83;
        MR_Box conv8_OldEntry1_83;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ClassNameMap1_82, ((MR_Box) (ConstraintArgTypes_68)), &conv8_OldEntry1_83);
        if (succeeded)
        {
          OldEntry1_83 = ((MR_Word) (conv8_OldEntry1_83));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BaseConsId1_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 0))));
          MR_Word ArgsMap1_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 1))));
          MR_Word ArgsMap_86;
          MR_Word Entry_87;
          MR_Word ClassNameMap_88;
          MR_Word Var_116;

          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (BaseConsId1_84));
          }
          mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140check_hlds.polymorphism_type_class_info.do_make_typeclass_info_from_instance\'/7", (MR_String) "BaseConsId1 != BaseConsId");
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)), ArgsMap1_85, &ArgsMap_86);
          {
            Entry_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_87, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_87, 1) = ((MR_Box) (ArgsMap_86));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_87)), ClassNameMap1_82, &ClassNameMap_88);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_88)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
        else
        {
          MR_Word ArgsMap_122;
          MR_Word Entry_123;
          MR_Word ClassNameMap_124;

          ArgsMap_122 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
          {
            Entry_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_123, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_123, 1) = ((MR_Box) (ArgsMap_122));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_123)), ClassNameMap1_82, &ClassNameMap_124);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_124)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
      }
      else
      {
        MR_Word ArgsMap_125;
        MR_Word Entry_126;
        MR_Word ClassNameMap_127;

        ArgsMap_125 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
        {
          Entry_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_126, 0) = ((MR_Box) (BaseConsId_76));
          MR_hl_field(MR_mktag(0), Entry_126, 1) = ((MR_Box) (ArgsMap_125));
        }
        ClassNameMap_127 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_126)));
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_127)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
      }
      check_hlds__polymorphism_info__poly_info_set_typeclass_info_map_3_p_0(TypeClassInfoMap_89, STATE_VARIABLE_Info_115_115, &STATE_VARIABLE_Info_111_111);
    }
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *TypeClassInfoVarMCA_11, (MR_Integer) 1))));
    succeeded = (Var_120 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeClassInfoConstArg_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_120, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TypeClassInfoConstArg_91)) == (MR_Integer) 0);
      if (succeeded)
        TypeClassInfoConstArgNum_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_91, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ConstStructDb1_93;
      MR_Word ConstStructDb_94;

      check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_111_111, &ConstStructDb1_93);
      hlds__const_struct__insert_constant_instance_4_p_0(InstanceId_8, TypeClassInfoConstArgNum_92, ConstStructDb1_93, &ConstStructDb_94);
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_94, STATE_VARIABLE_Info_111_111, STATE_VARIABLE_Info_96);
    }
    else
      *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_111_111;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeClassInfoVar_15;
    MR_Word MaybeTCIConstArg_16;
    MR_Word SubClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 0))));
    MR_Word SubClassTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 1))));
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
      MR_hl_field(MR_mktag(0), SubClassId_27, 0) = ((MR_Box) (SubClassName_24));
      MR_hl_field(MR_mktag(0), SubClassId_27, 1) = ((MR_Box) (SubClassArity_26));
    }
    check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(SubClassConstraint_12, Seen_11, Context_14, &SubClassVarMCA_28, &SubClassVarGoals_29, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_113_113);
    SubClassVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_28, (MR_Integer) 0))));
    SubClassMCA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_28, (MR_Integer) 1))));
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_113_113, &ModuleInfo_32);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_32, &ClassTable_33);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_33, ((MR_Box) (SubClassId_27)), &conv0_SubClassDefn_34);
    SubClassDefn_34 = ((MR_Word) (conv0_SubClassDefn_34));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_34, (MR_Integer) 4))));
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_114, SubClassTypes_25, &SubTypeSubst_35);
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_34, (MR_Integer) 1))));
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
      MR_Word STATE_VARIABLE_Info_119_119;
      MR_Word Var_121;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word _TypeClassInfoVarType_64;

      check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_10, (MR_Integer) 1, &TypeClassInfoVar_15, &_TypeClassInfoVarType_64, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_119_119);
      check_hlds__polymorphism_info__get_poly_const_5_p_0(SuperClassIndex_38, &IndexVar_65, &IndexGoals_66, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_69);
      Var_121 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (TypeClassInfoVar_15));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (IndexVar_65));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (SubClassVar_30));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_131));
      }
      Var_129 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      Var_130 = mercury__term__context_init_0_f_0();
      hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_32, Var_121, (MR_String) "superclass_from_typeclass_info", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_127, (MR_Word) ((MR_Unsigned) 0U), Var_129, Var_130, &SuperClassGoal_67);
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (SuperClassGoal_67));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_66, Var_135);
      *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubClassVarGoals_29, Var_134);
      MaybeTCIConstArg_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word SubClassConstArg_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassMCA_31, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SubClassConstArg_39)) == (MR_Integer) 0))
      {
        MR_Integer SubClassConstNum_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubClassConstArg_39, (MR_Integer) 0))));
        MR_Word ConstStructDb_43;
        MR_Word SubClassConstStruct_44;
        MR_Word SubClassConsId_45;
        MR_Word SubClassArgs_46;
        MR_Word SelectedArg_62;
        MR_Integer SelectedConstNum_63;
        MR_Word TypeInfo_234_234;
        MR_Word TypeCtorInfo_235_235;
        MR_Word TypeCtorInfo_236_236;
        MR_Word BTCIArg_50;
        MR_Word OtherArgs_51;
        MR_Word BTCIConsId_52;
        MR_Integer SubInstanceNum_55;
        MR_Word InstanceTable_57;
        MR_Word SubInstanceDefns_58;
        MR_Word SubInstanceDefn_59;
        MR_Integer NumExtra_60;
        MR_Integer Index_61;
        MR_Word Var_241;
        MR_Box conv1_SubInstanceDefns_58;
        MR_Box conv2_SubInstanceDefn_59;
        MR_Box conv3_SelectedArg_62;

        check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_113_113, &ConstStructDb_43);
        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_43, SubClassConstNum_42, &SubClassConstStruct_44);
        SubClassConsId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_44, (MR_Integer) 0))));
        SubClassArgs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_44, (MR_Integer) 1))));
        succeeded = (SubClassConsId_45 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (SubClassArgs_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            BTCIArg_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_46, (MR_Integer) 0))));
            OtherArgs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_46, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) BTCIArg_50)) == (MR_Integer) 1);
            if (succeeded)
            {
              BTCIConsId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BTCIArg_50, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) BTCIConsId_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 2))));
                SubInstanceNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 3))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(SubClassId_27, Var_241);
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_32, &InstanceTable_57);
                  TypeInfo_234_234 = (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[3]);
                  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), TypeInfo_234_234, InstanceTable_57, ((MR_Box) (SubClassId_27)), &conv1_SubInstanceDefns_58);
                  SubInstanceDefns_58 = ((MR_Word) (conv1_SubInstanceDefns_58));
                  TypeCtorInfo_235_235 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_235_235, SubInstanceDefns_58, SubInstanceNum_55, &conv2_SubInstanceDefn_59);
                  if (succeeded)
                  {
                    SubInstanceDefn_59 = ((MR_Word) (conv2_SubInstanceDefn_59));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    hlds__hlds_class__num_extra_instance_args_2_p_0(SubInstanceDefn_59, &NumExtra_60);
                    Index_61 = (MR_Integer) ((MR_Unsigned) NumExtra_60 + (MR_Unsigned) SuperClassIndex_38);
                    TypeCtorInfo_236_236 = (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
                    mercury__list__det_index1_3_p_0(TypeCtorInfo_236_236, OtherArgs_51, Index_61, &conv3_SelectedArg_62);
                    SelectedArg_62 = ((MR_Word) (conv3_SelectedArg_62));
                    succeeded = ((MR_tag((MR_Word) SelectedArg_62)) == (MR_Integer) 0);
                    if (succeeded)
                      SelectedConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelectedArg_62, (MR_Integer) 0))));
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
            MaybeTCIConstArg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTCIConstArg_16, 0) = ((MR_Box) (SelectedArg_62));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeTCIConstArg_16));
    }
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
      MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeClassInfoVarMCA_20;
      MR_Word TypeClassInfoVarsMCAs_21;
      MR_Word HeadExtraGoals_24;
      MR_Word TailExtraGoals_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word OldTypeClassInfoVar_42;
      MR_Word RttiVarMaps0_41;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Constraint_15));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (HeadVar__2_2));
      }
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_7, &RttiVarMaps0_41);
      succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_41, Constraint_15, &OldTypeClassInfoVar_42);
      if (succeeded)
      {
        {
          TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (OldTypeClassInfoVar_42));
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Proof_45;
        MR_Word ProofMap_44;
        MR_Box conv0_Proof_45;

        check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_7, &ProofMap_44);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_44, ((MR_Box) (Constraint_15)), &conv0_Proof_45);
        if (succeeded)
        {
          Proof_45 = ((MR_Word) (conv0_Proof_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(Constraint_15, Var_28, Proof_45, HeadVar__4_4, &TypeClassInfoVarMCA_20, &HeadExtraGoals_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
        else
        {
          MR_Word RttiVarMaps_46;
          MR_Word STATE_VARIABLE_Info_27_50;
          MR_Word RttiVarMaps0_53;
          MR_Word TypeClassInfoVar_54;

          check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_15, &TypeClassInfoVar_54, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_27_50);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_50, &RttiVarMaps0_53);
          hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_54, RttiVarMaps0_53, &RttiVarMaps_46);
          check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_46, STATE_VARIABLE_Info_27_50, &STATE_VARIABLE_Info_29_29);
          {
            TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (TypeClassInfoVar_54));
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      check_hlds__polymorphism_type_class_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_108_111_111_112_95_95_91_51_93_95_48_8_p_0(Constraints_16, HeadVar__2_2, HeadVar__4_4, &TypeClassInfoVarsMCAs_21, &TailExtraGoals_25, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_21));
      }
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadExtraGoals_24, TailExtraGoals_25);
    }
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
      ConstArg_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstArg_13, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(MR_mktag(1), ConstArg_13, 1) = ((MR_Box) (Var_29));
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
      MR_Word RHS_17;
      MR_Word Unification_18;
      MR_Word Unify_22;
      MR_Word NonLocals_23;
      MR_Word InstmapDelta_24;
      MR_Word GoalInfo_25;
      MR_Word Goal_26;
      MR_Word _VarType_16;

      check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 0, Var_9, &_VarType_16, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
      {
        RHS_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_17, 0) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(1), RHS_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_18, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_18, 1) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(0), Unification_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_18, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_18, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_18, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_22, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), Unify_22, 1) = ((MR_Box) (RHS_17));
        MR_hl_field(MR_mktag(1), Unify_22, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(1), Unify_22, 3) = ((MR_Box) (Unification_18));
        MR_hl_field(MR_mktag(1), Unify_22, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[7]));
      }
      NonLocals_23 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_24, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_25);
      {
        Goal_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_26, 0) = ((MR_Box) (Unify_22));
        MR_hl_field(MR_mktag(0), Goal_26, 1) = ((MR_Box) (GoalInfo_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
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
        BaseConstArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BaseConstArg_28, 0) = ((MR_Box) (BaseConsId_14));
        MR_hl_field(MR_mktag(1), BaseConstArg_28, 1) = ((MR_Box) (Var_71));
      }
      {
        StructArgs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StructArgs_29, 0) = ((MR_Box) (BaseConstArg_28));
        MR_hl_field(MR_mktag(1), StructArgs_29, 1) = ((MR_Box) (VarConstArgs_25));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__construct_typeclass_info_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ConstStructDb0_23));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_72, VarConstArgs_25, &VarInsts_30);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_2[0]), ArgVarsMCAs_15, &NumArgs_31);
      InstConsId_32 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_31);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (InstConsId_32));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (VarInsts_30));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_33, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_33, 3) = ((MR_Box) (Var_76));
      }
      check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_70_70, &DefinedWhere_34);
      {
        ConstStruct_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 1) = ((MR_Box) (StructArgs_29));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 2) = ((MR_Box) (TypeClassInfoVarType_27));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 3) = ((MR_Box) (StructInst_33));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_34));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_35, &ConstNum_36, ConstStructDb0_23, &ConstStructDb_37);
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_37, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_63);
      {
        TypeClassInfoConstArg_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_38, 0) = ((MR_Box) (ConstNum_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *TypeClassInfoMCA_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoConstArg_38));
      }
      {
        ConstConsId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstConsId_39, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), ConstConsId_39, 1) = ((MR_Box) (ConstNum_36));
      }
      {
        Unification_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_40, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_40, 1) = ((MR_Box) (ConstConsId_39));
        MR_hl_field(MR_mktag(0), Unification_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_class_info_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), Unification_40, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_40, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 0) = ((MR_Box) (ConstConsId_39));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 1) = ((MR_Box) (TypeClassInfoRHS_44));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 3) = ((MR_Box) (Unification_40));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[7]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_46);
      NonLocals_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeClassInfoVar_17);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_47, GoalInfo0_46, &GoalInfo1_48);
      {
        TypeClassInfoVarInst_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_50, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_class_info_scalar_common_4[0])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TypeClassInfoVarInst_50));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_51 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_101);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_51, GoalInfo1_48, &GoalInfo2_52);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_52, &GoalInfo_53);
      {
        Goal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_54, 0) = ((MR_Box) (GoalExpr_45));
        MR_hl_field(MR_mktag(0), Goal_54, 1) = ((MR_Box) (GoalInfo_53));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AllGoals_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_54));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        AllArgVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AllArgVars_57, 0) = ((MR_Box) (BaseVar_13));
        MR_hl_field(MR_mktag(1), AllArgVars_57, 1) = ((MR_Box) (ArgVars_56));
      }
      {
        TypeClassInfoRHS_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_145, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_145, 2) = ((MR_Box) (AllArgVars_57));
      }
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), AllArgVars_57, &NumArgs_139);
      mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgs_139, ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1])), &ArgModes_59);
      {
        Unification_141 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_141, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_141, 2) = ((MR_Box) (AllArgVars_57));
        MR_hl_field(MR_mktag(0), Unification_141, 3) = ((MR_Box) (ArgModes_59));
        MR_hl_field(MR_mktag(0), Unification_141, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_141, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_141, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_146, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_146, 1) = ((MR_Box) (TypeClassInfoRHS_145));
        MR_hl_field(MR_mktag(1), GoalExpr_146, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_146, 3) = ((MR_Box) (Unification_141));
        MR_hl_field(MR_mktag(1), GoalExpr_146, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[7]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_147);
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (AllArgVars_57));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_121, &NonLocals_148);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_148, GoalInfo0_147, &GoalInfo1_149);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgs_139, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_class_info_scalar_common_2[2]))), &ArgInsts_60);
      InstConsId_140 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_139);
      Var_126 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
      }
      {
        InstResults_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstResults_61, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(MR_mktag(1), InstResults_61, 1) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(1), InstResults_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (InstConsId_140));
        MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ArgInsts_60));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoInst_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_150, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_150, 2) = ((MR_Box) (InstResults_61));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_150, 3) = ((MR_Box) (Var_131));
      }
      {
        TypeClassInfoVarInst_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_151, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_151, 1) = ((MR_Box) (TypeClassInfoInst_150));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (TypeClassInfoVarInst_151));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_152 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_134);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_152, GoalInfo1_149, &GoalInfo2_153);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_153, &GoalInfo_154);
      {
        Goal_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_155, 0) = ((MR_Box) (GoalExpr_146));
        MR_hl_field(MR_mktag(0), Goal_155, 1) = ((MR_Box) (GoalInfo_154));
      }
      {
        Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Goal_155));
        MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrevGoals_19, Var_137);
    }
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
  {
    MR_bool succeeded;
    MR_Word ConstStructVarMap0_12;
    MR_Word InstanceIdConstArg_13;
    MR_Word OldVar_14;
    MR_Box conv0_OldVar_14;

    check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_0_29, &ConstStructVarMap0_12);
    {
      InstanceIdConstArg_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceIdConstArg_13, 0) = ((MR_Box) (InstanceIdConstNum_8));
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
      MR_Word _VarType_16;

      check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, Var_9, &_VarType_16, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[0]), ((MR_Box) (InstanceIdConstArg_13)), ((MR_Box) (*Var_9)), ConstStructVarMap0_12, &ConstStructVarMap_17);
      check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap_17, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_30);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (InstanceIdConstNum_8));
      }
      {
        RHS_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_19, 0) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(1), RHS_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_20, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_20, 1) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(0), Unification_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_class_info_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (RHS_19));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (Unification_20));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_1[7]));
      }
      NonLocals_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_25, InstmapDelta_26, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_27);
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_28, 0) = ((MR_Box) (GoalExpr_24));
        MR_hl_field(MR_mktag(0), Goal_28, 1) = ((MR_Box) (GoalInfo_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
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
      MR_Word STATE_VARIABLE_Info_16_16;
      MR_Word _TypeClassInfoVarType_12;

      check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, TypeClassInfoVar_8, &_TypeClassInfoVarType_12, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
      switch (RecordLocns_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_16_16;
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleInfo_23;
            MR_Word ClassName_24;
            MR_Word ClassTypes_25;
            MR_Integer ClassArity_26;
            MR_Word ClassId_27;
            MR_Word ClassTable_28;
            MR_Word ClassDefn_29;
            MR_Word SuperClasses_30;
            MR_Integer NumSuperClasses_31;
            MR_Word RttiVarMaps0_32;
            MR_Word RttiVarMaps_33;
            MR_Integer Var_34;
            MR_Box conv0_ClassDefn_29;

            check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_16_16, &ModuleInfo_23);
            ClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
            ClassTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 1))));
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassTypes_25, &ClassArity_26);
            {
              ClassId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClassId_27, 0) = ((MR_Box) (ClassName_24));
              MR_hl_field(MR_mktag(0), ClassId_27, 1) = ((MR_Box) (ClassArity_26));
            }
            hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_23, &ClassTable_28);
            mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_28, ((MR_Box) (ClassId_27)), &conv0_ClassDefn_29);
            ClassDefn_29 = ((MR_Word) (conv0_ClassDefn_29));
            SuperClasses_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_29, (MR_Integer) 1))));
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_30, &NumSuperClasses_31);
            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_16_16, &RttiVarMaps0_32);
            Var_34 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_31 + (MR_Unsigned) 1);
            check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0(*TypeClassInfoVar_8, ClassTypes_25, Var_34, RttiVarMaps0_32, &RttiVarMaps_33);
            check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_33, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_14);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word VarSet0_12;
    MR_Word VarTypes0_13;
    MR_Word RttiVarMaps0_14;
    MR_Word ClassName_15;
    MR_String ClassNameString_17;
    MR_Word VarSet1_18;
    MR_String Name_19;
    MR_Word VarSet_20;
    MR_Word VarTypes_21;
    MR_Word RttiVarMaps_22;

    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_23, &VarSet0_12);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_23, &VarTypes0_13);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_23, &RttiVarMaps0_14);
    ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
    ClassNameString_17 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, VarSet0_12, &VarSet1_18);
    switch (VarKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "BaseTypeClassInfo_for_", ClassNameString_17);
        break;
      case (MR_Integer) 1:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_17);
        break;
    }
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9, Name_19, VarSet1_18, &VarSet_20);
    *VarType_10 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_9, *VarType_10, VarTypes0_13, &VarTypes_21);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_14, &RttiVarMaps_22);
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_20, VarTypes_21, RttiVarMaps_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_28;

    check_hlds__polymorphism_type_class_info__IntroducedFrom__pred__record_tci_slots_for_unseen_or_in_type_info_tvars__928__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism_type_class_info__is_unseen_or_in_type_info_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
      MR_Word ClassType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ClassTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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

      parse_tree__prog_type__type_vars_2_p_0(ClassType_12, &TypeVars_16);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_0_4));
      }
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__polymorphism_type_class_info_scalar_common_1[1]), Var_25, TypeVars_16, &UnSeenOrInTypeInfoTypeVars_17);
      {
        Location_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Location_18, 0) = ((MR_Box) (ExtraHeadVar_1));
        MR_hl_field(MR_mktag(1), Location_18, 1) = ((MR_Box) (CurIndex_3));
      }
      {
        InsertIntoRttiVarMap_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InsertIntoRttiVarMap_19, 0) = ((MR_Box) (&check_hlds__polymorphism_type_class_info_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), InsertIntoRttiVarMap_19, 1) = ((MR_Box) (check_hlds__polymorphism_type_class_info__record_tci_slots_for_unseen_or_in_type_info_tvars_5_p_0_2));
        MR_hl_field(MR_mktag(0), InsertIntoRttiVarMap_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), InsertIntoRttiVarMap_19, 3) = ((MR_Box) (Location_18));
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
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism_type_class_info____Unify____record_type_info_locns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism_type_class_info____Compare____record_type_info_locns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism_type_class_info____Unify____tci_var_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism_type_class_info____Compare____tci_var_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
