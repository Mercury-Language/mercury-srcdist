/*
** Automatically generated from `hlds_rtti.m'
** by the Mercury compiler,
** version rotd-2020-08-20
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


// :- module hlds.hlds_rtti.
// :- implementation.

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


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
#include "hlds.mih"
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
#include "random.mih"
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(
  MR_Word TVarMap_3,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28);

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21);

static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
  MR_Word ProcVarSet_17,
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
  MR_Word Pred_5,
  MR_Word HeadVar__2_6,
  MR_Word Constraint0_7,
  MR_Word * Constraint_8);

static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Word Constraint0_7,
  MR_Word * Constraint_8);

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
  MR_Word Pred_6,
  MR_Word Constraint0_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_Map_0_14,
  MR_Word * STATE_VARIABLE_Map_15);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Var0_11,
  MR_Word Constraint0_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Var0_11,
  MR_Word Type0_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word TVar_11,
  MR_Word Locn_12,
  MR_Word STATE_VARIABLE_Map_0_37,
  MR_Word * STATE_VARIABLE_Map_38);

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Constraint0_11,
  MR_Word Var0_12,
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18);

static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_TypeSet_0_8,
  MR_Word * STATE_VARIABLE_TypeSet_9);

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word TVarMap_3,
  MR_Word STATE_VARIABLE_TypeInfoVars_0_4,
  MR_Word * STATE_VARIABLE_TypeInfoVars_5);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarConstraints_0_3,
  MR_Word * STATE_VARIABLE_RevVarConstraints_4,
  MR_Word STATE_VARIABLE_TCIMap_0_5,
  MR_Word * STATE_VARIABLE_TCIMap_6);

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarTypes_0_3,
  MR_Word * STATE_VARIABLE_RevVarTypes_4);

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevTVarLocns_0_3,
  MR_Word * STATE_VARIABLE_RevTVarLocns_4);

static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7];




static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2] = {
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
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0 = {
  (MR_String) "instance_method_constraints",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "instance_method_constraints",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____prog_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____prog_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "prog_var_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16] = {
  (MR_String) "rpl_pred_or_func",
  (MR_String) "rpl_this_module",
  (MR_String) "rpl_proc_module",
  (MR_String) "rpl_proc_name",
  (MR_String) "rpl_proc_arity",
  (MR_String) "rpl_proc_arg_types",
  (MR_String) "rpl_pred_id",
  (MR_String) "rpl_proc_id",
  (MR_String) "rpl_proc_headvars",
  (MR_String) "rpl_proc_top_modes",
  (MR_String) "rpl_proc_interface_detism",
  (MR_String) "rpl_pred_is_imported",
  (MR_String) "rpl_pred_is_pseudo_imported",
  (MR_String) "rpl_pred_info_origin",
  (MR_String) "rpl_proc_is_exported",
  (MR_String) "rpl_proc_is_imported"
};

static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0 = {
  (MR_String) "rtti_proc_label",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_proc_label",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0 = {
  (MR_String) "type_info_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1 = {
  (MR_String) "typeclass_info_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2 = {
  (MR_String) "non_rtti_var",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_var_info",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0 = {
  (MR_String) "rtti_varmaps",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_varmaps",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0 = {
  (MR_String) "type_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1 = {
  (MR_String) "typeclass_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_locn_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_locn",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(
  MR_Word TVarMap_3,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28)
{
  {
    MR_Word Locn_23;
    MR_Box conv0_Locn_23;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), TVarMap_3, ((MR_Box) (LambdaHeadVar__1_27)), &conv0_Locn_23);
    Locn_23 = ((MR_Word) (conv0_Locn_23));
    if (((MR_tag((MR_Word) Locn_23)) == (MR_Integer) 0))
      *LambdaHeadVar__2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_23, (MR_Integer) 0))));
    else
      *LambdaHeadVar__2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_23, (MR_Integer) 0))));
  }
}

static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21)
{
  mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (HeadVar__1_19)), HeadVar__2_20, HeadVar__3_21);
}

static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(
  MR_Word ProcVarSet_17,
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;
    MR_String Name_28;

    Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProcVarSet_17, LambdaHeadVar__1_31);
    {
      LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 0) = ((MR_Box) (LambdaHeadVar__1_31));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 1) = ((MR_Box) (Name_28));
    }
    return LambdaHeadVar__2_32;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), &SubResult1_14, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
        {
          succeeded = (Var_23 < ArgY2_16);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_23 > ArgY2_16);
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

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_11_11 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_rtti_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_rtti_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_rtti_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_20, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____prog_constraint_0_0(HeadVar__1_1, Var_21, ArgY1_12);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_8 == CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word ArgY16_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_69 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_70 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_69 < Var_70);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_69 > Var_70);
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

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    succeeded = (ArgX8_25 < ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX8_25 > ArgY8_26);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[5]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[6]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;
                          MR_Integer Var_71 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_72 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_71 < Var_72);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_71 > Var_72);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult11_36 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_73 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_74 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_73 < Var_74);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_73 > Var_74);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_75 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_76 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_75 < Var_76);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_75 > Var_76);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                hlds__hlds_pred____Compare____pred_origin_0_0(&SubResult14_45, ArgX14_43, ArgY14_44);
                                succeeded = (SubResult14_45 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;
                                  MR_Integer Var_77 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_78 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_77 < Var_78);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_77 > Var_78);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Integer Var_79 = (MR_Integer) (ArgX16_49);
                                    MR_Integer Var_80 = (MR_Integer) (ArgY16_50);

                                    succeeded = (Var_79 < Var_80);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_79 > Var_80);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                TypeInfo_39_39 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_42_42 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_43_43 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[6]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ArgX14_29, ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
}

void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            parse_tree__prog_data____Compare____prog_constraints_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
  MR_Word Pred_5,
  MR_Word HeadVar__2_6,
  MR_Word Constraint0_7,
  MR_Word * Constraint_8)
{
  hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(Pred_5, Constraint0_7, Constraint_8);
}

static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Word Constraint0_7,
  MR_Word * Constraint_8)
{
  {
    MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_7, (MR_Integer) 0))));
    MR_Word Args0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_7, (MR_Integer) 1))));
    MR_Word Args_11;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Pred_5, Args0_10, &Args_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Constraint_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Args_11));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
  MR_Word Pred_6,
  MR_Word Constraint0_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_Map_0_14,
  MR_Word * STATE_VARIABLE_Map_15)
{
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_7, (MR_Integer) 0))));
    MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_7, (MR_Integer) 1))));
    MR_Word Args_12;
    MR_Word Constraint_13;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Pred_6, Args0_11, &Args_12);
    {
      Constraint_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_13, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), Constraint_13, 1) = ((MR_Box) (Args_12));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), ((MR_Box) (Constraint_13)), ((MR_Box) (Var_8)), STATE_VARIABLE_Map_0_14, STATE_VARIABLE_Map_15);
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Var0_11,
  MR_Word Constraint0_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19)
{
  {
    MR_bool succeeded;
    MR_Word Constraint1_14;
    MR_Word Constraint_15;
    MR_Word Var_16;
    MR_Word Var1_31;
    MR_Box conv0_Var1_31;
    MR_Word ExistingConstraint_17;
    MR_Box conv1_ExistingConstraint_17;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(TRenaming_8, Constraint0_12, &Constraint1_14);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(TSubst_9, Constraint1_14, &Constraint_15);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_10, ((MR_Box) (Var0_11)), &conv0_Var1_31);
    if (succeeded)
    {
      Var1_31 = ((MR_Word) (conv0_Var1_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_16 = Var1_31;
    else
      Var_16 = Var0_11;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), STATE_VARIABLE_Map_0_18, ((MR_Box) (Var_16)), &conv1_ExistingConstraint_17);
    if (succeeded)
    {
      ExistingConstraint_17 = ((MR_Word) (conv1_ExistingConstraint_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(Constraint_15, ExistingConstraint_17);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
          return;
        }
      *STATE_VARIABLE_Map_19 = STATE_VARIABLE_Map_0_18;
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (Var_16)), ((MR_Box) (Constraint_15)), STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19);
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Var0_11,
  MR_Word Type0_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19)
{
  {
    MR_bool succeeded;
    MR_Word Type1_14;
    MR_Word Type_15;
    MR_Word Var_16;
    MR_Word Var1_46;
    MR_Box conv0_Var1_46;
    MR_Word ExistingType_17;
    MR_Box conv1_ExistingType_17;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TRenaming_8, Type0_12, &Type1_14);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_9, Type1_14, &Type_15);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_10, ((MR_Box) (Var0_11)), &conv0_Var1_46);
    if (succeeded)
    {
      Var1_46 = ((MR_Word) (conv0_Var1_46));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_16 = Var1_46;
    else
      Var_16 = Var0_11;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Map_0_18, ((MR_Box) (Var_16)), &conv1_ExistingType_17);
    if (succeeded)
    {
      ExistingType_17 = ((MR_Word) (conv1_ExistingType_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_15, ExistingType_17);
      if (!(succeeded))
      {
        MR_String Var_21;
        MR_String Var_27;
        MR_String Var_30;
        MR_String Var_39;
        MR_String Var_40;

        Var_27 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_15)));
        Var_30 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ExistingType_17)));
        Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", Var_30);
        Var_40 = mercury__string__f_43_43_2_f_0(Var_27, Var_39);
        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", Var_40);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", Var_21);
          return;
        }
      }
      *STATE_VARIABLE_Map_19 = STATE_VARIABLE_Map_0_18;
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_16)), ((MR_Box) (Type_15)), STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19);
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word TVar_11,
  MR_Word Locn_12,
  MR_Word STATE_VARIABLE_Map_0_37,
  MR_Word * STATE_VARIABLE_Map_38)
{
  {
    MR_bool succeeded;
    MR_Word NewLocn_16;
    MR_Word NewTVar1_17;
    MR_Word NewType_18;
    MR_Word Var_39;

    if (((MR_tag((MR_Word) Locn_12)) == (MR_Integer) 0))
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_12, (MR_Integer) 0))));
      MR_Word NewVar_15;
      MR_Word Var1_50;
      MR_Box conv0_Var1_50;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_10, ((MR_Box) (Var_14)), &conv0_Var1_50);
      if (succeeded)
      {
        Var1_50 = ((MR_Word) (conv0_Var1_50));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        NewVar_15 = Var1_50;
      else
        NewVar_15 = Var_14;
      {
        NewLocn_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewLocn_16, 0) = ((MR_Box) (NewVar_15));
      }
    }
    else
    {
      MR_Integer Num_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_12, (MR_Integer) 1))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_12, (MR_Integer) 0))));
      MR_Word NewVar_61;
      MR_Word Var1_58;
      MR_Box conv1_Var1_58;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_10, ((MR_Box) (Var_60)), &conv1_Var1_58);
      if (succeeded)
      {
        Var1_58 = ((MR_Word) (conv1_Var1_58));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        NewVar_61 = Var1_58;
      else
        NewVar_61 = Var_60;
      {
        NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NewLocn_16, 0) = ((MR_Box) (NewVar_61));
        MR_hl_field(MR_mktag(1), NewLocn_16, 1) = ((MR_Box) (Num_56));
      }
    }
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(TRenaming_8, TVar_11, &NewTVar1_17);
    Var_39 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(Var_39, TSubst_9, NewTVar1_17, &NewType_18);
    switch (MR_tag((MR_Word) NewType_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NewTVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewType_18, (MR_Integer) 0))));

          mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), ((MR_Box) (NewTVar_19)), ((MR_Box) (NewLocn_16)), STATE_VARIABLE_Map_0_37, STATE_VARIABLE_Map_38);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NewType_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Map_38 = STATE_VARIABLE_Map_0_37;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
  MR_Word TRenaming_8,
  MR_Word TSubst_9,
  MR_Word Subst_10,
  MR_Word Constraint0_11,
  MR_Word Var0_12,
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18)
{
  {
    MR_bool succeeded;
    MR_Word Constraint1_14;
    MR_Word Constraint_15;
    MR_Word Var_16;
    MR_Word Var1_25;
    MR_Box conv0_Var1_25;

    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(TRenaming_8, Constraint0_11, &Constraint1_14);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(TSubst_9, Constraint1_14, &Constraint_15);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_10, ((MR_Box) (Var0_12)), &conv0_Var1_25);
    if (succeeded)
    {
      Var1_25 = ((MR_Word) (conv0_Var1_25));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_16 = Var1_25;
    else
      Var_16 = Var0_12;
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), ((MR_Box) (Constraint_15)), ((MR_Box) (Var_16)), STATE_VARIABLE_Map_0_17, STATE_VARIABLE_Map_18);
  }
}

static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_TypeSet_0_8,
  MR_Word * STATE_VARIABLE_TypeSet_9)
{
  {
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));

    mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_7, STATE_VARIABLE_TypeSet_0_8, STATE_VARIABLE_TypeSet_9);
  }
}

void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
  MR_Word Vars0_6,
  MR_Word TypeInfoLiveness_7,
  MR_Word VarTypes_8,
  MR_Word RttiVarMaps_9,
  MR_Word * Vars_10)
{
  switch (TypeInfoLiveness_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Vars_10 = Vars0_6;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfoVars_11;
        MR_Word TVarMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_9, (MR_Integer) 1))));
        MR_Word VarList_18;
        MR_Word Var_19;

        VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_6);
        Var_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(VarList_18, VarTypes_8, TVarMap_17, Var_19, &TypeInfoVars_11);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_6, TypeInfoVars_11, Vars_10);
      }
      break;
  }
}

void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
  MR_Word Vars_5,
  MR_Word VarTypes_6,
  MR_Word RttiVarMaps_7,
  MR_Word * TypeInfoVars_8)
{
  {
    MR_Word TVarMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_7, (MR_Integer) 1))));
    MR_Word VarList_10;
    MR_Word Var_11;

    VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_5);
    Var_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(VarList_10, VarTypes_6, TVarMap_9, Var_11, TypeInfoVars_8);
  }
}

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_acc__900__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_28);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
  }
}

static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypes_2,
  MR_Word TVarMap_3,
  MR_Word STATE_VARIABLE_TypeInfoVars_0_4,
  MR_Word * STATE_VARIABLE_TypeInfoVars_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeInfoVars_5 = STATE_VARIABLE_TypeInfoVars_0_4;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_16;
      MR_Word TypeVars_17;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_11, &Type_16);
      parse_tree__prog_type__type_vars_2_p_0(Type_16, &TypeVars_17);
      if ((TypeVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word LookupVar_20;
        MR_Word TypeInfoVarsHead_24;
        MR_Word STATE_VARIABLE_TypeInfoVars_29_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_TypeInfoVars_0_4;

        {
          LookupVar_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LookupVar_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), LookupVar_20, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_acc_5_p_0_1));
          MR_hl_field(MR_mktag(0), LookupVar_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), LookupVar_20, 3) = ((MR_Box) (TVarMap_3));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), LookupVar_20, TypeVars_17, &TypeInfoVarsHead_24);
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVarsHead_24, STATE_VARIABLE_TypeInfoVars_0_4, &STATE_VARIABLE_TypeInfoVars_29_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vars_12;
        next_value_of_STATE_VARIABLE_TypeInfoVars_0_4 = STATE_VARIABLE_TypeInfoVars_29_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_TypeInfoVars_0_4 = next_value_of_STATE_VARIABLE_TypeInfoVars_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
  MR_Word VarMapsA_4,
  MR_Word VarMapsB_5,
  MR_Word * VarMaps_6)
{
  {
    MR_Word TCImapA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsA_4, (MR_Integer) 0))));
    MR_Word TImapA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsA_4, (MR_Integer) 1))));
    MR_Word TypeMapA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsA_4, (MR_Integer) 2))));
    MR_Word ConstraintMapA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsA_4, (MR_Integer) 3))));
    MR_Word TCImapB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsB_5, (MR_Integer) 0))));
    MR_Word TImapB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsB_5, (MR_Integer) 1))));
    MR_Word TypeMapB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsB_5, (MR_Integer) 2))));
    MR_Word ConstraintMapB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMapsB_5, (MR_Integer) 3))));
    MR_Word TCImap_15;
    MR_Word TImap_16;
    MR_Word TypeMap_17;
    MR_Word ConstraintMap_18;

    mercury__map__overlay_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), TCImapA_7, TCImapB_11, &TCImap_15);
    mercury__map__overlay_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), TImapA_8, TImapB_12, &TImap_16);
    mercury__map__old_merge_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeMapA_9, TypeMapB_13, &TypeMap_17);
    mercury__map__old_merge_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMapA_10, ConstraintMapB_14, &ConstraintMap_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *VarMaps_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TCImap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TImap_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeMap_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConstraintMap_18));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Constraint_8;

    hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Constraint_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_Constraint_8));
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_15;

    hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Map_15);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Map_15));
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
  MR_Word Pred_4,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_12,
  MR_Word * STATE_VARIABLE_RttiVarMaps_13)
{
  {
    MR_Word TciMap0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0))));
    MR_Word TypeMap0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2))));
    MR_Word ConstraintMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3))));
    MR_Word TciMap_9;
    MR_Word TypeMap_10;
    MR_Word ConstraintMap_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Box conv1_TciMap_9;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Pred_4));
    }
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), Var_14, TciMap0_6, ((MR_Box) (Var_15)), &conv1_TciMap_9);
    TciMap_9 = ((MR_Word) (conv1_TciMap_9));
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Pred_4, TypeMap0_7, &TypeMap_10);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Pred_4));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_16, ConstraintMap0_8, &ConstraintMap_11);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1))));
    Var_33 = TciMap_9;
    Var_34 = Var_30;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeMap_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConstraintMap_11));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Map_19;

    hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Map_19);
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Map_19));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Map_19;

    hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Map_19);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Map_19));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Map_38;

    hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Map_38);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Map_38));
  }
}

static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_18;

    hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Map_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Map_18));
  }
}

void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
  MR_Word TRenaming_6,
  MR_Word TSubst_7,
  MR_Word Subst_8,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_18,
  MR_Word * STATE_VARIABLE_RttiVarMaps_19)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_30_30;
    MR_Word TypeCtorInfo_31_31;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Subst_8);
    if (succeeded)
    {
      TypeInfo_30_30 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]);
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_30_30, TypeCtorInfo_31_31, TSubst_7);
      if (succeeded)
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_30_30, TypeInfo_30_30, TRenaming_6);
    }
    if (succeeded)
      *STATE_VARIABLE_RttiVarMaps_19 = STATE_VARIABLE_RttiVarMaps_0_18;
    else
    {
      MR_Word TCIMap0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0))));
      MR_Word TIMap0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1))));
      MR_Word TypeMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2))));
      MR_Word ConstraintMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3))));
      MR_Word TCIMap_14;
      MR_Word TIMap_15;
      MR_Word TypeMap_16;
      MR_Word ConstraintMap_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Box conv1_TCIMap_14;
      MR_Box conv3_TIMap_15;
      MR_Box conv5_TypeMap_16;
      MR_Box conv7_ConstraintMap_17;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TRenaming_6));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (TSubst_7));
        MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (Subst_8));
      }
      Var_21 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]));
      mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[1]), Var_20, TCIMap0_10, ((MR_Box) (Var_21)), &conv1_TCIMap_14);
      TCIMap_14 = ((MR_Word) (conv1_TCIMap_14));
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TRenaming_6));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (TSubst_7));
        MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Subst_8));
      }
      Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0));
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[2]), Var_22, TIMap0_11, ((MR_Box) (Var_23)), &conv3_TIMap_15);
      TIMap_15 = ((MR_Word) (conv3_TIMap_15));
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TRenaming_6));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TSubst_7));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Subst_8));
      }
      Var_25 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[3]), Var_24, TypeMap0_12, ((MR_Box) (Var_25)), &conv5_TypeMap_16);
      TypeMap_16 = ((MR_Word) (conv5_TypeMap_16));
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (TRenaming_6));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (TSubst_7));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (Subst_8));
      }
      Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[4]), Var_26, ConstraintMap0_13, ((MR_Box) (Var_27)), &conv7_ConstraintMap_17);
      ConstraintMap_17 = ((MR_Word) (conv7_ConstraintMap_17));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_RttiVarMaps_19 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TCIMap_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TIMap_15));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeMap_16));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConstraintMap_17));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word * Vars_4)
{
  {
    MR_Word TIVars_5;
    MR_Word TCIVars_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 2))));
    MR_Word Var_8;

    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, &TIVars_5);
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 3))));
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_8, &TCIVars_6);
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), TIVars_5, TCIVars_6, Vars_4);
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word * Constraints_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 0))));

    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Var_5, Constraints_4);
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TypeSet_9;

    hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeSet_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeSet_9));
  }
}

static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_21;

    hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__682__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_21));
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word * Types_4)
{
  {
    MR_Word TypeMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 2))));
    MR_Word ConstraintMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 3))));
    MR_Word TypeSet0_7;
    MR_Word TypeSet1_8;
    MR_Word TypeSet_9;
    MR_Box conv1_TypeSet1_8;
    MR_Box conv3_TypeSet_9;

    TypeSet0_7 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[5]), TypeMap_5, ((MR_Box) (TypeSet0_7)), &conv1_TypeSet1_8);
    TypeSet1_8 = ((MR_Word) (conv1_TypeSet1_8));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[6]), ConstraintMap_6, ((MR_Box) (TypeSet1_8)), &conv3_TypeSet_9);
    TypeSet_9 = ((MR_Word) (conv3_TypeSet_9));
    *Types_4 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSet_9);
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word * TVars_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_3, (MR_Integer) 1))));

    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_5, TVars_4);
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
  MR_Word Var_5,
  MR_Word NewVar_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_11,
  MR_Word * STATE_VARIABLE_RttiVarMaps_12)
{
  {
    MR_Word VarInfo_8;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(STATE_VARIABLE_RttiVarMaps_0_11, Var_5, &VarInfo_8);
    switch (MR_tag((MR_Word) VarInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_RttiVarMaps_12 = STATE_VARIABLE_RttiVarMaps_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_8, (MR_Integer) 0))));
          MR_Word Map0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2))));
          MR_Word Map_21;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_29;

          mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewVar_6)), ((MR_Box) (Type_9)), Map0_20, &Map_21);
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1))));
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_21));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Constraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfo_8, (MR_Integer) 0))));
          MR_Word Map0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3))));
          MR_Word Map_38;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (NewVar_6)), ((MR_Box) (Constraint_10)), Map0_37, &Map_38);
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1))));
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_38));
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
  MR_Word Var_5,
  MR_Word NewVar_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_11,
  MR_Word * STATE_VARIABLE_RttiVarMaps_12)
{
  {
    MR_Word VarInfo_8;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(STATE_VARIABLE_RttiVarMaps_0_11, Var_5, &VarInfo_8);
    switch (MR_tag((MR_Word) VarInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_RttiVarMaps_12 = STATE_VARIABLE_RttiVarMaps_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_8, (MR_Integer) 0))));
          MR_Word Map0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2))));
          MR_Word Map_21;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_29;

          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewVar_6)), ((MR_Box) (Type_9)), Map0_20, &Map_21);
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1))));
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_21));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Constraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfo_8, (MR_Integer) 0))));
          MR_Word Map0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3))));
          MR_Word Map_38;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (NewVar_6)), ((MR_Box) (Constraint_10)), Map0_37, &Map_38);
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1))));
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_RttiVarMaps_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_38));
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
  MR_Word ProgVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    MR_Word Map_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ProgVar_5)), ((MR_Box) (Type_6)), Map0_8, &Map_9);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
  MR_Word ProgVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    MR_Word Map_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ProgVar_5)), ((MR_Box) (Type_6)), Map0_8, &Map_9);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
  MR_Word ProgVar_4,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_9,
  MR_Word * STATE_VARIABLE_RttiVarMaps_10)
{
  {
    MR_Word Constraint_6;
    MR_Word Map0_7;
    MR_Word Map_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3))));
    MR_Box conv0_Constraint_6;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_11, ((MR_Box) (ProgVar_4)), &conv0_Constraint_6);
    Constraint_6 = ((MR_Word) (conv0_Constraint_6));
    Map0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0))));
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), ((MR_Box) (Constraint_6)), ((MR_Box) (ProgVar_4)), Map0_7, &Map_8);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
  MR_Word Constraint_5,
  MR_Word ProgVar_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    MR_Word Map_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (ProgVar_6)), ((MR_Box) (Constraint_5)), Map0_8, &Map_9);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_9));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
  MR_Word Constraint_5,
  MR_Word ProgVar_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    MR_Word Map_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (ProgVar_6)), ((MR_Box) (Constraint_5)), Map0_8, &Map_9);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_9));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
  MR_Word TVar_5,
  MR_Word Locn_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    MR_Word Map_9;
    MR_Word STATE_VARIABLE_RttiVarMaps_12_12;
    MR_Word Var_19;
    MR_Word Var_17;
    MR_Word Var_20;

    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), ((MR_Box) (TVar_5)), ((MR_Box) (Locn_6)), Map0_8, &Map_9);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    {
      STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (Var_20));
    }
    if (((MR_tag((MR_Word) Locn_6)) == (MR_Integer) 0))
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_6, (MR_Integer) 0))));
      MR_Word Type_26;
      MR_Box conv0_Type_26;
      MR_Word TypeInfo_27_45;
      MR_Word Var_44;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_19, ((MR_Box) (Var_23)), &conv0_Type_26);
      Type_26 = ((MR_Word) (conv0_Type_26));
      succeeded = ((MR_tag((MR_Word) Type_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_26, (MR_Integer) 0))));
        TypeInfo_27_45 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_45, ((MR_Box) (TVar_5)), ((MR_Box) (Var_44)));
      }
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
          return;
        }
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_12_12;
    }
    else
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_12_12;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
  MR_Word TVar_5,
  MR_Word Locn_6,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1))));
    MR_Word Map_9;
    MR_Word STATE_VARIABLE_RttiVarMaps_12_12;
    MR_Word Var_19;
    MR_Word Var_17;
    MR_Word Var_20;

    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), ((MR_Box) (TVar_5)), ((MR_Box) (Locn_6)), Map0_8, &Map_9);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3))));
    {
      STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (Var_20));
    }
    if (((MR_tag((MR_Word) Locn_6)) == (MR_Integer) 0))
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_6, (MR_Integer) 0))));
      MR_Word Type_26;
      MR_Box conv0_Type_26;
      MR_Word TypeInfo_27_45;
      MR_Word Var_44;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_19, ((MR_Box) (Var_23)), &conv0_Type_26);
      Type_26 = ((MR_Word) (conv0_Type_26));
      succeeded = ((MR_tag((MR_Word) Type_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_26, (MR_Integer) 0))));
        TypeInfo_27_45 = (MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_45, ((MR_Box) (TVar_5)), ((MR_Box) (Var_44)));
      }
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
          return;
        }
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_12_12;
    }
    else
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_12_12;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word Var_5,
  MR_Word * VarInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Type_7;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 2))));
    MR_Box conv0_Type_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, ((MR_Box) (Var_5)), &conv0_Type_7);
    if (succeeded)
    {
      Type_7 = ((MR_Word) (conv0_Type_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *VarInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_7));
      }
    else
    {
      MR_Word Constraint_8;
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 3))));
      MR_Box conv1_Constraint_8;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_10, ((MR_Box) (Var_5)), &conv1_Constraint_8);
      if (succeeded)
      {
        Constraint_8 = ((MR_Word) (conv1_Constraint_8));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *VarInfo_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Constraint_8));
        }
      else
        *VarInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word Constraint_5,
  MR_Word * ProgVar_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 0))));
    MR_Box conv0_ProgVar_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Var_7, ((MR_Box) (Constraint_5)), &conv0_ProgVar_6);
    if (succeeded)
    {
      *ProgVar_6 = ((MR_Word) (conv0_ProgVar_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word Constraint_5,
  MR_Word * ProgVar_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 0))));
    MR_Box conv0_ProgVar_6;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), Var_7, ((MR_Box) (Constraint_5)), &conv0_ProgVar_6);
    *ProgVar_6 = ((MR_Word) (conv0_ProgVar_6));
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * Locn_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 1))));
    MR_Box conv0_Locn_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_7, ((MR_Box) (TVar_5)), &conv0_Locn_6);
    if (succeeded)
    {
      *Locn_6 = ((MR_Word) (conv0_Locn_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * Locn_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_4, (MR_Integer) 1))));
    MR_Box conv0_Locn_6;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_7, ((MR_Box) (TVar_5)), &conv0_Locn_6);
    *Locn_6 = ((MR_Word) (conv0_Locn_6));
  }
}

MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
  MR_Word RttiVarMaps_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiVarMaps_2, (MR_Integer) 1))));

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_3);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
  MR_ArrayPtr VarUses_4,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_20,
  MR_Word * STATE_VARIABLE_RttiVarMaps_21)
{
  {
    MR_Word TCIMap0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0))));
    MR_Word TIMap0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1))));
    MR_Word TypeMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2))));
    MR_Word ConstraintMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3))));
    MR_Word TIList0_10;
    MR_Word RevTIList_11;
    MR_Word TIMap_12;
    MR_Word TypeList0_13;
    MR_Word RevTypeList_14;
    MR_Word TypeMap_15;
    MR_Word ConstraintList0_16;
    MR_Word RevConstraintList_17;
    MR_Word TCIMap_18;
    MR_Word ConstraintMap_19;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), TIMap0_7, &TIList0_10);
    hlds__hlds_rtti__filter_type_info_varmap_4_p_0(TIList0_10, VarUses_4, (MR_Word) ((MR_Unsigned) 0U), &RevTIList_11);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), RevTIList_11, &TIMap_12);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeMap0_8, &TypeList0_13);
    hlds__hlds_rtti__filter_type_info_map_4_p_0(TypeList0_13, VarUses_4, (MR_Word) ((MR_Unsigned) 0U), &RevTypeList_14);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevTypeList_14, &TypeMap_15);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap0_9, &ConstraintList0_16);
    hlds__hlds_rtti__filter_constraint_map_6_p_0(ConstraintList0_16, VarUses_4, (MR_Word) ((MR_Unsigned) 0U), &RevConstraintList_17, TCIMap0_6, &TCIMap_18);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), RevConstraintList_17, &ConstraintMap_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_RttiVarMaps_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TCIMap_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TIMap_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeMap_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConstraintMap_19));
    }
  }
}

static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarConstraints_0_3,
  MR_Word * STATE_VARIABLE_RevVarConstraints_4,
  MR_Word STATE_VARIABLE_TCIMap_0_5,
  MR_Word * STATE_VARIABLE_TCIMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TCIMap_6 = STATE_VARIABLE_TCIMap_0_5;
      *STATE_VARIABLE_RevVarConstraints_4 = STATE_VARIABLE_RevVarConstraints_0_3;
    }
    else
    {
      MR_Word VarConstraint_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarConstraint_14, (MR_Integer) 0))));
      MR_Word Constraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarConstraint_14, (MR_Integer) 1))));
      MR_Integer VarNum_21;
      MR_Word Used_22;
      MR_Word STATE_VARIABLE_TCIMap_27_27;
      MR_Word STATE_VARIABLE_RevVarConstraints_28_28;
      MR_Box conv0_Used_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarConstraints_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TCIMap_0_5;

      VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__2_2), VarNum_21, &conv0_Used_22);
      Used_22 = ((MR_Word) (conv0_Used_22));
      switch (Used_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__map__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), ((MR_Box) (Constraint_20)), STATE_VARIABLE_TCIMap_0_5, &STATE_VARIABLE_TCIMap_27_27);
            STATE_VARIABLE_RevVarConstraints_28_28 = STATE_VARIABLE_RevVarConstraints_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (VarConstraint_14));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevVarConstraints_0_3));
            }
            STATE_VARIABLE_TCIMap_27_27 = STATE_VARIABLE_TCIMap_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarConstraints_15;
      next_value_of_STATE_VARIABLE_RevVarConstraints_0_3 = STATE_VARIABLE_RevVarConstraints_28_28;
      next_value_of_STATE_VARIABLE_TCIMap_0_5 = STATE_VARIABLE_TCIMap_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarConstraints_0_3 = next_value_of_STATE_VARIABLE_RevVarConstraints_0_3;
      STATE_VARIABLE_TCIMap_0_5 = next_value_of_STATE_VARIABLE_TCIMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarTypes_0_3,
  MR_Word * STATE_VARIABLE_RevVarTypes_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarTypes_4 = STATE_VARIABLE_RevVarTypes_0_3;
    else
    {
      MR_Word VarType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarType_9, (MR_Integer) 0))));
      MR_Integer VarNum_15;
      MR_Word Used_16;
      MR_Word STATE_VARIABLE_RevVarTypes_19_19;
      MR_Box conv0_Used_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTypes_0_3;

      VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__2_2), VarNum_15, &conv0_Used_16);
      Used_16 = ((MR_Word) (conv0_Used_16));
      switch (Used_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_RevVarTypes_19_19 = STATE_VARIABLE_RevVarTypes_0_3;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (VarType_9));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTypes_0_3));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarTypes_10;
      next_value_of_STATE_VARIABLE_RevVarTypes_0_3 = STATE_VARIABLE_RevVarTypes_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarTypes_0_3 = next_value_of_STATE_VARIABLE_RevVarTypes_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevTVarLocns_0_3,
  MR_Word * STATE_VARIABLE_RevTVarLocns_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevTVarLocns_4 = STATE_VARIABLE_RevTVarLocns_0_3;
    else
    {
      MR_Word TVarLocn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TVarLocns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Locn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TVarLocn_9, (MR_Integer) 1))));
      MR_Word Var_15;
      MR_Integer VarNum_17;
      MR_Word Used_18;
      MR_Word STATE_VARIABLE_RevTVarLocns_21_21;
      MR_Box conv0_Used_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTVarLocns_0_3;

      if (((MR_tag((MR_Word) Locn_14)) == (MR_Integer) 0))
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_14, (MR_Integer) 0))));
      else
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_14, (MR_Integer) 0))));
      VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_15);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__2_2), VarNum_17, &conv0_Used_18);
      Used_18 = ((MR_Word) (conv0_Used_18));
      switch (Used_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_RevTVarLocns_21_21 = STATE_VARIABLE_RevTVarLocns_0_3;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (TVarLocn_9));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (STATE_VARIABLE_RevTVarLocns_0_3));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TVarLocns_10;
      next_value_of_STATE_VARIABLE_RevTVarLocns_0_3 = STATE_VARIABLE_RevTVarLocns_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTVarLocns_0_3 = next_value_of_STATE_VARIABLE_RevTVarLocns_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word TCIMap_2;
    MR_Word TIMap_3;
    MR_Word TypeMap_4;
    MR_Word ConstraintMap_5;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), &TCIMap_2);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), &TIMap_3);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeMap_4);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TCIMap_2));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TIMap_3));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeMap_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConstraintMap_5));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1));
    }
  else
  {
    MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_1));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Num_8));
    }
  }
}

void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Var_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    *Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  else
    *Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
  MR_Word RttiProcLabel_4,
  MR_Word * PredId_5,
  MR_Integer * ProcId_6)
{
  {
    *PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 6))));
    *ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 7))));
  }
}

static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_32;

    conv0_LambdaHeadVar__2_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__374__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_bool succeeded;
    MR_Word ProcLabel_8;
    MR_Word ThisModule_9;
    MR_Word PredInfo_10;
    MR_Word ProcInfo_11;
    MR_Word PredOrFunc_12;
    MR_Word PredModule_13;
    MR_String PredName_14;
    MR_Integer Arity_15;
    MR_Word ArgTypes_16;
    MR_Word ProcVarSet_17;
    MR_Word ProcHeadVars_18;
    MR_Word ProcModes_19;
    MR_Word ProcDetism_20;
    MR_Word ProcTopModes_21;
    MR_Word PredIsImported_22;
    MR_Word PredIsPseudoImp_23;
    MR_Word ProcIsExported_24;
    MR_Word Origin_25;
    MR_Word ProcHeadVarsWithNames_26;
    MR_Word ProcIsImported_29;
    MR_Word Var_30;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ThisModule_9);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &PredInfo_10, &ProcInfo_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_10);
    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
    Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_10);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_10, &ArgTypes_16);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_11, &ProcVarSet_17);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_11, &ProcHeadVars_18);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_11, &ProcModes_19);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_11, &ProcDetism_20);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_5, ProcModes_19, ArgTypes_16, &ProcTopModes_21);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_10);
    if (succeeded)
      PredIsImported_22 = (MR_Integer) 1;
    else
      PredIsImported_22 = (MR_Integer) 0;
    succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_10);
    if (succeeded)
      PredIsPseudoImp_23 = (MR_Integer) 1;
    else
      PredIsPseudoImp_23 = (MR_Integer) 0;
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_5, PredInfo_10, ProcId_7);
    if (succeeded)
      ProcIsExported_24 = (MR_Integer) 1;
    else
      ProcIsExported_24 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_25);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ProcVarSet_17));
    }
    ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_rtti_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti_scalar_common_2[0]), Var_30, ProcHeadVars_18);
    succeeded = (PredIsImported_22 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_Integer Var_37;

      succeeded = (PredIsPseudoImp_23 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_37);
        succeeded = (ProcId_7 == Var_37);
      }
    }
    if (succeeded)
      ProcIsImported_29 = (MR_Integer) 1;
    else
      ProcIsImported_29 = (MR_Integer) 0;
    {
      ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_8, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 1) = ((MR_Box) (ThisModule_9));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 2) = ((MR_Box) (PredModule_13));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 3) = ((MR_Box) (PredName_14));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 4) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 5) = ((MR_Box) (ArgTypes_16));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 6) = ((MR_Box) (PredId_6));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 7) = ((MR_Box) (ProcId_7));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 8) = ((MR_Box) (ProcHeadVarsWithNames_26));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 9) = ((MR_Box) (ProcTopModes_21));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 10) = (MR_Box) (((((MR_Unsigned) (ProcDetism_20) << 2)) | (((((MR_Unsigned) (PredIsImported_22) << 1)) | (MR_Unsigned) (PredIsPseudoImp_23)))));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 11) = ((MR_Box) (Origin_25));
      MR_hl_field(MR_mktag(0), ProcLabel_8, 12) = (MR_Box) (((((MR_Unsigned) (ProcIsExported_24) << 1)) | (MR_Unsigned) (ProcIsImported_29)));
    }
    return ProcLabel_8;
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____prog_var_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____rtti_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____type_info_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____type_info_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____type_info_varmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_rtti__init(void)
{
}

void mercury__hlds__hlds_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0);
}

void mercury__hlds__hlds_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_rtti__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_rtti.
